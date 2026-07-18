// RaceManager.cpp - Adapted from community decomp with address annotations
// Original: data/decompiled/existing/src/system/RaceManager.cpp

#include "RaceManager.hpp"
#include "RaceConfig.hpp"

namespace System {

KrtFile** RaceManager::getKrtFile() {
    KrtFile** files;

    if (RaceConfig::spInstance->mRaceScenario.mSettings.mGameMode != RaceConfig::Settings::GAMEMODE_GRAND_PRIX) {
        return nullptr;
    }
    else {
        RaceModeGrandPrix* raceModeGP = static_cast<RaceModeGrandPrix*>(raceMode);
        files = raceModeGP->krtFile;
        return (files[0] != nullptr) ? files : nullptr;
    }
}

// @addr 0x80538de0
// This function calculates the hidden score for the current race, which will be
// used for calculating the star rank later. It is called at the end of each
// Grand Prix race, right before showing the results.
void RaceManagerPlayer::updateGpRankScore() {
    s32 raceStarRankScore = 0;
    s32 krtTime = 0;
    KrtFile** krtFile = nullptr;
    
    // Get `ranktimeGP.krt` (`krtFile[0]`).
    krtFile = RaceManager::spInstance->getKrtFile();

    if ((krtFile == nullptr) || (RaceConfig::spInstance->mRaceScenario.getPlayer(idx).getPlayerType() != RaceConfig::Player::TYPE_REAL_LOCAL)) {
        unk34 = 7;
    }
    // If the player is human and `ranktimeGP.krt` was loaded...
    else {
        // Get course time limit from `ranktimeGP`.
        s32 engineClass = RaceConfig::spInstance->mRaceScenario.mSettings.getEngineClass();
        s32 courseId = RaceConfig::spInstance->mRaceScenario.mSettings.getCourseId();
        krtTime = (krtFile[0] != nullptr) ? krtFile[0]->entries[courseId][RaceConfig::spInstance->mRaceScenario.mSettings.getEngineClass()] : 0;

        // Calculate time bonus
        raceStarRankScore += 1000.0f * (krtTime - frameCounter) / krtTime;
        // Calculate time bonus corresponding to the time spent in 1st place.
        raceStarRankScore += framesInFirstPlace * 150 / krtTime;

        // Apply bonus for successful rocket start.
        if (Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->gpStats->startBoostSuccessful) {
            raceStarRankScore += 25;
        }
        
        // Apply bonus for number of miniturbos performed.
        u16 miniturbos = Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->gpStats->miniturbos;
        raceStarRankScore += (miniturbos * 2);
        
        // Apply bonus for number of times the player hits a CPU with items.
        u16 hitOthersWithItemsCount = Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->raceStats->hitOthersWithItemsCount;
        raceStarRankScore += (hitOthersWithItemsCount * 5);
        
        // Apply penalty for the time spent offroad.
        raceStarRankScore -= (Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->gpStats->offroad / 3);
        
        // Apply penalty for number of times the player hits a wall.
        u16 numWallCollision = Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->gpStats->numWallCollision;
        raceStarRankScore -= (numWallCollision * 20);
        
        // Apply penalty for number of times the player gets damaged by a course object.
        u16 numObjectCollision = Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->gpStats->numObjectCollision;
        raceStarRankScore -= (numObjectCollision * 30);
        
        // Apply penalty for number of times the player had to be respawned by Lakitu.
        u16 outOfBounds = Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->gpStats->outOfBounds;
        raceStarRankScore -= (outOfBounds * 70);

        s8 playerInputIdx = RaceConfig::spInstance->mRaceScenario.getPlayer(idx).getPlayerInputIdx();
        
        // Apply bonus for playing using the Wii Wheel.
        if (playerInputIdx != -1) {
            Controller* controller = InputManager::spInstance->playerInputs[(u8) playerInputIdx].raceController;

            u32 controllerType = (controller != nullptr) ? controller->getType() : CONTROLLER_TYPE_UNKNOWN;
            if (controllerType == CONTROLLER_TYPE_WII_WHEEL) {
                raceStarRankScore += 10;
            }
        }

        // Apply bonus for using Automatic drift
        if (playerInputIdx != -1) {
            Controller* controller = InputManager::spInstance->playerInputs[(u8) playerInputIdx].raceController;

            bool usingAutomaticDrift = (controller != nullptr) ? controller->driftIsAuto : false;
            if (usingAutomaticDrift) {
                raceStarRankScore += 25;
            }
        }

        // Apply `AIRankManager` bonus.
        u16 aiRankBonus = Kart::KartObjectManager::spInstance->getObject(idx)->mAccessor->settings->gpStats->aiRankBonus;
        raceStarRankScore += aiRankBonus;

        // Clamp the start rank score for this race between [-50, 250]
        if (raceStarRankScore < -50) {
            raceStarRankScore = -50;
        }
        if (raceStarRankScore > 250) {
            raceStarRankScore = 250;
        }

        // Save the new star rank score
        RaceConfig::spInstance->mMenuScenario.getPlayer(idx).mGpStarRankScore += (s16) raceStarRankScore;
    }
}

} // namespace System