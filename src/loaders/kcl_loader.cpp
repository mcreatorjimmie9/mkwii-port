/**
 * @file kcl_loader.cpp
 * @brief KCL (Course Collision) binary loader — stub implementation.
 *
 * Phase 7 M3 placeholder. Full KCL parsing with octree support will be
 * implemented in a subsequent milestone. This stub allows the build to
 * link and the TrackManager to operate with SZS+KMP only.
 */

#include "kcl_loader.hpp"

#include <fstream>

namespace Loaders {

// =============================================================================
// Big-endian read helpers
// =============================================================================

u32 KclLoader::readBE32(const u8* p) const {
    return (static_cast<u32>(p[0]) << 24) |
           (static_cast<u32>(p[1]) << 16) |
           (static_cast<u32>(p[2]) << 8)  |
            static_cast<u32>(p[3]);
}

u16 KclLoader::readBE16(const u8* p) const {
    return (static_cast<u16>(p[0]) << 8) |
            static_cast<u16>(p[1]);
}

f32 KclLoader::readBE32f(const u8* p) const {
    return swapBE32f(p);
}

s16 KclLoader::readBE16s(const u8* p) const {
    return static_cast<s16>((static_cast<u16>(p[0]) << 8) | static_cast<u16>(p[1]));
}

f32 KclLoader::swapBE32f(const u8* p) {
    u32 raw = (static_cast<u32>(p[0]) << 24) |
              (static_cast<u32>(p[1]) << 16) |
              (static_cast<u32>(p[2]) << 8)  |
               static_cast<u32>(p[3]);
    f32 result;
    std::memcpy(&result, &raw, sizeof(result));
    return result;
}

// =============================================================================
// Construction
// =============================================================================

KclLoader::KclLoader() = default;

// =============================================================================
// Public loading interface
// =============================================================================

bool KclLoader::loadFromFile(const char* path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file.is_open()) return false;

    const auto fileSize = file.tellg();
    if (fileSize <= 0) return false;

    file.seekg(0, std::ios::beg);
    const auto uSize = static_cast<size_t>(fileSize);
    std::vector<u8> buffer(uSize);
    if (!file.read(reinterpret_cast<char*>(buffer.data()),
                   static_cast<std::streamsize>(uSize))) {
        return false;
    }
    return loadFromMemory(buffer);
}

bool KclLoader::loadFromMemory(const std::vector<u8>& data) {
    m_rawData = data;
    m_triangles.clear();
    m_result = KclParseResult{};

    if (data.size() < 32) return false;

    m_result.headerSize = readBE32(data.data() + 0);
    m_result.triangleOffset = readBE32(data.data() + 4);
    m_result.triangleCount = readBE32(data.data() + 8);

    // Attempt structured parsing; fall back to heuristics
    if (!parseHeader()) {
        if (!heuristicDetectLayout()) return false;
    }

    if (!parseTriangles()) return false;

    m_result.parseSuccess = !m_triangles.empty();
    return m_result.parseSuccess;
}

// =============================================================================
// Header parsing (stub — reads basic offset/size fields)
// =============================================================================

bool KclLoader::parseHeader() {
    if (m_rawData.size() < 16) return false;

    m_result.triangleOffset = readBE32(m_rawData.data() + 4);
    m_result.triangleCount  = readBE32(m_rawData.data() + 8);

    // Validate basic sanity
    if (m_result.triangleOffset >= m_rawData.size()) return false;
    if (m_result.triangleCount == 0) return false;

    return true;
}

// =============================================================================
// Triangle parsing
// =============================================================================

bool KclLoader::parseTriangles() {
    const u32 offset = m_result.triangleOffset;
    if (offset >= m_rawData.size()) return false;

    const u32 remaining = static_cast<u32>(m_rawData.size()) - offset;
    u32 count40 = 0;
    u32 count28 = 0;

    // Try 40-byte stride first, then 28-byte
    if (parseTriangles40(offset, remaining, count40)) {
        m_result.triangleStride = 0x28;
        m_result.triangleCount = count40;
        return true;
    }
    if (parseTriangles28(offset, remaining, count28)) {
        m_result.triangleStride = 0x1C;
        m_result.triangleCount = count28;
        return true;
    }

    return false;
}

