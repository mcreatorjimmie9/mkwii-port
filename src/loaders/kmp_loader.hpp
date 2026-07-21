#pragma once
// =============================================================================
// kmp_loader.hpp — KMP (Course Map Parameter) Binary Loader
// =============================================================================
//
// Parses Mario Kart Wii KMP course data files. KMP files contain all
// track metadata: start positions, checkpoints, objects, areas, routes,
// camera paths, physics parameters, and checkpoint linking tables.
//
// KMP files are big-endian (Wii PowerPC) and consist of sequential
// sections, each starting with a 4-byte magic, 2-byte padding, and
// 2-byte entry count (big-endian uint16).
//
// Typical section order in a KMP file:
//   KTPJ (Header) → KCPO (Checkpoints) → KTP (Start Positions) →
//   GOBJ (Objects) → AREA (Areas) → POTI (Routes) → CAME (Cameras) →
//   JGPT (Lakitu Routes) → CPHY (Physics) → CNPT (Cannon Points) →
//   KNIT (Item Routes) → MSPT (Mission Points) → RPKT (Replay) →
//   CHECK (Checkpoint Links)
//
// Not all sections are present in every track. The loader gracefully
// skips any missing or unknown sections.
//
// Usage:
//   Loaders::KmpLoader loader;
//   if (loader.loadFromFile("course.kmp")) {
//       const auto& data = loader.getData();
//       // access data.startPositions, data.objects, etc.
//   }
//
// Dependencies: rk_types.h (u8, u16, u32, f32), C++17 standard library
// No external library dependencies.
// =============================================================================

#include <vector>
#include <string>
#include <cstdio>
#include <cstring>

// Pull in Wii SDK type aliases (u8, u16, u32, s32, f32, etc.)
// rk_types.h is in the include path via CMake (src/modules/)
#include "rk_types.h"

namespace Loaders {

// =============================================================================
// Vec3 — 3-component floating-point vector
// =============================================================================
struct Vec3 {
    f32 x = 0.0f;
    f32 y = 0.0f;
    f32 z = 0.0f;
};

// =============================================================================
// KmpEntry — Container for all parsed KMP section data
// =============================================================================
struct KmpEntry {

    // -------------------------------------------------------------------------
    // KTPJ — Course Header (1 entry, 0x60 bytes)
    // -------------------------------------------------------------------------
    // The header contains global course settings. The first 4 bytes are the
    // magic "RKMD" (Race Kart Map Data). Remaining fields include lap count,
    // speed setting, engine class, and other race configuration parameters.
    // We store the full 0x60 bytes for forward compatibility.
    struct Header {
        char magic[4] = {'\0', '\0', '\0', '\0'};  // Should be "RKMD"
        u8  data[0x5C] = {};                         // Raw header data after magic
    } header;

    // -------------------------------------------------------------------------
    // KTP — Start Positions (0x2C bytes per entry, typically 12 for 12 racers)
    // -------------------------------------------------------------------------
    // Defines the grid positions where racers start the race.
    // Each entry: vec3 position (0x0C) + vec3 rotation (0x0C) + 0x0C other fields
    // At offset 0x24 within the entry is the player index (u16).
    struct StartPosition {
        Vec3 position;       // Grid world position
        Vec3 rotation;       // Facing direction (Euler angles in degrees)
        u16  playerIndex = 0;  // 0-11 for 12 player slots
    };
    std::vector<StartPosition> startPositions;

    // -------------------------------------------------------------------------
    // KCPO — Checkpoint Groups (0x30 bytes per entry)
    // -------------------------------------------------------------------------
    // Checkpoint groups define the invisible volumes used for lap counting
    // and off-track detection. Each is an oriented bounding box defined by
    // position, rotation, and scale.
    // Layout: vec3 pos (0x0C) + vec3 rot (0x0C) + vec2 scale (0x08) + 0x08 other
    struct CheckpointGroup {
        Vec3 position;           // Center of the checkpoint volume
        Vec3 rotation;           // Orientation of the checkpoint volume
        f32  scaleX = 0.0f;     // Width of the checkpoint
        f32  scaleZ = 0.0f;     // Depth of the checkpoint
        u16  checkpointId = 0;  // Checkpoint identifier
    };
    std::vector<CheckpointGroup> checkpoints;

