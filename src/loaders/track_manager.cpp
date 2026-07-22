// =============================================================================
// track_manager.cpp — Unified Track Loading & Rendering Implementation
// =============================================================================
//
// Implements the TrackManager orchestration layer. Coordinates SzsReader,
// KmpLoader, and KclLoader to provide a single-entry-point for loading
// a complete Mario Kart Wii track from an SZS archive.
//
// The rendering methods are currently text-mode (printf) since Platform::Graphics
// is in stub mode. They print statistics and per-entry data that will later
// drive GL draw calls when the graphics pipeline is complete.
//
// MAESTRO Phase 7, Milestone M3: Track Loading & Rendering
// =============================================================================

#include "loaders/track_manager.hpp"

#include <algorithm>
#include <cctype>

namespace Loaders {

// =============================================================================
// Construction / Destruction
// =============================================================================

TrackManager::TrackManager()
    : m_trackName("<unknown>")
    , m_kmpLoaded(false)
    , m_kclLoaded(false)
{
}

TrackManager::~TrackManager() = default;

// =============================================================================
// Public Loading Interface
// =============================================================================

bool TrackManager::loadFromFile(const char* szsPath) {
    // Reset state from any previous load
    m_kmpLoaded = false;
    m_kclLoaded = false;
    m_trackName = deriveTrackName(szsPath ? szsPath : "");

    printf("TrackManager: Loading track from file: %s\n", szsPath ? szsPath : "(null)");

    // Step 1: Open and parse the SZS file (YAZ0 decompression + U8 archive)
    if (!m_szsReader.loadFromFile(szsPath)) {
        printf("TrackManager: ERROR — Failed to parse SZS file: %s\n",
               szsPath ? szsPath : "(null)");
        return false;
    }

    printf("TrackManager: SZS archive parsed — %u entries\n",
           static_cast<u32>(m_szsReader.getEntries().size()));

    // Step 2: Extract and parse course.kmp
    extractAndLoadKMP();

    // Step 3: Extract and parse course.kcl
    extractAndLoadKCL();

    // Return true if the SZS was parsed, even if sub-loaders partially failed
    return true;
}

bool TrackManager::loadFromMemory(const std::vector<u8>& szsData) {
    // Reset state from any previous load
    m_kmpLoaded = false;
    m_kclLoaded = false;
    m_trackName = "<memory>";

    printf("TrackManager: Loading track from memory (%u bytes)\n",
           static_cast<u32>(szsData.size()));

    // Step 1: Parse SZS data in memory
    if (!m_szsReader.loadFromMemory(szsData)) {
        printf("TrackManager: ERROR — Failed to parse in-memory SZS data\n");
        return false;
    }

    printf("TrackManager: SZS archive parsed — %u entries\n",
           static_cast<u32>(m_szsReader.getEntries().size()));

    // Step 2: Extract and parse course.kmp
    extractAndLoadKMP();

    // Step 3: Extract and parse course.kcl
    extractAndLoadKCL();

    return true;
}

// =============================================================================
// Debug Output
// =============================================================================

void TrackManager::printTrackInfo() const {
    printf("\n");
    printf("================================================================\n");
    printf("  Track: %s\n", m_trackName.c_str());
    printf("================================================================\n");

    // -- Archive summary --
    const auto& entries = m_szsReader.getEntries();
    printf("  SZS Archive: %u entries\n", static_cast<u32>(entries.size()));

    // List all entries for debugging
    for (u32 i = 0; i < static_cast<u32>(entries.size()); i++) {
        printf("    [%2u] %s (%u bytes)\n",
               i, entries[i].name.c_str(),
               static_cast<u32>(entries[i].data.size()));
    }

    // -- KMP summary --
    if (m_kmpLoaded) {
        const auto& kmp = m_kmpLoader.getData();

        printf("\n  --- KMP Course Data ---\n");

        // Header magic
        printf("  Header magic: %.4s\n", kmp.header.magic);

        printf("  Start Positions:  %u\n",
               static_cast<u32>(kmp.startPositions.size()));
        printf("  Checkpoint Groups: %u\n",
               static_cast<u32>(kmp.checkpoints.size()));
        printf("  Global Objects:   %u\n",
               static_cast<u32>(kmp.objects.size()));
        printf("  Areas:            %u\n",
               static_cast<u32>(kmp.areas.size()));
        printf("  Routes (POTI):    %u\n",
               static_cast<u32>(kmp.paths.size()));
        printf("  Camera Paths:     %u\n",
               static_cast<u32>(kmp.cameras.size()));
        printf("  Lakitu Routes:    %u\n",
               static_cast<u32>(kmp.lakituRoutes.size()));
        printf("  Item Routes:      %u\n",
               static_cast<u32>(kmp.itemRoutes.size()));
        printf("  Check Links:      %u\n",
               static_cast<u32>(kmp.checkLinks.size()));
        printf("  Course Physics:   %u\n",
               static_cast<u32>(kmp.coursePhysics.size()));
        printf("  Cannon Points:    %u\n",
               static_cast<u32>(kmp.cannonPoints.size()));
        printf("  Mission Points:   %u\n",
               static_cast<u32>(kmp.missionPoints.size()));

        // Per-start-position detail
        if (!kmp.startPositions.empty()) {
            printf("\n  Start Positions Detail:\n");
            for (u32 i = 0; i < static_cast<u32>(kmp.startPositions.size()); i++) {
                const auto& sp = kmp.startPositions[i];
                printf("    P%02u: pos=(%.1f, %.1f, %.1f) rot=(%.1f, %.1f, %.1f)\n",
                       sp.playerIndex,
                       static_cast<double>(sp.position.x),
                       static_cast<double>(sp.position.y),
                       static_cast<double>(sp.position.z),
                       static_cast<double>(sp.rotation.x),
                       static_cast<double>(sp.rotation.y),
                       static_cast<double>(sp.rotation.z));
            }
        }
    } else {
        printf("\n  KMP: NOT LOADED (course.kmp not found in archive)\n");
    }

    // -- KCL summary --
    if (m_kclLoaded) {
        const auto& tris = m_kclLoader.getTriangles();
        printf("\n  --- KCL Collision Data ---\n");
        printf("  Total Triangles: %u\n", static_cast<u32>(tris.size()));

        // Surface type breakdown
        u32 roadCount    = 0;
        u32 offroadCount = 0;
        u32 boostCount   = 0;
        u32 wallCount    = 0;
        u32 otherCount   = 0;

        for (const auto& tri : tris) {
            const u16 ct = tri.collisionType;
            if (ct & KCLType::ROAD)         roadCount++;
            else if (ct & KCLType::BOOST)    boostCount++;
            else if (ct & KCLType::OFF_ROAD) offroadCount++;
            else if (ct & KCLType::WALL)     wallCount++;
            else                             otherCount++;
        }

        printf("  Surface Breakdown:\n");
        printf("    Road:      %6u  (%.1f%%)\n",
               roadCount,
               tris.empty() ? 0.0 : 100.0 * roadCount / static_cast<double>(tris.size()));
        printf("    Off-road:  %6u  (%.1f%%)\n",
               offroadCount,
               tris.empty() ? 0.0 : 100.0 * offroadCount / static_cast<double>(tris.size()));
        printf("    Boost:     %6u  (%.1f%%)\n",
               boostCount,
               tris.empty() ? 0.0 : 100.0 * boostCount / static_cast<double>(tris.size()));
        printf("    Wall:      %6u  (%.1f%%)\n",
               wallCount,
               tris.empty() ? 0.0 : 100.0 * wallCount / static_cast<double>(tris.size()));
        printf("    Other:     %6u  (%.1f%%)\n",
               otherCount,
               tris.empty() ? 0.0 : 100.0 * otherCount / static_cast<double>(tris.size()));

        // Bounding box
        if (!tris.empty()) {
            f32 minX = tris[0].vertexA.x, maxX = tris[0].vertexA.x;
            f32 minY = tris[0].vertexA.y, maxY = tris[0].vertexA.y;
            f32 minZ = tris[0].vertexA.z, maxZ = tris[0].vertexA.z;

            for (const auto& tri : tris) {
                // Check all 3 vertices of each triangle
                const KclVec3 verts[3] = { tri.vertexA, tri.vertexB, tri.vertexC };
                for (int v = 0; v < 3; v++) {
                    if (verts[v].x < minX) minX = verts[v].x;
                    if (verts[v].x > maxX) maxX = verts[v].x;
                    if (verts[v].y < minY) minY = verts[v].y;
                    if (verts[v].y > maxY) maxY = verts[v].y;
                    if (verts[v].z < minZ) minZ = verts[v].z;
                    if (verts[v].z > maxZ) maxZ = verts[v].z;
                }
            }

            printf("  Bounding Box:\n");
            printf("    X: [%.1f, %.1f]  (span: %.1f)\n",
                   static_cast<double>(minX), static_cast<double>(maxX),
                   static_cast<double>(maxX - minX));
            printf("    Y: [%.1f, %.1f]  (span: %.1f)\n",
                   static_cast<double>(minY), static_cast<double>(maxY),
                   static_cast<double>(maxY - minY));
            printf("    Z: [%.1f, %.1f]  (span: %.1f)\n",
                   static_cast<double>(minZ), static_cast<double>(maxZ),
                   static_cast<double>(maxZ - minZ));
        }
    } else {
        printf("\n  KCL: NOT LOADED (course.kcl not found in archive)\n");
    }

    printf("================================================================\n\n");
}

// =============================================================================
// Rendering — Debug / Stub Mode
// =============================================================================

void TrackManager::renderTrack() const {
    if (!m_kclLoaded) {
        printf("TrackManager::renderTrack: No KCL data loaded, cannot render track\n");
        return;
    }

    const auto& tris = getCollisionTriangles();
    const u32 triCount = static_cast<u32>(tris.size());
    printf("TrackManager::renderTrack: Rendering %u collision triangles\n", triCount);

    // Surface type statistics for the render pass
    u32 roadCount    = 0;
    u32 offroadCount = 0;
    u32 boostCount   = 0;
    u32 wallCount    = 0;

    for (const auto& tri : tris) {
        const u16 ct = tri.collisionType;
        if (ct & KCLType::ROAD)     roadCount++;
        if (ct & KCLType::OFF_ROAD) offroadCount++;
        if (ct & KCLType::BOOST)    boostCount++;
        if (ct & KCLType::WALL)     wallCount++;
    }

    const u32 otherCount = triCount - roadCount - offroadCount - boostCount - wallCount;
    printf("  Road: %u, Off-road: %u, Boost: %u, Wall: %u, Other: %u\n",
           roadCount, offroadCount, boostCount, wallCount, otherCount);

    // Future GL rendering path (when Platform::Graphics supports draw calls):
    //
    // 1. Build vertex buffer: for each triangle, emit 3 vertices with position
    //    and color based on collision type.
    // 2. Upload to VBO via glBufferData(GL_ARRAY_BUFFER, ...).
    // 3. Set vertex attribute pointers (position, color).
    // 4. Draw with glDrawArrays(GL_TRIANGLES, 0, triCount * 3).
    // 5. For wireframe overlay: glPolygonMode(GL_FRONT_AND_BACK, GL_LINE)
    //    then draw again with a darker color.
    //
    // Color mapping (suggested):
    //   Road      -> green  (0.2, 0.8, 0.2)
    //   Off-road  -> brown  (0.6, 0.4, 0.2)
    //   Boost     -> yellow (1.0, 1.0, 0.0)
    //   Wall      -> red    (0.8, 0.2, 0.2)
    //   Other     -> gray   (0.5, 0.5, 0.5)
    //
    // For now, we just use Platform::Graphics stubs to demonstrate integration.

    printf("  [GL stub] Would upload %u vertices (%u KB) to VBO\n",
           triCount * 3, (triCount * 3 * static_cast<u32>(sizeof(f32) * 6)) / 1024);
}

void TrackManager::renderStartPositions() const {
    if (!m_kmpLoaded) {
        printf("TrackManager::renderStartPositions: No KMP data loaded\n");
        return;
    }

    const auto& starts = m_kmpLoader.getData().startPositions;
    printf("TrackManager::renderStartPositions: %u start positions\n",
           static_cast<u32>(starts.size()));

    // Assign a unique color to each player position for debug visualization
    // Using a simple hue rotation: player i gets hue = i * 30 degrees
    static const f32 PLAYER_COLORS[12][3] = {
        {1.0f, 0.0f, 0.0f}, // P0  — Red
        {0.0f, 0.0f, 1.0f}, // P1  — Blue
        {0.0f, 0.8f, 0.0f}, // P2  — Green
        {1.0f, 1.0f, 0.0f}, // P3  — Yellow
        {1.0f, 0.0f, 1.0f}, // P4  — Magenta
        {0.0f, 1.0f, 1.0f}, // P5  — Cyan
        {1.0f, 0.5f, 0.0f}, // P6  — Orange
        {0.5f, 0.0f, 1.0f}, // P7  — Purple
        {1.0f, 0.75f, 0.8f},// P8  — Pink
        {0.6f, 0.3f, 0.0f}, // P9  — Brown
        {0.5f, 1.0f, 0.5f}, // P10 — Light Green
        {0.8f, 0.8f, 0.8f}, // P11 — White
    };

    for (u32 i = 0; i < static_cast<u32>(starts.size()); i++) {
        const auto& sp = starts[i];
        const u32 colorIdx = sp.playerIndex < 12 ? sp.playerIndex : 0;

        printf("  P%02u: pos=(%.1f, %.1f, %.1f) rot=(%.1f, %.1f, %.1f) "
               "color=(%.1f, %.1f, %.1f)\n",
               sp.playerIndex,
               static_cast<double>(sp.position.x),
               static_cast<double>(sp.position.y),
               static_cast<double>(sp.position.z),
               static_cast<double>(sp.rotation.x),
               static_cast<double>(sp.rotation.y),
               static_cast<double>(sp.rotation.z),
               static_cast<double>(PLAYER_COLORS[colorIdx][0]),
               static_cast<double>(PLAYER_COLORS[colorIdx][1]),
               static_cast<double>(PLAYER_COLORS[colorIdx][2]));
    }

    // Future GL rendering path:
    //
    // 1. Build a small vertex buffer with one point per start position.
    // 2. Enable GL_POINT_SMOOTH for round points.
    // 3. Set glPointSize(12.0f) for visibility.
    // 4. Upload position + color data to VBO.
    // 5. Draw with glDrawArrays(GL_POINTS, 0, startPositions.size()).
    //
    // For player orientation visualization, also draw short GL_LINES
    // from each position in the direction of rotation.y (heading).
    printf("  [GL stub] Would render %u GL_POINTS for start grid\n",
           static_cast<u32>(starts.size()));
}

// =============================================================================
// Private: Archive Entry Lookup
// =============================================================================

const std::vector<u8>* TrackManager::findArchiveEntry(const char* name) const {
    if (!name) return nullptr;

    const std::string searchName(name);

    // Strategy 1: Try exact match via SzsReader's built-in lookup.
    // Common U8 paths: "course/course.kmp", "course/course.kcl"
    const SzsReader::Entry* entry = m_szsReader.findEntry(searchName);
    if (entry) return &entry->data;

    // Strategy 2: Try with "course/" prefix (common in MKWii SZS archives).
    entry = m_szsReader.findEntry("course/" + searchName);
    if (entry) return &entry->data;

    // Strategy 3: Case-insensitive suffix match across all entries.
    // Some archives use different casing or directory structures.
    std::string searchLower = searchName;
    std::transform(searchLower.begin(), searchLower.end(), searchLower.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });

