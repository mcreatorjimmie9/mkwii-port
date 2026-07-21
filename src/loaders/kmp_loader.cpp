// =============================================================================
// kmp_loader.cpp — KMP Binary Loader Implementation
// =============================================================================
//
// Implementation of the Mario Kart Wii KMP course data parser.
// All multi-byte values are stored big-endian in the file (Wii PPC).
// This loader runs on a little-endian host (x86/x64), so all reads
// must go through byte-swapping helpers.
//
// Section layout in KMP:
//   [4 bytes: magic] [2 bytes: padding/unknown] [2 bytes: entry count BE]
//   Followed by `count` entries of section-specific size.
//
// Variable-length sections (POTI, CAME, JGPT, KNIT, RPKT) embed a
// point count at the start of each entry and scale accordingly.
// =============================================================================

#include "loaders/kmp_loader.hpp"

#include <cstdio>
#include <cstring>

namespace Loaders {

// =============================================================================
// Type aliases for KmpEntry nested structs (used throughout the implementation)
// =============================================================================
using StartPosition  = KmpEntry::StartPosition;
using CheckpointGroup = KmpEntry::CheckpointGroup;
using GlobalObject   = KmpEntry::GlobalObject;
using Area           = KmpEntry::Area;
using PathPoint      = KmpEntry::PathPoint;
using Path           = KmpEntry::Path;
using CameraPoint    = KmpEntry::CameraPoint;
using CameraPath     = KmpEntry::CameraPath;
using CheckLink      = KmpEntry::CheckLink;
using CoursePhysics  = KmpEntry::CoursePhysics;
using CannonPoint    = KmpEntry::CannonPoint;
using MissionPoint   = KmpEntry::MissionPoint;

// =============================================================================
// Big-endian read helpers
// =============================================================================

u32 KmpLoader::readBE32(const u8* p) const {
    return static_cast<u32>(p[0]) << 24
         | static_cast<u32>(p[1]) << 16
         | static_cast<u32>(p[2]) << 8
         | static_cast<u32>(p[3]);
}

u16 KmpLoader::readBE16(const u8* p) const {
    return static_cast<u16>(p[0]) << 8
         | static_cast<u16>(p[1]);
}

f32 KmpLoader::swapBE32f(const u8* p) {
    // IEEE 754 float stored big-endian: swap byte order for little-endian host
    u32 be = static_cast<u32>(p[0]) << 24
           | static_cast<u32>(p[1]) << 16
           | static_cast<u32>(p[2]) << 8
           | static_cast<u32>(p[3]);
    f32 result;
    std::memcpy(&result, &be, sizeof(f32));
    return result;
}

f32 KmpLoader::readBE32f(const u8* p) const {
    return swapBE32f(p);
}

// =============================================================================
// Bounds checking
// =============================================================================

bool KmpLoader::canRead(const u8* p, u32 needed, const u8* sectionBase, u32 maxSize) {
    if (p < sectionBase) return false;
    u32 offset = static_cast<u32>(p - sectionBase);
    return offset + needed <= maxSize;
}

// =============================================================================
// loadFromMemory — Main parsing entry point
// =============================================================================

bool KmpLoader::loadFromMemory(const std::vector<u8>& data) {
    // Reset previous data
    m_data = KmpEntry{};

    if (data.size() < 8) {
        std::fprintf(stderr, "[KMP] File too small (%zu bytes), need at least 8\n",
                     data.size());
        return false;
    }

    const u8* ptr = data.data();
    u32 remaining = static_cast<u32>(data.size());

    // Walk through sections sequentially.
    // Each section: [4 magic] [2 padding] [2 entryCount BE] [entries...]
    while (remaining >= 8) {
        // Validate section magic — must be printable ASCII
        bool validMagic = true;
        for (int i = 0; i < 4; i++) {
            if (ptr[i] < 0x20 || ptr[i] > 0x7E) {
                validMagic = false;
                break;
            }
        }
        if (!validMagic) {
            break; // Not a valid section header — end of sections
        }

        char magic[5] = {};
        std::memcpy(magic, ptr, 4);
        u16 entryCount = readBE16(ptr + 6);

        const u8* sectionData = ptr + 8;
        u32 sectionDataSize = remaining - 8;

        // ---- Dispatch to the appropriate parser ----
        if (std::strcmp(magic, "KTPJ") == 0) {
            // Header: 1 entry, 0x60 bytes
            parseKTPJ(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "KTP") == 0) {
            // Start positions: 0x2C per entry
            parseKTP(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "KCPO") == 0) {
            // Checkpoint groups: 0x30 per entry
            parseKCPO(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "GOBJ") == 0) {
            // Global objects: 0x40 per entry
            parseGOBJ(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "AREA") == 0) {
            // Areas: 0x30 per entry
            parseAREA(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "POTI") == 0) {
            // Point paths (routes)
            parsePOTI(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "CAME") == 0) {
            // Camera animation paths
            parseCAME(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "JGPT") == 0) {
            // Lakitu rescue routes
            parseJGPT(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "KNIT") == 0) {
            // Item routes
            parseKNIT(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "CHECK") == 0) {
            // Checkpoint links: 4 bytes per entry
            parseCHECK(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "CPHY") == 0) {
            // Course physics: 0x1C per entry
            parseCPHY(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "CNPT") == 0) {
            // Cannon points: 0x1C per entry
            parseCNPT(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "MSPT") == 0) {
            // Mission points: 0x1C per entry
            parseMSPT(sectionData, entryCount, sectionDataSize);
        } else if (std::strcmp(magic, "RPKT") == 0) {
            // Replay ghost points: variable
            parseRPKT(sectionData, entryCount, sectionDataSize);
        } else {
            std::fprintf(stderr, "[KMP] Unknown section '%.4s' (%u entries), stopping\n",
                         magic, entryCount);
            break;
        }

        // ---- Compute section data size and advance ----
        u32 consumedSize = 0;

        if (std::strcmp(magic, "KTPJ") == 0) {
            consumedSize = static_cast<u32>(entryCount) * 0x60;
        } else if (std::strcmp(magic, "KTP") == 0) {
            consumedSize = static_cast<u32>(entryCount) * 0x2C;
        } else if (std::strcmp(magic, "KCPO") == 0) {
            consumedSize = static_cast<u32>(entryCount) * 0x30;
        } else if (std::strcmp(magic, "GOBJ") == 0) {
            consumedSize = static_cast<u32>(entryCount) * 0x40;
        } else if (std::strcmp(magic, "AREA") == 0) {
            consumedSize = static_cast<u32>(entryCount) * 0x30;
        } else if (std::strcmp(magic, "POTI") == 0 ||
                   std::strcmp(magic, "JGPT") == 0 ||
                   std::strcmp(magic, "KNIT") == 0 ||
                   std::strcmp(magic, "CAME") == 0 ||
                   std::strcmp(magic, "RPKT") == 0) {
            // Variable-length: walk through entries to compute total
            const u8* vp = sectionData;
            u32 vpRemaining = sectionDataSize;
            for (u16 e = 0; e < entryCount && vpRemaining >= 2; e++) {
                u16 ptCount = readBE16(vp);
                vp += 2;
                vpRemaining -= 2;

                u32 pointSize = 0;
                if (std::strcmp(magic, "CAME") == 0) {
                    pointSize = 0x28;  // CameraPoint: 7 x f32
                } else if (std::strcmp(magic, "RPKT") == 0) {
                    pointSize = 0x40;  // ReplayGhostPoint
                } else {
                    pointSize = 0x14;  // PathPoint: vec3 + 2 x f32
                }

                u32 entryDataSize = static_cast<u32>(ptCount) * pointSize;
                if (entryDataSize > vpRemaining) {
                    entryDataSize = vpRemaining;
                }
                vp += entryDataSize;
                vpRemaining -= entryDataSize;
            }
            consumedSize = static_cast<u32>(vp - sectionData);
        } else if (std::strcmp(magic, "CHECK") == 0) {
            consumedSize = static_cast<u32>(entryCount) * 4;
        } else if (std::strcmp(magic, "CPHY") == 0 ||
                   std::strcmp(magic, "CNPT") == 0 ||
                   std::strcmp(magic, "MSPT") == 0) {
            consumedSize = static_cast<u32>(entryCount) * 0x1C;
        }

        // Clamp to available data
        if (consumedSize > sectionDataSize) {
            consumedSize = sectionDataSize;
        }

        ptr = sectionData + consumedSize;
        remaining = static_cast<u32>(data.size()) - static_cast<u32>(ptr - data.data());
    }

    return true;
}

// =============================================================================
// loadFromFile — Read file from disk and parse
// =============================================================================

bool KmpLoader::loadFromFile(const char* path) {
    std::FILE* fp = std::fopen(path, "rb");
    if (!fp) {
        std::fprintf(stderr, "[KMP] Failed to open file: %s\n", path);
        return false;
    }

    // Get file size
    std::fseek(fp, 0, SEEK_END);
    long fileSize = std::ftell(fp);
    std::fseek(fp, 0, SEEK_SET);

    if (fileSize <= 0) {
        std::fprintf(stderr, "[KMP] File is empty or unreadable: %s\n", path);
        std::fclose(fp);
        return false;
    }

    std::vector<u8> buffer(static_cast<size_t>(fileSize));
    size_t bytesRead = std::fread(buffer.data(), 1, buffer.size(), fp);
    std::fclose(fp);

    if (bytesRead != buffer.size()) {
        std::fprintf(stderr, "[KMP] Read error: expected %ld bytes, got %zu\n",
                     fileSize, bytesRead);
        return false;
    }

    std::printf("[KMP] Loaded '%s' (%ld bytes)\n", path, fileSize);
    return loadFromMemory(buffer);
}

// =============================================================================
// parseSection — Stub dispatch (actual dispatch is in loadFromMemory)
// =============================================================================

bool KmpLoader::parseSection(const u8* /*sectionStart*/, u32 /*remainingSize*/) {
    // Actual section dispatch is handled inline in loadFromMemory.
    // This method exists as an extension point for future refactoring.
    return true;
}

// =============================================================================
// Section Parsers
// =============================================================================

// --- KTPJ: Course Header (0x60 bytes, 1 entry) ---
// Layout:
//   0x00: char[4] magic "RKMD"
//   0x04-0x05: u8 lapCount, u8 padding
//   0x06: u8 speedSetting (50cc=0, 100cc=1, 150cc=2, Mirror=3)
//   0x07: u8 unknown
//   0x08-0x5F: additional course settings (engine class, pole position, etc.)
void KmpLoader::parseKTPJ(const u8* data, u16 count, u32 maxSize) {
    (void)count; // Always 1
    if (!canRead(data, 0x60, data, maxSize)) return;

    std::memcpy(m_data.header.magic, data, 4);
    std::memcpy(m_data.header.data, data + 4, 0x5C);
}

// --- KTP: Start Positions (0x2C bytes per entry, typically 12 for 12 racers) ---
// Layout per entry:
//   0x00: f32 posX       0x04: f32 posY       0x08: f32 posZ
//   0x0C: f32 rotX       0x10: f32 rotY       0x14: f32 rotZ
//   0x18: u16 playerIndex  0x1A: u16 unknown1
//   0x1C-0x2B: additional fields
void KmpLoader::parseKTP(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 0x2C;
        if (!canRead(entry, 0x2C, data, maxSize)) break;

        StartPosition sp;
        sp.position.x = readBE32f(entry + 0x00);
        sp.position.y = readBE32f(entry + 0x04);
        sp.position.z = readBE32f(entry + 0x08);
        sp.rotation.x = readBE32f(entry + 0x0C);
        sp.rotation.y = readBE32f(entry + 0x10);
        sp.rotation.z = readBE32f(entry + 0x14);
        sp.playerIndex = readBE16(entry + 0x18);
        m_data.startPositions.push_back(sp);
    }
}

