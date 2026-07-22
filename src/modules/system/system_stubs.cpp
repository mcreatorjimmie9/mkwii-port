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

// TimerManagerBase — virtual destructor (vtable needs it)
// Phase 21: Implementation moved to RaceManager.cpp, but destructor stays here.
System::TimerManagerBase::~TimerManagerBase() {}

// TimerManager — virtual destructor (vtable needs it)
System::TimerManager::~TimerManager() {}

// KmgFile — virtual destructor (vtable needs it)
// Phase 21: Implementation moved to RaceManager.cpp, but destructor stays here.
System::KmgFile::~KmgFile() {}

// RaceMode subclasses — their destructors are inherited from RaceMode
// (defined inline in Competition.hpp). No additional stubs needed.

// RaceConfig::Scenario methods now have real implementations in
// data/src/game/RaceEngine/Scenario.cpp (compiled into mkwii-genesis).
// Stubs removed to allow linker to pull real implementations from static lib.

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
