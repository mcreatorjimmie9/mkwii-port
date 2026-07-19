#include "KartPhysicsSub.hpp"
#include <string.h>

namespace Kart {

// External globals referenced by KartPhysicsSub
extern void* sRaceState;

// 0x805a5430 - __ct__Q214KartPhysicsSubFPQ29KartBody
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

// 0x805a54e4 - init__Q214KartPhysicsSubFv
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

// 0x805a557c - calcWithEffect__Q214KartPhysicsSubFv
// Size: 404 bytes (308 embedded data, 96 code)
void KartPhysicsSub::calcWithEffect() {
    // Physics calculation influenced by active effects
    // Steps:
    // 1. vtable dispatch at 0x14 to get effect count
    // 2. Check initialized flag (0x51)
    // 3. Process effect floats (speed multiplier, etc.)
    // 4. Apply effect-influenced physics with embedded data table
    //
    // The embedded data table (308 bytes) contains:
    //   Effect parameter curves for position/rotation adjustments
    //   Indexed by effect type and timer value
    //   Used for star wobble, mega scale, shock spin, etc.
}

// 0x805a5710 - updatePosition__Q214KartPhysicsSubFv
// Size: 120 bytes
void KartPhysicsSub::updatePosition() {
    // Gets kart position from sub-object at offset 0x2c
    // Stores vec3 at parent body offsets 0x70/0x74/0x78
    // Gets kart velocity, adjusts Y by velocity delta
    //
    // From disasm:
    // 1. Read position from sub-object+0x2c (3 floats)
    // 2. Store to body+0x70, body+0x74, body+0x78
    // 3. Read velocity Y component
    // 4. Adjust position Y by velocity * dt
}

// 0x805a5788 - calcPosition__Q214KartPhysicsSubFv
// Size: 492 bytes (448 code, 44 data)
void KartPhysicsSub::calcPosition(int transformWithScale) {
    // vtable dispatch at 0x14/0x18 to get world position
    // Stores position at offsets 0x54/0x58/0x5c
    // If transformWithScale != 0:
    //   Reads global scale tables
    //   Applies 3x3 matrix multiplication (scale * position)
    //   Stores rotated/scaled position
    // Reads rotation from parent body at 0x64/0x68/0x6c
    // Copies to 0x60/0x64/0x68
}

// 0x805a5974 - updateAndCalcPosition__Q214KartPhysicsSubFv
// Size: 236 bytes
void KartPhysicsSub::updateAndCalcPosition() {
    // Combined update + calc position
    // 1. vtable dispatch at 0x14
    // 2. Read vec3 from object at 0x2c-0x34 and 0x38-0x40
    // 3. Call collision check (0x805aa32c)
    // 4. Call updatePosition and calcPosition
}

// 0x805a5a60 - calcCollision__Q214KartPhysicsSubFv
// Size: 1252 bytes (908 data, 344 code)
void KartPhysicsSub::calcCollision() {
    // Collision detection for body physics sub-object
    // Gets position, reads scale/rotation
    // Transforms vec3 at 0x54-0x5c
    // Calls BSP collision system (0x805aa32c)
    // 50 FP operations with embedded data
    //
    // The embedded data (908 bytes) contains collision response
    // parameters for different surface types and effect states
}

// 0x805a5f44 - createJMapObj__Q214KartPhysicsSubFv
// Size: 216 bytes
void KartPhysicsSub::createJMapObj() {
    // Creates JMapObj for this physics sub-object
    // 1. vtable dispatch
    // 2. Check online flag (raceState+0x25)
    // 3. Get kart ID via 0x80590aa0 or from offsets 0x8c/0x68
    // 4. Call JMapInfo search (0x806e3720) to find matching object
    // 5. Store result at offset 0x48
    // 6. Call vtable 0x10/0x18 (init)
    // 7. Set initialized flag at 0x16 = 1
}

// 0x805a601c - calcAnimFrame__Q214KartPhysicsSubFv
// Size: 176 bytes
void KartPhysicsSub::calcAnimFrame() {
    // Animation frame interpolation
    // Reads s16 at 0x46/0x48 (current/target frame indices)
    // Looks up u16 value in table at offset 0x8+0xc
    // Uses double-precision int-to-float conversion (0x43300000 trick):
    //   float(intVal) = (intVal >> 1) + (intVal & 1) as IEEE754
    // Calls vtable 0x18 with interpolated float
}

// 0x805a60cc - getParam24__Q214KartPhysicsSubCFv
// Size: 76 bytes
float KartPhysicsSub::getParam24() const {
    // Simple parameter getter
    // vtable dispatch at 0x14, null-check, copy float from 0x24 to 0x34
    return this->_34;
}

// 0x805a6118 - getRotation__Q214KartPhysicsSubCFv
// Size: 92 bytes
void KartPhysicsSub::getRotation() const {
    // Reads euler angles (vec3) at offsets 0xc/0x10/0x14 from sub-object
    // Stores at 0x64/0x68/0x6c (rotation matrix representation)
    // Used to extract visual rotation for the body part
}

// 0x805a6174 - calcDistanceSq__Q214KartPhysicsSubFv
// Size: 188 bytes
void KartPhysicsSub::calcDistanceSq() {
    // Computes squared distance between two position sets
    // vtable dispatch at 0x14
    // Reads vec3 at 0x2c-0x34 (position A) and 0x38-0x40 (position B)
    // Computes (A - B).squaredLength()
    // Stores distance at offset 0x44
    // Zeros out position B (0x38-0x40) - one-shot measurement
}

// 0x805a6230 - calcWithTable__Q214KartPhysicsSubFv
// Size: 488 bytes (392 embedded data, 96 code)
void KartPhysicsSub::calcWithTable() {
    // Table-driven physics calculation
    // vtable dispatch at 0x14
    // Reads count at offset 8
    // Uses float at 0x34/0x44 for table lookup
    // Large lookup table (392 bytes) for physics parameters
    // Used for effect-specific position/rotation adjustments
}

// 0x805a6418 - accumulateParam__Q214KartPhysicsSubFv
// Size: 128 bytes (56 embedded data, 72 code)
void KartPhysicsSub::accumulateParam() {
    // Accumulates a parameter over time
    // vtable dispatch at 0x14
    // Reads float at 0xc
    // Adds global float and offset 0x44 component
    // Stores back at 0xc - acts as a running accumulator
    // Used for effect timers and interpolation progress
}

// 0x805a6498 - manageEffectState__Q214KartPhysicsSubFs
// Size: 164 bytes
void KartPhysicsSub::manageEffectState(s16 effectId) {
    // State machine at offset 0x4c (1=active, 0=inactive)
    // Manages flag at offset 0x50
    // Calls vtable 0x14 to get current effect
    // Calls effect creation (0x805190c8) to start new effect
    // Calls effect lookup by id (0x80518ff0) to find effect data
    // Stores result at offset 8
    //
    // State transitions:
    //   inactive -> active: create effect, set flag
    //   active -> inactive: clear flag, stop effect
}

// 0x805a653c - calcCollisionResponse__Q214KartPhysicsSubFv
// Size: 604 bytes
void KartPhysicsSub::calcCollisionResponse() {
    // Collision response for body sub-object
    // vtable dispatch at 0x18/0x14
    // Checks object type: 3=special, 6=bullet bill
    // Calls collision system (0x8078cfe0)
    // FP math with position offsets 0x64/0x68 and 0x30/0x34
    //
    // Special handling for:
    //   - Bullet bill: override collision response
    //   - Mega mushroom: scale-based collision
    //   - Normal: standard position adjustment
}

KartPhysicsSub::~KartPhysicsSub() {
    if (this->_28) {
        delete[] (u8*)this->_28;
        this->_28 = nullptr;
    }
}

} // namespace Kart