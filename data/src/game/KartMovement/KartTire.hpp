#pragma once

#include <rk_types.h>
#include <decomp.h>

namespace Kart {

class BspWheel;

// ===== KartTire =====
class KartTire {
public:
    // 0x8059cf2c - KartTire_ct
    KartTire();

    // 0x8059cf98 - KartTire_init
    void init();

    // 0x8059cffc - KartTire_createPhysics
    void createPhysics();

    // 0x8059d050 - KartTire_initBsp
    void initBsp();

private:
    // Fields from player.h - tire is part of the wheel system
    void* _00;
    void* _04;
    void* _08;
    void* _0c;
    u8 _10[0x20 - 0x10];
};

// ===== KartTirePhysics (used in PlayerKart_createTires) =====

// 0x80590ef4 - PlayerKart_createTires
void PlayerKart_createTires();
// Size: 508 bytes, Calls: 0x805a22e4

} // namespace Kart