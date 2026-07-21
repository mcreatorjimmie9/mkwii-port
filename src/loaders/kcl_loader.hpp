#pragma once
// =============================================================================
// kcl_loader.hpp — KCL (Course Collision) Binary Loader
// =============================================================================
//
// Parses Mario Kart Wii KCL collision data files. KCL files define the
// triangle-mesh collision geometry for tracks, including surface type
// attributes (road, boost, off-road, wall, etc.) used by the physics
// and gameplay systems.
//
// KCL files are big-endian (Wii PowerPC) and use an octree spatial index
// for efficient collision queries during gameplay.
//
// --- File structure (community-documented, partially verified) ---
//
// The file begins with a small header block, followed by the collision
// prism (triangle) array, followed by the octree spatial index.
//
// KCL Header (exact layout has some ambiguity in community docs):
//   The header contains offsets/sizes pointing to the triangle data and
//   the octree. Different community sources disagree on the exact field
//   layout, so this loader uses heuristic scanning to locate the triangle
//   data.
//
// Collision Prism / Triangle (most commonly 0x1C = 28 bytes each):
//   [0x00] f32  vertexA.x       — X coordinate of vertex A
//   [0x04] f32  vertexA.y       — Y coordinate of vertex A
//   [0x08] f32  vertexA.z       — Z coordinate of vertex A
//   [0x0C] f32  vertexB.x       — X coordinate of vertex B
//   [0x10] f32  vertexB.y       — Y coordinate of vertex B
//   [0x14] f32  vertexB.z       — Z coordinate of vertex C
//   [0x18] f32  vertexC.x       — X coordinate of vertex C
//   [0x1C] f32  vertexC.y       — Y coordinate of vertex C
//   [0x20] f32  vertexC.z       — Z coordinate of vertex C
//   [0x24] u16  collisionType   — KCL surface attribute flags
//   [0x26] u16  normalIndex     — Index into normal vector table (or extra)
//   Total: 0x28 = 40 bytes per triangle
//
//   NOTE: Some sources describe the vertices as 3x s16 fixed-point pairs
//   (14 bytes for 3 vertices), making each prism 0x1C = 28 bytes. Both
//   layouts exist in the wild. This loader attempts the f32 layout first
//   (40 bytes), then falls back to the s16 fixed-point layout (28 bytes).
//
//   IMPORTANT: The definitive MKWii KCL format uses a prism encoding where
//   vertices are stored relative to each other as s16 offsets. However,
//   since exact bit layout varies across community docs, this loader
//   provides a robust parsing pipeline with heuristic detection.
//
// --- KCL Surface Type Flags (collisionType bitmask) ---
//   These flags determine the gameplay effect when a kart contacts the
//   triangle surface. Multiple flags can be OR'd together.
//
// --- Octree ---
//   After the triangle array, an octree structure enables O(log n) spatial
//   queries. The octree format is not fully parsed in this version; raw
//   bytes are preserved in getRawData() for later refinement.
//
// Usage:
//   Loaders::KclLoader loader;
//   if (loader.loadFromFile("course.kcl")) {
//       loader.printSummary();
//       const auto& tris = loader.getTriangles();
//       // Use collision triangles for physics...
//   }
//
// Dependencies: rk_types.h (u8, u16, u32, s32, f32), C++17 standard library
// No external library dependencies.
// =============================================================================

#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>

// Pull in Wii SDK type aliases (u8, u16, u32, s32, f32, etc.)
// rk_types.h is in the include path via CMake (src/modules/)
#include "rk_types.h"

namespace Loaders {

// =============================================================================
// KCL-specific Vec3 — 3-component floating-point vector for collision verts
// =============================================================================
// NOTE: kmp_loader.hpp also defines a Vec3. We use a separate struct here
// to avoid ODR issues if both headers are included together. The types are
// layout-compatible (3 x f32).
// =============================================================================
struct KclVec3 {
    f32 x = 0.0f;
    f32 y = 0.0f;
    f32 z = 0.0f;
};

// =============================================================================
// KCL Surface Type Flags
// =============================================================================
// These bit flags are stored in the collisionType field of each triangle.
// They determine what happens when a kart touches that surface.
// Flag assignments are based on community documentation and may not be
// 100% accurate for all bits. The names reflect known MKWii behavior.
// =============================================================================
namespace KCLType {
    constexpr u16 ROAD             = 0x0001;  // Normal drivable road surface
    constexpr u16 OFF_ROAD         = 0x0002;  // Off-road (grass, sand) — slows kart
    constexpr u16 BOOST            = 0x0004;  // Boost pad / boost panel
    constexpr u16 JUMP             = 0x0008;  // Jump pad / ramp trigger
    constexpr u16 ITEM             = 0x0010;  // Item box surface
    constexpr u16 WALL             = 0x0020;  // Solid wall — kart bounces off
    constexpr u16 WALL_SLOW        = 0x0040;  // Wall that also slows kart
    constexpr u16 INVISIBLE_WALL   = 0x0080;  // Invisible barrier wall
    constexpr u16 DEAD_ZONE        = 0x0100;  // Fall-off / out-of-bounds zone
    constexpr u16 FLOOR_EFFECT     = 0x0200;  // Floor with special effect (ice, etc.)
    constexpr u16 ROAD_HALF_PIPE   = 0x0400;  // Half-pipe road (Moo Moo Meadows)
    constexpr u16 ROAD_SLIPPERY    = 0x0800;  // Slippery road surface (ice)
    constexpr u16 KART_SPIN        = 0x1000;  // Causes kart to spin out
    constexpr u16 KART_MISSILE     = 0x2000;  // Missile / cannon trigger
    constexpr u16 GRAVITY          = 0x4000;  // Gravity-altering surface
    constexpr u16 BOOST_PAD        = 0x8000;  // Boost pad (alternative flag)
} // namespace KCLType

// =============================================================================
// KclTriangle — A single collision triangle / prism
// =============================================================================
struct KclTriangle {
    KclVec3 vertexA;       // First vertex position (world space)
    KclVec3 vertexB;       // Second vertex position (world space)
    KclVec3 vertexC;       // Third vertex position (world space)
    u16 collisionType = 0; // KCL surface attribute flags (see KCLType namespace)
    u16 normalIndex = 0;   // Index into normal table, or additional flags
};

// =============================================================================
// KclParseResult — Metadata about the parse attempt
// =============================================================================
struct KclParseResult {
    u32 headerSize = 0;        // Detected/estimated header size in bytes
    u32 triangleOffset = 0;    // Offset where triangle data begins
    u32 triangleCount = 0;     // Number of triangles parsed
    u32 triangleStride = 0;    // Bytes per triangle used during parsing
    u32 octreeOffset = 0;      // Offset where octree data begins (0 if unknown)
    u32 octreeSize = 0;        // Size of octree region in bytes
    bool usedHeuristic = false; // True if triangle detection used heuristics
    bool parseSuccess = false;  // True if at least some triangles were parsed
};

// =============================================================================
// KclLoader — Parses raw KCL binary data into structured triangle arrays
// =============================================================================
class KclLoader {
public:
    KclLoader();
    ~KclLoader() = default;