// --- KCPO: Checkpoint Groups (0x30 bytes per entry) ---
// Layout per entry:
//   0x00: f32 posX       0x04: f32 posY       0x08: f32 posZ
//   0x0C: f32 rotX       0x10: f32 rotY       0x14: f32 rotZ
//   0x18: f32 scaleX     0x1C: f32 scaleY     0x20: f32 scaleZ
//   0x24: u16 checkpointId  0x26: u16 unknown
//   0x28-0x2F: padding/unknown
void KmpLoader::parseKCPO(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 0x30;
        if (!canRead(entry, 0x30, data, maxSize)) break;

        CheckpointGroup cp;
        cp.position.x = readBE32f(entry + 0x00);
        cp.position.y = readBE32f(entry + 0x04);
        cp.position.z = readBE32f(entry + 0x08);
        cp.rotation.x = readBE32f(entry + 0x0C);
        cp.rotation.y = readBE32f(entry + 0x10);
        cp.rotation.z = readBE32f(entry + 0x14);
        cp.scaleX      = readBE32f(entry + 0x18);
        cp.scaleZ      = readBE32f(entry + 0x20);
        cp.checkpointId = readBE16(entry + 0x24);
        m_data.checkpoints.push_back(cp);
    }
}

// --- GOBJ: Global Objects (0x40 bytes per entry) ---
// Layout per entry:
//   0x00: u16 objectId       0x02: u16 positionId
//   0x04: f32 posX           0x08: f32 posY           0x0C: f32 posZ
//   0x10: f32 rotX           0x14: f32 rotY           0x18: f32 rotZ
//   0x1C: f32 scaleX         0x20: f32 scaleY         0x24: f32 scaleZ
//   0x28: u16 routes         0x2A: u16 settings
//   0x2C-0x33: u8 rawParams[8]
//   0x34-0x3F: additional unknown fields
void KmpLoader::parseGOBJ(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 0x40;
        if (!canRead(entry, 0x40, data, maxSize)) break;

        GlobalObject obj;
        obj.objectId   = readBE16(entry + 0x00);
        obj.positionId = readBE16(entry + 0x02);
        obj.position.x = readBE32f(entry + 0x04);
        obj.position.y = readBE32f(entry + 0x08);
        obj.position.z = readBE32f(entry + 0x0C);
        obj.rotation.x = readBE32f(entry + 0x10);
        obj.rotation.y = readBE32f(entry + 0x14);
        obj.rotation.z = readBE32f(entry + 0x18);
        obj.scale.x    = readBE32f(entry + 0x1C);
        obj.scale.y    = readBE32f(entry + 0x20);
        obj.scale.z    = readBE32f(entry + 0x24);
        obj.routes     = readBE16(entry + 0x28);
        obj.settings   = readBE16(entry + 0x2A);
        std::memcpy(obj.rawParams, entry + 0x2C, 8);
        m_data.objects.push_back(obj);
    }
}

