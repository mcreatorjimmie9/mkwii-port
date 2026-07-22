// sound_bridge.cpp — Phase 23: Real sound bridge wiring
//
// Connects the 16 sound stub functions to the decompiled AudioEngine
// (nw4r::snd::AudioSystem). In the original MKWii, these functions are
// called by PlayerSub10's boost/status/effect methods to play SFX.
//
// Architecture:
//   PlayerSub10::update() → sub_playBoostSound() → AudioSystem::instance()
//     → AxVoiceManager::allocVoice() → setVolume/setPitch/setPan → startVoice()
//
// Sound ID mapping follows the original MKWii BRSAR archive:
//   0x5C boost mushroom, 0x5E start boost, 0x5F trick boost, 0x81 boost pad
//   0x60-0x67 item sounds, 0x78-0x7E hit sounds, 0x74-0x77 race sounds

#include <cstring>
#include <cmath>

#include "rk_types.h"

// Decompiled AudioEngine headers
#include "AudioEngine/AudioSystem.hpp"
#include "AudioEngine/SoundTypes.hpp"
#include "AudioEngine/AxVoiceManager.hpp"

// ============================================================================
// Per-player sound attribute state (from sub_setSoundAttr / sub_setSoundAttr2)
// In MKWii, each kart has 2 SFX entries in PlayerAudioState.
// ============================================================================

static const u32 MAX_PLAYERS = 12;

struct PlayerSoundState {
    f32 volume;     // Current volume override (0.0-1.0)
    f32 pitch;      // Current pitch override (0.25-4.0)
    f32 pan;        // Current pan (-1.0 to 1.0)
};

static PlayerSoundState s_playerSounds[MAX_PLAYERS];
static bool s_soundBridgeInitialized = false;

static void initSoundBridge() {
    if (s_soundBridgeInitialized) return;
    std::memset(s_playerSounds, 0, sizeof(s_playerSounds));
    for (u32 i = 0; i < MAX_PLAYERS; i++) {
        s_playerSounds[i].volume = 1.0f;
        s_playerSounds[i].pitch = 1.0f;
        s_playerSounds[i].pan = 0.0f;
    }
    s_soundBridgeInitialized = true;
}

// Resolve player index from PlayerSub10 pointer
static u32 getSoundPlayerIndex(void* obj) {
    if (!obj) return 0;
    void* pp = *static_cast<void**>(obj);
    if (!pp) return 0;
    auto ppBytes = static_cast<u8*>(pp);
    return *reinterpret_cast<u32*>(ppBytes + 0x38);
}

// ============================================================================
// Core SFX playback — allocates a voice, sets params, starts playback
// Uses the existing AxVoiceManager API: allocVoice → setVolume/setPitch/setPan → startVoice
// ============================================================================

static void playSFX(u32 playerIdx, s32 sfxId, f32 volume, f32 pitch) {
    using namespace nw4r::snd;

    if (playerIdx >= MAX_PLAYERS) playerIdx = 0;

    AudioSystem& audio = AudioSystem::instance();
    if (!audio.isInitialized()) return;

    AxVoiceManager* vm = audio.getVoiceManager();
    if (!vm) return;

    // Apply per-player volume/pitch overrides
    f32 effVol = s_playerSounds[playerIdx].volume * volume;
    f32 effPitch = s_playerSounds[playerIdx].pitch * pitch;
    f32 effPan = s_playerSounds[playerIdx].pan;

    // Clamp to valid ranges
    if (effVol > 1.0f) effVol = 1.0f;
    if (effVol < 0.0f) effVol = 0.0f;
    if (effPitch > 4.0f) effPitch = 4.0f;
    if (effPitch < 0.25f) effPitch = 0.25f;
    if (effPan > 1.0f) effPan = 1.0f;
    if (effPan < -1.0f) effPan = -1.0f;

    // Allocate a voice with normal priority
    // ownerId encodes playerIdx and sfxId for tracking
    u32 ownerId = (playerIdx << 16) | ((u32)sfxId & 0xFFFF);
    s32 voiceIdx = vm->allocVoice(SOUND_PRIORITY_NORMAL, ownerId);
    if (voiceIdx < 0) return; // No voices available

    // Set parameters
    vm->setVolume((u32)voiceIdx, effVol);
    vm->setPitch((u32)voiceIdx, effPitch);
    vm->setPan((u32)voiceIdx, effPan);

    // Generate a short sine buffer as placeholder
    // When BRSAR is loaded, setAddr will be called with real wave data instead.
    // For now, we use a small 16-bit PCM sine burst so OpenAL has something to play.
    static const u32 PLACEHOLDER_SAMPLES = 512;
    static const u32 PLACEHOLDER_SR = 32000;
    static s16 s_placeholderBuf[PLACEHOLDER_SAMPLES];
    static bool s_placeholderGenerated = false;
    if (!s_placeholderGenerated) {
        for (u32 i = 0; i < PLACEHOLDER_SAMPLES; i++) {
            f32 t = (f32)i / (f32)PLACEHOLDER_SAMPLES;
            f32 envelope = 1.0f;
            // Simple attack-decay envelope
            if (t < 0.1f) envelope = t / 0.1f;
            else envelope = 1.0f - (t - 0.1f) / 0.9f;
            s_placeholderBuf[i] = (s16)(32767.0f * envelope * sinf(2.0f * 3.14159265f * t * 8.0f));
        }
        s_placeholderGenerated = true;
    }

    vm->setAddr((u32)voiceIdx, s_placeholderBuf,
                PLACEHOLDER_SAMPLES * sizeof(s16),
                PLACEHOLDER_SR, 1 /* mono */, 1 /* PCM16 */);

    // Start playback
    vm->startVoice((u32)voiceIdx);
}

