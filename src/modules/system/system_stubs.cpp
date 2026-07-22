// system_stubs.cpp — Global singleton instances and missing method stubs
//
// In MKWii, these singletons are created during system boot (InitScene, KPadDirector).
// On PC, we instantiate them once at startup so the decompiled RaceConfig/RaceManager
// code can safely dereference spInstance without crashing.
//
// Also provides stub implementations for virtual methods and externs that
// RaceManager.cpp and RaceConfig.cpp reference but don't define.

#include "system/InitScene.hpp"
#include "system/KPadDirector.hpp"
#include "system/Competition.hpp"
#include "system/RaceMode.hpp"
// RaceManager classes are defined in RaceManager.hpp which includes these
#include "RaceEngine/RaceManager.hpp"
#include "RaceEngine/RaceConfig.hpp"
#include <cstring>
#include <cstdlib>

// ============================================================================
// Missing externs referenced by RaceConfig.cpp
// ============================================================================

// ptr_Nwc24Manager — global pointer to the NWC24 manager (used by initCompetitionSettings)
namespace System { void* ptr_Nwc24Manager = nullptr; }

// getCompetitionWrapper — reads competition data from NWC24 manager
// In the original, this reads from the saved competition file on Wii NAND.
// On PC, return empty (no competition support yet).
extern "C" void getCompetitionWrapper(void* manager, System::CompetitionWrapper* wrapper) {
    (void)manager;
    if (wrapper) {
        wrapper->isValid = false;
        wrapper->fileRaw = nullptr;
    }
}

// ============================================================================
// Missing virtual method implementations for RaceManager classes
// ============================================================================

// RaceManagerPlayer::~RaceManagerPlayer — virtual destructor (vtable needs it)
System::RaceManagerPlayer::~RaceManagerPlayer() {}

// TimerManagerBase — virtual method implementations (vtable needs these)
// In the original, TimerManagerBase::reset() zeros timers and TimerManagerBase::update()
// increments the race timer. We provide no-op stubs since the PC port manages
// time through SceneRace's own timer.
System::TimerManagerBase::~TimerManagerBase() {}
void System::TimerManagerBase::reset() {
    raceHasStarted = false;
    timerIsReversed = false;
    raceDurationMillis = 0;
    field26_0x40 = 0;
}
void System::TimerManagerBase::update() {
    // No-op: timer updates are handled by SceneRace::updateRacing()
    // which advances m_raceTime each frame.
}

// TimerManager — override virtuals
System::TimerManager::~TimerManager() {}
void System::TimerManager::reset() { TimerManagerBase::reset(); }
void System::TimerManager::update() { TimerManagerBase::update(); }

// KmgFile::fromRaw — parse KMG (battle settings) file data
// In the original, this maps the raw file data to the KmgFileRaw struct.
// On PC, just zero the pointer (no KMG file loading).
void System::KmgFile::fromRaw(void* file) {
    (void)file;
    data = nullptr;
}

// KmgFile::~KmgFile — virtual destructor
System::KmgFile::~KmgFile() {}

// RaceMode subclasses — their destructors are inherited from RaceMode
// (defined inline in Competition.hpp). No additional stubs needed.

// RaceConfig::Scenario missing method stubs
// copyPrevPositions — copies previous race finish positions for GP continuity
void System::RaceConfig::Scenario::copyPrevPositions() {
    // No-op: position continuity handled by platform RaceSession
}

// postInitControllers — assigns controller indices after mode-specific setup
void System::RaceConfig::Scenario::postInitControllers(System::RaceConfig::Scenario* scenario) {
    (void)scenario;
}

// isTeamMode — checks if team mode is active
bool System::RaceConfig::Scenario::isTeamMode() {
    return (mSettings.mModeFlags & Settings::MODE_FLAG_TEAMS) != 0;
}

// reset — clears scenario state for new race
void System::RaceConfig::Scenario::reset() {
    // Delegated to clear()
    clear();
}

// RaceConfig::Scenario extended getters
const System::RaceConfig::Settings& System::RaceConfig::Scenario::getSetting() const {
    return mSettings;
}
void System::RaceConfig::Scenario::setSetting(const Settings& settings) {
    mSettings = settings;
}
u8 System::RaceConfig::Scenario::getPlayerCount() const {
    return mPlayerCount;
}
bool System::RaceConfig::Scenario::isMultiplayer() const {
    return mLocalPlayerCount > 1;
}
bool System::RaceConfig::Scenario::validateSettings() const {
    return mPlayerCount > 0;
}
s32 System::RaceConfig::Scenario::getControllerForPlayer(u8 playerIdx) const {
    if (playerIdx >= MAX_PLAYER_COUNT) return -1;
    return mPlayers[playerIdx].mControllerId;
}

// RaceConfig::Player missing getter stubs
System::CharacterId System::RaceConfig::Player::getCharacter() { return mCharacterId; }
System::VehicleId System::RaceConfig::Player::getVehicle() { return mVehicleId; }
u8 System::RaceConfig::Player::getUnkPos() { return _c8; }

// ============================================================================
// Singleton instances
// ============================================================================

namespace System {

// InitScene — created during system boot in MKWii (InitScene_construct at 0x80324C4)
InitScene* InitScene::spInstance = nullptr;

} // namespace System

// KPadDirector — created during system boot in MKWii
KPadDirector* KPadDirector::spInstance = nullptr;

// ============================================================================
// initSystemSingletons() — Called once from main() before any race setup
//
// Creates the minimal system singletons needed by RaceConfig/RaceManager.
// In the original MKWii, this happens during the boot sequence:
//   1. InitScene::spInstance = new InitScene() (0x80324C4)
//   2. KPadDirector::spInstance = new KPadDirector() (via KPadDirector_construct)
//   3. RaceConfig::spInstance = RaceConfig::createInstance() (0x80532340)
//   4. RaceConfig::init() (0x80530228)
// ============================================================================
extern "C" void initSystemSingletons() {
    // Create InitScene
    if (!System::InitScene::spInstance) {
        System::InitScene::spInstance = new System::InitScene();
        // Zero heap pointers — safe because ParameterFile::append/read are no-ops
        std::memset(System::InitScene::spInstance->mHeapCollection.mpHeaps, 0,
                     sizeof(System::InitScene::spInstance->mHeapCollection.mpHeaps));
    }

    // Create KPadDirector
    if (!KPadDirector::spInstance) {
        KPadDirector::spInstance = new KPadDirector();
        std::memset(KPadDirector::spInstance->playerInputs, 0,
                     sizeof(KPadDirector::spInstance->playerInputs));
    }
}

// ============================================================================
// shutdownSystemSingletons() — Called at application exit
//
// In the original MKWii, these are destroyed during scene teardown.
// The destruction order is reversed: RaceConfig → KPadDirector → InitScene.
// ============================================================================
extern "C" void shutdownSystemSingletons() {
    // KPadDirector
    if (KPadDirector::spInstance) {
        delete KPadDirector::spInstance;
        KPadDirector::spInstance = nullptr;
    }

    // InitScene
    if (System::InitScene::spInstance) {
        delete System::InitScene::spInstance;
        System::InitScene::spInstance = nullptr;
    }
}
