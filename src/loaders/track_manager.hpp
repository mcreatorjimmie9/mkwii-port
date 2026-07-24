#pragma once
// =============================================================================
// track_manager.hpp — Unified Track Loading & Rendering Manager
// =============================================================================
//
// TrackManager is the top-level orchestrator for loading a complete Mario Kart
// Wii track. It coordinates three sub-loaders:
//
//   1. SzsReader  — Decompresses YAZ0 and parses the U8 archive structure,
//                   extracting individual files (course.kmp, course.kcl, etc.)
//   2. KmpLoader  — Parses course map parameter data (start positions,
//                   checkpoints, objects, areas, routes, cameras, etc.)
//   3. KclLoader  — Parses the course collision mesh (triangle soup with
//                   per-triangle surface type attributes)
//   4. BmdLoader  — Parses BRRES containers and extracts MDL0 3D models
//                   (course geometry, textures, materials for rendering)
//
// Typical usage:
//   Loaders::TrackManager tm;
//   if (tm.loadFromFile("course.szs")) {
//       tm.printTrackInfo();
//       tm.renderTrack();
//   }
//
// Dependencies: SzsReader, KmpLoader, KclLoader, Platform::Graphics, rk_types.h
//
// MAESTRO Phase 7, Milestone M3: Track Loading & Rendering
// =============================================================================

#include "szs_reader.hpp"
#include "kmp_loader.hpp"
#include "kcl_loader.hpp"
#include "bmd_loader.hpp"
#include "platform/graphics.hpp"

#include <string>
#include <vector>
#include <cstdio>

namespace Loaders {

// =============================================================================
// TrackManager — Top-level track loading and debug rendering coordinator
// =============================================================================
//
// Owns instances of SzsReader, KmpLoader, and KclLoader. After loading an SZS
// file, it automatically extracts and parses course.kmp and course.kcl.
//
// The rendering methods currently operate in debug/text mode (printf-based)
// since Platform::Graphics is in stub mode. When full GL rendering is
// available, these will be extended to upload VBOs and draw triangles.
// =============================================================================
class TrackManager {
public:
    TrackManager();
    ~TrackManager();

    // Non-copyable (owns loader state), movable
    TrackManager(const TrackManager&) = delete;
    TrackManager& operator=(const TrackManager&) = delete;
    TrackManager(TrackManager&&) = default;
    TrackManager& operator=(TrackManager&&) = default;

    // -----------------------------------------------------------------
    // Loading
    // -----------------------------------------------------------------

    /// Load a track from an SZS file on disk.
    /// Opens the file, decompresses YAZ0, parses U8 archive, then
    /// extracts and parses course.kmp and course.kcl.
    /// Returns true if at least the SZS archive was parsed successfully.
    /// Individual sub-loaders (KMP/KCL) may fail gracefully.
    bool loadFromFile(const char* szsPath);

    /// Load a track from an SZS file already in memory.
    /// Same pipeline as loadFromFile but skips the file I/O step.
    /// Returns true if the SZS archive was parsed successfully.
    bool loadFromMemory(const std::vector<u8>& szsData);

    // -----------------------------------------------------------------
    // Data Accessors
    // -----------------------------------------------------------------

    /// Get the parsed KMP course data (start positions, objects, areas, etc.)
    const KmpEntry& getKmpData() const { return m_kmpLoader.getData(); }

    /// Get the parsed KCL collision triangles.
    const std::vector<KclTriangle>& getCollisionTriangles() const {
        return m_kclLoader.getTriangles();
    }

    /// Get the total number of collision triangles (convenience).
    u32 getTriangleCount() const {
        return static_cast<u32>(m_kclLoader.getTriangles().size());
    }

    /// Get the list of all entries in the SZS U8 archive.
    const std::vector<SzsReader::Entry>& getArchiveEntries() const {
        return m_szsReader.getEntries();
    }

    /// Check if KMP data was successfully loaded.
    bool isKmpLoaded() const { return m_kmpLoaded; }

    /// Check if KCL data was successfully loaded.
    bool isKclLoaded() const { return m_kclLoaded; }

    /// Get the raw KCL binary data (for passing to KCollision/CourseColManager).
    const std::vector<u8>& getKCLRawData() const {
        return m_kclLoader.getRawData();
    }