// --- AREA: Areas (0x30 bytes per entry) ---
// Layout per entry:
//   0x00: u8 shapeType       0x01: u8 areaType
//   0x02: u16 padding/unknown
//   0x04: f32 posX           0x08: f32 posY           0x0C: f32 posZ
//   0x10: f32 param1 (width/radius)
//   0x14: f32 param2 (height)
//   0x18: f32 param3 (depth/length)
//   0x1C: f32 unknown1
//   0x20: u16 unknown2
//   0x22-0x2F: additional unknown
void KmpLoader::parseAREA(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 0x30;
        if (!canRead(entry, 0x30, data, maxSize)) break;

        Area area;
        area.shapeType = entry[0x00];
        area.areaType  = entry[0x01];
        area.position.x = readBE32f(entry + 0x04);
        area.position.y = readBE32f(entry + 0x08);
        area.position.z = readBE32f(entry + 0x0C);
        area.param1 = readBE32f(entry + 0x10);
        area.param2 = readBE32f(entry + 0x14);
        area.param3 = readBE32f(entry + 0x18);
        area.unknown = readBE16(entry + 0x20);
        m_data.areas.push_back(area);
    }
}

// --- Generic path/route parser (POTI, JGPT, KNIT share the same format) ---
// Each path entry:
//   [0x00] u16 pointCount (BE)
//   Per point (0x14 bytes each):
//     [0x00] f32 posX    [0x04] f32 posY    [0x08] f32 posZ
//     [0x0C] f32 param1  [0x10] f32 param2
std::vector<KmpEntry::Path> KmpLoader::parsePathSection(
    const u8* data, u16 count, u32 maxSize)
{
    std::vector<KmpEntry::Path> result;
    const u8* cursor = data;

    for (u16 i = 0; i < count; i++) {
        if (!canRead(cursor, 2, data, maxSize)) break;

        u16 pointCount = readBE16(cursor);
        cursor += 2;

        Path path;
        for (u16 j = 0; j < pointCount; j++) {
            if (!canRead(cursor, 0x14, data, maxSize)) break;

            PathPoint pt;
            pt.position.x = readBE32f(cursor + 0x00);
            pt.position.y = readBE32f(cursor + 0x04);
            pt.position.z = readBE32f(cursor + 0x08);
            pt.param1     = readBE32f(cursor + 0x0C);
            pt.param2     = readBE32f(cursor + 0x10);
            cursor += 0x14;
            path.points.push_back(pt);
        }
        result.push_back(std::move(path));
    }

    return result;
}

