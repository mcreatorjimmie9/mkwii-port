#include "KartTire.hpp"
#include "KartWheelPhysics.hpp"
#include "KartDynamics.hpp"

namespace Kart {

// External: vec3 zero function
extern void vec3Zero(void* vec);

// 0x8059cf2c - KartTire_ct
// Size: 108 bytes, Calls: 0x80555bf4 (vec3 init)
KartTire::KartTire() {
    // Initializes tire data
    // Calls vec3 zero initialization on internal position vectors
    memset(this, 0, sizeof(KartTire));
    // Additional vec3 zero calls for position fields
}

// 0x8059cf98 - KartTire_init
// Size: 100 bytes, Calls: 0x80555bf4 (vec3 init)
void KartTire::init() {
    // Sets up tire physics data
    // Initializes position vectors to zero
    // Calls vec3 init for tire center and edge positions
}

// 0x8059cffc - KartTire_createPhysics
// Size: 84 bytes, Calls: 0x80555bf4, 0x8059c0fc, 0x805b3dfc
void KartTire::createPhysics() {
    // Creates KartWheelPhysics instance for this tire
    // Steps:
    // 1. Zero out internal state (0x80555bf4)
    // 2. Create KartWheelPhysics at offset 0x00
    //    - Calls KartWheelPhysics constructor (0x8059c0fc → 0x8059b8f4)
    //    - Passes wheelIdx and bspWheelIdx
    // 3. Call additional setup (0x805b3dfc)
    //    - Links tire to physics system
}

// 0x8059d050 - KartTire_initBsp
// Size: 8 bytes (no calls - just a return)
void KartTire::initBsp() {
    // No-op for kart tires - BSP init is done elsewhere
    // Bike tires may override this
}

// 0x80590ef4 - PlayerKart_createTires
// Size: 508 bytes, Calls: 0x805a22e4
void PlayerKart_createTires() {
    // Creates tire objects for a kart (4 wheels)
    // From disasm: a large function with many early returns
    //
    // The function appears to be a table-driven dispatch:
    // 1. Load player object, get playerSub at offset 0x24
    // 2. Check playerSub != null (early return if null)
    // 3. Load kartState at offset 0x54
    // 4. Check kartState != null (early return if null)
    // 5. Switch on vehicle type/set flags at offset 0x334:
    //    - Bit 6 set: set bit 0x40 (4 wheels ready?)
    //    - Bit 0x1a cleared: set bit 0x18
    //    - Bit 0x8 set: set bit 0x8
    //    - Bit 0x10 set: set bit 0x10
    //    - Bit 0x108 set: set bit 0x108
    //    - No bits match: jump to table dispatch (0x805a25f8/0x806d300/etc.)
    //
    // The main body (after checks):
    // 1. Load global table at lis+0
    // 2. Get wheel count from PlayerPointers (offset 8)
    // 3. Get physics element from table (offsets 4, 8, 0x14)
    // 4. Load per-wheel data from table entries
    // 5. Call accumulateForce (0x805a22e4) to set up wheel forces
    //
    // This sets up the initial tire/force configuration for each wheel
    // The table dispatch at the bottom handles different vehicle classes
}

} // namespace Kart