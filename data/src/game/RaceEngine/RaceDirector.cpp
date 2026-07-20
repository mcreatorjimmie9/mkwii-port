// RaceDirector.cpp - Multi-race session coordinator implementation
// Address range: 0x80465000 - 0x80470000

#include <cstring>
#include "RaceDirector.hpp"
#include "RaceSequence.hpp"

namespace RaceEngine {

// MKWii standard point values for positions 1-12
// @addr 0x80465080 (rodata)
const u16 sPositionPoints[12] = {
    15, 12, 10, 8, 7, 6, 5, 4, 3, 2, 1, 0
};

RaceDirector::RaceDirector()
    : mPhase(DIRECTOR_IDLE), mCurrentRace(0), mRaceSequence(nullptr),
      mCurrentRaceConfig(nullptr), mPlayerCount(0) {
    memset(&mConfig, 0, sizeof(DirectorConfig));
    memset(&mCupData, 0, sizeof(CupData));
    memset(mRaceCourses, 0, sizeof(mRaceCourses));
    memset(mStandings, 0, sizeof(mStandings));
}

RaceDirector::~RaceDirector() {
    shutdown();
}

// @addr 0x80465000
void RaceDirector::init(const DirectorConfig& config) {
    mConfig = config;
    mPlayerCount = config.playerCount;
    mCurrentRace = 0;
    mPhase = DIRECTOR_IDLE;

    memset(mStandings, 0, sizeof(mStandings));
    for (u32 i = 0; i < MAX_RACE_PLAYERS; i++) {
        mStandings[i].playerId = i;
    }

    memset(&mCupData, 0, sizeof(CupData));
    memset(mRaceCourses, 0, sizeof(mRaceCourses));
    mRaceSequence = nullptr;
    mCurrentRaceConfig = nullptr;

    if (config.raceType == RACE_TYPE_GRAND_PRIX) {
        setupCupCourses(config.cupId);
    }
}

// @addr 0x80465100 — Simple initialization (no config struct)
/* RaceDirector_initSimple @ 0x80465100 */
void RaceDirector::init() {
    DirectorConfig defaultConfig;
    memset(&defaultConfig, 0, sizeof(DirectorConfig));
    defaultConfig.raceType = RACE_TYPE_VS;
    defaultConfig.playerCount = 12;
    defaultConfig.totalRaces = 1;
    defaultConfig.lapsPerRace = 3;
    defaultConfig.isOnline = 0;
    defaultConfig.engineClass = 2; // 150cc
    init(defaultConfig);
}

// @addr 0x804651A0
void RaceDirector::shutdown() {
    if (mRaceSequence != nullptr) {
        mRaceSequence->shutdown();
        delete mRaceSequence;
        mRaceSequence = nullptr;
    }
    mCurrentRaceConfig = nullptr;
    mPhase = DIRECTOR_IDLE;
    mPlayerCount = 0;
}

// @addr 0x80465200 — Begin a single race (transition from PRE_RACE to RACING)
/* RaceDirector_beginRace @ 0x80465200 */
void RaceDirector::beginRace() {
    if (mPhase != DIRECTOR_PRE_RACE) {
        return;
    }
    if (mRaceSequence == nullptr) {
        return;
    }
    mRaceSequence->startCountdown();
    mPhase = DIRECTOR_RACING;
}

// @addr 0x80465240 — End the current race immediately
/* RaceDirector_endRace @ 0x80465240 */
void RaceDirector::endRace() {
    if (mRaceSequence == nullptr) {
        return;
    }
    mRaceSequence->endRace();
    onRaceComplete();
}

// @addr 0x80465340
void RaceDirector::startSeries() {
    mCurrentRace = 0;
    mPhase = DIRECTOR_CUP_INTRO;

    for (u32 i = 0; i < MAX_RACE_PLAYERS; i++) {
        mStandings[i].totalPoints = 0;
        mStandings[i].vrChange = 0;
    }
}

// @addr 0x80465500
void RaceDirector::startNextRace() {
    if (mCurrentRace >= mConfig.totalRaces) {
        endSeries();
        return;
    }

    if (mRaceSequence != nullptr) {
        mRaceSequence->shutdown();
        delete mRaceSequence;
        mRaceSequence = nullptr;
    }

    mRaceSequence = new RaceSequence();
    UNUSED(mRaceCourses[mCurrentRace]);
    mRaceSequence->init(mCurrentRaceConfig, mPlayerCount);
    mRaceSequence->setupCheckpoints(mRaceCourses[mCurrentRace]);

    mPhase = DIRECTOR_PRE_RACE;
}

// @addr 0x804656C0
void RaceDirector::onRaceComplete() {
    if (mRaceSequence == nullptr) {
        return;
    }

    for (u32 i = 0; i < mPlayerCount; i++) {
        const RaceResult* result = mRaceSequence->getResult(i);
        if (result == nullptr) continue;

        addRacePoints(i, static_cast<s32>(result->pointsAwarded));

        if (mCurrentRace < MAX_RACES) {
            mStandings[i].positions[mCurrentRace] = result->position;
        }
    }

    mPhase = DIRECTOR_POST_RACE;
}

// @addr 0x80465880
void RaceDirector::endSeries() {
    calculateVRRating();
    mPhase = DIRECTOR_FINISHED;
}

// @addr 0x80465A40
void RaceDirector::update() {
    switch (mPhase) {
    case DIRECTOR_CUP_INTRO:
        processCupIntro();
        break;
    case DIRECTOR_PRE_RACE:
        processPreRace();
        break;
    case DIRECTOR_RACING:
        processRacing();
        break;
    case DIRECTOR_POST_RACE:
        processPostRace();
        break;
    case DIRECTOR_CUP_RESULTS:
        processCupResults();
        break;
    case DIRECTOR_AWARD_CEREMONY:
        processAwardCeremony();
        break;
    default:
        break;
    }
}

u16 RaceDirector::getCurrentCourse() const {
    if (mCurrentRace >= MAX_RACES) {
        return 0;
    }
    return mRaceCourses[mCurrentRace];
}

// @addr 0x80465BC0
void RaceDirector::addRacePoints(u32 playerId, s32 points) {
    if (playerId >= MAX_RACE_PLAYERS) {
        return;
    }

    mStandings[playerId].totalPoints += points;

    if (mCurrentRace < MAX_RACES) {
        mStandings[playerId].racePoints[mCurrentRace] = points;
    }
}

// @addr 0x80465D40
const SeriesStanding* RaceDirector::getStanding(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) {
        return nullptr;
    }
    return &mStandings[playerId];
}

