#pragma once
// ============================================================================
// SoundTypes.hpp — Core audio type definitions for MKWii AudioEngine
// Reconstructed from nw4r::snd framework (942 functions, StaticR.rel)
//
// This header defines all enums, constants, and forward declarations
// used throughout the audio subsystem.
// ============================================================================

#include <rk_types.h>

namespace nw4r {
namespace snd {

// ============================================================================
// Sound System States
// ============================================================================
enum SoundSystemState {
    SOUND_SYSTEM_STATE_UNINITIALIZED = 0,
    SOUND_SYSTEM_STATE_READY         = 1,
    SOUND_SYSTEM_STATE_PLAYING       = 2,
    SOUND_SYSTEM_STATE_PAUSED        = 3,
    SOUND_SYSTEM_STATE_FATAL_ERROR   = 4
};

// ============================================================================
// Sound Handle States
// ============================================================================
enum SoundHandleState {
    SOUND_HANDLE_STATE_FREE    = 0,
    SOUND_HANDLE_STATE_STARTING = 1,
    SOUND_HANDLE_STATE_PLAYING  = 2,
    SOUND_HANDLE_STATE_STOPPING = 3,
    SOUND_HANDLE_STATE_STOPPED  = 4,
    SOUND_HANDLE_STATE_FADE_OUT = 5
};

// ============================================================================
// Sound Player Types
// ============================================================================
enum SoundPlayerType {
    SOUND_PLAYER_TYPE_WAVE   = 0,   // Simple wave playback
    SOUND_PLAYER_TYPE_SEQ    = 1,   // Sequence (MIDI-like) playback
    SOUND_PLAYER_TYPE_STRM   = 2,   // Streamed audio (BGM)
    SOUND_PLAYER_TYPE_WAVE_PLAYER = 3
};

// ============================================================================
// Sound Startable Types (nw4r::snd::SoundStartable)
// ============================================================================
enum SoundStartableType {
    SOUND_STARTABLE_TYPE_SEQ_PLAYER     = 0,
    SOUND_STARTABLE_TYPE_WAVE_PLAYER    = 1,
    SOUND_STARTABLE_TYPE_STRM_PLAYER    = 2,
    SOUND_STARTABLE_TYPE_SEQ_SOUND      = 3,
    SOUND_STARTABLE_TYPE_WAVE_SOUND     = 4,
    SOUND_STARTABLE_TYPE_STRM_SOUND     = 5,
    SOUND_STARTABLE_TYPE_SOUND_ARCHIVE_PLAYER = 6
};

// ============================================================================
// Sound Categories (Mario Kart Wii specific)
// ============================================================================
enum SoundCategory {
    SOUND_CAT_BGM          = 0x00,  // Background music
    SOUND_CAT_SFX_RACE     = 0x01,  // Race sound effects
    SOUND_CAT_SFX_ITEM     = 0x02,  // Item sound effects
    SOUND_CAT_SFX_KART     = 0x03,  // Kart engine/driving sounds
    SOUND_CAT_SFX_MENU     = 0x04,  // Menu UI sounds
    SOUND_CAT_SFX_COURSE   = 0x05,  // Course environment sounds
    SOUND_CAT_SFX_PLAYER   = 0x06,  // Player character sounds
    SOUND_CAT_SFX_COMMON   = 0x07,  // Common/shared sounds
    SOUND_CAT_STREAM       = 0x08,  // Streamed audio
    SOUND_CAT_VOICE_CHAT   = 0x09,  // Online voice chat
    SOUND_CAT_SYSTEM       = 0x0A,  // System sounds
    SOUND_CAT_MAX          = 0x10
};

// ============================================================================
// BGM Track IDs (from BRSAR archive)
// ============================================================================
enum BGMTrackId {
    BGM_TITLE_SCREEN        = 0,
    BGM_MENU_CHARACTER_SEL  = 1,
    BGM_MENU_COURSE_SEL     = 2,
    BGM_MENU_RESULTS        = 3,
    BGM_COUNTDOWN           = 4,
    BGM_RACE_START_FANFARE  = 5,
    BGM_LAP_FANFARE         = 6,
    BGM_FINAL_LAP           = 7,
    BGM_RACE_FINISH_FANFARE = 8,
    BGM_RESULTS_CEREMONY    = 9,
    BGM_FIRST_50CC          = 10,  // Mushroom Cup
    BGM_SECOND_50CC         = 11,  // Flower Cup
    BGM_THIRD_50CC          = 12,  // Star Cup
    BGM_FOURTH_50CC         = 13,  // Special Cup
    BGM_FIRST_100CC         = 14,
    BGM_SECOND_100CC        = 15,
    BGM_THIRD_100CC         = 16,
    BGM_FOURTH_100CC        = 17,
    BGM_FIRST_150CC         = 18,
    BGM_SECOND_150CC        = 19,
    BGM_THIRD_150CC         = 20,
    BGM_FOURTH_150CC        = 21,
    BGM_MIRROR_150CC        = 22,
    BGM_BATTLE              = 23,
    BGM_online_race         = 24,
    BGM_CHANNEL            = 25,
    BGM_MAX                = 26
};

// ============================================================================
// SFX IDs (partial — full table in SoundFXDefs.hpp)
// ============================================================================
enum SFXId {
    SFX_NONE               = -1,
    // Kart sounds
    SFX_KART_ENGINE_LOW    = 0x56,
    SFX_KART_ENGINE_HIGH   = 0x58,
    SFX_KART_OFFROAD       = 0x59,
    SFX_KART_BOOST_MUSHROOM = 0x5C,
    SFX_KART_BOOST_START   = 0x5E,
    SFX_KART_BOOST_TRICK   = 0x5F,
    // Item sounds
    SFX_ITEM_MUSHROOM_USE  = 0x60,
    SFX_ITEM_BANANA_DROP   = 0x61,
    SFX_ITEM_GREEN_SHELL   = 0x62,
    SFX_ITEM_RED_SHELL     = 0x63,
    SFX_ITEM_STAR_USE      = 0x64,
    SFX_ITEM_BULLET_BILL   = 0x65,
    SFX_ITEM_THUNDER_CLOUD = 0x66,
    SFX_ITEM_LIGHTNING     = 0x67,
    // Menu sounds
    SFX_MENU_SELECT        = 0x70,
    SFX_MENU_CONFIRM       = 0x71,
    SFX_MENU_CANCEL        = 0x72,
    SFX_MENU_CURSOR_MOVE   = 0x73,
    // Race sounds
    SFX_RACE_COUNTDOWN_BEEP = 0x74,
    SFX_RACE_LAP_CHIME     = 0x75,
    SFX_RACE_FINAL_LAP     = 0x76,
    SFX_RACE_GO            = 0x77,
    // Hit sounds
    SFX_HIT_BANANA_SLIP    = 0x78,
    SFX_HIT_SHELL_SMALL    = 0x79,
    SFX_HIT_SHELL_BIG      = 0x7A,
    SFX_HIT_STAR_INVINCIBLE = 0x7B,
    SFX_HIT_BOMB_EXPLODE   = 0x7C,
    SFX_HIT_THUNDER_SHRINK = 0x7D,
    SFX_HIT_FALL_OFF       = 0x7E,
    // Environment
    SFX_ENV_WATER_SPLASH   = 0x80,
    SFX_ENV_BOOST_PAD      = 0x81,
    SFX_ENV_JUMP_PAD       = 0x82,
    SFX_ENV_HALFPIPE       = 0x83,
    SFX_ENV_CANNON         = 0x84,
    SFX_MAX_ID             = 0xFFFF
};

// ============================================================================
// AX Voice States (low-level DSP voice)
// ============================================================================
enum AxVoiceState {
    AX_VOICE_STATE_FREE     = 0,
    AX_VOICE_STATE_STARTING = 1,
    AX_VOICE_STATE_PLAYING  = 2,
    AX_VOICE_STATE_STOPPING = 3
};

// ============================================================================
// Sound Priority Levels
// ============================================================================
enum SoundPriority {
    SOUND_PRIORITY_LOWEST  = 0,
    SOUND_PRIORITY_LOW     = 32,
    SOUND_PRIORITY_NORMAL  = 64,
    SOUND_PRIORITY_HIGH    = 96,
    SOUND_PRIORITY_HIGHEST = 127
};

// ============================================================================
// Fade Types
// ============================================================================
enum SoundFadeType {
    SOUND_FADE_NONE           = 0,
    SOUND_FADE_OUT            = 1,
    SOUND_FADE_IN             = 2,
    SOUND_FADE_CROSSFADE      = 3,
    SOUND_FADE_OUT_PAUSE      = 4,
    SOUND_FADE_IN_RESUME      = 5
};

// ============================================================================
// Streaming Sound States
// ============================================================================
enum StrmSoundState {
    STRM_STATE_STOPPED    = 0,
    STRM_STATE_PLAYING    = 1,
    STRM_STATE_PAUSED     = 2,
    STRM_STATE_FADE_OUT   = 3,
    STRM_STATE_FADE_IN    = 4
};

// ============================================================================
// 3D Sound Parameters
// ============================================================================
struct Sound3DParams {
    f32 posX;       // 0x00: Listener-relative X
    f32 posY;       // 0x04: Listener-relative Y
    f32 posZ;       // 0x08: Listener-relative Z
    f32 volume;     // 0x0C: Distance-attenuated volume
    f32 pitch;      // 0x10: Doppler-adjusted pitch
    f32 pan;        // 0x14: Stereo pan (-1.0 to 1.0)
    f32 dopplerFactor; // 0x18: Doppler effect intensity
};

// ============================================================================
// Wave Info (from BRSAR)
// ============================================================================
struct WaveInfo {
    u32 sampleRate;     // 0x00: Sample rate (Hz)
    u32 loopStart;      // 0x04: Loop start sample
    u32 loopEnd;        // 0x08: Loop end sample
    u16 channels;       // 0x0C: Channel count (1=mono, 2=stereo)
    u16 bitsPerSample;  // 0x0E: Bits per sample
    u16 encoding;       // 0x10: ADPCM/PCM8/PCM16
    u16 pad;
    u32 dataOffset;     // 0x14: Offset to wave data in file
    u32 dataSize;       // 0x18: Size of wave data
};
static_assert(sizeof(WaveInfo) == 0x1C);

// ============================================================================
// Sound Archive File Header (BRSAR format)
// ============================================================================
struct BRSARHeader {
    char magic[4];      // 0x00: "RSAR"
    u16 version;        // 0x04: Archive version
    u16 headerSize;     // 0x06: Header size
    u16 sectionCount;   // 0x08: Number of sections
    u16 pad;
    u32 fileSize;       // 0x0C: Total file size
    u32 symbOffset;     // 0x10: Symbol table offset
    u32 symbSize;       // 0x14: Symbol table size
    u32 infoOffset;     // 0x18: Info table offset
    u32 infoSize;       // 0x1C: Info table size
    u32 dataOffset;     // 0x20: Data offset
    u32 dataSize;       // 0x24: Data size
};
static_assert(sizeof(BRSARHeader) == 0x28);

// ============================================================================
// Sound Effect Parameter Table Entry (per-player, 0x58 bytes)
// ============================================================================
struct SFXParamEntry {
    u32 field_0x00;       // 0x00: Flags/state
    u32 field_0x04;       // 0x04: Sound ID
    u32 field_0x08;       // 0x08: Category
    f32 baseVolume;       // 0x0C: Base volume
    f32 basePitch;        // 0x10: Base pitch
    f32 basePan;          // 0x14: Base pan
    u32 field_0x18;       // 0x18: Priority
    u32 field_0x1C;       // 0x1C: Play mode
    f32 fadeInTime;       // 0x20: Fade in duration (seconds)
    f32 fadeOutTime;      // 0x24: Fade out duration (seconds)
    u32 field_0x28;       // 0x28: Inner radius for 3D
    u32 field_0x2C;       // 0x2C: Outer radius for 3D
    f32 field_0x30;       // 0x30: Doppler factor
    f32 field_0x34;       // 0x34: 3D volume at outer radius
    f32 field_0x38;       // 0x38: Current volume
    f32 field_0x3C;       // 0x3C: Current pitch
    f32 field_0x40;       // 0x40: Current pan
    u32 field_0x44;       // 0x44: State counter
    u8  field_0x48;       // 0x48: Active flag
    u8  field_0x49;       // 0x49: Loop flag
    u8  field_0x4A;       // 0x4A: 3D enabled
    u8  field_0x4B;       // 0x4B: Pause flag
    u32 field_0x4C;       // 0x4C: Sound handle index
    u32 field_0x50;       // 0x50: Player data pointer
    u32 field_0x54;       // 0x54: Voice allocation ref
};
static_assert(sizeof(SFXParamEntry) == 0x58);

// ============================================================================
// Per-Player Audio State (0xF0 bytes)
// ============================================================================
struct PlayerAudioState {
    SFXParamEntry entries[2];   // 0x000-0x0AF: SFX parameter entries
    u8  field_0x0B0[0x18];     // 0x0B0: Reserved
    u32 field_0x0C8;           // 0x0C8: Active SFX count
    u16 currentBGMTrack;       // 0x0CC: Currently playing BGM track ID
    u16 bgmVolume;             // 0x0CE: BGM volume (0-9999, clamped)
    u16 sfxVolume;             // 0x0D0: SFX master volume
    u16 field_0x0D2;           // 0x0D2: Music player state
    u16 bgmVolumeTarget;       // 0x0D4: BGM fade target volume
    u16 field_0x0D6;           // 0x0D6: Reserved
    u16 field_0x0D8;           // 0x0D8: Distance-based volume (start)
    u16 field_0x0DA;           // 0x0DA: Distance-based volume (end)
    u32 field_0x0DC;           // 0x0DC: Reserved
    u32 field_0x0E0;           // 0x0E0: 3D position ref
    u32 field_0x0E4;           // 0x0E4: Camera ref
    u8  field_0x0E8;           // 0x0E8: Kart engine sound state
    u8  field_0x0E9;           // 0x0E9: Boost state
    u8  field_0x0EA;           // 0x0EA: Off-road state
    u8  field_0x0EB;           // 0x0EB: Trick state
    u32 field_0x0EC;           // 0x0EC: Engine sound counter
};
static_assert(sizeof(PlayerAudioState) == 0xF0, "PlayerAudioState must be 0xF0 bytes");

// ============================================================================
// Global Audio Manager State (singleton, ~0x1790 bytes)
// ============================================================================
struct GlobalAudioState {
    // 0x000-0x2AF: Player audio states (up to 12 players × 0xF0)
    PlayerAudioState playerStates[12];  // 0x000