    const auto& entries = m_szsReader.getEntries();
    for (const auto& e : entries) {
        std::string nameLower = e.name;
        std::transform(nameLower.begin(), nameLower.end(), nameLower.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });

        // Suffix match: "course/course.kmp" ends with "course.kmp"
        if (nameLower.size() >= searchLower.size() &&
            nameLower.compare(nameLower.size() - searchLower.size(),
                              searchLower.size(), searchLower) == 0) {
            return &e.data;
        }
    }

    return nullptr;
}

// =============================================================================
// Private: KMP Extraction & Loading
// =============================================================================

bool TrackManager::extractAndLoadKMP() {
    const std::vector<u8>* kmpData = findArchiveEntry("course.kmp");
    if (!kmpData) {
        printf("TrackManager: course.kmp not found in SZS archive\n");
        m_kmpLoaded = false;
        return false;
    }

    printf("TrackManager: Found course.kmp (%u bytes), parsing...\n",
           static_cast<u32>(kmpData->size()));

    if (!m_kmpLoader.loadFromMemory(*kmpData)) {
        printf("TrackManager: WARNING — KMP parsing completed with errors\n");
        // Still mark as loaded if partial data is available
        m_kmpLoaded = true;
        return false;
    }

    m_kmpLoaded = true;
    printf("TrackManager: KMP loaded successfully\n");
    return true;
}