// --- POTI: Point Paths (routes for objects, AI, etc.) ---
void KmpLoader::parsePOTI(const u8* data, u16 count, u32 maxSize) {
    m_data.paths = parsePathSection(data, count, maxSize);
}

// --- CAME: Camera Animation Paths ---
// Each path entry:
//   [0x00] u16 pointCount (BE)
//   Per point (0x28 bytes each):
//     [0x00] f32 posX    [0x04] f32 posY    [0x08] f32 posZ
//     [0x0C] f32 rotX    [0x10] f32 rotY    [0x14] f32 rotZ
//     [0x18] f32 tgtX    [0x1C] f32 tgtY    [0x20] f32 tgtZ
//     [0x24] f32 fov
void KmpLoader::parseCAME(const u8* data, u16 count, u32 maxSize) {
    const u8* cursor = data;

    for (u16 i = 0; i < count; i++) {
        if (!canRead(cursor, 2, data, maxSize)) break;

        u16 pointCount = readBE16(cursor);
        cursor += 2;

        CameraPath camPath;
        for (u16 j = 0; j < pointCount; j++) {
            if (!canRead(cursor, 0x28, data, maxSize)) break;

            CameraPoint cp;
            cp.position.x = readBE32f(cursor + 0x00);
            cp.position.y = readBE32f(cursor + 0x04);
            cp.position.z = readBE32f(cursor + 0x08);
            cp.rotation.x = readBE32f(cursor + 0x0C);
            cp.rotation.y = readBE32f(cursor + 0x10);
            cp.rotation.z = readBE32f(cursor + 0x14);
            cp.target.x   = readBE32f(cursor + 0x18);
            cp.target.y   = readBE32f(cursor + 0x1C);
            cp.target.z   = readBE32f(cursor + 0x20);
            cp.fov        = readBE32f(cursor + 0x24);
            cursor += 0x28;
            camPath.points.push_back(cp);
        }
        m_data.cameras.push_back(std::move(camPath));
    }
}

