#pragma once

#include <rk_types.h>
#include <decomp.h>

#include <KPadController.hpp>

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