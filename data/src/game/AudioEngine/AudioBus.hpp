#pragma once
// ============================================================================
// AudioBus.hpp — Audio Bus Routing and Mixing
// Reconstructed from nw4r::snd::SoundCategoryManager
//
// The AudioBus system manages audio category routing and mixing.
// MKWii has multiple audio categories (BGM, SFX, kart engine, items, etc.)
// that are mixed together with independent volume controls.
//
// The mixing chain on Wii:
//   Individual voices → Category buses → Master bus → DSP output
//
// Each category has:
//   - Volume (master control for all sounds in that category)
//   - Fade state (smooth volume transitions)
//   - Voice limit (max simultaneous voices for the category)
//   - Priority threshold (minimum priority to play)
//   - Mute flag
//
// MKWii category hierarchy:
//   Master
//   ├── BGM (course music)
//   ├── SFX_RACE (race-related SFX)
//   │   ├── SFX_ITEM (item sounds)
//   │   ├── SFX_KART (kart engine sounds)
//   │   └── SFX_COURSE (course environment)
//   ├── SFX_MENU (menu UI sounds)
//   ├── SFX_PLAYER (player character voices)
//   ├── SFX_COMMON (shared sounds)
//   ├── STREAM (streamed audio)
//   └── SYSTEM (system sounds)
//
// Key functions reconstructed:
//   0x80578000: AudioBus::AudioBus()             — Constructor
//   0x80578200: AudioBus::init()                  — Initialize bus system
//   0x80578600: AudioBus::setCategoryVolume()     — Set category volume
//   0x80578800: AudioBus::getCategoryVolume()     — Get category volume
//   0x80578A00: AudioBus::fadeCategory()          — Fade category volume
//   0x80578C00: AudioBus::muteCategory()          — Mute a category
//   0x80578E00: AudioBus::soloCategory()          — Solo a category
//   0x80579000: AudioBus::setMasterVolume()       — Set master volume
//   0x80579200: AudioBus::update()                — Per-frame mix update
//   0x80579400: AudioBus::mixFrame()              — Mix one audio frame
//   0x80579600: AudioBus::getEffectiveVolume()    — Get final volume
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// Category Bus State — Per-category mixing state
// ============================================================================
struct CategoryBus {
    f32 volume;              // 0x00: Base volume (0.0 - 1.0)
    f32 targetVolume;        // 0x04: Fade target volume
    f32 fadeTimer;           // 0x08: Current fade progress (seconds)
    f32 fadeDuration;        // 0x0C: Fade duration (0 = no fade)
    f32 effectiveVolume;     // 0x10: Final volume after fade and mute
    u32 voiceLimit;          // 0x14: Max voices for this category
    u32 voiceCount;          // 0x18: Current voice count
    u32 priorityThreshold;   // 0x1C: Min priority to play
    u8  muted;               // 0x20: Mute flag
    u8  soloed;              // 0x21: Solo flag
    u8  paused;              // 0x22: Pause flag (freeze all voices)
    u8  _pad;
};

// ============================================================================
// Mix Buffer — Intermediate mixing buffer for one frame
// ============================================================================
struct MixBuffer {
    void* data;              // 0x00: Buffer data (32-byte aligned)
    u32   size;              // 0x04: Buffer size in bytes
    u32   samples;           // 0x08: Number of samples
    u32   sampleRate;        // 0x0C: Sample rate
};

// ============================================================================
// AudioBus — Category-based audio routing and mixing
//
// Manages the audio mixing chain:
//   Voices → Category buses → Master bus → DSP output
//
// On Wii, the final mix is written to the DSP output buffers managed
// by DSPManager. The AX DSP handles the actual sample mixing in hardware.
// On PC, the mixing is done in software or delegated to OpenAL's mixer.
// ============================================================================
class AudioBus {
public:
    AudioBus();
    ~AudioBus();

    // --- Initialization ---
    // @addr 0x80578200 (480 bytes, 76 code lines)
    // Initializes the bus system with default category volumes.
    // Sets up the mixing chain and allocates mix buffers.
    bool init(u32 sampleRate = 32000, u32 samplesPerFrame = 160);