// ============================================================================
// Extern "C" bridge functions — called by PlayerSub10 update chain
// ============================================================================

extern "C" {

// @addr 0x80708a6c — sub_playBoostSound
// Plays boost activation sound (mushroom / boost pad).
// attr 0 = mushroom boost (0x5C), attr 1 = boost pad/zipper (0x81)
void sub_playBoostSound(void* p, s32 attr) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    s32 sfxId = (attr != 0) ? 0x81 : 0x5C;
    playSFX(idx, sfxId, 1.0f, 1.0f);
}

// @addr 0x80708c08 — sub_playStartBoostSound
// Plays the race start boost sound. SFX 0x5E.
void sub_playStartBoostSound(void* p) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, 0x5E, 1.0f, 1.0f);
}

// @addr 0x80590a80 — sub_triggerSound
// Generic sound trigger — primary SFX play function for status effects.
void sub_triggerSound(void* p, s32 id) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, id, 1.0f, 1.0f);
}

// @addr 0x807cbb5c — sub_setSound2
// Sets secondary sound parameter (engine sound variation).
// Handled by AudioSystem per-frame update in original MKWii.
void sub_setSound2(void* p, s32 a, s32 b, s32 c) {
    initSoundBridge();
    (void)p; (void)a; (void)b; (void)c;
}

// @addr 0x80591084 — sub_setSoundAttr
// Sets sound attributes for a player's SFX channel.
// a=0: volume (b >> 8 = 0-255), a=1: pitch, a=2: pan
void sub_setSoundAttr(void* p, s32 a, u32 b, u32 c) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    if (idx < MAX_PLAYERS) {
        switch (a) {
        case 0:
            s_playerSounds[idx].volume = (f32)(b >> 8) / 255.0f;
            break;
        case 1:
            s_playerSounds[idx].pitch = (f32)(b >> 8) / 127.0f;
            break;
        case 2:
            s_playerSounds[idx].pan = (f32)(s32)b / 127.0f;
            break;
        default:
            break;
        }
    }
    (void)c;
}

// @addr 0x8059045c — sub_setSoundAttr2
// Same as sub_setSoundAttr but for secondary SFX entry.
void sub_setSoundAttr2(void* p, s32 a, u32 b, u32 c) {
    initSoundBridge();
    sub_setSoundAttr(p, a, b, c);
}

// @addr 0x807be818 — sub_setSound3
// Sets tertiary sound parameter (trick sounds).
void sub_setSound3(void* p, s32 a) {
    initSoundBridge();
    (void)p; (void)a;
}

// @addr 0x80591800 — sub_playSoundId
// Direct SFX playback with default volume/pitch.
void sub_playSoundId(void* p, s32 id) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, id, 1.0f, 1.0f);
}

// @addr 0x80590a9c — sub_playSoundAttr
// Plays a sound with current attribute settings.
void sub_playSoundAttr(void* p, s32 a) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, a, s_playerSounds[idx].volume, s_playerSounds[idx].pitch);
}

// @addr 0x807960a0 — sub_playCrushSound
// Crush/squish sound when hit by mega or heavy item.
// a=1: star crush (0x7B), a=0: bomb crush (0x7C)
void sub_playCrushSound(void* p, s32 a) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    s32 sfxId = (a != 0) ? 0x7B : 0x7C;
    playSFX(idx, sfxId, 1.0f, 1.0f);
}

// @addr 0x806acf84 — sub_playMegaSound
// Mega Mushroom activation sound. SFX 0x64.
void sub_playMegaSound(void* p, s32 a) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, 0x64, 1.0f, 0.8f);
    (void)a;
}

// @addr 0x805b4d94 — sub_playEffectSound
// Effect sound (drift sparks, trick trails). SFX 0x5F.
void sub_playEffectSound(void* p, s32 a) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, 0x5F, 0.7f, 1.0f);
    (void)a;
}

// @addr 0x80796288 — sub_playEffectSound2
// Secondary effect sound (mini-turbo activation). SFX 0x5F variant.
void sub_playEffectSound2(void* p, s32 a) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, 0x5F, 0.5f, 1.2f);
    (void)a;
}

// @addr 0x8070ec70 — sub_playItemSound
// Item use/collect sound. 'a' = SFX ID.
void sub_playItemSound(void* p, s32 a, s32 b) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, a, 1.0f, 1.0f);
    (void)b;
}

// @addr 0x80591834 — sub_startSquishSound
// Squish sound when shrinking from lightning. SFX 0x7D.
void sub_startSquishSound(void* p, s32 a) {
    initSoundBridge();
    u32 idx = getSoundPlayerIndex(p);
    playSFX(idx, 0x7D, 0.8f, 0.7f);
    (void)a;
}

// @addr 0x8056c7e4 — sub_endSquishSound
// Stops the squish sound (when growing back to normal).
// In the original, this stops the looping squish voice.
void sub_endSquishSound(void* p, s32 a) {
    initSoundBridge();
    (void)p; (void)a;
    // Voice auto-frees when playback completes (handled by AxVoiceManager::update())
}

} // extern "C"
