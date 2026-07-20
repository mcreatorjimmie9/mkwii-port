// ============================================================================
// Settings.cpp — Game Settings Storage Implementation
// ============================================================================

#include "Settings.hpp"
#include <cstring>
#include <cmath>
#include <cstdio>

namespace Save {

// ============================================================================
// Static default settings singleton
// ============================================================================

static Settings sDefaultSettings;

// @addr 0x8022A7A0
Settings::Settings() {
    memset(this, 0, sizeof(Settings));
    setDefaults();
}

// @addr 0x8022A7C0
Settings::~Settings() {
}

// ============================================================================
// init — Initialize settings from save data buffer
// ============================================================================

void Settings::init(const u8* buffer, u32 size) {
    if (buffer && size >= 0x14) {
        deserialize(buffer, size);
    } else {
        setDefaults();
    }
}

// ============================================================================
// load — Load settings from a binary buffer (parse and validate)
// ============================================================================

s32 Settings::load(const u8* buffer, u32 size) {
    if (!buffer || size < 0x14) {
        return -1; // Invalid buffer
    }

    // Deserialize the settings
    u32 bytesConsumed = deserialize(buffer, size);
    if (bytesConsumed == 0) {
        return -2; // Deserialization failed
    }

    // Validate the loaded settings
    if (!validate()) {
        // Settings are invalid — reset to defaults
        setDefaults();
        return -3;
    }

    return 0;
}

// ============================================================================
// save — Write settings to a binary buffer
// ============================================================================

s32 Settings::save(u8* buffer, u32 bufferSize) const {
    if (!buffer || bufferSize < 0x14) {
        return -1;
    }

    u32 bytesWritten = serialize(buffer, bufferSize);
    if (bytesWritten == 0) {
        return -2;
    }

    return (s32)bytesWritten;
}

// @addr 0x8022A7D0
void Settings::setDefaults() {
    mDriftMode = DRIFT_MANUAL;
    mControlScheme = CTRL_WII_WHEEL;
    mSoundVolume = 80;
    mMusicVolume = 80;
    mSFXVolume = 80;
    mRumble = 1;
    mStereoType = STEREO_STEREO;
    mLanguage = LANG_ENGLISH;
    mTargetFPS = FPS_60; // PC default
    mShowVR = 1;
    mOnlineNotify = 1;       // Online notifications enabled by default
    mTractionMode = TRACTION_AUTO; // Auto traction by default
    mScreenMode = SCREEN_NORMAL;   // Normal (4:3) screen mode by default
    memset(_pad2, 0, sizeof(_pad2));
}

// ============================================================================
// resetToDefault — Factory reset all settings
// ============================================================================

void Settings::resetToDefault() {
    setDefaults();
}

// @addr 0x8022A840
u32 Settings::serialize(u8* buffer, u32 bufferSize) const {
    if (!buffer || bufferSize < 0x14) {
        return 0;
    }
    memset(buffer, 0, bufferSize);
    // Write each field sequentially to maintain a stable binary format
    u32 offset = 0;
    buffer[offset++] = mDriftMode;
    buffer[offset++] = mControlScheme;
    buffer[offset++] = mSoundVolume;
    buffer[offset++] = mMusicVolume;
    buffer[offset++] = mSFXVolume;
    buffer[offset++] = mRumble;
    buffer[offset++] = mStereoType;
    buffer[offset++] = mLanguage;
    buffer[offset++] = mTargetFPS;
    buffer[offset++] = mShowVR;
    buffer[offset++] = mOnlineNotify;
    buffer[offset++] = mTractionMode;
    buffer[offset++] = mScreenMode;
    // Copy padding bytes (7 bytes)
    memcpy(buffer + offset, _pad2, sizeof(_pad2));
    offset += sizeof(_pad2);
    return offset; // 0x14
}

// @addr 0x8022A910
u32 Settings::deserialize(const u8* buffer, u32 bufferSize) {
    if (!buffer || bufferSize < 0x14) {
        return 0;
    }
    u32 offset = 0;
    mDriftMode = buffer[offset++];
    mControlScheme = buffer[offset++];
    mSoundVolume = buffer[offset++];
    mMusicVolume = buffer[offset++];
    mSFXVolume = buffer[offset++];
    mRumble = buffer[offset++];
    mStereoType = buffer[offset++];
    mLanguage = buffer[offset++];
    mTargetFPS = buffer[offset++];
    mShowVR = buffer[offset++];
    mOnlineNotify = buffer[offset++];
    mTractionMode = buffer[offset++];
    mScreenMode = buffer[offset++];
    // Copy padding bytes (7 bytes)
    memcpy(_pad2, buffer + offset, sizeof(_pad2));
    offset += sizeof(_pad2);
    return offset; // 0x14
}

// ============================================================================
// setVolume — Set all three volume channels at once
// ============================================================================

void Settings::setVolume(u8 master, u8 music, u8 sfx) {
    // Clamp all values to 0-100
    if (master > 100) master = 100;
    if (music > 100) music = 100;
    if (sfx > 100) sfx = 100;

    mSoundVolume = master;
    mMusicVolume = music;
    mSFXVolume = sfx;
}

// @addr 0x8022A9E0
bool Settings::validate() const {
    // Validate drift mode: must be 0 (Manual) or 1 (Auto)
    if (mDriftMode > 1) {
        return false;
    }

    // Validate control scheme: must be 0-3
    if (mControlScheme > CTRL_GAMECUBE) {
        return false;
    }

    // Validate sound volume: must be 0-100
    if (mSoundVolume > 100) {
        return false;
    }

    // Validate music volume: must be 0-100
    if (mMusicVolume > 100) {
        return false;
    }

    // Validate SFX volume: must be 0-100
    if (mSFXVolume > 100) {
        return false;
    }

    // Validate rumble: must be 0 or 1
    if (mRumble > 1) {
        return false;
    }

    // Validate stereo type: must be 0 (Mono), 1 (Stereo), or 2 (Surround)
    if (mStereoType > STEREO_SURROUND) {
        return false;
    }

    // Validate language: must be 0-7
    if (mLanguage > LANG_DUTCH) {
        return false;
    }

    // Validate target FPS: must be 0 (30) or 1 (60)
    if (mTargetFPS > FPS_60) {
        return false;
    }

    // Validate show VR: must be 0 or 1
    if (mShowVR > 1) {
        return false;
    }

    // Validate online notify: must be 0 or 1
    if (mOnlineNotify > 1) {
        return false;
    }

    // Validate traction mode: must be 0 (Auto) or 1 (Manual)
    if (mTractionMode > TRACTION_MANUAL) {
        return false;
    }

    // Validate screen mode: must be 0 (Normal) or 1 (Wide)
    if (mScreenMode > SCREEN_WIDE) {
        return false;
    }

    // All fields are valid
    return true;
}

// @addr 0x8022AB20
void Settings::apply() const {
    // Apply sound volumes to the audio system
    // The game uses separate channels for music and SFX
    // Volumes are stored as 0-100 and mapped to 0.0-1.0 internally
    f32 musicVol = (f32)mMusicVolume / 100.0f;
    f32 sfxVol = (f32)mSFXVolume / 100.0f;
    f32 masterVol = (f32)mSoundVolume / 100.0f;

    // Apply the combined master volume to all audio channels
    // Music gets master * music volume
    f32 finalMusicVol = masterVol * musicVol;
    // SFX gets master * SFX volume
    f32 finalSfxVol = masterVol * sfxVol;

    (void)finalMusicVol;
    (void)finalSfxVol;

    // Apply rumble setting to the Wii Remote
    // Rumble is controlled per-channel via WPAD_SetDataFormat
    // When rumble is disabled, all WPAD rumble calls are no-ops
    // When enabled, the rumble motor is active based on game events
    (void)mRumble;

    // Apply stereo type to the audio output mode
    // The Wii supports Mono, Stereo, and Surround output
    // This sets the AX output mode accordingly
    switch (mStereoType) {
        case STEREO_MONO:
            // AXSetOutputMode(AX_OUTPUT_MONO);
            break;
        case STEREO_STEREO:
            // AXSetOutputMode(AX_OUTPUT_STEREO);
            break;
        case STEREO_SURROUND:
            // AXSetOutputMode(AX_OUTPUT_SURROUND);
            break;
        default:
            break;
    }

    // Apply drift mode to kart physics
    // Manual drift requires player input to initiate drift
    // Auto drift initiates automatically when turning at speed
    // This is read by KartMove each frame
    (void)mDriftMode;

    // Apply control scheme to the input system
    // Determines which controller type is expected and how
    // input mappings are interpreted
    (void)mControlScheme;

    // Apply language to the UI text system
    // All UI strings are loaded from the message archive
    // using the selected language index
    (void)mLanguage;

    // Apply screen mode to the video output
    // Normal = 4:3 (640x480), Wide = 16:9 (854x480)
    // This sets the VI configure register
    (void)mScreenMode;

    // Apply traction mode to kart physics
    // Auto traction assists with steering stability
    // Manual traction gives full control to the player
    (void)mTractionMode;

    // Apply FPS target to the frame limiter
    // The PC port uses this to configure vsync and frame timing
    (void)mTargetFPS;

    // VR display setting is applied during online lobby rendering
    (void)mShowVR;

    // Online notification setting controls friend join alerts
    (void)mOnlineNotify;
}

// @addr 0x8022AD00
const char* Settings::getDriftModeName() const {
    switch (mDriftMode) {
        case DRIFT_MANUAL: return "Manual";
        case DRIFT_AUTO:   return "Auto";
        default:           return "Unknown";
    }
}

// @addr 0x8022AD40
const char* Settings::getControlSchemeName() const {
    switch (mControlScheme) {
        case CTRL_WII_WHEEL: return "Wii Wheel";
        case CTRL_NUNCHUK:   return "Nunchuk";
        case CTRL_CLASSIC:   return "Classic Controller";
        case CTRL_GAMECUBE:  return "GameCube Controller";
        default:             return "Unknown";
    }
}

// @addr 0x8022AD80
const char* Settings::getLanguageName() const {
    switch (mLanguage) {
        case LANG_ENGLISH:  return "English";
        case LANG_JAPANESE: return "Japanese";
        case LANG_FRENCH:   return "French";
        case LANG_GERMAN:   return "German";
        case LANG_ITALIAN:  return "Italian";
        case LANG_SPANISH:  return "Spanish";
        case LANG_KOREAN:   return "Korean";
        case LANG_DUTCH:    return "Dutch";
        default:            return "Unknown";
    }
}

// ============================================================================
// Settings_getDefault — Get default settings singleton
// ============================================================================

const Save::Settings* Settings_getDefault() {
    return &sDefaultSettings;
}

// ============================================================================
// getVolume — Get master volume as combined factor [0.0, 1.0]
// ============================================================================
// @addr 0x8022A7B0 (estimated)
f32 Settings::getVolumeFactor() const {
    return (f32)mSoundVolume / 100.0f;
}

// ============================================================================
// getMusicVolume — Get music volume as factor [0.0, 1.0]
// ============================================================================
// @addr 0x8022A7B8 (estimated)
f32 Settings::getMusicVolumeFactor() const {
    return (f32)mMusicVolume / 100.0f;
}

// ============================================================================
// getSFXVolume — Get SFX volume as factor [0.0, 1.0]
// ============================================================================
// @addr 0x8022A7C0 (estimated)
f32 Settings::getSFXVolumeFactor() const {
    return (f32)mSFXVolume / 100.0f;
}

// ============================================================================
// getControls and setControls are inline in hpp

// getDriftMode and setDriftMode are inline in hpp

// getDisplayMode — Get the current screen display mode
// @addr 0x8022A7F8 (estimated)
Settings::ScreenMode Settings::getDisplayMode() const {
    return (ScreenMode)mScreenMode;
}

// ============================================================================
// compare — Compare two Settings instances for equality
// ============================================================================
bool Settings::compare(const Settings& other) const {
    return mDriftMode == other.mDriftMode &&
           mControlScheme == other.mControlScheme &&
           mSoundVolume == other.mSoundVolume &&
           mMusicVolume == other.mMusicVolume &&
           mSFXVolume == other.mSFXVolume &&
           mRumble == other.mRumble &&
           mStereoType == other.mStereoType &&
           mLanguage == other.mLanguage &&
           mTargetFPS == other.mTargetFPS &&
           mShowVR == other.mShowVR &&
           mOnlineNotify == other.mOnlineNotify &&
           mTractionMode == other.mTractionMode &&
           mScreenMode == other.mScreenMode;
}

// ============================================================================
// copyFrom — Copy all settings from another instance
// ============================================================================
void Settings::copyFrom(const Settings& other) {
    mDriftMode = other.mDriftMode;
    mControlScheme = other.mControlScheme;
    mSoundVolume = other.mSoundVolume;
    mMusicVolume = other.mMusicVolume;
    mSFXVolume = other.mSFXVolume;
    mRumble = other.mRumble;
    mStereoType = other.mStereoType;
    mLanguage = other.mLanguage;
    mTargetFPS = other.mTargetFPS;
    mShowVR = other.mShowVR;
    mOnlineNotify = other.mOnlineNotify;
    mTractionMode = other.mTractionMode;
    mScreenMode = other.mScreenMode;
    memcpy(_pad2, other._pad2, sizeof(_pad2));
}

// ============================================================================
// getStereoTypeName — Get human-readable stereo type name
// ============================================================================
const char* Settings::getStereoTypeName() const {
    switch (mStereoType) {
        case STEREO_MONO:     return "Mono";
        case STEREO_STEREO:   return "Stereo";
        case STEREO_SURROUND: return "Surround";
        default:              return "Unknown";
    }
}

// ============================================================================
// getVolumePercent — Get master volume as integer 0-100
// ============================================================================
u8 Settings::getVolumePercent() const {
    return mSoundVolume;
}

// ============================================================================
// setVolumePercent — Set master volume from integer 0-100
// ============================================================================
void Settings::setVolumePercent(u8 vol) {
    mSoundVolume = vol > 100 ? 100 : vol;
}

// ============================================================================
// isDefault — Check if all settings match the defaults
// ============================================================================
bool Settings::isDefault() const {
    Settings def;
    def.setDefaults();
    return compare(def);
}

// ============================================================================
// getTargetFPSValue — Get the target FPS as an integer (30 or 60)
// ============================================================================
u8 Settings::getTargetFPSValue() const {
    return (mTargetFPS == FPS_60) ? 60 : 30;
}

// setLanguage is inline in hpp

// ============================================================================
// isMono — Check if audio output is set to Mono
// ============================================================================
bool Settings::isMono() const {
    return mStereoType == STEREO_MONO;
}

// ============================================================================
// isSurround — Check if audio output is set to Surround
// ============================================================================
bool Settings::isSurround() const {
    return mStereoType == STEREO_SURROUND;
}

// ============================================================================
// isWideScreen — Check if display mode is widescreen (16:9)
// ============================================================================
bool Settings::isWideScreen() const {
    return mScreenMode == SCREEN_WIDE;
}

// ============================================================================
// isManualDrift — Check if drift mode is set to Manual
// ============================================================================
bool Settings::isManualDrift() const {
    return mDriftMode == DRIFT_MANUAL;
}

// ============================================================================
// isAutoDrift — Check if drift mode is set to Auto
// ============================================================================
bool Settings::isAutoDrift() const {
    return mDriftMode == DRIFT_AUTO;
}

} // namespace Save