    /// Get the track name (derived from the SZS file path or URL).
    const std::string& getTrackName() const { return m_trackName; }

    // -----------------------------------------------------------------
    // BMD Course Model Accessors (Phase 36)
    // -----------------------------------------------------------------

    /// Check if course BMD models were successfully loaded.
    bool isBmdLoaded() const { return m_bmdLoaded; }

    /// Get the BMD loader (for accessing parsed models and textures).
    const BmdLoader& getBmdLoader() const { return m_bmdLoader; }

    /// Get the number of loaded BMD models.
    u32 getBmdModelCount() const { return m_bmdLoader.getModelCount(); }

    // -----------------------------------------------------------------
    // BREFF/BREFT Effect Extraction
    // -----------------------------------------------------------------

    /// Get all BREFF effect entries from the SZS archive.
    /// Returns a vector of pointers to BREFF file entries.
    std::vector<const SzsReader::Entry*> getBreffEntries() const;

    /// Get all BREFT texture entries from the SZS archive.
    /// Returns a vector of pointers to BREFT file entries.
    std::vector<const SzsReader::Entry*> getBreftEntries() const;

    /// Get a BREFF entry by name (e.g. "effect/Flash_L/rk_flashBeginner.breff").
    const SzsReader::Entry* findBreffEntry(const std::string& name) const;

    /// Get a BREFT entry by name (e.g. "effect/Flash_L/rk_flashBeginner.breft").
    const SzsReader::Entry* findBreftEntry(const std::string& name) const;

    /// Check if any BREFF files were found in the archive.
    bool hasBreffFiles() const;

    /// Check if any BREFT files were found in the archive.
    bool hasBreftFiles() const;

    // -----------------------------------------------------------------
    // Debug Output
    // -----------------------------------------------------------------

    /// Print a comprehensive track summary to stdout.
    /// Includes: track name, archive entries, KMP section counts,
    /// KCL triangle count, and surface type breakdown.
    void printTrackInfo() const;

    // -----------------------------------------------------------------
    // Rendering (debug / stub mode for M3)
    // -----------------------------------------------------------------

    /// Render track geometry as debug output.
    /// Currently prints KCL surface type statistics and triangle count.
    /// Future: upload KCL triangles to VBO and draw as wireframe/filled.
    void renderTrack() const;

    /// Render start positions as colored points.
    /// Currently prints each racer's grid position and rotation.
    /// Future: draw GL_POINTS at each start position with unique colors.
    void renderStartPositions() const;

private:
    // -----------------------------------------------------------------
    // Internal helpers
    // -----------------------------------------------------------------

    /// Search the U8 archive for a named file (case-insensitive).
    /// Returns pointer to the entry data, or nullptr if not found.
    /// The returned pointer is valid only as long as m_szsReader is alive.
    const std::vector<u8>* findArchiveEntry(const char* name) const;

    /// Extract and parse course.kmp from the SZS archive.
    /// Sets m_kmpLoaded on success.
    bool extractAndLoadKMP();

    /// Extract and parse course.kcl from the SZS archive.
    /// Sets m_kclLoaded on success.
    bool extractAndLoadKCL();

    /// Extract and parse course model BRRES/BMD from the SZS archive.
    /// Searches for model.brres or course_model.brres within the archive.
    /// Sets m_bmdLoaded on success.
    bool extractAndLoadBMD();

    /// Derive a track name from a file path or URL.
    /// Strips directory prefixes and file extensions.
    static std::string deriveTrackName(const std::string& path);

    // -----------------------------------------------------------------
    // Member data
    // -----------------------------------------------------------------

    SzsReader  m_szsReader;   ///< YAZ0 decompressor + U8 archive parser
    KmpLoader  m_kmpLoader;   ///< Course map parameter parser
    KclLoader  m_kclLoader;   ///< Collision mesh parser

    std::string m_trackName;  ///< Human-readable track name (from file path)
    bool        m_kmpLoaded;  ///< true if course.kmp was found and parsed
    bool        m_kclLoaded;  ///< true if course.kcl was found and parsed
    bool        m_bmdLoaded;  ///< true if course model BRRES was found and parsed

    BmdLoader   m_bmdLoader;   ///< BRRES/MDL0 3D model parser
};

} // namespace Loaders