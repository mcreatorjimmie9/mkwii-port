#include "KartInput.hpp"

namespace Kart {

// External: PAD system
extern void* sPadSystem;

// KPadRaceInputState contains the decoded controller state for a player
// This is a simplified version - the real struct is in inputdata.h
namespace System {
struct KPadRaceInputState {
    u8 stickX;       // -128 to 127 (analog stick X)
    u8 stickY;       // -128 to 127 (analog stick Y)
    u8 triggerL;      // 0-255 (trigger analog)
    u8 triggerR;      // 0-255 (trigger analog)
    u8 button;       // Button state bitfield
    u8 dpadUp    : 1;
    u8 dpadDown  : 1;
    u8 dpadLeft  : 1;
    u8 dpadRight : 1;
    u8 dpadUp2   : 1;  // Digital pad
    u8 dpadDown2  : 1;
    u8 dpadLeft2  : 1;
    u8 dpadRight2 : 1;
    u8 trick;
    u8 start;
};
} // namespace System

KartInput::KartInput() {
    memset(this, 0, sizeof(KartInput));
}

KartInput::~KartInput() {}

} // namespace Kart