bool KclLoader::parseTriangles40(u32 offset, u32 remainingBytes, u32& outCount) {
    const u32 stride = 0x28; // 40 bytes per triangle
    outCount = 0;

    if (remainingBytes < stride) return false;

    // Parse up to the declared count or what fits in the buffer
    const u32 maxCount = std::min(m_result.triangleCount,
                                  remainingBytes / stride);

    for (u32 i = 0; i < maxCount; i++) {
        const u8* p = m_rawData.data() + offset + i * stride;

        KclTriangle tri;
        tri.vertexA.x = readBE32f(p + 0x00);
        tri.vertexA.y = readBE32f(p + 0x04);
        tri.vertexA.z = readBE32f(p + 0x08);
        tri.vertexB.x = readBE32f(p + 0x0C);
        tri.vertexB.y = readBE32f(p + 0x10);
        tri.vertexB.z = readBE32f(p + 0x14);
        tri.vertexC.x = readBE32f(p + 0x18);
        tri.vertexC.y = readBE32f(p + 0x1C);
        tri.vertexC.z = readBE32f(p + 0x20);
        tri.collisionType = readBE16(p + 0x24);
        tri.normalIndex   = readBE16(p + 0x26);

        // Skip degenerate or implausible triangles
        if (isPlausibleCoord(tri.vertexA.x) &&
            isPlausibleCoord(tri.vertexA.y) &&
            isPlausibleCoord(tri.vertexA.z) &&
            isPlausibleCoord(tri.vertexB.x) &&
            isPlausibleCoord(tri.vertexB.y) &&
            isPlausibleCoord(tri.vertexB.z) &&
            isPlausibleCoord(tri.vertexC.x) &&
            isPlausibleCoord(tri.vertexC.y) &&
            isPlausibleCoord(tri.vertexC.z)) {
            m_triangles.push_back(tri);
            outCount++;
        }
    }

    return outCount > 0;
}

bool KclLoader::parseTriangles28(u32 offset, u32 remainingBytes, u32& outCount) {
    const u32 stride = 0x1C; // 28 bytes per triangle (prism encoding)
    outCount = 0;

    if (remainingBytes < stride) return false;

    const u32 maxCount = std::min(m_result.triangleCount,
                                  remainingBytes / stride);

    for (u32 i = 0; i < maxCount; i++) {
        const u8* p = m_rawData.data() + offset + i * stride;

        // s16 fixed-point prism encoding (placeholder — full prism decode
        // requires understanding the MKWii-specific bit packing).
        // For now, decode raw s16 values scaled to approximate f32.
        KclTriangle tri;
        tri.vertexA.x = static_cast<f32>(readBE16s(p + 0x00));
        tri.vertexA.y = static_cast<f32>(readBE16s(p + 0x02));
        tri.vertexA.z = static_cast<f32>(readBE16s(p + 0x04));
        tri.vertexB.x = static_cast<f32>(readBE16s(p + 0x06));
        tri.vertexB.y = static_cast<f32>(readBE16s(p + 0x08));
        tri.vertexB.z = static_cast<f32>(readBE16s(p + 0x0A));
        tri.vertexC.x = static_cast<f32>(readBE16s(p + 0x0C));
        tri.vertexC.y = static_cast<f32>(readBE16s(p + 0x0E));
        tri.vertexC.z = static_cast<f32>(readBE16s(p + 0x10));
        tri.collisionType = readBE16(p + 0x14);
        tri.normalIndex   = readBE16(p + 0x16);

        m_triangles.push_back(tri);
        outCount++;
    }

    return outCount > 0;
}

// =============================================================================
// Heuristic detection
// =============================================================================

bool KclLoader::heuristicDetectLayout() {
    // Simple heuristic: scan for the first plausible f32 coordinate
    // triplet at stride-aligned offsets.
    const u32 dataLen = static_cast<u32>(m_rawData.size());

    for (u32 off = 0x20; off + 12 <= dataLen; off += 4) {
        float x = readBE32f(m_rawData.data() + off);
        float y = readBE32f(m_rawData.data() + off + 4);
        float z = readBE32f(m_rawData.data() + off + 8);

        if (isPlausibleCoord(x) && isPlausibleCoord(y) && isPlausibleCoord(z)) {
            m_result.triangleOffset = off;
            m_result.usedHeuristic = true;
            return true;
        }
    }

    return false;
}

// =============================================================================
// Validation helpers
// =============================================================================

bool KclLoader::isPlausibleCoord(f32 val) {
    if (std::isnan(val) || std::isinf(val)) return false;
    return val >= -100000.0f && val <= 100000.0f;
}

bool KclLoader::isPlausibleCollisionType(u16 val) {
    // Zero is plausible (unset/unknown surface).
    if (val == 0) return true;
    // Known flag range: bits 0-15 are defined.
    // Reject values that look like random data (all bits set, etc.)
    return (val & 0xFFFF) != 0xFFFF;
}

// =============================================================================
// Debug output
// =============================================================================

void KclLoader::printSummary() const {
    printf("KCL Loader: %u triangles (stride 0x%02X, offset 0x%04X)%s\n",
           m_result.triangleCount,
           m_result.triangleStride,
           m_result.triangleOffset,
           m_result.usedHeuristic ? " [heuristic]" : "");
}

void KclLoader::debugDump(u32 numBytes) const {
    const u32 dumpLen = std::min(numBytes, static_cast<u32>(m_rawData.size()));
    printf("KCL raw data (first %u bytes):\n", dumpLen);

    for (u32 i = 0; i < dumpLen; i++) {
        printf("%02X ", m_rawData[i]);
        if ((i + 1) % 16 == 0) printf("\n");
    }
    if (dumpLen % 16 != 0) printf("\n");
}

} // namespace Loaders
