// ============================================================================
// Utility.hpp — EGG::Utility string ops, CRC32, SZS decompression, RNG
// Address range: 0x80172000 - 0x80174000 (DOL)
// Corresponding ELF range: ~0x805C0E30 - 0x805C8E30
//
// General-purpose utility functions used throughout MKWii:
//   - String copy/compare/format (safe wrappers)
//   - CRC32 calculation (for save data integrity)
//   - SZS/LZ77 decompression (for archive files)
//   - Mersenne Twister RNG variant
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================
#pragma once

#include "rk_common.h"

namespace EGG {
namespace Utility {

// ============================================================================
// String utilities
// ============================================================================

// @addr 0x80172008
s32 strCopy(char* dst, const char* src, s32 maxLen);
// @addr 0x80172060
s32 strNCopy(char* dst, const char* src, u32 len);
// @addr 0x801720A0
s32 strCompare(const char* a, const char* b);
// @addr 0x80172100
s32 strNCompare(const char* a, const char* b, u32 len);
// @addr 0x80172160
s32 strLength(const char* str);
// @addr 0x801721A0
const char* strFind(const char* str, char c);
// @addr 0x80172200
const char* strFindSubstr(const char* str, const char* sub);
// @addr 0x80172280
char* strFormat(char* buf, u32 size, const char* fmt, ...);
// @addr 0x80172340
s32 strToInt(const char* str);
// @addr 0x801723A0
f32 strToFloat(const char* str);

// ============================================================================
// CRC32 — Table-driven CRC-32/ISO-HDLC (polynomial 0xEDB88320)
// ============================================================================

// @addr 0x80172400
u32 crc32(const void* data, u32 length);
// @addr 0x80172480
u32 crc32Update(u32 crc, const void* data, u32 length);
// @addr 0x80172500
void crc32InitTable();

// ============================================================================
// SZS / LZ77 decompression
// ============================================================================

// @addr 0x80172580
u32 decodeSZS(const void* src, void* dst, u32 dstSize);
// @addr 0x80172640
u32 getSZSDecompressedSize(const void* src);
// @addr 0x801726A0
bool isSZSCompressed(const void* src);
// @addr 0x80172700
int encodeSZS(const u8* src, u8* dst, int srcSize);

// ============================================================================
// Mersenne Twister RNG (MT19937 variant)
// ============================================================================

class MTRandom {
public:
    // @addr 0x80172780
    MTRandom();
    // @addr 0x80172800
    ~MTRandom();

    // @addr 0x80172840
    void init(u32 seed);
    // @addr 0x80172900
    u32 next();
    // @addr 0x80172980
    u32 nextRange(u32 max);
    // @addr 0x80172A00
    f32 nextFloat();   // Returns [0.0, 1.0)
    // @addr 0x80172A80
    void shuffle(void* array, u32 count, u32 elemSize);

private:
    static const u32 N = 624;
    static const u32 M = 397;
    static const u32 MATRIX_A = 0x9908B0DF;
    static const u32 UPPER_MASK = 0x80000000;
    static const u32 LOWER_MASK = 0x7FFFFFFF;

    u32 mMt[N];        // 0x00 — state array
    u32 mIndex;        // 0x9C0 — current position
};

// ============================================================================
// Additional utility functions
// ============================================================================

// @addr 0x80172B00
u32 calcHash(const void* data, u32 length);
// @addr 0x80172B80
void memClear(void* dst, u32 size);
// @addr 0x80172BC0
void memSet(void* dst, u8 value, u32 size);
// @addr 0x80172C00
void memCopy(const void* src, void* dst, u32 size);
// @addr 0x80172C40
bool memCompare(const void* a, const void* b, u32 size);
// @addr 0x80172CA0
u16 swapEndian16(u16 val);
// @addr 0x80172CC0
u32 swapEndian32(u32 val);

} // namespace Utility
} // namespace EGG