// @addr 0x80465E80
u32 RaceDirector::getLeaderPlayerId() const {
    u32 leaderId = 0;
    s32 leaderPoints = -1;

    for (u32 i = 0; i < mPlayerCount; i++) {
        if (mStandings[i].totalPoints > leaderPoints) {
            leaderPoints = mStandings[i].totalPoints;
            leaderId = i;
        }
    }
    return leaderId;
}

s32 RaceDirector::getPlayerTotalPoints(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) {
        return 0;
    }
    return mStandings[playerId].totalPoints;
}

// @addr 0x80466000
void RaceDirector::setupCupCourses(CupId cupId) {
    static const u16 sCupCourses[8][4] = {
        { 0x01, 0x02, 0x03, 0x04 }, // Mushroom
        { 0x05, 0x06, 0x07, 0x08 }, // Flower
        { 0x09, 0x0A, 0x0B, 0x0C }, // Star
        { 0x0D, 0x0E, 0x0F, 0x10 }, // Special
        { 0x11, 0x12, 0x13, 0x14 }, // Shell
        { 0x15, 0x16, 0x17, 0x18 }, // Banana
        { 0x19, 0x1A, 0x1B, 0x1C }, // Lightning
        { 0x1D, 0x1E, 0x1F, 0x20 }, // Leaf
    };

    mCupData.cupId = cupId;
    mCupData.courseCount = 4;

    if (cupId <= CUP_LEAF) {
        for (u32 i = 0; i < 4; i++) {
            mCupData.courses[i] = sCupCourses[cupId][i];
            mRaceCourses[i] = sCupCourses[cupId][i];
        }
    }
}

// @addr 0x804661C0
u16 RaceDirector::getRandomCourse() {
    static u16 sIdx = 0;
    sIdx = (sIdx + 1) % 32;
    return sIdx;
}

// @addr 0x80466340
void RaceDirector::calculateVRRating() {
    static const s32 sExpectedPositions[12] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
    };

    for (u32 i = 0; i < mPlayerCount; i++) {
        s32 totalPositionDiff = 0;
        u32 racesCompleted = 0;

        for (u32 r = 0; r < mConfig.totalRaces && r < MAX_RACES; r++) {
            s32 pos = mStandings[i].positions[r];
            if (pos > 0) {
                totalPositionDiff += (sExpectedPositions[i] - pos);
                racesCompleted++;
            }
        }

        if (racesCompleted > 0) {
            s32 avgDiff = totalPositionDiff / static_cast<s32>(racesCompleted);

            // VR change: ~15 pts per position diff, capped
            s32 vrDelta = avgDiff * 15;
            if (vrDelta > 150) {
                vrDelta = 150;
            }
            if (vrDelta < -150) {
                vrDelta = -150;
            }

            mStandings[i].vrChange = static_cast<u16>(
                static_cast<s32>(mStandings[i].vrChange) + vrDelta);
        }
    }
}

s32 RaceDirector::getVRRating(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) return 0;
    return static_cast<s32>(mStandings[playerId].vrChange);
}

// @addr 0x804664C0
bool RaceDirector::hasPlayerWon(u32 playerId) const {
    return getLeaderPlayerId() == playerId;
}

