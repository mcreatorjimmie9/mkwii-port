// ============================================================================
// Settings.cpp — Game Settings Storage Implementation
// ============================================================================

#include "Settings.hpp"
#include <cstring>

namespace Save {

Settings::Settings() {
    setDefaults();
}

Settings::~Settings() {
}

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
    memset(_pad, 0, sizeof(_pad));
}

u32 Settings::serialize(u8* buffer, u32 bufferSize) const {
    if (!buffer || bufferSize < 0x10) return 0;
    memcpy(buffer, this, 0x10);
    return 0x10;
}

u32 Settings::deserialize(const u8* buffer, u32 bufferSize) {
    if (!buffer || bufferSize < 0x10) return 0;
    memcpy(this, buffer, 0x10);
    return 0x10;
}

} // namespace Save