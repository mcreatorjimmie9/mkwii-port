#include "KartSub.hpp"
#include "KartSettings.hpp"
#include "KartState.hpp"
#include "KartInput.hpp"
#include "KartMove.hpp"
#include "KartDynamics.hpp"
#include "KartWheelPhysics.hpp"
#include "KartTire.hpp"
#include "KartBody.hpp"

namespace Kart {

// External: vec3 zero function
extern void vec3Zero(void* vec);
extern void* sRaceState;

// 0x80598230 - KartSub_createComponents
// Size: 560 bytes
// Creates all kart sub-components: physics, collision, state, etc.
void KartSub_createComponents() {
    // From disasm at 0x80598230:
    // Calls: 0x805907bc, 0x8059088c, 0x8059024c, 0x80788484, 0x80590818,
    //         0x805907bc, 0x8059156c, 0x805907bc, 0x80591560, 0x80555bf4
    //
    // Component creation order:
    // 1. Create KartSettings (0x805907bc - allocate)
    // 2. Initialize KartSettings (0x8059088c - fill params)
    // 3. Create KartPhysics (0x8059024c - main physics engine)
    // 4. Create effect system (0x80788484)
    // 5. Create KartCollideArea (0x80590818)
    // 6. Create WheelSystem (0x8059156c)
    // 7. Create CameraSystem (0x80591560)
    // 8. Zero vec3 state (0x80555bf4)
    //
    // This is the main component factory for the kart
}

// 0x80598460 - KartSub_init
// Size: 388 bytes
// Initializes all kart sub-components after creation
void KartSub_init() {
    // From disasm at 0x80598460:
    // Calls: 0x80590a9c, 0x80590690, 0x805916a4, 0x805961bc, 0x805945d4,
    //         indirect, 0x80569880, 0x80591658, 0x805b7904, 0x805907bc,
    //         0x8058496c, 0x805917c4, 0x8059174c, 0x80590e98, indirect
    //
    // Initialization order:
    // 1. 0x80590a9c - Get player index/ID
    // 2. 0x80590690 - Init physics (KartPhysics::init or similar)
    // 3. 0x805916a4 - Setup dynamics (KartDynamics::setupPhysics)
    // 4. 0x805961bc - Init state (KartState::init)
    // 5. 0x805945d4 - Init input (KartInput::updateFromInput)
    // 6. Indirect call via vtable (vehicle-specific init)
    // 7. 0x80569880 - Model/graphic setup
    // 8. 0x80591658 - Wheel system init
    // 9. 0x805b7904 - Additional physics setup
    // 10. 0x8058496c - Tire system init
    // 11. 0x805917c4 - Collision init 1
    // 12. 0x8059174c - Collision init 2
    // 13. 0x80590e98 - Camera/visual init
    // 14. Indirect call (final vehicle-specific setup)
}

} // namespace Kart