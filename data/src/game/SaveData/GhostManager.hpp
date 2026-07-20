#pragma once
// GhostManager.hpp - Ghost replay data management
// Handles ghost storage, playback, comparison, and library management
// Address range: 0x80570000 - 0x80578000

#include "rk_common.h"

namespace SaveData {

class License;
class GhostFile;

// Ghost storage flags
enum GhostFlags {
    GHOST_FLAG_STAFF = 0x01,     // Staff ghost (developer/Nintendo)
    GHOST_FLAG_VALID = 0x02,     // Ghost data passed integrity check
    GHOST_FLAG_FASTEST = 0x04,  // Fastest ghost for this course
    GHOST_FLAG_PERSONAL = 0x08, // Personal best ghost
    GHOST_FLAG_DOWNLOADED = 0x10, // Downloaded from Wi-Fi rankings
};

// Ghost validation result
enum GhostValidation {
    GHOST_VALID = 0,
    GHOST_INVALID_CHECKSUM = 1,
    GHOST_INVALID_LAPS = 2,
    GHOST_INVALID_FRAMES = 3,
    GHOST_INVALID_VERSION = 4,
};

// Ghost header (stored at start of ghost file)
struct GhostHeader {
    u8 version;             // Ghost data format version
    u8 characterId;
    u8 kartId;
    u8 courseLapCount;     // Laps this ghost was recorded with
    u16 courseId;
    u32 totalTimeMs;        // Total race time
    u32 bestLapTimeMs;
    u8 playerCount;
    u8 engineClass;         // 50cc, 100cc, 150cc
    u8 isOnline;
    u8 flags;               // GhostFlags bitmask
    u32 frameCount;          // Total frames in the ghost replay
    u32 dataOffset;          // Offset to replay data
    u32 dataSize;            // Size of replay data
    u32 checksum;            // CRC32 of replay data
    u8 profileId[12];       // Wii friend code / profile identifier
    u8 _pad[16];
};

// Ghost replay frame — one frame of input recording
struct GhostFrame {
    u16 inputBits;           // Button state (PAD_BUTTON bitmask)
    s8 stickX;              // Analog stick X (-128 to 127)
    s8 stickY;              // Analog stick Y (-128 to 127)
    s8 triggerL;            // Left trigger (0-255)
    s8 triggerR;            // Right trigger (0-255)
};

// Ghost library entry (metadata for one stored ghost)
struct GhostEntry {
    GhostHeader header;
    u32 fileId;              // Internal file ID on NAND
    u8 slotIndex;            // Which ghost slot (0-35)
    u8 isLoaded;
    u8 isActive;             // Currently being used in playback
    u8 _pad;
};

class GhostManager {
public:
    GhostManager();
    ~GhostManager();

    // --- Initialization ---
    // @addr 0x80570000
    void init(License* license);
    // @addr 0x805701A0
    void shutdown();

    // --- Ghost I/O ---
    // @addr 0x80570340
    GhostValidation saveGhost(u16 courseId, const GhostHeader& header, const GhostFrame* frames, u32 frameCount);
    // @addr 0x80570520
    GhostValidation loadGhost(u16 courseId, u32 slotIndex, GhostHeader& outHeader, GhostFrame* outFrames, u32 maxFrames);
    // @addr 0x80570700
    bool deleteGhost(u16 courseId, u32 slotIndex);

    // --- Ghost validation ---
    // @addr 0x805708A0
    GhostValidation validateGhost(const GhostHeader& header, const GhostFrame* frames, u32 frameCount);
    // @addr 0x80570A40
    u32 calculateChecksum(const u8* data, u32 size);

    // --- Ghost library ---
    // @addr 0x80570BC0
    void scanGhostLibrary();
    // @addr 0x80570D40
    u32 getGhostCount(u16 courseId) const;
    // @addr 0x80570E80
    const GhostEntry* getGhost(u16 courseId, u32 slotIndex) const;
    // @addr 0x80571000
    GhostEntry* findFastestGhost(u16 courseId);
    // @addr 0x80571180
    GhostEntry* findPersonalBest(u16 courseId);
    // @addr 0x80571300
    s32 findFreeSlot(u16 courseId);

    // --- Playback ---
    // @addr 0x80571480
    void startPlayback(const GhostEntry* ghost);
    // @addr 0x80571620
    void stopPlayback();
    // @addr 0x805717A0
    void updatePlayback();
    const GhostFrame* getCurrentFrame() const;
    u32 getCurrentFrameIndex() const { return mPlaybackFrameIndex; }
    bool isPlaying() const { return mIsPlaying; }
    bool isPlaybackFinished() const;

    // --- Comparison ---
    // @addr 0x80571900
    s32 getTimeDifference(u32 playerTimeMs, u32 ghostTimeMs);
    // @addr 0x80571A40
    f32 getPositionDifference(f32 playerProgress, f32 ghostProgress);

    // --- Staff ghosts ---
    // @addr 0x80571B80
    bool hasStaffGhost(u16 courseId) const;
    // @addr 0x80571D00
    void loadStaffGhosts();

private:
    static const u32 MAX_GHOSTS_PER_COURSE = 36;
    static const u32 MAX_COURSES = 32;
    static const u32 MAX_GHOST_FRAMES = 21600; // 6 minutes at 60fps
    static const u32 MAX_PLAYBACK_FRAMES = 10800; // 3 minutes buffer

    // License reference
    License* mLicense;

    // Ghost library per course
    GhostEntry mLibrary[MAX_COURSES][MAX_GHOSTS_PER_COURSE];
    u32 mGhostCounts[MAX_COURSES];

    // Playback state
    const GhostFrame* mPlaybackFrames;
    u32 mPlaybackFrameCount;
    u32 mPlaybackFrameIndex;
    bool mIsPlaying;
    bool mPlaybackLoop;

    // Staff ghosts
    GhostEntry mStaffGhosts[MAX_COURSES];

    // Internal helpers
    u32 ghostSlotToLicenseSlot(u16 courseId, u32 slotIndex) const;
    bool saveToNAND(u16 courseId, u32 slotIndex, const GhostHeader& header, const GhostFrame* frames);
    bool loadFromNAND(u16 courseId, u32 slotIndex, GhostHeader& header, GhostFrame* frames, u32 maxFrames);
};

} // namespace SaveData