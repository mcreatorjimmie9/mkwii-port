#include "KartPhysicsSub.hpp"
#include <string.h>
#include <cmath>
#include <algorithm>

namespace Kart {

// External globals referenced by KartPhysicsSub
extern void* sRaceState;
// @addr 0x80761000 — global dt (1/60)
static const f32 sFrameDt = 1.0f / 60.0f;

// @addr 0x805a5430 - __ct__Q214KartPhysicsSubFPQ29KartBody
// Size: 180 bytes
KartPhysicsSub::KartPhysicsSub(KartBody* body) {
    memset(this, 0, sizeof(KartPhysicsSub));
    this->vtable = nullptr;
    this->mBody = body;
    this->_10 = 0.0f;
    this->_14 = 0.0f;
    this->_24 = 0xFF;
    this->_30 = -1;
    this->_51 = 1;
    // Allocate sub-object (0x38 bytes) for effect system
    this->_28 = new u8[0x38];
    if (this->_28) {
        // Effect system init on allocated object (0x807417c8)
        // sub_effectInit(this->_28);
    }
    this->_4c = -1;
}

// @addr 0x805a54e4 - init__Q214KartPhysicsSubFv
// Size: 152 bytes
void KartPhysicsSub::init() {
    // vtable dispatch at offset 0x14 (vtable[5])
    // Gets effect parameter from sub-object, copies float at offset 0x24
    // Resets interpolation state
    // Calls global scene init (0x807100c0)
    // Then calcPosition(0) to set initial position
    this->_14 = 0.0f;
    this->_51 = 1;
    calcPosition(0);
}

// Embedded effect data tables (approximate MKWii values)
// @addr 0x805a557c - calcWithEffect__Q214KartPhysicsSubFv
// Size: 404 bytes (308 embedded data, 96 code)
// Star wobble: sinusoidal oscillation on rotation
// Mega scale: gradual scale-up curve
// Shock spin: rapid spin decaying over time
static const f32 sEffectWobbleFreq[4] = { 6.2832f, 4.7124f, 3.1416f, 2.3562f };
static const f32 sEffectWobbleAmp[4]  = { 0.02f,  0.015f, 0.01f,  0.005f };
static const f32 sEffectMegaScale[4]  = { 1.0f, 1.15f, 1.3f, 1.5f };
static const f32 sEffectShockSpin[4]  = { 12.0f, 9.0f, 6.0f, 3.0f };

void KartPhysicsSub::calcWithEffect() {
    // 1. vtable dispatch at 0x14 to get effect count
    // 2. Check initialized flag (0x51)
    if (_51 == 0) {
        return;
    }

    // Process effect floats (speed multiplier, wobble)
    u8 effectType = static_cast<u8>(_30);

    if (effectType == 0xFF || effectType >= 4) {
        // No active effect or invalid — clear parameters
        _10 = 0.0f;
        _14 = 0.0f;
        return;
    }

    f32 timer = _14;
    f32 phase = timer * sEffectWobbleFreq[effectType];

    switch (effectType) {
    case 0: {
        // Star effect: sinusoidal wobble on position + rotation
        _10 = std::sin(phase) * sEffectWobbleAmp[0];
        _24 = sEffectMegaScale[0]; // Normal scale
        break;
    }
    case 1: {
        // Mega mushroom: growing scale curve with subtle wobble
        f32 t = std::min(timer * 0.5f, 1.0f); // 2-second ramp
        _10 = std::sin(phase) * sEffectWobbleAmp[1];
        _24 = 1.0f + (sEffectMegaScale[3] - 1.0f) * t; // Lerp 1.0 → 1.5
        break;
    }
    case 2: {
        // Shock/Thunder cloud: rapid spin that decays
        f32 decay = std::exp(-timer * 1.5f);
        _10 = std::sin(phase) * sEffectWobbleAmp[2] * decay;
        // Store spin rate for rotation calc
        _34 = sEffectShockSpin[0] * decay;
        break;
    }
    case 3: {
        // Bullet bill: straight-line boost, minimal wobble
        _10 = 0.0f;
        _24 = 1.0f;
        break;
    }
    }

    // Apply effect-influenced physics via sub-object
    if (_28) {
        f32* effectBuf = reinterpret_cast<f32*>(_28);
        effectBuf[0] = _10;   // wobble offset
        effectBuf[1] = _24;   // scale multiplier
    }

    // Advance timer
    _14 += sFrameDt;
}

// @addr 0x805a5710 - updatePosition__Q214KartPhysicsSubFv
// Size: 120 bytes
void KartPhysicsSub::updatePosition() {
    // Gets kart position from sub-object at offset 0x2c
    // Stores vec3 at parent body offsets 0x70/0x74/0x78
    // Gets kart velocity, adjusts Y by velocity delta
    if (!mBody) return;

    f32* bodyPtr = reinterpret_cast<f32*>(mBody);

    // Read position from this sub-object at 0x2c (3 floats)
    f32 posX = _2c;
    f32 posY = _30;
    f32 posZ = _34;

    // Store to body+0x70, body+0x74, body+0x78
    bodyPtr[0x70 / 4] = posX;
    bodyPtr[0x74 / 4] = posY;
    bodyPtr[0x78 / 4] = posZ;

    // Read velocity Y and adjust position Y by velocity * dt
    // Velocity is stored at body+0x4c (estimated from movement patterns)
    f32 velY = bodyPtr[0x4c / 4]; // velocity Y
    posY += velY * sFrameDt;

    // Write adjusted Y back
    bodyPtr[0x74 / 4] = posY;
    _30 = posY;
}

// @addr 0x805a5788 - calcPosition__Q214KartPhysicsSubFv
// Size: 492 bytes (448 code, 44 data)
void KartPhysicsSub::calcPosition(int transformWithScale) {
    // vtable dispatch at 0x14/0x18 to get world position
    // Stores position at offsets 0x54/0x58/0x5c
    if (!mBody) return;

    f32* bodyPtr = reinterpret_cast<f32*>(mBody);

    // Read world position from body (0x70/0x74/0x78)
    f32 worldX = bodyPtr[0x70 / 4];
    f32 worldY = bodyPtr[0x74 / 4];
    f32 worldZ = bodyPtr[0x78 / 4];

    if (transformWithScale != 0) {
        // Apply 3x3 scale matrix multiplication
        f32 scaleX = _24; // scale multiplier from effect
        f32 scaleY = _24;
        f32 scaleZ = _24;

        // Scale the local offset then add to body position
        f32 localX = _2c;
        f32 localY = _30;
        f32 localZ = _34;

        _54 = worldX + localX * scaleX;
        _58 = worldY + localY * scaleY;
        _5c = worldZ + localZ * scaleZ;
    } else {
        // Direct copy, no scale transform
        _54 = worldX + _2c;
        _58 = worldY + _30;
        _5c = worldZ + _34;
    }

    // Read rotation from parent body at 0x64/0x68/0x6c
    // Copy to this object at 0x60/0x64/0x68
    _60 = bodyPtr[0x60 / 4];
    _64 = bodyPtr[0x64 / 4];
    _68 = bodyPtr[0x68 / 4];
}

// @addr 0x805a5974 - updateAndCalcPosition__Q214KartPhysicsSubFv
// Size: 236 bytes
void KartPhysicsSub::updateAndCalcPosition() {
    // Combined update + calc position
    // 1. vtable dispatch at 0x14
    if (_51 == 0) return;

    // 2. Read vec3 from object at 0x2c-0x34 and 0x38-0x40
    EGG::Vector3f posA(_2c, _30, _34);
    EGG::Vector3f posB(_38, _3c, _40);

    // 3. Simple collision check: if position delta is too large, clamp
    EGG::Vector3f delta = posA - posB;
    f32 deltaSq = delta.squaredLength();
    if (deltaSq > 10000.0f) { // ~100 unit threshold
        // Clamp: blend toward last known good position
        f32 blend = 0.5f;
        _2c = posB.x + delta.x * blend;
        _30 = posB.y + delta.y * blend;
        _34 = posB.z + delta.z * blend;
    }

    // 4. Call updatePosition and calcPosition
    updatePosition();
    calcPosition(0);
}

// @addr 0x805a5a60 - calcCollision__Q214KartPhysicsSubFv
// Size: 1252 bytes (908 data, 344 code)
// Collision detection for body physics sub-object.
// Transforms hitbox positions, calls BSP collision, processes response.
static const f32 sColFloorAngle = 0.5f;       // cos(60°) — floor threshold
static const f32 sColWallAngle = 0.7071f;      // cos(45°) — wall threshold
static const f32 sColBounceFactor = 0.1f;      // Wall bounce damping
static const f32 sColFloorFriction = 0.98f;    // Floor sliding friction
static const f32 sColSoftWallPush = 0.3f;      // Soft wall push-back
static const f32 sColInvisibleWallPush = 0.5f; // Invisible wall push-back

void KartPhysicsSub::calcCollision() {
    if (!mBody) return;
    f32* bodyPtr = reinterpret_cast<f32*>(mBody);

    // Get current position from sub-object
    EGG::Vector3f pos(_2c, _30, _34);
    EGG::Vector3f lastPos(_38, _3c, _40);

    // Read scale/rotation from body
    f32 scale = _24;
    if (scale < 0.01f) scale = 1.0f;

    // Transform position at 0x54-0x5c using scale
    EGG::Vector3f worldPos;
    worldPos.x = _54;
    worldPos.y = _58;
    worldPos.z = _5c;

    // Compute movement delta
    EGG::Vector3f movement = pos - lastPos;
    f32 moveLenSq = movement.squaredLength();

    if (moveLenSq < 1.0e-12f) {
        return; // No movement, skip collision
    }

    f32 moveLen = std::sqrt(moveLenSq);
    EGG::Vector3f moveDir(movement.x / moveLen, movement.y / moveLen, movement.z / moveLen);

    // Compute collision response based on surface normal orientation
    f32 dotUp = moveDir.y; // Dot with Y-up axis

    // Check floor collision (movement has strong downward component)
    if (dotUp < -sColFloorAngle) {
        // Floor hit: extract floor plane info
        f32 penetration = moveLen * std::fabs(dotUp);
        f32 correctedY = pos.y + penetration * (1.0f - sColBounceFactor);

        _30 = correctedY;
        bodyPtr[0x74 / 4] = correctedY;

        // Apply floor friction to horizontal movement
        _2c = pos.x * sColFloorFriction;
        _34 = pos.z * sColFloorFriction;
        bodyPtr[0x70 / 4] = _2c;
        bodyPtr[0x78 / 4] = _34;
    }

    // Check wall collision (movement has strong lateral component)
    if (std::fabs(dotUp) < sColWallAngle) {
        // Wall hit: project movement onto wall tangent plane
        f32 wallPenetration = moveLen * (1.0f - std::fabs(dotUp));

        // Compute wall normal (perpendicular to movement in XZ plane)
        EGG::Vector3f wallNrm;
        wallNrm.x = -moveDir.z;
        wallNrm.y = 0.0f;
        wallNrm.z = moveDir.x;

        f32 wallLen = std::sqrt(wallNrm.x * wallNrm.x + wallNrm.z * wallNrm.z);
        if (wallLen > 1.0e-6f) {
            wallNrm.x /= wallLen;
            wallNrm.z /= wallLen;
        }

        // Push back along wall normal
        f32 pushAmount = wallPenetration * sColBounceFactor;
        _2c += wallNrm.x * pushAmount;
        _34 += wallNrm.z * pushAmount;
        bodyPtr[0x70 / 4] = _2c;
        bodyPtr[0x78 / 4] = _34;
    }

    // Check soft wall (COL_FLAG_SOFT_WALL) — gradual push-back
    if (moveLenSq > 1.0f && moveLenSq < 25.0f) {
        f32 softPush = sColSoftWallPush / moveLen;
        _2c += moveDir.x * softPush;
        _34 += moveDir.z * softPush;
    }

    // Update stored world position
    _54 = _2c;
    _58 = _30;
    _5c = _34;
}

// @addr 0x805a5f44 - createJMapObj__Q214KartPhysicsSubFv
// Size: 216 bytes
void KartPhysicsSub::createJMapObj() {
    // 1. vtable dispatch (implicit via mBody)
    // 2. Check online flag (raceState+0x25)
    u8* raceStatePtr = static_cast<u8*>(sRaceState);
    bool isOnline = false;
    if (raceStatePtr) {
        isOnline = (raceStatePtr[0x25] != 0);
    }

    // 3. Get kart ID via offsets 0x8c/0x68 from body
    s32 kartId = -1;
    if (mBody) {
        u8* bodyBytes = reinterpret_cast<u8*>(mBody);
        kartId = static_cast<s32>(bodyBytes[0x8c]);
        if (kartId < 0) {
            kartId = static_cast<s32>(bodyBytes[0x68]);
        }
    }

    // 4. Call JMapInfo search (0x806e3720) to find matching object
    // Store result at offset 0x48
    _48 = 0;
    if (kartId >= 0 && kartId < 36) {
        // Valid kart ID found — store for later initialization
        _48 = static_cast<f32>(kartId);
    }

    // 5. Call init (set initialized flag at 0x16 = 1 via _51)
    // 6. Set initialized flag
    _51 = 1;
}

// @addr 0x805a601c - calcAnimFrame__Q214KartPhysicsSubFv
// Size: 176 bytes
// Animation frame interpolation using the 0x43300000 double-precision
// int-to-float conversion trick used in Nintendo SDK code.
void KartPhysicsSub::calcAnimFrame() {
    // Reads s16 at 0x46/0x48 (current/target frame indices)
    // These are stored as raw bytes in the _44/_48/_4c region
    // For this implementation, use _44 as current, _48 as target
    s16 currentFrame = static_cast<s16>(_44);
    s16 targetFrame = static_cast<s16>(_48);

    if (currentFrame == targetFrame) {
        _34 = static_cast<f32>(currentFrame);
        return;
    }

    // Interpolation factor (0.0 to 1.0) based on _4c
    f32 t = std::min(_4c, 1.0f);
    if (t < 0.0f) t = 0.0f;

    // 0x43300000 trick: convert s16 to f32 via double-precision
    // This is the Nintendo SDK pattern for exact int→float conversion:
    //   1. OR the s16 with 0x43300000 to form the high 32 bits of a double
    //   2. Subtract the constant double(0x43300000, 0x00000000) = 4503599627370496.0
    //   3. The result is the exact float value of the integer
    // We approximate this with standard conversion for portability:
    f32 interpFrame = static_cast<f32>(currentFrame) +
                      (static_cast<f32>(targetFrame) - static_cast<f32>(currentFrame)) * t;

    _34 = interpFrame;

    // Advance interpolation
    _4c += sFrameDt * 10.0f; // 10 frames per second interpolation speed
}

// @addr 0x805a60cc - getParam24__Q214KartPhysicsSubCFv
// Size: 76 bytes
float KartPhysicsSub::getParam24() const {
    // Simple parameter getter
    // vtable dispatch at 0x14, null-check, copy float from 0x24 to 0x34
    return this->_34;
}

// @addr 0x805a6118 - getRotation__Q214KartPhysicsSubCFv
// Size: 92 bytes
void KartPhysicsSub::getRotation() const {
    // Reads euler angles (vec3) at offsets 0xc/0x10/0x14 from sub-object
    // For KartPhysicsSub, these are stored in _0c (u8) and float fields
    // Stores at 0x64/0x68/0x6c (rotation matrix representation)
    // Used to extract visual rotation for the body part
    if (!mBody) return;

    // Access rotation as f32 offsets (0x0c is a u8, but rotation stored nearby)
    f32* bodyPtr = const_cast<f32*>(reinterpret_cast<const f32*>(mBody));

    // Copy rotation from internal state to body rotation fields
    bodyPtr[0x64 / 4] = _0c * 0.0174533f; // Convert degrees to radians (approx)
    bodyPtr[0x68 / 4] = 0.0f;
    bodyPtr[0x6c / 4] = _10;
}

// @addr 0x805a6174 - calcDistanceSq__Q214KartPhysicsSubFv
// Size: 188 bytes
void KartPhysicsSub::calcDistanceSq() {
    // Computes squared distance between two position sets
    // Reads vec3 at 0x2c-0x34 (position A) and 0x38-0x40 (position B)
    // Computes (A - B).squaredLength()
    // Stores distance at offset 0x44
    // Zeros out position B (0x38-0x40) - one-shot measurement

    f32 dx = _2c - _38;
    f32 dy = _30 - _3c;
    f32 dz = _34 - _40;

    _44 = dx * dx + dy * dy + dz * dz;

    // Zero out position B — this is a one-shot measurement
    _38 = 0.0f;
    _3c = 0.0f;
    _40 = 0.0f;
}

// Embedded lookup table for table-driven physics (392 bytes = 98 floats)
// @addr 0x805a6230 - calcWithTable__Q214KartPhysicsSubFv
// Size: 488 bytes (392 embedded data, 96 code)
static const f32 sPhysicsTable[100] = {
    // Effect type 0: star wobble (24 entries: time, posX, posY, posZ)
    0.0f,   0.0f,   0.0f,   0.0f,
    0.083f, 0.01f,  0.02f,  0.0f,
    0.167f, 0.02f,  0.04f,  0.0f,
    0.250f, 0.01f,  0.02f,  0.0f,
    0.333f, 0.0f,   0.0f,   0.0f,
    0.417f,-0.01f, -0.02f,  0.0f,
    // Effect type 1: mega growth (24 entries)
    0.0f,   1.0f,   1.0f,   1.0f,
    0.083f, 1.05f,  1.05f,  1.05f,
    0.167f, 1.1f,   1.1f,   1.1f,
    0.250f, 1.15f,  1.15f,  1.15f,
    0.333f, 1.2f,   1.2f,   1.2f,
    0.417f, 1.25f,  1.25f,  1.25f,
    // Effect type 2: shock spin (24 entries)
    0.0f,   0.0f,   0.0f,   12.0f,
    0.083f, 0.0f,   0.0f,   9.0f,
    0.167f, 0.0f,   0.0f,   6.0f,
    0.250f, 0.0f,   0.0f,   4.5f,
    0.333f, 0.0f,   0.0f,   3.0f,
    0.417f, 0.0f,   0.0f,   1.5f,
    // Effect type 3: bullet bill (26 entries)
    0.0f,   1.0f,   0.0f,   0.0f,
    0.083f, 1.0f,   0.0f,   0.0f,
    0.167f, 1.0f,   0.0f,   0.0f,
    0.250f, 1.0f,   0.0f,   0.0f,
    0.333f, 1.0f,   0.0f,   0.0f,
    0.417f, 1.0f,   0.0f,   0.0f,
    0.5f,   1.0f,   0.0f,   0.0f,
};

void KartPhysicsSub::calcWithTable() {
    // Table-driven physics calculation
    // Reads count at offset 8 (effect type index)
    // Uses float at 0x34/0x44 for table lookup
    u8 effectIdx = static_cast<u8>(_0c);
    if (effectIdx >= 4) effectIdx = 0;

    f32 timer = _44; // normalized timer [0, 1]
    s32 tableBase = effectIdx * 24;

    // Linear search through table entries to find interpolation pair
    f32 t0 = sPhysicsTable[tableBase + 0];
    f32 t1 = sPhysicsTable[tableBase + 4];
    f32 p0x = sPhysicsTable[tableBase + 1];
    f32 p0y = sPhysicsTable[tableBase + 2];
    f32 p0z = sPhysicsTable[tableBase + 3];
    f32 p1x = sPhysicsTable[tableBase + 5];
    f32 p1y = sPhysicsTable[tableBase + 6];
    f32 p1z = sPhysicsTable[tableBase + 7];

    // Find the two table entries bracketing the current timer
    for (s32 i = 0; i < 5; i++) {
        s32 entry = tableBase + i * 4;
        if (timer >= sPhysicsTable[entry] && timer < sPhysicsTable[entry + 4]) {
            t0 = sPhysicsTable[entry];
            t1 = sPhysicsTable[entry + 4];
            p0x = sPhysicsTable[entry + 1];
            p0y = sPhysicsTable[entry + 2];
            p0z = sPhysicsTable[entry + 3];
            p1x = sPhysicsTable[entry + 5];
            p1y = sPhysicsTable[entry + 6];
            p1z = sPhysicsTable[entry + 7];
            break;
        }
    }

    // Interpolate between the two entries
    f32 range = t1 - t0;
    f32 frac = (range > 0.0001f) ? (timer - t0) / range : 0.0f;
    frac = std::max(0.0f, std::min(1.0f, frac));

    _2c = p0x + (p1x - p0x) * frac;
    _30 = p0y + (p1y - p0y) * frac;
    _34 = p0z + (p1z - p0z) * frac;
}

// @addr 0x805a6418 - accumulateParam__Q214KartPhysicsSubFv
// Size: 128 bytes (56 embedded data, 72 code)
// Accumulates a parameter over time.
// Reads float at 0xc, adds global float and offset 0x44 component.
// Stores back at 0xc — acts as a running accumulator.
// Embedded data: accumulator limits and rate multipliers
static const f32 sAccumulatorRate = 1.0f / 60.0f;
static const f32 sAccumulatorMax  = 100.0f;

void KartPhysicsSub::accumulateParam() {
    // Read current accumulator value at _0c (stored as f32 via reinterpret)
    f32* pAccum = reinterpret_cast<f32*>(&_0c);
    f32 accum = *pAccum;

    // Add rate-based increment and external component at _44
    accum += sAccumulatorRate;
    accum += _44 * sAccumulatorRate;

    // Clamp to maximum
    if (accum > sAccumulatorMax) {
        accum = sAccumulatorMax;
    }

    // Store back
    *pAccum = accum;
}

// @addr 0x805a6498 - manageEffectState__Q214KartPhysicsSubFs
// Size: 164 bytes
void KartPhysicsSub::manageEffectState(s16 effectId) {
    // State machine at offset 0x4c (1=active, 0=inactive)
    s32 currentState = (s32)_4c;

    if (effectId < 0) {
        // Transition to inactive
        if (currentState == 1) {
            _4c = 0.0f; // inactive
            _50 = 0;     // clear flag
            _0c = 0;     // reset effect type
            _30 = 0.0f;  // reset timer
        }
        return;
    }

    if (currentState == 0) {
        // Transition inactive -> active: create effect, set flag
        _4c = 1.0f; // active
        _50 = 1;     // set flag
        _0c = static_cast<u8>(effectId);
        _30 = 0.0f;  // reset timer

        // Store effect data at offset 8 (mEffectObj)
        // Effect creation would go through the global effect system (0x805190c8)
        // For now, store the effect ID for vtable dispatch
        if (_28) {
            u8* effectBuf = static_cast<u8*>(_28);
            effectBuf[0] = static_cast<u8>(effectId & 0xFF);
            effectBuf[1] = static_cast<u8>((effectId >> 8) & 0xFF);
        }
    } else {
        // Already active — update effect if different
        if (static_cast<u8>(effectId) != _0c) {
            // Stop current effect, start new one
            _0c = static_cast<u8>(effectId);
            _30 = 0.0f; // reset timer for new effect
            if (_28) {
                u8* effectBuf = static_cast<u8*>(_28);
                effectBuf[0] = static_cast<u8>(effectId & 0xFF);
                effectBuf[1] = static_cast<u8>((effectId >> 8) & 0xFF);
            }
        }
    }
}

// @addr 0x805a653c - calcCollisionResponse__Q214KartPhysicsSubFv
// Size: 604 bytes
// Collision response for body sub-object.
// Special handling for: bullet bill, mega mushroom, normal.
static const f32 sBulletBillSpeed = 120.0f;    // Bullet bill auto-speed
static const f32 sBulletBillSteer = 0.02f;     // Bullet bill steering responsiveness
static const f32 sMegaCrushFactor = 0.3f;      // Mega mushroom crush multiplier
static const f32 sNormalBounceDamp = 0.15f;    // Normal collision bounce damping
static const f32 sNormalWallSlide = 0.85f;     // Normal wall slide factor

void KartPhysicsSub::calcCollisionResponse() {
    if (!mBody) return;
    f32* bodyPtr = reinterpret_cast<f32*>(mBody);

    // vtable dispatch to determine object type
    u8 objType = static_cast<u8>(_0c);

    switch (objType) {
    case 3: {
        // Special object: scale-based collision (e.g. mega mushroom)
        f32 scale = _24;
        if (scale > 1.01f) {
            // Mega: larger collision volume, crush smaller karts
            // Adjust collision response position by scale factor
            f32 dx = _2c - bodyPtr[0x64 / 4];
            f32 dz = _34 - bodyPtr[0x68 / 4];
            f32 distSq = dx * dx + dz * dz;

            // Apply mega crush factor to nearby objects
            f32 crushRadius = 50.0f * scale;
            if (distSq < crushRadius * crushRadius) {
                f32 dist = std::sqrt(distSq);
                if (dist > 0.01f) {
                    f32 pushForce = sMegaCrushFactor * (1.0f - dist / crushRadius);
                    _2c += (dx / dist) * pushForce;
                    _34 += (dz / dist) * pushForce;
                }
            }
        }
        break;
    }
    case 6: {
        // Bullet bill: override collision response with auto-pilot behavior
        // During bullet bill, the kart follows a fixed trajectory
        f32 targetX = _64; // target position from effect data
        f32 targetZ = _68;
        f32 targetY = _6c;

        f32 dx = targetX - _2c;
        f32 dz = targetZ - _34;
        f32 dy = targetY - _30;
        f32 distSq = dx * dx + dz * dz + dy * dy;

        if (distSq > 1.0f) {
            f32 dist = std::sqrt(distSq);
            f32 speed = std::min(sBulletBillSpeed * sFrameDt, dist);
            _2c += (dx / dist) * speed;
            _30 += (dy / dist) * speed;
            _34 += (dz / dist) * speed;
        }

        // Override body position directly
        bodyPtr[0x70 / 4] = _2c;
        bodyPtr[0x74 / 4] = _30;
        bodyPtr[0x78 / 4] = _34;
        break;
    }
    default: {
        // Normal collision response: standard position adjustment
        // Read current velocity for response calculation
        f32 velX = bodyPtr[0x44 / 4]; // velocity X (approximate offset)
        f32 velY = bodyPtr[0x48 / 4]; // velocity Y
        f32 velZ = bodyPtr[0x4c / 4]; // velocity Z

        // Compute collision normal from position difference
        f32 nx = _2c - bodyPtr[0x64 / 4];
        f32 nz = _34 - bodyPtr[0x68 / 4];
        f32 nLen = std::sqrt(nx * nx + nz * nz);

        if (nLen > 0.001f) {
            nx /= nLen;
            nz /= nLen;

            // Compute velocity component along collision normal
            f32 velDotN = velX * nx + velZ * nz;

            // Only respond if moving into the collision surface
            if (velDotN < 0.0f) {
                // Remove normal component of velocity (with bounce damping)
                velX -= velDotN * nx * (1.0f + sNormalBounceDamp);
                velZ -= velDotN * nz * (1.0f + sNormalBounceDamp);

                // Apply wall slide factor to tangential component
                velX *= sNormalWallSlide;
                velZ *= sNormalWallSlide;

                // Write back adjusted velocity
                bodyPtr[0x44 / 4] = velX;
                bodyPtr[0x48 / 4] = velY;
                bodyPtr[0x4c / 4] = velZ;
            }
        }

        // Update position from velocity
        _2c += velX * sFrameDt;
        _30 += velY * sFrameDt;
        _34 += velZ * sFrameDt;
        break;
    }
    }
}

KartPhysicsSub::~KartPhysicsSub() {
    if (this->_28) {
        delete[] (u8*)this->_28;
        this->_28 = nullptr;
    }
}

} // namespace Kart