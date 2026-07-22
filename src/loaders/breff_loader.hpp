#pragma once
// breff_loader.hpp — BREFF (Binary Revolution Effect File) Loader
// Parses the nw4r::ef::EffectProject format used by Mario Kart Wii's particle system.
//
// BREFF is a BRRES sub-format containing emitter templates, animation curves,
// and texture references for the EGG/nw4r particle engine.

#include "rk_types.h"
#include <vector>
#include <string>
#include <cstring>

namespace Loaders {

// Parsed animation curve (particle property over lifetime)
struct BreffAnimCurve {
    enum CurveType {
        CURVE_TYPE_NONE = 0,
        CURVE_TYPE_CONSTANT,
        CURVE_TYPE_LINEAR,
        CURVE_TYPE_HERMITE,
        CURVE_TYPE_STEP,
        CURVE_TYPE_COUNT
    };

    u32 tag;           // Curve identifier (RGBA, size, velocity, etc.)
    CurveType type;    // Interpolation type
    u16 frameCount;    // Number of keyframes
    u8 pad[2];
    // Keyframe data follows (type-dependent)
    std::vector<u8> keyframeData;
};

// Parsed emitter resource template
struct BreffEmitterResource {
    u16 id;                // Emitter ID within the BREFF
    char name[32];         // Emitter name (null-terminated)

    // Emission parameters
    f32 emitRate;          // Particles per second
    f32 emitLife;          // Emitter lifetime (0 = infinite)
    u16 maxParticles;      // Max simultaneous particles

    // Particle initial properties
    f32 initLifeMin, initLifeMax;
    f32 initSpeedMin, initSpeedMax;
    f32 initSizeMin, initSizeMax;

    // Emission volume shape
    u8 emitShapeType;      // 0=point, 1=line, 2=circle, 3=sphere, 4=cylinder, 5=cone, 6=box
    f32 emitShapeParams[6]; // Shape-dependent parameters

    // Physics
    f32 gravity;            // Y-axis acceleration
    f32 airResistance;      // Velocity damping
    f32 randomFactor;       // Random variation scale

    // Visual
    u8 drawMethod;          // 0=billboard, 1=directional
    u8 blendMode;           // GX blend mode
    u8 alphaCompare;        // GX alpha compare mode
    u8 zBuffer;             // Z-buffer enable
    f32 billboardSize;      // Base billboard size

    // Color/alpha animation
    f32 colorKeys[8][4];    // RGBA keyframes (up to 8)
    f32 sizeKeys[8];        // Size keyframes (up to 8)
    f32 alphaKeys[8];       // Alpha keyframes (up to 8)

    // Texture reference
    u16 textureIndex;       // Index into BREFT texture list
    u8 texAnimFrameCount;   // Texture animation frame count
    u8 texAnimType;         // 0=none, 1=sequential, 2=random

    // Child emitter
    u16 childEmitterIndex;   // Index of sub-emitter (0xFFFF = none)
    u8 childTriggerFlags;   // When to fire child (bit0=onDeath, bit1=onBounce, etc.)

    // Animation curves
    std::vector<BreffAnimCurve> curves;

    bool valid;              // Whether this entry was successfully parsed
};

// Top-level BREFF parsed data (matches nw4r::ef::EffectProject)
struct BreffData {
    u32 magic;              // "REFF"
    u32 version;
    u32 emitterCount;
    std::vector<BreffEmitterResource> emitters;

    // Raw emitter data for lookup by name
    bool valid;
};

// BREFF Loader
class BreffLoader {
public:
    BreffLoader();
    ~BreffLoader();

    // Parse BREFF from raw bytes (big-endian)
    bool loadFromMemory(const std::vector<u8>& data);

    // Parse BREFF from a file on disk
    bool loadFromFile(const char* path);

    // Get parsed data
    const BreffData& getData() const { return m_data; }

    // Get raw data pointer and size (for passing to Resource::Add)
    const u8* getRawData() const { return m_rawData.empty() ? nullptr : m_rawData.data(); }
    u32 getRawSize() const { return static_cast<u32>(m_rawData.size()); }

    // Find emitter by name
    const BreffEmitterResource* findEmitter(const char* name) const;

    // Find emitter by index
    const BreffEmitterResource* getEmitter(u32 index) const;

    // Check if data was loaded
    bool isLoaded() const { return m_data.valid; }

private:
    bool parseHeader(const u8* data, u32 size);
    void parseSubChunks(const u8* data, u32 size);
    void parseEmitterChunk(const u8* chunk, u32 chunkSize);
    void parseAnimChunk(const u8* chunk, u32 chunkSize, u32 emitterOffset);

    // Big-endian read helpers
    static u16 readBE16(const u8* p);
    static u32 readBE32(const u8* p);
    static f32 readBE32f(const u8* p);

    BreffData m_data;
    std::vector<u8> m_rawData; // Retained copy of raw data
};

} // namespace Loaders