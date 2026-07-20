// ============================================================================
// Utility.cpp — EGG::Utility string ops, CRC32, SZS decompression, RNG
// Address range: 0x80172000 - 0x80174000 (DOL)
// Function count: 70
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================

#include "Utility.hpp"
#include <cstring>
#include <cstdarg>
#include <cstdlib>
#include <cstdio>

namespace EGG {
namespace Utility {

// ============================================================================
// CRC32 table (pre-computed for polynomial 0xEDB88320)
// ============================================================================

static u32 sCrc32Table[256];
static bool sCrc32TableInitialized = false;

// @addr 0x80172500 — Build the CRC32 lookup table
void crc32InitTable() {
    if (sCrc32TableInitialized) return;
    for (u32 i = 0; i < 256; i++) {
        u32 crc = i;
        for (int j = 0; j < 8; j++) {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xEDB88320u;
            else
                crc >>= 1;
        }
        sCrc32Table[i] = crc;
    }
    sCrc32TableInitialized = true;
}

// ============================================================================
// String utilities
// ============================================================================

// @addr 0x80172008 — Safe string copy with max length
s32 strCopy(char* dst, const char* src, s32 maxLen) {
    if (dst == nullptr || src == nullptr || maxLen <= 0) return -1;
    s32 i = 0;
    while (i < maxLen - 1 && src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return i;
}

// @addr 0x80172060 — Copy exactly len characters
s32 strNCopy(char* dst, const char* src, u32 len) {
    if (dst == nullptr || src == nullptr) return -1;
    for (u32 i = 0; i < len; i++) {
        dst[i] = src[i];
    }
    return (s32)len;
}

// @addr 0x801720A0 — String compare
s32 strCompare(const char* a, const char* b) {
    if (a == nullptr || b == nullptr) return -1;
    while (*a && *b) {
        if (*a != *b) return (s32)(u8)*a - (s32)(u8)*b;
        a++;
        b++;
    }
    return (s32)(u8)*a - (s32)(u8)*b;
}

// @addr 0x80172100 — String compare with max length
s32 strNCompare(const char* a, const char* b, u32 len) {
    if (a == nullptr || b == nullptr) return -1;
    for (u32 i = 0; i < len; i++) {
        if (a[i] != b[i]) return (s32)(u8)a[i] - (s32)(u8)b[i];
        if (a[i] == '\0') break;
    }
    return 0;
}

// @addr 0x80172160 — String length
s32 strLength(const char* str) {
    if (str == nullptr) return 0;
    s32 len = 0;
    while (str[len] != '\0') len++;
    return len;
}

// @addr 0x801721A0 — Find first occurrence of character
const char* strFind(const char* str, char c) {
    if (str == nullptr) return nullptr;
    while (*str) {
        if (*str == c) return str;
        str++;
    }
    return nullptr;
}

// @addr 0x80172200 — Find substring
const char* strFindSubstr(const char* str, const char* sub) {
    if (str == nullptr || sub == nullptr) return nullptr;
    if (*sub == '\0') return str;
    for (s32 i = 0; str[i] != '\0'; i++) {
        s32 j = 0;
        while (sub[j] != '\0' && str[i + j] == sub[j]) j++;
        if (sub[j] == '\0') return &str[i];
    }
    return nullptr;
}

// @addr 0x80172280 — Format string (snprintf wrapper)
char* strFormat(char* buf, u32 size, const char* fmt, ...) {
    if (buf == nullptr || fmt == nullptr || size == 0) return nullptr;
    va_list args;
    va_start(args, fmt);
    vsnprintf(buf, size, fmt, args);
    va_end(args);
    return buf;
}

// @addr 0x80172340 — Parse integer from string
s32 strToInt(const char* str) {
    if (str == nullptr) return 0;
    return (s32)strtol(str, nullptr, 10);
}

// @addr 0x801723A0 — Parse float from string
f32 strToFloat(const char* str) {
    if (str == nullptr) return 0.0f;
    return (f32)strtod(str, nullptr);
}

// ============================================================================
// CRC32
// ============================================================================

// @addr 0x80172400 — Compute CRC32 of a buffer
u32 crc32(const void* data, u32 length) {
    crc32InitTable();
    return crc32Update(0xFFFFFFFF, data, length) ^ 0xFFFFFFFF;
}

// @addr 0x80172480 — Update running CRC32
u32 crc32Update(u32 crc, const void* data, u32 length) {
    crc32InitTable();
    const u8* p = static_cast<const u8*>(data);
    for (u32 i = 0; i < length; i++) {
        crc = sCrc32Table[(crc ^ p[i]) & 0xFF] ^ (crc >> 8);
    }
    return crc;
}

// ============================================================================
// SZS / LZ77 decompression (Yaz0/SZS format used in Nintendo archives)
// ============================================================================

// @addr 0x80172580 — Decompress SZS data
u32 decodeSZS(const void* src, void* dst, u32 dstSize) {
    if (src == nullptr || dst == nullptr || dstSize == 0) return 0;

    const u8* in = static_cast<const u8*>(src);
    u8* out = static_cast<u8*>(dst);

    // SZS header: 4-byte magic "SZS\0" + 4-byte decompressed size
    // Skip header (assume already validated)
    in += 16; // skip 16-byte header

    u32 srcOffset = 0; // already advanced
    u32 dstOffset = 0;

    u8 flags = 0;
    u8 mask = 0;

    while (dstOffset < dstSize) {
        if (mask == 0) {
            flags = *in++;
            mask = 0x80;
        }

        if (flags & mask) {
            // LZ77 back-reference
            u8 b1 = *in++;
            u8 b2 = *in++;
            u32 offset = ((b1 & 0x0F) << 8) | b2;
            u32 count = (b1 >> 4) + 2;
            if (offset == 0) {
                // Extended length: read one more byte
                count += *in++;
            }
            for (u32 i = 0; i < count && dstOffset < dstSize; i++) {
                out[dstOffset] = out[dstOffset - offset - 1];
                dstOffset++;
            }
        } else {
            // Literal byte
            out[dstOffset++] = *in++;
        }
        mask >>= 1;
    }

    return dstOffset;
}

// @addr 0x80172640 — Get decompressed size from SZS header
u32 getSZSDecompressedSize(const void* src) {
    if (src == nullptr) return 0;
    const u8* p = static_cast<const u8*>(src);
    // Bytes 4-7 of SZS header contain the decompressed size (big-endian)
    return (u32(p[4]) << 24) | (u32(p[5]) << 16) | (u32(p[6]) << 8) | p[7];
}

// @addr 0x801726A0 — Check if data has SZS magic header
bool isSZSCompressed(const void* src) {
    if (src == nullptr) return false;
    const u8* p = static_cast<const u8*>(src);
    // SZS magic: "SZS\0" or "Yaz0"
    return (p[0] == 'S' && p[1] == 'Z' && p[2] == 'S' && p[3] == '\0') ||
           (p[0] == 'Y' && p[1] == 'a' && p[2] == 'z' && p[3] == '0');
}

// @addr 0x80172700 — Encode data to SZS (Boyer-Moore-Horspool variant)
int encodeSZS(const u8* src, u8* dst, int srcSize) {
    (void)src; (void)dst; (void)srcSize;
    // Full SZS encoder — stubbed for now
    return 0;
}

// ============================================================================
// Mersenne Twister RNG
// ============================================================================

// @addr 0x80172780
MTRandom::MTRandom() : mIndex(0) {
    memset(mMt, 0, sizeof(mMt));
}

// @addr 0x80172800
MTRandom::~MTRandom() {}

// @addr 0x80172840 — Initialize with seed
void MTRandom::init(u32 seed) {
    mMt[0] = seed;
    for (u32 i = 1; i < N; i++) {
        mMt[i] = (1812433253u * (mMt[i - 1] ^ (mMt[i - 1] >> 30)) + i);
    }
    mIndex = N;
}

// Internal: generate N new values
static void mtGenerateNumbers(u32 mt[624]) {
    static const u32 MAG01[2] = { 0x0u, 0x9908B0DFu };
    for (u32 i = 0; i < 624; i++) {
        u32 y = (mt[i] & 0x80000000u) | (mt[(i + 1) % 624] & 0x7FFFFFFFu);
        mt[i] = mt[(i + 397) % 624] ^ (y >> 1) ^ MAG01[y & 1u];
    }
}

// @addr 0x80172900 — Generate next random u32
u32 MTRandom::next() {
    if (mIndex >= N) {
        mtGenerateNumbers(mMt);
        mIndex = 0;
    }
    u32 y = mMt[mIndex++];
    // Tempering
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9D2C5680u;
    y ^= (y << 15) & 0xEFC60000u;
    y ^= (y >> 18);
    return y;
}

// @addr 0x80172980 — Generate random u32 in [0, max)
u32 MTRandom::nextRange(u32 max) {
    if (max == 0) return 0;
    return next() % max;
}

// @addr 0x80172A00 — Generate random f32 in [0.0, 1.0)
f32 MTRandom::nextFloat() {
    return (f32)(next() >> 1) / (f32)0x80000000u;
}

// @addr 0x80172A80 — Fisher-Yates shuffle
void MTRandom::shuffle(void* array, u32 count, u32 elemSize) {
    if (array == nullptr || count <= 1 || elemSize == 0) return;
    u8* arr = static_cast<u8*>(array);
    for (u32 i = count - 1; i > 0; i--) {
        u32 j = nextRange(i + 1);
        // Swap elements i and j
        u8 tmp[256]; // stack buffer for swap (max elem size)
        u32 sz = elemSize;
        if (sz > 256) sz = 256; // safety clamp
        memcpy(tmp, arr + i * elemSize, sz);
        memcpy(arr + i * elemSize, arr + j * elemSize, sz);
        memcpy(arr + j * elemSize, tmp, sz);
    }
}

// ============================================================================
// Additional utilities
// ============================================================================

// @addr 0x80172B00 — Simple additive hash
u32 calcHash(const void* data, u32 length) {
    const u8* p = static_cast<const u8*>(data);
    u32 hash = 0;
    for (u32 i = 0; i < length; i++) {
        hash = hash * 31 + p[i];
    }
    return hash;
}

// @addr 0x80172B80
void memClear(void* dst, u32 size) {
    if (dst != nullptr && size > 0) {
        memset(dst, 0, size);
    }
}

// @addr 0x80172BC0
void memSet(void* dst, u8 value, u32 size) {
    if (dst != nullptr && size > 0) {
        memset(dst, value, size);
    }
}

// @addr 0x80172C00
void memCopy(const void* src, void* dst, u32 size) {
    if (src != nullptr && dst != nullptr && size > 0) {
        memcpy(dst, src, size);
    }
}

// @addr 0x80172C40
bool memCompare(const void* a, const void* b, u32 size) {
    if (a == nullptr || b == nullptr) return false;
    return memcmp(a, b, size) == 0;
}

// @addr 0x80172CA0 — Byte-swap u16
u16 swapEndian16(u16 val) {
    return (val >> 8) | (val << 8);
}

// @addr 0x80172CC0 — Byte-swap u32
u32 swapEndian32(u32 val) {
    return ((val >> 24) & 0xFF) |
           ((val >> 8)  & 0xFF00) |
           ((val << 8)  & 0xFF0000) |
           ((val << 24) & 0xFF000000u);
}

// ============================================================================
// Stub functions — remaining addresses in 0x80172D00 - 0x80174000
// ============================================================================

// @addr 0x80172D00
s32 fn_80172D00(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80172D40
u32 fn_80172D40(u32* p) { (void)p; return 0; }
// @addr 0x80172D70
void fn_80172D70(void) {}
// @addr 0x80172DA0
s32 fn_80172DA0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80172DE0
u32 fn_80172DE0(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80172E20
void fn_80172E20(s32 a) { (void)a; }
// @addr 0x80172E50
void fn_80172E50(u32 a) { (void)a; }
// @addr 0x80172E80
void fn_80172E80(s32 a) { (void)a; }
// @addr 0x80172EB0
void fn_80172EB0(u32 a) { (void)a; }
// @addr 0x80172EE0
void fn_80172EE0(s32 a) { (void)a; }
// @addr 0x80172F10
void fn_80172F10(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80172F50
s32 fn_80172F50(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80172F90
u32 fn_80172F90(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80172FD0
void fn_80172FD0(void) {}
// @addr 0x80173000
void fn_80173000(u32 a, u32 b, u32 c) { (void)a; (void)b; (void)c; }
// @addr 0x80173040
s32 fn_80173040(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80173080
void fn_80173080(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x801730C0
s32 fn_801730C0(s32 a) { (void)a; return 0; }
// @addr 0x801730F0
void fn_801730F0(void) {}
// @addr 0x80173120
void fn_80173120(s32 a) { (void)a; }
// @addr 0x80173150
u32 fn_80173150(u32 a) { (void)a; return 0; }
// @addr 0x80173180
void fn_80173180(u32 a) { (void)a; }
// @addr 0x801731B0
s32 fn_801731B0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x801731F0
u32 fn_801731F0(s32 a) { (void)a; return 0; }
// @addr 0x80173220
void fn_80173220(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80173260
void fn_80173260(s32 a) { (void)a; }
// @addr 0x80173290
void fn_80173290(void) {}
// @addr 0x801732C0
s32 fn_801732C0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80173300
void fn_80173300(s32 a, u32 b) { (void)a; (void)b; }

} // namespace Utility
} // namespace EGG