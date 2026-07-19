#pragma once

#include <rk_types.h>
#include <decomp.h>

namespace Kart {

// ===== KartSub =====
// Top-level kart component creation/initialization

// 0x80598230 - KartSub_createComponents
// Size: 560 bytes
// Calls: 0x805907bc, 0x8059088c, 0x8059024c, 0x80788484, 0x80590818,
//         0x805907bc, 0x8059156c, 0x805907bc, 0x80591560, 0x80555bf4
void KartSub_createComponents();

// 0x80598460 - KartSub_init
// Size: 388 bytes
// Calls: 0x80590a9c, 0x80590690, 0x805916a4, 0x805961bc, 0x805945d4,
//         indirect, 0x80569880, 0x80591658, 0x805b7904, 0x805907bc,
//         0x8058496c, 0x805917c4, 0x8059174c, 0x80590e98, indirect
void KartSub_init();

} // namespace Kart