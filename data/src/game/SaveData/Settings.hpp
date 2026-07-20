#pragma once
// ============================================================================
// Settings.hpp — Game Settings Storage
//
// Persists player-modifiable game settings across sessions.
// Stored within the save file (not in the license data).
//
// Categorization: GENESIS Phase 5 (SaveData Module)
// ============================================================================

#include "rk_common.h"

// ============================================================================
// Settings — Global Game Options
// ============================================================================

namespace Save {

class Settings {
public:
    Settings();
    ~Settings();

    // --- Initialization ---
    // Initialize settings from save data
    // @param buffer  Raw settings data from save file
    // @param size    Size of the buffer
    void init(const u8* buffer, u32 size);

    // Load settings from a binary buffer (parse and validate)
    s32 load(const u8* buffer, u32 size);

    // Save settings to a binary buffer
    s32 save(u8* buffer, u32 bufferSize) const;

    // --- Drift Mode ---
    enum DriftMode {
        DRIFT_MANUAL = 0,
        DRIFT_AUTO   = 1,
    };

    DriftMode getDriftMode() const { return (DriftMode)mDriftMode; }
    void setDriftMode(DriftMode mode) { mDriftMode = (u8)mode; }

    // --- Control Scheme ---
    enum ControlScheme {
        CTRL_WII_WHEEL = 0,
        CTRL_NUNCHUK   = 1,
        CTRL_CLASSIC   = 2,
        CTRL_GAMECUBE  = 3,
    };

    ControlScheme getControlScheme() const { return (ControlScheme)mControlScheme; }
    void setControlScheme(ControlScheme scheme) { mControlScheme = (u8)scheme; }

    // --- Volume ---
    // Get master volume (0-100), which is the sound volume
    u8 getVolume() const { return mSoundVolume; }
    u8 getSoundVolume() const { return mSoundVolume; }
    void setSoundVolume(u8 vol) { mSoundVolume = vol > 100 ? 100 : vol; }

    u8 getMusicVolume() const { return mMusicVolume; }
    void setMusicVolume(u8 vol) { mMusicVolume = vol > 100 ? 100 : vol; }

    u8 getSFXVolume() const { return mSFXVolume; }
    void setSFXVolume(u8 vol) { mSFXVolume = vol > 100 ? 100 : vol; }

    // Set all three volume channels at once
    void setVolume(u8 master, u8 music, u8 sfx);

    // --- Controls ---
    ControlScheme getControls() const { return (ControlScheme)mControlScheme; }
    void setControls(ControlScheme scheme) { mControlScheme = (u8)scheme; }

    // --- Rumble ---
    bool isRumbleEnabled() const { return mRumble != 0; }
    void setRumbleEnabled(bool enabled) { mRumble = enabled ? 1 : 0; }

    // --- Stereo ---
    enum StereoType {
        STEREO_MONO     = 0,
        STEREO_STEREO   = 1,
        STEREO_SURROUND = 2,
    };

    StereoType getStereoType() const { return (StereoType)mStereoType; }
    void setStereoType(StereoType type) { mStereoType = (u8)type; }

    // --- Language ---
    enum Language {
        LANG_ENGLISH = 0,
        LANG_JAPANESE = 1,
        LANG_FRENCH   = 2,
        LANG_GERMAN   = 3,
        LANG_ITALIAN  = 4,
        LANG_SPANISH  = 5,
        LANG_KOREAN   = 6,
        LANG_DUTCH    = 7,
    };

    Language getLanguage() const { return (Language)mLanguage; }
    void setLanguage(Language lang) { mLanguage = (u8)lang; }

    // --- PC-Specific ---
    enum TargetFPS {
        FPS_30 = 0,
        FPS_60 = 1,
    };

    TargetFPS getTargetFPS() const { return (TargetFPS)mTargetFPS; }
    void setTargetFPS(TargetFPS fps) { mTargetFPS = (u8)fps; }

    // --- VR Display ---
    bool showVR() const { return mShowVR != 0; }
    void setShowVR(bool show) { mShowVR = show ? 1 : 0; }

    // --- Online Settings ---
    bool isOnlineNotify() const { return mOnlineNotify != 0; }
    void setOnlineNotify(bool enabled) { mOnlineNotify = enabled ? 1 : 0; }

    // --- Mario Kart Wii specific settings ---
    enum TractionMode {
        TRACTION_AUTO = 0,
        TRACTION_MANUAL = 1,
    };

    TractionMode getTractionMode() const { return (TractionMode)mTractionMode; }
    void setTractionMode(TractionMode mode) { mTractionMode = (u8)mode; }

    // --- Display settings ---
    enum ScreenMode {
        SCREEN_NORMAL = 0,  // 4:3
        SCREEN_WIDE   = 1,  // 16:9
    };

    ScreenMode getScreenMode() const { return (ScreenMode)mScreenMode; }
    ScreenMode getDisplayMode() const { return (ScreenMode)mScreenMode; }
    void setScreenMode(ScreenMode mode) { mScreenMode = (u8)mode; }

    // --- Descriptive names ---
    const char* getDriftModeName() const;
    const char* getControlSchemeName() const;
    const char* getLanguageName() const;

    // --- Validate ---
    bool validate() const;

    // --- Apply ---
    void apply() const;

    // --- Defaults ---
    void setDefaults();

    // Factory reset: reset all to defaults
    void resetToDefault();

    // --- Serialization ---
    u32 serialize(u8* buffer, u32 bufferSize) const;
    u32 deserialize(const u8* buffer, u32 bufferSize);

private:
    u8  mDriftMode;       // 0: Manual, 1: Auto
    u8  mControlScheme;   // Control scheme
    u8  mSoundVolume;     // 0-100
    u8  mMusicVolume;     // 0-100
    u8  mSFXVolume;       // 0-100
    u8  mRumble;          // Rumble on/off
    u8  mStereoType;      // Mono/Stereo/Surround
    u8  mLanguage;        // Game language
    u8  mTargetFPS;       // PC: 30 or 60
    u8  mShowVR;          // Show VR in online lobby
    u8  mOnlineNotify;    // Online notification flag
    u8  mTractionMode;    // Traction control (0: Auto, 1: Manual)
    u8  mScreenMode;      // Display mode (0: Normal, 1: Wide)
    u8  _pad2[0x07];      // Padding to 0x14 bytes total
};

// Get a default settings instance (singleton)
// @addr 0x8022A780 (estimated)
const Save::Settings* Settings_getDefault();

} // namespace Save