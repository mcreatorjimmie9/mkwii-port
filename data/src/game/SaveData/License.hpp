#pragma once
// ============================================================================
// License.hpp — Player License
//
// MKWii supports up to 3 player licenses per save file. Each license
// stores:
//   - Player name (up to 10 characters)
//   - Associated Mii data
//   - VR (Versus Rating) and BR (Battle Rating)
//   - Time trial records (32 course records + 36 ghost replays)
//   - Grand Prix records
//   - Statistics (races played, wins, etc.)
//
// The license is the fundamental identity unit for online play.
//
// Categorization: GENESIS Phase 5 (SaveData Module)
// ============================================================================

#include "rk_common.h"
#include "RecordData.hpp"
#include "GhostFile.hpp"
#include "system/Mii.hpp"

// ============================================================================
// License Constants
// ============================================================================

// Forward-declare constants (defined in SaveData.hpp)
// These are duplicated here for standalone compilation.
#ifndef MAX_RECORDS
#define MAX_RECORDS 32
#endif
#ifndef MAX_GHOSTS_PER_LICENSE
#define MAX_GHOSTS_PER_LICENSE 36
#endif

static const u32 LICENSE_NAME_MAX   = 10;
static const u32 MAX_VR             = 9999;
static const u32 DEFAULT_VR         = 5000;
static const u32 MAX_BR             = 9999;
static const u32 DEFAULT_BR         = 5000;

// ============================================================================
// License Statistics
// ============================================================================

#pragma pack(push, 1)

struct LicenseStats {
    u32 totalRaces;        // Total number of races completed
    u32 totalWins;         // Total races won (1st place)
    u32 total2nd;          // Total 2nd place finishes
    u32 total3rd;          // Total 3rd place finishes
    u32 totalDisconnects;  // Races lost to disconnect
    u32 totalOnlineRaces;  // Online races played
    u32 totalGPWins;       // Grand Prix wins (1st overall)
    u32 totalGPPlayed;     // Grand Prix played
    u32 totalTTPlayed;     // Time trials completed
    u32 totalBTTPlayed;    // Battle time trials completed
    u32 totalItemsUsed;    // Items used (all types)
    u32 totalMushrooms;    // Mushrooms used
    u32 totalBananas;      // Bananas used
    u32 totalShells;       // Shells used
    u32 totalStars;        // Stars used
    u32 totalBombs;        // Bob-ombs used
    u32 totalMegaMushrooms;// Mega Mushrooms used
    u32 totalBulletBills;  // Bullet Bills used
    u32 totalThunderClouds;// Thunder Clouds absorbed
    u32 totalBoosts;       // Total boost time (frames)
    u32 totalTricks;       // Successful tricks performed
    u32 totalCoinCount;    // Coins collected (cumulative)
    u32 _pad[0x04];
};

#pragma pack(pop)

// ============================================================================
// License — Player Identity & Records
// ============================================================================

class License {
public:
    License();
    ~License();

    // --- Identity ---
    void setName(const char* name);
    const char* getName() const { return mName; }

    void setMii(System::Mii* mii);
    System::Mii* getMii() { return mMiiData; }

    // --- Rating ---
    void setVR(u32 vr) { mVR = vr > MAX_VR ? MAX_VR : vr; }
    u32 getVR() const { return mVR; }

    void setBR(u32 br) { mBR = br > MAX_BR ? MAX_BR : br; }
    u32 getBR() const { return mBR; }

    void adjustVR(s32 delta);
    void adjustBR(s32 delta);

    // --- Time Trial Records ---
    RecordData* getRecord(u32 courseIndex) {
        if (courseIndex >= MAX_RECORDS) return nullptr;
        return &mRecords[courseIndex];
    }

    void setRecord(u32 courseIndex, const System::Time& time, bool isStaffGhost);

    // --- Ghost Data ---
    System::GhostFile* getGhost(u32 ghostIndex) {
        if (ghostIndex >= MAX_GHOSTS_PER_LICENSE) return nullptr;
        return &mGhosts[ghostIndex];
    }

    s32 saveGhost(const System::RawGhostFile& raw);
    s32 deleteGhost(u32 ghostIdx);

    u32 getGhostCount() const { return mGhostCount; }

    // --- Statistics ---
    LicenseStats* getStats() { return &mStats; }

    void recordRaceFinish(u32 position);
    void recordGrandPrix(u32 overallPosition);
    void recordDisconnect();

    // --- Serialization ---
    // Serialize/deserialize for save file I/O
    u32 serialize(u8* buffer, u32 bufferSize) const;
    u32 deserialize(const u8* buffer, u32 bufferSize);

    // --- State ---
    bool isDirty() const { return mDirty; }

private:
    // === License Data (from Wii save layout) ===
    char        mName[LICENSE_NAME_MAX + 1]; // Player display name
    System::Mii* mMiiData;                    // Associated Mii (heap-allocated)
    u32         mVR;                           // Versus Rating (5000-9999)
    u32         mBR;                           // Battle Rating (5000-9999)

    RecordData  mRecords[MAX_RECORDS];         // Per-course time trial records
    System::GhostFile mGhosts[MAX_GHOSTS_PER_LICENSE]; // Saved ghost replays
    u32         mGhostCount;

    LicenseStats mStats;                       // Cumulative statistics

    bool        mDirty;                        // Needs save
};