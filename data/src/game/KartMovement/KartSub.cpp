#include "KartSub.hpp"

namespace Kart {

// 0x80598230 - KartSub_createComponents
// Size: 560 bytes
// Creates all kart sub-components: physics, collision, state, etc.
void KartSub_createComponents() {
    // Allocates and initializes:
    // - KartSettings (0x805907bc, 0x8059088c)
    // - KartPhysics (0x8059024c)
    // - Effect system (0x80788484)
    // - KartCollideArea (0x80590818)
    // - Additional components (0x8059156c, 0x80591560)
    // - Vec3 initialization (0x80555bf4)
}

// 0x80598460 - KartSub_init
// Size: 388 bytes
// Initializes all kart sub-components after creation
void KartSub_init() {
    // Calls init on various components:
    // - 0x80590a9c - settings init
    // - 0x80590690 - physics setup
    // - 0x805916a4 - dynamics setup
    // - 0x805961bc - state setup
    // - 0x805945d4 - input setup
    // - Indirect call via vtable
    // - 0x80569880 - model setup
    // - 0x80591658 - wheel setup
    // - 0x805b7904 - additional setup
    // - 0x8058496c - tire setup
    // - 0x805917c4, 0x8059174c - collision init
    // - 0x80590e98 - camera/visual init
    // - Indirect call (final setup)
}

} // namespace Kart