    // -------------------------------------------------------------------------
    // GOBJ — Global Objects (0x40 bytes per entry)
    // -------------------------------------------------------------------------
    // Places 3D objects (item boxes, ramps, moving platforms, etc.) on the
    // course. Each entry references an object by ID and specifies transform,
    // route attachment, and additional settings.
    // Layout: u16 objectId + u16 positionId + vec3 pos + vec3 rot + vec3 scale
    //         + u16 routes + u16 settings + 0x08 params
    struct GlobalObject {
        u16  objectId = 0;       // Object type identifier
        u16  positionId = 0;    // Position ID (route point or group)
        Vec3 position;           // World position
        Vec3 rotation;           // World rotation (Euler angles)
        Vec3 scale;              // Scale factors
        u16  routes = 0;        // Route index (if object moves along a path)
        u16  settings = 0;      // Object-specific settings bitmask
        u8   rawParams[8] = {};  // Additional per-object parameters
    };
    std::vector<GlobalObject> objects;

    // -------------------------------------------------------------------------
    // AREA — Areas (0x30 bytes per entry)
    // -------------------------------------------------------------------------
    // Defines trigger volumes on the course (e.g., water, lava, off-road,
    // boost pads, cannon triggers). ShapeType determines the geometry
    // (box, cylinder, sphere). AreaType determines the gameplay effect.
    // Layout: u8 shapeType + u8 areaType + padding + vec3 pos + params
    struct Area {
        u8  shapeType = 0;      // Shape: 0=box, 1=cylinder, 2=sphere
        u8  areaType = 0;       // Gameplay effect type
        Vec3 position;           // Center of the area volume
        f32 param1 = 0.0f;      // Shape parameter (e.g. radius, width)
        f32 param2 = 0.0f;      // Shape parameter (e.g. height, depth)
        f32 param3 = 0.0f;      // Shape parameter (e.g. length)
        u16 unknown = 0;        // Additional unknown field
    };
    std::vector<Area> areas;

    // -------------------------------------------------------------------------
    // POTI — Point Paths / Routes (variable size per entry)
    // -------------------------------------------------------------------------
    // General-purpose routes used for object movement, AI paths, etc.
    // Each path starts with a u16 point count, followed by point entries.
    // Each point: vec3 position (0x0C) + f32 param1 (0x04) + f32 param2 (0x04)
    struct PathPoint {
        Vec3 position;       // Point world position
        f32  param1 = 0.0f;  // Interpolation parameter or speed
        f32  param2 = 0.0f;  // Additional parameter
    };

    struct Path {
        std::vector<PathPoint> points;
    };
    std::vector<Path> paths;

    // -------------------------------------------------------------------------
    // CAME — Camera Animation Paths (variable size per entry)
    // -------------------------------------------------------------------------
    // Defines camera fly-through animations (e.g. course intro, replays).
    // Each camera path: u16 point count + per-point entries.
    // Each point: vec3 pos (0x0C) + vec3 rot (0x0C) + vec3 target (0x0C) + f32 fov (0x04)
    // Total per point: 0x28 bytes
    struct CameraPoint {
        Vec3 position;   // Camera world position
        Vec3 rotation;   // Camera rotation (Euler angles)
        Vec3 target;     // Look-at target position
        f32  fov = 0.0f; // Field of view in degrees
    };

    struct CameraPath {
        std::vector<CameraPoint> points;
    };
    std::vector<CameraPath> cameras;

    // -------------------------------------------------------------------------
    // JGPT — Lakitu (Rescue) Routes (same format as POTI)
    // -------------------------------------------------------------------------
    // Defines the paths Lakitu follows when rescuing a fallen kart.
    std::vector<Path> lakituRoutes;

    // -------------------------------------------------------------------------
    // KNIT — Item Routes (same format as POTI)
    // -------------------------------------------------------------------------
    // Defines paths for moving item boxes (e.g. on DK Summit, Maple Treeway).
    std::vector<Path> itemRoutes;

    // -------------------------------------------------------------------------
    // CHECK — Checkpoint Links (4 bytes per entry)
    // -------------------------------------------------------------------------
    // Defines the adjacency graph between checkpoint groups. Used by the
    // game to determine valid lap progress (e.g. preventing shortcutting).
    // Layout: u16 checkpointA + u16 checkpointB + u8 key + u8 padding
    // Note: The standard CHECK entry is 4 bytes total:
    //   [0x00] u16 checkpointA — first checkpoint ID
    //   [0x02] u16 checkpointB — second checkpoint ID
    //   (key byte is embedded in the high bits or as part of a 4-byte struct)
    // Actually the format is: u16 checkpointA, u16 checkpointB (4 bytes total).
    // Some references include a key byte — we store it for completeness.
    struct CheckLink {
        u16 checkpointA = 0;  // First checkpoint in the link
        u16 checkpointB = 0;  // Second checkpoint in the link
        u8  key = 0;          // Link key (direction/mask)
    };
    std::vector<CheckLink> checkLinks;

