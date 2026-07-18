#include "KartPhysicsSub.hpp"
#include <string.h>

namespace Kart {

// 0x805a5430 - __ct__Q214KartPhysicsSubFPQ29KartBody
// Size: 180 bytes
KartPhysicsSub::KartPhysicsSub(KartBody* body) {
    memset(this, 0, sizeof(KartPhysicsSub));
    this->vtable = nullptr;
    this->mBody = body;
    // Fields initialized to 0.0f at 0x0c, 0x14
    // Field at 0x20 = 0
    // Field at 0x24 = 0xFF
    // Field at 0x2c = 0
    // s16 at 0x30 = -1
    // vec3 at 0x38-0x40 from global zero
    // float at 0x44 = 0.0f
    // s32 at 0x4c = -1
    // u8 at 0x50 = 0
    // u8 at 0x51 = 1 (initialized flag)
    // Allocates 0x38 bytes for sub-object, stores at 0x28
    this->_28 = new u8[0x38];
    if (this->_28) {
        // sub_807417c8 - effect system init on allocated object
    }
    this->_24 = 0xFF;
    this->_30 = -1;
    this->_4c = -1;
    this->_51 = 1;
}

// 0x805a54e4 - init__Q214KartPhysicsSubFv
// Size: 152 bytes
void KartPhysicsSub::init() {
    // vtable dispatch at 0x14
    void* result = ((void* (*)(void*))(*(void***)this->vtable)[5/4])(this);
    if (result) {
        // Copy float from result+0x24 to this+0x34
        this->_34 = ((float*)result)[0x24/4];
    }
    // float at 0x14 = 0.0f
    this->_14 = 0.0f;
    // Set initialized flag
    this->_51 = 1;
    // Global function call (0x807100c0 - scene init)
    // Then calcPosition(0)
    calcPosition(0);
}

// 0x805a557c - calcWithEffect__Q214KartPhysicsSubFv
// Size: 404 bytes (308 embedded data, 96 code)
void KartPhysicsSub::calcWithEffect() {
    // vtable dispatch at 0x14
    // Checks flag at 0x51
    // Reads effect count at offset 6
    // Processes effect floats
    // Effect-influenced physics calculation with embedded data table
}

// 0x805a5710 - updatePosition__Q214KartPhysicsSubFv
// Size: 120 bytes
void KartPhysicsSub::updatePosition() {
    // Gets kart position from sub-object at 0x2c
    // Stores vec3 at 0x70/0x74/0x78 of parent body
    // Gets kart velocity, adjusts Y by velocity delta
}

// 0x805a5788 - calcPosition__Q214KartPhysicsSubFv
// Size: 492 bytes (448 code, 44 data)
void KartPhysicsSub::calcPosition(int transformWithScale) {
    // vtable dispatch at 0x14/0x18
    // Gets position via vtable call, stores at 0x54/0x58/0x5c
    // Checks race state b68==0x22
    // If transformWithScale != 0:
    //   Reads global scale tables
    //   Applies matrix multiplication (3x3 * position vector)
    //   Stores rotated/scaled position at 0x54/0x58/0x5c
    // Reads vec3 from parent body at 0x64/0x68/0x6c, copies to 0x60/0x64/0x68
}

// 0x805a5974 - updateAndCalcPosition__Q214KartPhysicsSubFv
// Size: 236 bytes
void KartPhysicsSub::updateAndCalcPosition() {
    // Similar to updatePosition but adds vtable dispatch at 0x14
    // Reads vec3 from object at 0x2c-0x34 and 0x38-0x40
    // Calls collision check (0x805aa32c)
}

// 0x805a5a60 - calcCollision__Q214KartPhysicsSubFv
// Size: 1252 bytes (908 data, 344 code)
void KartPhysicsSub::calcCollision() {
    // Gets position, reads scale/rotation
    // Transforms vec3 at 0x54-0x5c
    // Calls BSP collision (0x805aa32c)
    // 50 FP ops with embedded data
}

// 0x805a5f44 - createJMapObj__Q214KartPhysicsSubFv
// Size: 216 bytes
void KartPhysicsSub::createJMapObj() {
    // vtable dispatch
    // Checks online flag (b68/0x25)
    // Calls getKartId (0x80590aa0) or reads from 0x8c/0x68
    // Calls JMapInfo search (0x806e3720)
    // Stores result at 0x48
    // Calls vtable 0x10/0x18 (init)
    // Sets 0x16=1
}

// 0x805a601c - calcAnimFrame__Q214KartPhysicsSubFv
// Size: 176 bytes
void KartPhysicsSub::calcAnimFrame() {
    // Reads s16 at 0x46/0x48 (anim frame indices)
    // Looks up u16 in table at 0x8+0xc
    // Double-precision int-to-float conversion (0x43300000 trick)
    // Calls vtable 0x18 with interpolated float
    // Animation frame interpolation
}

// 0x805a60cc - getParam24__Q214KartPhysicsSubCFv
// Size: 76 bytes
float KartPhysicsSub::getParam24() const {
    // vtable dispatch at 0x14
    // Null-check result, copies float from offset 0x24 to offset 0x34
    // Simple parameter getter
    return this->_34;
}

// 0x805a6118 - getRotation__Q214KartPhysicsSubCFv
// Size: 92 bytes
void KartPhysicsSub::getRotation() const {
    // vtable dispatch at 0x14
    // Reads vec3 (euler angles) at 0xc/0x10/0x14 from result
    // Stores at 0x64/0x68/0x6c (rotation matrix)
}

// 0x805a6174 - calcDistanceSq__Q214KartPhysicsSubFv
// Size: 188 bytes
void KartPhysicsSub::calcDistanceSq() {
    // vtable dispatch at 0x14
    // Reads two vec3 sets at 0x2c-0x34 and 0x38-0x40
    // Computes squared magnitude of difference
    // Stores distance at 0x44, zeros 0x38-0x40
}

// 0x805a6230 - calcWithTable__Q214KartPhysicsSubFv
// Size: 488 bytes (392 embedded data, 96 code)
void KartPhysicsSub::calcWithTable() {
    // vtable dispatch at 0x14
    // Reads count at offset 8
    // Uses float at 0x34/0x44
    // Large lookup table - table-driven physics calculation
}

// 0x805a6418 - accumulateParam__Q214KartPhysicsSubFv
// Size: 128 bytes (56 embedded data, 72 code)
void KartPhysicsSub::accumulateParam() {
    // vtable dispatch at 0x14
    // Reads float at 0xc
    // Adds global float and 0x44 component
    // Stores back at 0xc - accumulator
}

// 0x805a6498 - manageEffectState__Q214KartPhysicsSubFs
// Size: 164 bytes
void KartPhysicsSub::manageEffectState(s16 effectId) {
    // State machine at 0x4c (1=active, 0=inactive)
    // Manages flag at 0x50
    // Calls vtable 0x14
    // Calls effect creation (0x805190c8)
    // Calls effect lookup by id (0x80518ff0)
    // Stores result at offset 8
}

// 0x805a653c - calcCollisionResponse__Q214KartPhysicsSubFv
// Size: 604 bytes
void KartPhysicsSub::calcCollisionResponse() {
    // vtable dispatch at 0x18/0x14
    // Checks object type (3=special, 6=bullet bill)
    // Calls collision system (0x8078cfe0)
    // FP math with position offsets 0x64/0x68 and 0x30/0x34
}

KartPhysicsSub::~KartPhysicsSub() {
    if (this->_28) {
        delete[] (u8*)this->_28;
        this->_28 = nullptr;
    }
}

} // namespace Kart