// --- JGPT: Lakitu (Rescue) Routes (same format as POTI) ---
void KmpLoader::parseJGPT(const u8* data, u16 count, u32 maxSize) {
    m_data.lakituRoutes = parsePathSection(data, count, maxSize);
}

// --- KNIT: Item Routes (same format as POTI) ---
void KmpLoader::parseKNIT(const u8* data, u16 count, u32 maxSize) {
    m_data.itemRoutes = parsePathSection(data, count, maxSize);
}

// --- CHECK: Checkpoint Links (4 bytes per entry) ---
// Layout per entry:
//   [0x00] u16 checkpointA (BE)
//   [0x02] u16 checkpointB (BE)
// Total: 4 bytes. The key/direction info is packed in the high bits
// of checkpointB or as a separate field depending on the game version.
void KmpLoader::parseCHECK(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 4;
        if (!canRead(entry, 4, data, maxSize)) break;

        CheckLink link;
        link.checkpointA = readBE16(entry + 0x00);
        link.checkpointB = readBE16(entry + 0x02);
        link.key = 0;
        m_data.checkLinks.push_back(link);
    }
}

// --- CPHY: Course Physics (0x1C bytes per entry) ---
// Layout per entry:
//   0x00: f32 posX       0x04: f32 posY       0x08: f32 posZ
//   0x0C: f32 unknown1   0x10: f32 unknown2   0x14: f32 unknown3
//   0x18: u32 unknown4
void KmpLoader::parseCPHY(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 0x1C;
        if (!canRead(entry, 0x1C, data, maxSize)) break;

        CoursePhysics phys;
        phys.position.x  = readBE32f(entry + 0x00);
        phys.position.y  = readBE32f(entry + 0x04);
        phys.position.z  = readBE32f(entry + 0x08);
        phys.unknown[0]  = readBE32f(entry + 0x0C);
        phys.unknown[1]  = readBE32f(entry + 0x10);
        phys.unknown[2]  = readBE32f(entry + 0x14);
        m_data.coursePhysics.push_back(phys);
    }
}