u32 RaceDirector::getPlayerTrophy(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) return 0;

    s32 total = mStandings[playerId].totalPoints;
    s32 maxPossible = 15 * static_cast<s32>(mConfig.totalRaces);

    // Gold >= 90%, Silver >= 62%, Bronze >= 33%
    if (total >= (maxPossible * 90) / 100) return 3;
    if (total >= (maxPossible * 62) / 100) return 2;
    if (total >= (maxPossible * 33) / 100) return 1;
    return 0;
}

// =============================================================================
// handleCountdown — Process the pre-race countdown phase
// @addr 0x80466500
//
// During the countdown (3-2-1-GO), the race sequence manages the timer.
// The director monitors the countdown and transitions to racing when
// the countdown completes. The countdown also handles:
//   - Camera swooping animation
//   - Engine rev sound start
//   - Lakitu's signal animation
// =============================================================================

/* RaceDirector_handleCountdown @ 0x80466500 */
void RaceDirector::handleCountdown() {
    if (mRaceSequence == nullptr) return;
    if (mPhase != DIRECTOR_PRE_RACE) return;

    mRaceSequence->update();

    // The race sequence transitions from COUNTDOWN to RACING
    // automatically when the countdown timer reaches zero.
    // We detect this transition to update the director's phase.
    if (mRaceSequence->getPhase() == RACE_PHASE_RACING) {
        mPhase = DIRECTOR_RACING;
    }
}

// =============================================================================
// handleFinish — Process race finish (all players crossed the line)
// @addr 0x80466600
//
// Called when all players have finished or the time limit expired.
// Transitions from RACING to POST_RACE and triggers result recording.
// =============================================================================

/* RaceDirector_handleFinish @ 0x80466600 */
void RaceDirector::handleFinish() {
    if (mPhase != DIRECTOR_RACING) return;
    if (mRaceSequence == nullptr) return;

    // Check if the race sequence has ended
    RacePhase phase = mRaceSequence->getPhase();
    if (phase == RACE_PHASE_RESULTS || phase == RACE_PHASE_POST_RACE) {
        onRaceComplete();
    }
}

// =============================================================================
// handleRestart — Restart the current race from the beginning
// @addr 0x80466700
//
// Resets the current race sequence to its initial state without
// advancing the series counter. Used when a player selects "Restart"
// from the pause menu during a race.
// =============================================================================

/* RaceDirector_handleRestart @ 0x80466700 */
void RaceDirector::handleRestart() {
    // Clean up the current race sequence
    if (mRaceSequence != nullptr) {
        mRaceSequence->shutdown();
        delete mRaceSequence;
        mRaceSequence = nullptr;
    }

    // Recreate the race sequence for the same course
    mRaceSequence = new RaceSequence();
    mRaceSequence->init(mCurrentRaceConfig, mPlayerCount);
    mRaceSequence->setupCheckpoints(mRaceCourses[mCurrentRace]);

    // Go back to pre-race phase
    mPhase = DIRECTOR_PRE_RACE;
}

// =============================================================================
// setPhase — Directly set the director's phase
// @addr 0x80466800
// =============================================================================

/* RaceDirector_setPhase @ 0x80466800 */
void RaceDirector::setPhase(DirectorPhase phase) {
    mPhase = phase;
}

// =============================================================================
// getPhase — Get the current director phase
// @addr 0x80466840
// =============================================================================

/* RaceDirector_getPhase @ 0x80466840 */
DirectorPhase RaceDirector::getPhase() const {
    return mPhase;
}

void RaceDirector::processCupIntro() {
    // Stub: UI scene drives transition via startNextRace()
}

void RaceDirector::processPreRace() {
    if (mRaceSequence == nullptr) return;

    mRaceSequence->update();

    if (mRaceSequence->getPhase() == RACE_PHASE_COUNTDOWN ||
        mRaceSequence->getPhase() == RACE_PHASE_RACING) {
        mPhase = DIRECTOR_RACING;
    }
}

void RaceDirector::processRacing() {
    if (mRaceSequence == nullptr) return;
    mRaceSequence->update();

    RacePhase seqPhase = mRaceSequence->getPhase();
    if (seqPhase == RACE_PHASE_RESULTS || seqPhase == RACE_PHASE_POST_RACE) {
        onRaceComplete();
    }
}

void RaceDirector::processPostRace() {
    mCurrentRace++;

    if (mCurrentRace >= mConfig.totalRaces) {
        mPhase = DIRECTOR_CUP_RESULTS;
    } else {
        startNextRace();
    }
}

void RaceDirector::processCupResults() {
    mPhase = DIRECTOR_AWARD_CEREMONY;
}

void RaceDirector::processAwardCeremony() {
    endSeries();
}

// =============================================================================
// RaceDirector_isRaceActive — Free function to check if a race is running
// @addr 0x80466900
// =============================================================================

/* RaceDirector_isRaceActive @ 0x80466900 */
bool RaceDirector_isRaceActive(const RaceDirector* director) {
    if (director == nullptr) {
        return false;
    }
    DirectorPhase phase = director->getPhase();
    return phase == DIRECTOR_RACING ||
           phase == DIRECTOR_PRE_RACE;
}

} // namespace RaceEngine