#include "KartSettings.hpp"
#include "KartState.hpp"

namespace Kart {

// 0x805954a8 - __ct__Q24Kart12KartSettingsFv
// Size: 204 bytes, Calls: 0x80590aac
// From disasm: reads kart param, initializes vehicle/character/suspension/wheel counts
KartSettings::KartSettings() {
    // Calls 0x80590aac (get kart param for this player)
    // Initializes vehicle, character, suspension count, wheel count
    // Sets up display params pointers
    // Calculates wheelCountRecip and wheelCountPlusOneRecip
    //
    // From disasm at 0x805954a8:
    // r22 = playerIdx (parameter, checked > 0)
    // Calls 0x80590aac - gets KartParam for playerIdx
    // If result != 1, early return (invalid player)
    // If playerIdx <= 0, also skip
    //
    // Sets field at offset 0x10 (isBike): checks param bit 0xc
    //   - If not online (r21 == 0): set bit 0x10 (isBike?)  
    //   - Sets bit 0x8 based on online status
    //
    // Stores wheel count at offset 0x6c from param
    // If not online: doubles wheel count (slwi r0, r0, 1)
    // Reads s16 at 0xa6, decrements by 1
    // Stores back (clamped to 0)
    // If wheel count > 0 and vehicle > 0: set state flags
    this->isBike = 0;
    this->vehicle = 0;
    this->character = 0;
    this->susCount = 0;
    this->wheelCount = 0;
    this->playerIdx = 0;
    this->kartParam = nullptr;
    this->_18 = nullptr;
    this->kartDriverDispParams = nullptr;
    this->kartPartsDispParams = nullptr;
    this->bikePartsDispParams = nullptr;
    this->driverDispParams = nullptr;
    this->wheelCountRecip = 0.0f;
    this->wheelCountPlusOneRecip = 0.0f;
    this->gpStats = nullptr;
}

} // namespace Kart