// --- CNPT: Cannon Points (0x1C bytes per entry) ---
// Layout per entry:
//   0x00: f32 posX       0x04: f32 posY       0x08: f32 posZ
//   0x0C: f32 rotX       0x10: f32 rotY       0x14: f32 rotZ
//   0x18: f32 speed
void KmpLoader::parseCNPT(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 0x1C;
        if (!canRead(entry, 0x1C, data, maxSize)) break;

        CannonPoint cp;
        cp.position.x = readBE32f(entry + 0x00);
        cp.position.y = readBE32f(entry + 0x04);
        cp.position.z = readBE32f(entry + 0x08);
        cp.rotation.x = readBE32f(entry + 0x0C);
        cp.rotation.y = readBE32f(entry + 0x10);
        cp.rotation.z = readBE32f(entry + 0x14);
        cp.speed      = readBE32f(entry + 0x18);
        m_data.cannonPoints.push_back(cp);
    }
}

// --- MSPT: Mission Points (0x1C bytes per entry) ---
// Layout per entry:
//   0x00: f32 posX       0x04: f32 posY       0x08: f32 posZ
//   0x0C: f32 unknown1   0x10: f32 unknown2   0x14: f32 unknown3
void KmpLoader::parseMSPT(const u8* data, u16 count, u32 maxSize) {
    for (u16 i = 0; i < count; i++) {
        const u8* entry = data + static_cast<u32>(i) * 0x1C;
        if (!canRead(entry, 0x1C, data, maxSize)) break;

        MissionPoint mp;
        mp.position.x = readBE32f(entry + 0x00);
        mp.position.y = readBE32f(entry + 0x04);
        mp.position.z = readBE32f(entry + 0x08);
        mp.unknown[0] = readBE32f(entry + 0x0C);
        mp.unknown[1] = readBE32f(entry + 0x10);
        mp.unknown[2] = readBE32f(entry + 0x14);
        m_data.missionPoints.push_back(mp);
    }
}

// --- RPKT: Replay Ghost Points (variable, 0x40 bytes per point) ---
// Each entry: u16 pointCount + per-point 0x40 bytes of ghost replay data.
// Ghost replay data contains position, rotation, inputs, and state.
// Not needed for course loading in the PC port.
void KmpLoader::parseRPKT(const u8* /*data*/, u16 /*count*/, u32 /*maxSize*/) {
    // Intentionally unimplemented — replay ghost data is not needed
    // for course loading in the PC port. The section is recognized
    // and skipped gracefully so the parser can advance past it.
}

// =============================================================================
// printSummary — Human-readable dump of all parsed data
// =============================================================================

