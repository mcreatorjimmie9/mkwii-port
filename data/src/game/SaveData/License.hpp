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

// ============================================================================
// Forward-declare Mii (from system/Mii.hpp, not yet ported)
// ============================================================================

namespace System {
class Mii;
}

// ============================================================================
// License Constants
// ============================================================================

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
    u32 totalRaces;
    u32 totalWins;
    u32 total2nd;
    u32 total3rd;
    u32 totalDisconnects;
    u32 totalOnlineRaces;
    u32 totalGPWins;
    u32 totalGPPlayed;
    u32 totalTTPlayed;
    u32 totalBTTPlayed;
    u32 totalItemsUsed;
    u32 totalMushrooms;
    u32 totalBananas;
    u32 totalShells;
    u32 totalStars;
    u32 totalBombs;
    u32 totalMegaMushrooms;
    u32 totalBulletBills;
    u32 totalThunderClouds;
    u32 totalBoosts;
    u32 totalTricks;
    u32 totalCoinCount;
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

    // --- Init / Load / Save ---
    // @addr 0x804F7000
    void init();
    // @addr 0x804F7020
    u32 load(const u8* buffer, u32 bufferSize);
    // @addr 0x804F7040
    u32 save(u8* buffer, u32 bufferSize) const;

    // --- Identity ---
    void setName(const char* name);
    const char* getName() const { return mName; }

    // @addr 0x804F7080
    const char* getLicenseName() const { return mName; }
    // @addr 0x804F70A0
    void setLicenseName(const char* name) { setName(name); }

    void setMii(System::Mii* mii);
    System::Mii* getMii() { return mMiiData; }
    // @addr 0x804F70C0
    System::Mii* getMiiData() { return mMiiData; }
    // @addr 0x804F70D0
    void setMiiData(System::Mii* mii) { setMii(mii); }

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

    bool hasGhost(u32 ghostIndex) const {
        if (ghostIndex >= MAX_GHOSTS_PER_LICENSE) return false;
        return !mGhosts[ghostIndex].isEmpty();
    }

    s32 saveGhost(const System::RawGhostFile& raw);
    s32 deleteGhost(u32 ghostIdx);

    u32 getGhostCount() const { return mGhostCount; }

    // --- Statistics ---
    LicenseStats* getStats() { return &mStats; }
    const LicenseStats* getStats() const { return &mStats; }

    // --- Validation ---
    // @addr 0x804F7100
    bool isValid() const;
    // @addr 0x804F7120
    u32 getCreatedDate() const;

    // --- Race count ---
    // @addr 0x804F7140
    u32 getTotalRaceCount() const;
    // @addr 0x804F7160
    void incrementRaceCount();

    void recordRaceFinish(u32 position);
    void recordGrandPrix(u32 overallPosition);
    void recordDisconnect();
    void resetStats();

    // --- Computed stats ---
    u32 getTotalPlayTime() const;
    u32 getWinRate() const;

    // --- Formatting ---
    // Format VR as 4-digit zero-padded string: "5000" → "5000"
    static void formatVR(u32 vr, char* buf, u32 bufSize);

    // --- Serialization ---
    u32 serialize(u8* buffer, u32 bufferSize) const;
    u32 deserialize(const u8* buffer, u32 bufferSize);

    // --- State ---
    bool isDirty() const { return mDirty; }
    void markClean() { mDirty = false; }

    // --- Creation date ---
    void setCreatedDate(u16 year, u8 month, u8 day) {
        mCreatedYear = year; mCreatedMonth = month; mCreatedDay = day;
    }

private:
    char            mName[LICENSE_NAME_MAX + 1];
    System::Mii*    mMiiData;
    u32             mVR;
    u32             mBR;

    RecordData      mRecords[MAX_RECORDS];
    System::GhostFile mGhosts[MAX_GHOSTS_PER_LICENSE];
    u32             mGhostCount;

    LicenseStats    mStats;
    bool            mDirty;

    // Creation date tracking
    u16 mCreatedYear;
    u8  mCreatedMonth;
    u8  mCreatedDay;
};