    // Shuts down the bus system and releases mix buffers.
    void shutdown();

    // --- Category Volume Control ---
    // @addr 0x80578600 (200 bytes)
    // Sets the volume for a sound category. Range: 0.0 to 1.0.
    // This affects all sounds currently playing in the category.
    void setCategoryVolume(u32 categoryId, f32 volume);

    // @addr 0x80578800 (68 bytes)
    // Gets the base volume for a category.
    f32 getCategoryVolume(u32 categoryId) const;

    // @addr 0x80578900 (68 bytes)
    // Gets the effective volume (after fades and mute).
    f32 getEffectiveCategoryVolume(u32 categoryId) const;

    // @addr 0x80578A00 (360 bytes)
    // Smoothly fades a category's volume over the given duration.
    // When the fade completes, the category volume is at `targetVolume`.
    void fadeCategory(u32 categoryId, f32 targetVolume, f32 duration);

    // --- Category Mute/Solo ---
    // @addr 0x80578C00 (120 bytes)
    // Mutes a category (volume goes to 0).
    void muteCategory(u32 categoryId, bool muted);

    // @addr 0x80578E00 (200 bytes)
    // Solos a category (only this category is audible).
    // When a category is soloed, all other categories are muted.
    void soloCategory(u32 categoryId, bool soloed);

    // Pauses all voices in a category.
    void pauseCategory(u32 categoryId, bool paused);

    // --- Master Volume ---
    // @addr 0x80579000 (200 bytes)
    // Sets the master output volume. Range: 0.0 to 1.0.
    // This is the final gain applied to the mixed output.
    void setMasterVolume(f32 volume);

    // @addr 0x80579100 (68 bytes)
    f32 getMasterVolume() const;

    // --- Per-Frame Update ---
    // @addr 0x80579200 (640 bytes, 100 code lines)
    // Updates all category fades and calculates effective volumes.
    // Called once per game frame before the DSP processes audio.
    void update();

    // @addr 0x80579400 (840 bytes, 132 code lines, has_assert)
    // Mixes one frame of audio.
    // 1. Clears the output mix buffer
    // 2. For each category: applies volume, mixes into output
    // 3. Applies master volume
    // 4. Writes to DSP output buffers
    void mixFrame();

    // --- Voice Management ---
    // Increments the voice count for a category.
    void incrementVoiceCount(u32 categoryId);

    // Decrements the voice count for a category.
    void decrementVoiceCount(u32 categoryId);

    // Checks if a category can accept more voices.
    bool canPlayVoice(u32 categoryId, u32 priority) const;

    // Sets the voice limit for a category.
    void setVoiceLimit(u32 categoryId, u32 maxVoices);

    // --- Queries ---
    // Gets the category bus state.
    const CategoryBus* getCategoryBus(u32 categoryId) const;

    // Gets the total active voice count across all categories.
    u32 getTotalVoiceCount() const;

    // Returns true if the bus system is initialized.
    bool isInitialized() const;

private:
    // Calculates the effective volume for a category bus.
    f32 calculateEffectiveVolume(const CategoryBus& bus) const;

    // Checks if any category is soloed.
    bool hasSoloedCategory() const;

    // Category buses (one per SOUND_CAT_MAX)
    CategoryBus m_categories[SOUND_CAT_MAX]; // 0x00: Per-category state

    // Master volume
    f32 m_masterVolume;           // 0x1A0: Master output volume

    // Mix buffer
    MixBuffer m_mixBuffer;        // 0x1A4: Intermediate mix buffer
    void* m_mixData;              // 0x1B4: Allocated mix buffer data

    // Configuration
    u32 m_sampleRate;             // 0x1B8: Output sample rate
    u32 m_samplesPerFrame;        // 0x1BC: Samples per frame
    u8  m_initialized;            // 0x1C0: Initialized flag
    u8  _pad[3];
};

} // namespace snd
} // namespace nw4r