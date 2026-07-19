#pragma once

#include <rk_types.h>
#include <decomp.h>

#include <game/kart/KartObjectProxy.hpp>
namespace System {
// Full definition in KartObjectProxy.hpp
}

namespace Kart {

class KartInput {
public:
    KartInput();
    virtual ~KartInput();

    u8 field_0x04[36];
    System::KPadRaceInputState currentInputState;
    System::KPadRaceInputState lastInputState;
    u8 field_0x58[128];
};

} // namespace Kart