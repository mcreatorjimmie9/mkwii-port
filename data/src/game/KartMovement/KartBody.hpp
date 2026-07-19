#pragma once

#include <rk_types.h>
#include <decomp.h>
#define GENESIS_KART_BODY_DEFINED

namespace Kart {

// Forward declarations
class KartPhysics;

// ===== KartBody =====
// From symbols: KartBody (not Kart::KartBody - note different namespace in symbols)
// Size: 0x38 based on allocation size
class KartBody {
public:
    // 0x805a3c94 - __ct__Q29KartBodyFv
    KartBody();

    // 0x805a3b78 - __dt__Q29KartBodyFv
    ~KartBody();

    // 0x805a3c10 - createInstance__Q29KartBodyFv (singleton factory)
    static KartBody* createInstance();

    // 0x805a45c0 - createEffectObj__Q29KartBodyFiiiPvi
    void* createEffectObj(int a, int b, int c, void* d, int e, int f);

    // 0x805a47a8 - countActiveEffects__Q29KartBodyCFv
    int countActiveEffects() const;

    // 0x805a4838 - updateAudio__Q29KartBodyFv
    void updateAudio();

    void requireSinkDepth(f32 sinkDepth) { this->sinkDepth = sinkDepth; }
    f32 getSinkDepth() const { return sinkDepth; }

private:
    void* vtable;
    void* _04;
    // Various effect arrays and state
    void* _08;
    void* _0c;
    void* _14;
    void* _18;
    u8 _24;
    u8 _25;
    u8 _26;
    u8 _27;
    u32 _2a;
    void* _2c;
    f32 sinkDepth;
    f32 _94;
    f32 _98;
    u8 _a0[0x224 - 0xa0];
};

// ===== KartBodySub =====
// 0x805a4508 - __ct__Q213KartBodySubFiiPQ29KartBodyiiPvi
class KartBodySub {
public:
    KartBodySub(int a, int b, KartBody* body, int c, int d, void* e, int f);

private:
    void* vtable;
    void* vtable2;
    void* _08;
    void* _0c;
    // 8-register parameter setup fields
};

// ===== KartCollide =====
// 0x8059648c - __ct__Q24Kart15KartCollideAreaFv
#ifndef __KART_COLLIDE_AREA_DEFINED__
#define __KART_COLLIDE_AREA_DEFINED__
class KartCollideArea {
public:
    KartCollideArea();
    virtual ~KartCollideArea();
    virtual void init();
    virtual void vf10();
    virtual void vf14();

private:
    u8 _10[0x40 - 0x10];
};
#endif // __KART_COLLIDE_AREA_DEFINED__
// static_assert(sizeof(KartCollideArea) == 0x40);

} // namespace Kart