void KmpLoader::printSummary() const {
    std::printf("============================================================\n");
    std::printf("  KMP Course Data Summary\n");
    std::printf("============================================================\n\n");

    // Header (KTPJ)
    std::printf("--- KTPJ (Header) ---\n");
    std::printf("  Magic: %.4s\n", m_data.header.magic);
    if (std::memcmp(m_data.header.magic, "RKMD", 4) == 0) {
        std::printf("  Valid RKMD header detected\n");
        // Known header fields (offsets relative to start of 0x5C data block):
        //   0x00: u8 lapCount (typically 3)
        //   0x01: u8 padding
        //   0x02: u8 speedSetting (0=50cc, 1=100cc, 2=150cc, 3=Mirror)
        std::printf("  Laps: %u\n", m_data.header.data[0x00]);
        std::printf("  Speed: %u (0=50cc, 1=100cc, 2=150cc, 3=Mirror)\n",
                    m_data.header.data[0x02]);
    } else {
        std::printf("  WARNING: Invalid magic (expected 'RKMD')\n");
    }
    std::printf("\n");

    // Start Positions (KTP)
    std::printf("--- KTP (Start Positions): %zu entries ---\n",
                m_data.startPositions.size());
    for (size_t i = 0; i < m_data.startPositions.size(); i++) {
        const auto& sp = m_data.startPositions[i];
        std::printf("  [%2zu] Player %u  Pos(%.1f, %.1f, %.1f)"
                    "  Rot(%.1f, %.1f, %.1f)\n",
                    i, sp.playerIndex,
                    sp.position.x, sp.position.y, sp.position.z,
                    sp.rotation.x, sp.rotation.y, sp.rotation.z);
    }
    std::printf("\n");

    // Checkpoint Groups (KCPO)
    std::printf("--- KCPO (Checkpoint Groups): %zu entries ---\n",
                m_data.checkpoints.size());
    for (size_t i = 0; i < m_data.checkpoints.size(); i++) {
        const auto& cp = m_data.checkpoints[i];
        std::printf("  [%3zu] ID=%u  Pos(%.1f, %.1f, %.1f)"
                    "  Scale(%.1f, %.1f)\n",
                    i, cp.checkpointId,
                    cp.position.x, cp.position.y, cp.position.z,
                    cp.scaleX, cp.scaleZ);
    }
    std::printf("\n");

    // Global Objects (GOBJ)
    std::printf("--- GOBJ (Global Objects): %zu entries ---\n",
                m_data.objects.size());
    for (size_t i = 0; i < m_data.objects.size(); i++) {
        const auto& obj = m_data.objects[i];
        std::printf("  [%3zu] ObjID=%u  PosID=%u  Pos(%.1f, %.1f, %.1f)"
                    "  Scale(%.2f, %.2f, %.2f)  Routes=%u  Settings=0x%04X\n",
                    i, obj.objectId, obj.positionId,
                    obj.position.x, obj.position.y, obj.position.z,
                    obj.scale.x, obj.scale.y, obj.scale.z,
                    obj.routes, obj.settings);
    }
    std::printf("\n");

    // Areas (AREA)
    std::printf("--- AREA (Areas): %zu entries ---\n",
                m_data.areas.size());
    for (size_t i = 0; i < m_data.areas.size(); i++) {
        const auto& area = m_data.areas[i];
        std::printf("  [%3zu] Shape=%u  Type=%u  Pos(%.1f, %.1f, %.1f)"
                    "  Params(%.1f, %.1f, %.1f)\n",
                    i, area.shapeType, area.areaType,
                    area.position.x, area.position.y, area.position.z,
                    area.param1, area.param2, area.param3);
    }
    std::printf("\n");

    // Point Paths (POTI)
    std::printf("--- POTI (Routes): %zu paths ---\n",
                m_data.paths.size());
    for (size_t i = 0; i < m_data.paths.size(); i++) {
        const auto& path = m_data.paths[i];
        std::printf("  Path %zu: %zu points\n", i, path.points.size());
        for (size_t j = 0; j < path.points.size() && j < 5; j++) {
            const auto& pt = path.points[j];
            std::printf("    [%zu] (%.1f, %.1f, %.1f) p1=%.2f p2=%.2f\n",
                        j, pt.position.x, pt.position.y, pt.position.z,
                        pt.param1, pt.param2);
        }
        if (path.points.size() > 5) {
            std::printf("    ... and %zu more points\n",
                        path.points.size() - 5);
        }
    }
    std::printf("\n");

    // Camera Paths (CAME)
    std::printf("--- CAME (Camera Paths): %zu paths ---\n",
                m_data.cameras.size());
    for (size_t i = 0; i < m_data.cameras.size(); i++) {
        const auto& cam = m_data.cameras[i];
        std::printf("  Camera Path %zu: %zu points\n", i, cam.points.size());
        for (size_t j = 0; j < cam.points.size() && j < 3; j++) {
            const auto& cp = cam.points[j];
            std::printf("    [%zu] Pos(%.1f, %.1f, %.1f)"
                        "  Tgt(%.1f, %.1f, %.1f)  FOV=%.1f\n",
                        j,
                        cp.position.x, cp.position.y, cp.position.z,
                        cp.target.x, cp.target.y, cp.target.z,
                        cp.fov);
        }
        if (cam.points.size() > 3) {
            std::printf("    ... and %zu more points\n",
                        cam.points.size() - 3);
        }
    }
    std::printf("\n");

    // Lakitu Routes (JGPT)
    std::printf("--- JGPT (Lakitu Routes): %zu paths ---\n",
                m_data.lakituRoutes.size());
    for (size_t i = 0; i < m_data.lakituRoutes.size(); i++) {
        const auto& route = m_data.lakituRoutes[i];
        std::printf("  Lakitu Route %zu: %zu points\n",
                    i, route.points.size());
    }
    std::printf("\n");

    // Item Routes (KNIT)
    std::printf("--- KNIT (Item Routes): %zu paths ---\n",
                m_data.itemRoutes.size());
    for (size_t i = 0; i < m_data.itemRoutes.size(); i++) {
        const auto& route = m_data.itemRoutes[i];
        std::printf("  Item Route %zu: %zu points\n",
                    i, route.points.size());
    }
    std::printf("\n");

    // Checkpoint Links (CHECK)
    std::printf("--- CHECK (Checkpoint Links): %zu entries ---\n",
                m_data.checkLinks.size());
    if (!m_data.checkLinks.empty()) {
        std::printf("  First link: CP%u <-> CP%u\n",
                    m_data.checkLinks[0].checkpointA,
                    m_data.checkLinks[0].checkpointB);
        if (m_data.checkLinks.size() > 1) {
            std::printf("  ... and %zu more links\n",
                        m_data.checkLinks.size() - 1);
        }
    }
    std::printf("\n");

    // Course Physics (CPHY)
    std::printf("--- CPHY (Course Physics): %zu entries ---\n",
                m_data.coursePhysics.size());
    for (size_t i = 0; i < m_data.coursePhysics.size(); i++) {
        const auto& phys = m_data.coursePhysics[i];
        std::printf("  [%3zu] Pos(%.1f, %.1f, %.1f)"
                    "  Params(%.2f, %.2f, %.2f)\n",
                    i,
                    phys.position.x, phys.position.y, phys.position.z,
                    phys.unknown[0], phys.unknown[1], phys.unknown[2]);
    }
    std::printf("\n");

    // Cannon Points (CNPT)
    std::printf("--- CNPT (Cannon Points): %zu entries ---\n",
                m_data.cannonPoints.size());
    for (size_t i = 0; i < m_data.cannonPoints.size(); i++) {
        const auto& cp = m_data.cannonPoints[i];
        std::printf("  [%3zu] Pos(%.1f, %.1f, %.1f)"
                    "  Rot(%.1f, %.1f, %.1f)  Speed=%.1f\n",
                    i,
                    cp.position.x, cp.position.y, cp.position.z,
                    cp.rotation.x, cp.rotation.y, cp.rotation.z,
                    cp.speed);
    }
    std::printf("\n");

    // Mission Points (MSPT)
    std::printf("--- MSPT (Mission Points): %zu entries ---\n",
                m_data.missionPoints.size());
    for (size_t i = 0; i < m_data.missionPoints.size(); i++) {
        const auto& mp = m_data.missionPoints[i];
        std::printf("  [%3zu] Pos(%.1f, %.1f, %.1f)\n",
                    i, mp.position.x, mp.position.y, mp.position.z);
    }
    std::printf("\n");

    std::printf("============================================================\n");
}

} // namespace Loaders