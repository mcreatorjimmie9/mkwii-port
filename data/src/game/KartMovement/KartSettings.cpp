#include "KartSettings.hpp"

namespace Kart {

// 0x805954a8 - __ct__Q24Kart12KartSettingsFv
// Size: 204 bytes, Calls: 0x80590aac
KartSettings::KartSettings() {
    // Calls 0x80590aac (get kart param for this player)
    // Initializes vehicle, character, suspension count, wheel count
    // Sets up display params pointers
    // Calculates wheelCountRecip and wheelCountPlusOneRecip
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
    this->raceStats = nullptr;
}

} // namespace Kart