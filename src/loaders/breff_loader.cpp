// breff_loader.cpp — BREFF Binary Parser Implementation
// Parses the nw4r::ef::EffectProject format containing emitter templates
// and animation curves for the Mario Kart Wii particle system.

#include "breff_loader.hpp"
#include <cmath>
#include <algorithm>

namespace Loaders {

// ============================================================================
// Big-endian read helpers
// ============================================================================

u16 BreffLoader::readBE16(const u8* p) {
    return (u16(p[0]) << 8) | u16(p[1]);
}

u32 BreffLoader::readBE32(const u8* p) {
    return (u32(p[0]) << 24) | (u32(p[1]) << 16) |
           (u32(p[2]) << 8)  | u32(p[3]);
}

f32 BreffLoader::readBE32f(const u8* p) {
    u32 raw = readBE32(p);
    f32 result;
    __builtin_memcpy(&result, &raw, 4);
    return result;
}

// ============================================================================
// Construction
// ============================================================================

BreffLoader::BreffLoader() {
    m_data = {};
}

BreffLoader::~BreffLoader() {}

// ============================================================================
// loadFromMemory — Parse BREFF from raw bytes
// ============================================================================

bool BreffLoader::loadFromMemory(const std::vector<u8>& data) {
    if (data.size() < 16) return false;

    // Keep a copy of raw data
    m_rawData = data;

    // Validate magic
    if (readBE32(data.data()) != 0x52454646) { // "REFF"
        return false;
    }

    // Parse header
    if (!parseHeader(data.data(), static_cast<u32>(data.size()))) {
        return false;
    }

    // Parse sub-chunks (emitter templates, curves, texture refs)
    parseSubChunks(data.data(), static_cast<u32>(data.size()));

    m_data.valid = true;
    return true;
}

// ============================================================================
// loadFromFile — Read and parse from disk
// ============================================================================

bool BreffLoader::loadFromFile(const char* path) {
    FILE* f = fopen(path, "rb");
    if (!f) return false;

    fseek(f, 0, SEEK_END);
    long fileSize = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (fileSize < 16) {
        fclose(f);
        return false;
    }

    std::vector<u8> buf(static_cast<size_t>(fileSize));
    if (fread(buf.data(), 1, buf.size(), f) != buf.size()) {
        fclose(f);
        return false;
    }
    fclose(f);

    return loadFromMemory(buf);
}

// ============================================================================
// parseHeader — Parse the BREFF file header
// ============================================================================

bool BreffLoader::parseHeader(const u8* data, u32 size) {
    m_data.magic = readBE32(data + 0x00);   // "REFF"
    // u32 sectionSize = readBE32(data + 0x04); // total section size
    u16 bom = readBE16(data + 0x08);
    m_data.version = readBE16(data + 0x0A);
    // u32 dataOffset = readBE32(data + 0x0C);

    if (bom != 0xFEFF) {
        // Little-endian BREFF (unusual but handle gracefully)
    }

    // Count emitter sub-chunks (look for "EFEM" tags)
    m_data.emitterCount = 0;

    // Walk the file looking for sub-chunks
    u32 offset = 0x10; // after header
    while (offset + 8 <= size) {
        u32 tag = readBE32(data + offset);
        u32 chunkSize = readBE32(data + offset + 4);

        if (tag == 0x4546454D) { // "EFEM"
            // Count emitter entries within this chunk
            u32 emitterOffset = offset + 8;
            u16 emitterIdx = 0;
            while (emitterOffset + 8 <= offset + chunkSize) {
                emitterIdx++;
                // Advance past this emitter entry
                u32 entrySize = readBE32(data + emitterOffset + 4);
                if (entrySize == 0 || entrySize > chunkSize) break;
                emitterOffset += entrySize;
            }
            m_data.emitterCount = emitterIdx;
        }

        if (chunkSize == 0 || offset + chunkSize > size) break;
        offset += chunkSize;
    }

    return true;
}

// ============================================================================
// parseSubChunks — Walk all sub-chunks in the BREFF
// ============================================================================

void BreffLoader::parseSubChunks(const u8* data, u32 size) {
    u32 offset = 0x10; // start after the BREFF header

    while (offset + 8 <= size) {
        u32 tag = readBE32(data + offset);
        u32 chunkSize = readBE32(data + offset + 4);

        if (chunkSize == 0 || offset + chunkSize > size) break;

        switch (tag) {
            case 0x4546454D: // "EFEM" — Emitter resources
                parseEmitterChunk(data + offset, chunkSize);
                break;
            case 0x414E494D: // "ANIM" — Animation curves
                parseAnimChunk(data + offset, chunkSize, 0);
                break;
            default:
                // Unknown sub-chunk (texture refs, etc.) — skip
                break;
        }

        offset += chunkSize;
    }
}

// ============================================================================
// parseEmitterChunk — Parse emitter template entries
// ============================================================================

void BreffLoader::parseEmitterChunk(const u8* chunk, u32 chunkSize) {
    u32 offset = 8; // skip "EFEM" tag + size

    while (offset + 8 <= chunkSize) {
        u32 entryTag = readBE32(chunk + offset);
        u32 entrySize = readBE32(chunk + offset + 4);

        if (entrySize == 0 || offset + entrySize > chunkSize) break;

        BreffEmitterResource emitter = {};
        emitter.valid = false;

        // Parse the emitter entry header
        // First 4 bytes of entry data is the entry tag (should be "EFEM" or sub-tag)
        // Following structure: name (null-terminated), then packed parameter blocks
        u32 dataStart = offset + 8;

        // Read emitter name (null-terminated, up to 32 chars)
        u32 nameEnd = dataStart;
        u32 maxName = std::min(entrySize - 8, u32(31));
        while (nameEnd < dataStart + maxName && chunk[nameEnd] != 0) {
            nameEnd++;
        }
        u32 nameLen = nameEnd - dataStart;
        if (nameLen > 0) {
            memcpy(emitter.name, chunk + dataStart, nameLen);
        }
        emitter.name[nameLen] = 0;

        // Try to read common emitter parameters from the entry data
        // The exact layout varies by BREFF version, so we parse what we can
        u32 paramOffset = dataStart + ((nameLen + 1) & ~3); // Align to 4 bytes

        if (paramOffset + 64 <= offset + entrySize) {
            // Attempt to read emitter parameters
            // These are stored as a series of tagged parameter blocks
            // Each block: u32 tag, u32 size, data[size]
            u32 pOff = paramOffset;
            while (pOff + 8 <= offset + entrySize) {
                u32 paramTag = readBE32(chunk + pOff);
                u32 paramSize = readBE32(chunk + pOff + 4);
                if (paramSize == 0 || pOff + paramSize > offset + entrySize) break;

                const u8* paramData = chunk + pOff + 8;

                switch (paramTag) {
                    case 0x45465244: // "EFRD" — Emitter base data
                        if (paramSize >= 16) {
                            emitter.emitRate = readBE32f(paramData + 0);
                            emitter.emitLife = readBE32f(paramData + 4);
                            emitter.maxParticles = readBE16(paramData + 8);
                        }
                        break;
                    case 0x50545250: // "PTRP" — Particle properties
                        if (paramSize >= 32) {
                            emitter.initLifeMin = readBE32f(paramData + 0);
                            emitter.initLifeMax = readBE32f(paramData + 4);
                            emitter.initSpeedMin = readBE32f(paramData + 8);
                            emitter.initSpeedMax = readBE32f(paramData + 12);
                            emitter.initSizeMin = readBE32f(paramData + 16);
                            emitter.initSizeMax = readBE32f(paramData + 20);
                            emitter.gravity = readBE32f(paramData + 24);
                        }
                        break;
                    case 0x44524157: // "DRAW" — Drawing parameters
                        if (paramSize >= 16) {
                            emitter.drawMethod = paramData[0];
                            emitter.blendMode = paramData[1];
                            emitter.billboardSize = readBE32f(paramData + 4);
                        }
                        break;
                    case 0x53484150: // "SHAP" — Emission shape
                        if (paramSize >= 4) {
                            emitter.emitShapeType = paramData[0];
                            for (s32 i = 0; i < 6 && 4 + i * 4 + 4 <= (s32)paramSize; i++) {
                                emitter.emitShapeParams[i] = readBE32f(paramData + 4 + i * 4);
                            }
                        }
                        break;
                    default:
                        break;
                }

                pOff += paramSize;
            }

            emitter.valid = true;
        }

        emitter.id = static_cast<u16>(m_data.emitters.size());
        m_data.emitters.push_back(emitter);

        offset += entrySize;
    }
}

// ============================================================================
// parseAnimChunk — Parse animation curve data
// ============================================================================

void BreffLoader::parseAnimChunk(const u8* chunk, u32 chunkSize, u32 emitterOffset) {
    // Animation curves are stored as tagged blocks within the ANIM chunk
    u32 offset = 8; // skip "ANIM" tag + size

    while (offset + 8 <= chunkSize) {
        u32 curveTag = readBE32(chunk + offset);
        u32 curveSize = readBE32(chunk + offset + 4);
        if (curveSize == 0 || offset + curveSize > chunkSize) break;

        BreffAnimCurve curve = {};
        curve.tag = curveTag;

        const u8* curveData = chunk + offset + 8;
        if (curveSize > 8) {
            curve.type = static_cast<BreffAnimCurve::CurveType>(curveData[0]);
            curve.frameCount = readBE16(curveData + 1);
            // Copy keyframe data
            u32 keyframeSize = curveSize - 8;
            curve.keyframeData.assign(curveData + 3, curveData + 3 + keyframeSize);
        }

        // Attach to the most recently parsed emitter if available
        if (!m_data.emitters.empty()) {
            m_data.emitters.back().curves.push_back(curve);
        }

        offset += curveSize;
    }
}

// ============================================================================
// findEmitter — Find emitter resource by name
// ============================================================================

const BreffEmitterResource* BreffLoader::findEmitter(const char* name) const {
    if (!name) return nullptr;
    for (const auto& emitter : m_data.emitters) {
        if (emitter.valid && strcmp(emitter.name, name) == 0) {
            return &emitter;
        }
    }
    return nullptr;
}

// ============================================================================
// getEmitter — Get emitter resource by index
// ============================================================================

const BreffEmitterResource* BreffLoader::getEmitter(u32 index) const {
    if (index >= m_data.emitters.size()) return nullptr;
    return &m_data.emitters[index].valid ? &m_data.emitters[index] : nullptr;
}

} // namespace Loaders