    // -------------------------------------------------------------------------
    // CPHY — Course Physics (0x1C bytes per entry)
    // -------------------------------------------------------------------------
    // Physics parameters for the course (e.g. gravity overrides, friction
    // zones, speed modifiers). Each entry is associated with a position.
    struct CoursePhysics {
        Vec3 position;           // World position for this physics zone
        f32 unknown[3] = {};    // Physics parameters (gravity, friction, etc.)
    };
    std::vector<CoursePhysics> coursePhysics;

    // -------------------------------------------------------------------------
    // CNPT — Cannon Points (0x1C bytes per entry)
    // -------------------------------------------------------------------------
    // Defines cannon launch points on the course (e.g. DK Summit, Grumble Volcano).
    // When a kart enters, it gets launched to a target position.
    struct CannonPoint {
        Vec3 position;      // Cannon entry position
        Vec3 rotation;      // Cannon aim direction
        f32 speed = 0.0f;   // Launch speed multiplier
    };
    std::vector<CannonPoint> cannonPoints;

    // -------------------------------------------------------------------------
    // MSPT — Mission Points (0x1C bytes per entry)
    // -------------------------------------------------------------------------
    // Used in mission mode. Defines objective locations and parameters.
    struct MissionPoint {
        Vec3 position;      // Objective position
        f32 unknown[3] = {}; // Mission parameters
    };
    std::vector<MissionPoint> missionPoints;
};

// =============================================================================
// KmpLoader — Parses raw KMP binary data into structured KmpEntry
// =============================================================================
class KmpLoader {
public:
    KmpLoader() = default;
    ~KmpLoader() = default;

    // Non-copyable, movable
    KmpLoader(const KmpLoader&) = delete;
    KmpLoader& operator=(const KmpLoader&) = delete;
    KmpLoader(KmpLoader&&) = default;
    KmpLoader& operator=(KmpLoader&&) = default;

    /// Parse KMP data from a raw byte buffer (e.g. extracted from SZS archive).
    /// Returns true on success, false on unrecoverable error.
    /// Partial data is still accessible via getData() even on failure.
    bool loadFromMemory(const std::vector<u8>& data);

    /// Parse a KMP file directly from disk.
    /// Returns true on success (file read + parse), false otherwise.
    bool loadFromFile(const char* path);

    /// Access the parsed course data.
    const KmpEntry& getData() const { return m_data; }

    /// Print a human-readable summary of all loaded sections to stdout.
    /// Useful for debugging and verification during development.
    void printSummary() const;

private:
    // -- Section parsing --
    /// Identify and dispatch a single section starting at sectionStart.
    /// remainingSize is the number of bytes available from sectionStart
    /// to the end of the KMP data.
    bool parseSection(const u8* sectionStart, u32 remainingSize);

    // -- Individual section parsers --
    void parseKTPJ(const u8* data, u16 count, u32 maxSize);
    void parseKTP(const u8* data, u16 count, u32 maxSize);
    void parseKCPO(const u8* data, u16 count, u32 maxSize);
    void parseGOBJ(const u8* data, u16 count, u32 maxSize);
    void parseAREA(const u8* data, u16 count, u32 maxSize);
    void parsePOTI(const u8* data, u16 count, u32 maxSize);
    void parseCAME(const u8* data, u16 count, u32 maxSize);
    void parseJGPT(const u8* data, u16 count, u32 maxSize);
    void parseKNIT(const u8* data, u16 count, u32 maxSize);
    void parseCHECK(const u8* data, u16 count, u32 maxSize);
    void parseCPHY(const u8* data, u16 count, u32 maxSize);
    void parseCNPT(const u8* data, u16 count, u32 maxSize);
    void parseMSPT(const u8* data, u16 count, u32 maxSize);
    void parseRPKT(const u8* data, u16 count, u32 maxSize);

    // -- Generic path/route parser (POTI, JGPT, KNIT share the same format) --
    std::vector<KmpEntry::Path> parsePathSection(const u8* data, u16 count, u32 maxSize);

    // -- Big-endian read helpers --
    /// Read a big-endian 32-bit unsigned integer.
    u32 readBE32(const u8* p) const;

    /// Read a big-endian 16-bit unsigned integer.
    u16 readBE16(const u8* p) const;

    /// Read a big-endian 32-bit float (IEEE 754).
    f32 readBE32f(const u8* p) const;

    /// Reinterpret a big-endian float without byte-swapping on BE hosts.
    /// On little-endian hosts (x86/x64), this performs the necessary swap.
    static f32 swapBE32f(const u8* p);

    // -- Bounds checking helper --
    /// Check if there are at least `needed` bytes available from pointer `p`
    /// within the section data of size `maxSize`.
    static bool canRead(const u8* p, u32 needed, const u8* sectionBase, u32 maxSize);

    KmpEntry m_data;
};

} // namespace Loaders