    // 0xAF0-0x1757: Framework internal state
    u8  frameworkInternal[0xD68];       // 0xAF0

    // 0x1758: Sound system heap pointer
    void* soundHeap;                    // 0x1758
    // 0x175C: Sound arena pointer
    void* soundArena;                   // 0x175C
    // 0x1760: Number of AX voices allocated
    u32 numVoicesAllocated;             // 0x1760
    // 0x1764: Audio frame counter
    u32 frameCounter;                   // 0x1764
    // 0x1768-0x177F: DSP callbacks
    u8  dspCallbacks[0x18];             // 0x1768
    // 0x1780: Audio config flags
    u32 configFlags;                    // 0x1780
    // 0x1784: Sound system init flag
    u32 systemInitialized;              // 0x1784
    // 0x1788-0x1790: Category volumes
    f32 categoryVolumes[SOUND_CAT_MAX]; // 0x1788
    // 0x1C88: Scene change flag (in playerState[0] at offset 0x1C8 - wait, that's wrong)
    // Actually: the 0x1C8 offset seen in decompiled code is relative to the GlobalAudioState
};

// ============================================================================
// AX Voice Allocation (maps to OpenAL source)
// ============================================================================
struct AxVoiceAlloc {
    u32 voiceIndex;     // AX voice index (0-255 on Wii)
    u32 sourceId;       // OpenAL source ID (PC port)
    u32 priority;       // Voice priority
    u32 state;          // AxVoiceState
    u32 ownerPlayerId;  // Which player owns this voice
    void* user_data;    // User data pointer
};

// ============================================================================
// Maximum constants
// ============================================================================
static const u32 MAX_AX_VOICES       = 64;   // MKWii uses ~64 voices
static const u32 MAX_SOUND_HANDLES   = 256;
static const u32 MAX_SOUND_PLAYERS   = 16;
static const u32 MAX_STREAM_SOUNDS   = 4;
static const u32 MAX_BGM_PLAYERS     = 2;
static const u32 SOUND_HEAP_SIZE     = 0x200000; // 2MB sound heap

// Forward declarations
class SoundSystem;
class SoundArena;
class SoundPlayer;
class SoundHandle;
class SoundArchive;
class WaveArchive;
class SoundStartable;
class SeqPlayer;
class WavePlayer;
class StrmPlayer;
class SeqSound;
class WaveSound;
class StrmSound;
// SoundCategory is an enum (defined above), not a class — no forward declaration needed.
class AxVoiceManager;
class Sound3DListener;
class SoundExternalSoundPlayer;

} // namespace snd
} // namespace nw4r