// =============================================================================
// Private: KCL Extraction & Loading
// =============================================================================

bool TrackManager::extractAndLoadKCL() {
    const std::vector<u8>* kclData = findArchiveEntry("course.kcl");
    if (!kclData) {
        printf("TrackManager: course.kcl not found in SZS archive\n");
        m_kclLoaded = false;
        return false;
    }

    printf("TrackManager: Found course.kcl (%u bytes), parsing...\n",
           static_cast<u32>(kclData->size()));

    if (!m_kclLoader.loadFromMemory(*kclData)) {
        printf("TrackManager: WARNING — KCL parsing completed with errors\n");
        // Still mark as loaded if partial data is available
        m_kclLoaded = true;
        return false;
    }

    m_kclLoaded = true;
    printf("TrackManager: KCL loaded successfully (%u triangles)\n",
           static_cast<u32>(m_kclLoader.getTriangles().size()));
    return true;
}

// =============================================================================
// Private: Track Name Derivation
// =============================================================================

std::string TrackManager::deriveTrackName(const std::string& path) {
    if (path.empty()) return "<empty>";

    // Find the last path separator
    size_t lastSep = path.find_last_of("/\\");
    std::string filename = (lastSep != std::string::npos)
        ? path.substr(lastSep + 1)
        : path;

    // Strip file extension(s) — handle ".szs" and potentially ".szs.gz" etc.
    size_t lastDot = filename.find_last_of('.');
    if (lastDot != std::string::npos) {
        filename = filename.substr(0, lastDot);
    }

    // If the filename is empty after stripping, return the original path
    return filename.empty() ? path : filename;
}

// =============================================================================
// BREFF/BREFT Effect Extraction
// =============================================================================

std::vector<const SzsReader::Entry*> TrackManager::getBreffEntries() const {
    return m_szsReader.getEntriesByExtension(".breff");
}

std::vector<const SzsReader::Entry*> TrackManager::getBreftEntries() const {
    return m_szsReader.getEntriesByExtension(".breft");
}

const SzsReader::Entry* TrackManager::findBreffEntry(const std::string& name) const {
    return m_szsReader.findEntry(name);
}

const SzsReader::Entry* TrackManager::findBreftEntry(const std::string& name) const {
    return m_szsReader.findEntry(name);
}

bool TrackManager::hasBreffFiles() const {
    return !m_szsReader.getEntriesByExtension(".breff").empty();
}

bool TrackManager::hasBreftFiles() const {
    return !m_szsReader.getEntriesByExtension(".breft").empty();
}

} // namespace Loaders