    // Non-copyable, movable
    KclLoader(const KclLoader&) = delete;
    KclLoader& operator=(const KclLoader&) = delete;
    KclLoader(KclLoader&&) = default;
    KclLoader& operator=(KclLoader&&) = default;

    /// Parse KCL data from a raw byte buffer (e.g. extracted from SZS archive).
    /// Returns true if triangles were successfully parsed.
    /// Partial data is still accessible via getTriangles() even on failure.
    bool loadFromMemory(const std::vector<u8>& data);

    /// Parse a KCL file directly from disk.
    /// Returns true on success (file read + parse), false otherwise.
    bool loadFromFile(const char* path);

    /// Access the parsed collision triangles.
    const std::vector<KclTriangle>& getTriangles() const { return m_triangles; }

    /// Get the number of parsed triangles.
    u32 getTriangleCount() const { return static_cast<u32>(m_triangles.size()); }

    /// Get the raw binary data for debug/inspection/refinement.
    const std::vector<u8>& getRawData() const { return m_rawData; }

    /// Get parse result metadata (header size, offsets, stride used, etc.)
    const KclParseResult& getParseResult() const { return m_result; }

    /// Print a human-readable summary of the loaded KCL to stdout.
    /// Includes header info, triangle count, and first few triangles.
    void printSummary() const;

    /// Debug: dump hex bytes of the first numBytes of raw data to stdout.
    /// Useful for format investigation and reverse engineering.
    void debugDump(u32 numBytes = 256) const;

private:
    // -- Parsing stages --
    /// Attempt to parse the KCL header to locate data sections.
    /// Returns true if header was parsed successfully.
    bool parseHeader();

    /// Attempt to parse collision triangles using the detected layout.
    /// Tries multiple stride values and picks the most plausible one.
    /// Returns true if at least one valid triangle was parsed.
    bool parseTriangles();

    // -- Stride-specific triangle parsers --
    /// Try parsing triangles at stride 0x28 (40 bytes): 3 x vec3(f32) + 2 x u16
    /// This is the most commonly cited layout in community docs.
    bool parseTriangles40(u32 offset, u32 remainingBytes, u32& outCount);

    /// Try parsing triangles at stride 0x1C (28 bytes): prism encoding with
    /// s16 fixed-point vertex offsets. Used in some KCL variants.
    bool parseTriangles28(u32 offset, u32 remainingBytes, u32& outCount);

    /// Heuristic: scan for plausible float-vector triplets to auto-detect
    /// where the triangle data begins and what stride is used.
    /// Sets m_result.triangleOffset and m_result.triangleStride on success.
    bool heuristicDetectLayout();

    // -- Validation helpers --
    /// Check if a float value is a plausible MKWii coordinate.
    /// MKWii tracks typically span [-10000, 10000] on each axis.
    static bool isPlausibleCoord(f32 val);

    /// Check if a u16 value is a plausible KCL collision type.
    /// Plausible values have at least one known flag bit set and don't
    /// exceed the 16-bit range of defined flags.
    static bool isPlausibleCollisionType(u16 val);

    // -- Big-endian read helpers --
    /// Read a big-endian 32-bit unsigned integer.
    u32 readBE32(const u8* p) const;

    /// Read a big-endian 16-bit unsigned integer.
    u16 readBE16(const u8* p) const;

    /// Read a big-endian 32-bit float (IEEE 754).
    f32 readBE32f(const u8* p) const;

    /// Read a big-endian 16-bit signed integer.
    s16 readBE16s(const u8* p) const;

    /// Reinterpret a big-endian float without byte-swapping on BE hosts.
    /// On little-endian hosts (x86/x64), this performs the necessary swap.
    static f32 swapBE32f(const u8* p);

    // -- Data members --
    std::vector<u8> m_rawData;         // Raw file bytes (preserved for inspection)
    std::vector<KclTriangle> m_triangles; // Parsed collision triangles
    KclParseResult m_result;           // Metadata about the parse attempt
};

} // namespace Loaders