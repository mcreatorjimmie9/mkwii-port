#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>

namespace Kart {

// Forward declarations
class KartBody;

// KartPhysicsSub - body physics sub-object for effects and visual positioning
// Size: 0x70 (based on Ghidra field accesses up to 0x6c)
class KartPhysicsSub {
public:
    KartPhysicsSub(KartBody* body);
    ~KartPhysicsSub();

    void init();
    void calcWithEffect();
    void updatePosition();
    void calcPosition(int transformWithScale);
    void updateAndCalcPosition();
    void calcCollision();
    void createJMapObj();
    void calcAnimFrame();
    float getParam24() const;
    void getRotation() const;
    void calcDistanceSq();
    void calcWithTable();
    void accumulateParam();
    void manageEffectState(s16 effectId);
    void calcCollisionResponse();

    // Virtual dispatch table pointer at 0x00
    void* vtable;
    // Parent KartBody pointer at 0x04
    KartBody* mBody;
    // Unknown at 0x08 (effect object pointer)
    void* mEffectObj;
    // Unknown at 0x0c
    u8 _0c;
    // Effect param at 0x10
    float _10;
    // Float at 0x14
    float _14;
    // Position vec3 at 0x18
    float _18;
    void* _28; // effect state buffer
    float _1c;
    float _20;
    // Float at 0x24
    float _24;
    // Position vec3 at 0x2c
    float _2c;
    float _30;
    float _34;
    // Position vec3 at 0x38
    float _38;
    float _3c;
    float _40;
    // Float at 0x44
    float _44;
    // Float at 0x48
    float _48;
    // Float at 0x4c
    float _4c;
    // s16 at 0x50
    u8 _50;
    // s16 at 0x51
    u8 _51;
    // Position at 0x54
    float _54;
    float _58;
    float _5c;
    // Float at 0x60
    float _60;
    // Rotation/position at 0x64
    float _64;
    float _68;
    float _6c;
};

} // namespace Kart