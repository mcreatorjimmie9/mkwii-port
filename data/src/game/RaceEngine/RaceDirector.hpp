#pragma once
// RaceDirector.hpp - Multi-race session coordinator
// Manages grand prix series, score accumulation, and race-to-race transitions
// Address range: 0x80465000 - 0x80470000

#include "rk_common.h"

#ifndef UNUSED
#define UNUSED(x) (void)(x)
#endif

namespace RaceEngine {

class RaceSequence;
class RaceConfig;

// Race types
enum RaceType {
    RACE_TYPE_GRAND_PRIX = 0,
    RACE_TYPE_VS = 1,
    RACE_TYPE_BATTLE = 2,
    RACE_TYPE_TIME_TRIAL = 3,
    RACE_TYPE_MISSION = 4,
};

// Grand prix cup IDs
enum CupId {
    CUP_MUSHROOM = 0,
    CUP_FLOWER = 1,
    CUP_STAR = 2,
    CUP_SPECIAL = 3,
    CUP_SHELL = 4,
    CUP_BANANA = 5,
    CUP_LIGHTNING = 6,
    CUP_LEAF = 7,
};

// Director phases
enum DirectorPhase {
    DIRECTOR_IDLE = 0,
    DIRECTOR_CUP_INTRO = 1,
    DIRECTOR_PRE_RACE = 2,
    DIRECTOR_RACING = 3,
    DIRECTOR_POST_RACE = 4,
    DIRECTOR_CUP_RESULTS = 5,
    DIRECTOR_AWARD_CEREMONY = 6,
    DIRECTOR_FINISHED = 7,
};

// Point values for positions 1-12 (MKWii standard)
extern const u16 sPositionPoints[12];

// Cup data (4 courses per cup)
struct CupData {
    CupId cupId;
    u16 courses[4];
    u16 courseCount;
};

// Series standings entry
struct SeriesStanding {
    u32 playerId;
    s32 totalPoints;
    s32 racePoints[4];       // Points per race
    s32 positions[4];        // Position per race
    u16 vrChange;            // VR change at end of series
    u8 characterId;
    u8 kartId;
};

// Race director configuration
struct DirectorConfig {
    RaceType raceType;
    CupId cupId;
    u8 playerCount;
    u8 totalRaces;           // 4 for GP, 1 for VS
    u8 lapsPerRace;
    u8 isOnline;
    u8 engineClass;          // 50cc, 100cc, 150cc, Mirror
    u8 _pad[1];
};

class RaceDirector {
public:
    RaceDirector();
    ~RaceDirector();

    // --- Initialization ---
    // @addr 0x80465000
    void init(const DirectorConfig& config);
    // @addr 0x804651A0
    void shutdown();

    // --- Session management ---
    // @addr 0x80465340
    void startSeries();
    // @addr 0x80465500
    void startNextRace();
    // @addr 0x804656C0
    void onRaceComplete();
    // @addr 0x80465880
    void endSeries();

    // --- Update ---
    // @addr 0x80465A40
    void update();

    // --- State ---
    DirectorPhase getPhase() const { return mPhase; }
    u32 getCurrentRace() const { return mCurrentRace; }
    u32 getTotalRaces() const { return mConfig.totalRaces; }
    u16 getCurrentCourse() const;

    // --- Standings ---
    // @addr 0x80465BC0
    void addRacePoints(u32 playerId, s32 points);
    // @addr 0x80465D40
    const SeriesStanding* getStanding(u32 playerId) const;
    // @addr 0x80465E80
    u32 getLeaderPlayerId() const;
    s32 getPlayerTotalPoints(u32 playerId) const;

    // --- Course management ---
    // @addr 0x80466000
    void setupCupCourses(CupId cupId);
    // @addr 0x804661C0
    u16 getRandomCourse();

    // --- VR rating ---
    // @addr 0x80466340
    void calculateVRRating();
    s32 getVRRating(u32 playerId) const;

    // --- Trophy ---
    // @addr 0x804664C0
    bool hasPlayerWon(u32 playerId) const;
    u32 getPlayerTrophy(u32 playerId) const; // 0=none, 1=bronze, 2=silver, 3=gold

private:
    static const u32 MAX_RACE_PLAYERS = 12;
    static const u32 MAX_RACES = 4;

    // Configuration
    DirectorConfig mConfig;

    // State
    DirectorPhase mPhase;
    u32 mCurrentRace;
    RaceSequence* mRaceSequence;
    RaceConfig* mCurrentRaceConfig;

    // Cup data
    CupData mCupData;
    u16 mRaceCourses[MAX_RACES];  // Course IDs for each race in series

    // Standings
    SeriesStanding mStandings[MAX_RACE_PLAYERS];
    u32 mPlayerCount;

    // Internal
    void processCupIntro();
    void processPreRace();
    void processRacing();
    void processPostRace();
    void processCupResults();
    void processAwardCeremony();
};

} // namespace RaceEngine