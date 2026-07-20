// ============================================================================
// AudioBus.cpp — Audio Bus Routing and Mixing Implementation
// Reconstructed from nw4r::snd::SoundCategoryManager
// ============================================================================

#include "AudioBus.hpp"
#include "DSPManager.hpp"
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cmath>

namespace nw4r {
namespace snd {

// ============================================================================
// AudioBus()
// @addr 0x80578000 (constructor area)
// ============================================================================
AudioBus::AudioBus()
    : m_masterVolume(1.0f)
    , m_mixData(nullptr)
    , m_sampleRate(32000)
    , m_samplesPerFrame(160)
    , m_initialized(0)
{
    std::memset(m_categories, 0, sizeof(m_categories));
    std::memset(&m_mixBuffer, 0, sizeof(m_mixBuffer));

    // Set default category volumes
    // These match MKWii's default audio settings
    for (u32 i = 0; i < SOUND_CAT_MAX; i++) {
        m_categories[i].volume = 1.0f;
        m_categories[i].targetVolume = 1.0f;
        m_categories[i].effectiveVolume = 1.0f;
        m_categories[i].fadeTimer = 0.0f;
        m_categories[i].fadeDuration = 0.0f;

        // Default voice limits per category
        switch ((SoundCategory)i) {
        case SOUND_CAT_BGM:        m_categories[i].voiceLimit = 2; break;
        case SOUND_CAT_SFX_RACE:   m_categories[i].voiceLimit = 16; break;
        case SOUND_CAT_SFX_ITEM:   m_categories[i].voiceLimit = 8; break;
        case SOUND_CAT_SFX_KART:   m_categories[i].voiceLimit = 12; break;
        case SOUND_CAT_SFX_MENU:   m_categories[i].voiceLimit = 8; break;
        case SOUND_CAT_SFX_COURSE: m_categories[i].voiceLimit = 6; break;
        case SOUND_CAT_SFX_PLAYER: m_categories[i].voiceLimit = 4; break;
        case SOUND_CAT_SFX_COMMON: m_categories[i].voiceLimit = 16; break;
        case SOUND_CAT_STREAM:     m_categories[i].voiceLimit = 2; break;
        default:                   m_categories[i].voiceLimit = 8; break;
        }

        m_categories[i].priorityThreshold = SOUND_PRIORITY_LOWEST;
        m_categories[i].voiceCount = 0;
        m_categories[i].muted = 0;
        m_categories[i].soloed = 0;
        m_categories[i].paused = 0;
    }
}

// ============================================================================
// ~AudioBus()
// ============================================================================
AudioBus::~AudioBus() {
    shutdown();
}

// ============================================================================
// init(sampleRate, samplesPerFrame)
// @addr 0x80578200 (480 bytes, 76 code lines)
//
// Initializes the bus system. Allocates the mix buffer and
// sets up the mixing chain.
// ============================================================================
bool AudioBus::init(u32 sampleRate, u32 samplesPerFrame) {
    if (m_initialized) return true;

    m_sampleRate = sampleRate;
    m_samplesPerFrame = samplesPerFrame;

    // Allocate the mix buffer (stereo, 16-bit, for one frame)
    u32 mixSize = samplesPerFrame * 2 * sizeof(s16); // Stereo 16-bit
    m_mixData = std::aligned_alloc(32, ALIGN32(mixSize));
    if (m_mixData == nullptr) return false;

    std::memset(m_mixData, 0, mixSize);
    m_mixBuffer.data = m_mixData;
    m_mixBuffer.size = mixSize;
    m_mixBuffer.samples = samplesPerFrame;
    m_mixBuffer.sampleRate = sampleRate;

    m_initialized = 1;

    // Apply category-specific default volumes
    // BGM is slightly lower than SFX in MKWii
    setCategoryVolume(SOUND_CAT_BGM, 0.85f);

    return true;
}

// ============================================================================
// shutdown()
// ============================================================================
void AudioBus::shutdown() {
    if (m_mixData != nullptr) {
        std::free(m_mixData);
        m_mixData = nullptr;
    }
    std::memset(&m_mixBuffer, 0, sizeof(m_mixBuffer));
    m_initialized = 0;
}

// ============================================================================
// setCategoryVolume(categoryId, volume)
// @addr 0x80578600 (200 bytes)
//
// Sets the base volume for a sound category.
// This affects all sounds currently playing in the category.
// ============================================================================
void AudioBus::setCategoryVolume(u32 categoryId, f32 volume) {
    if (categoryId >= SOUND_CAT_MAX) return;

    m_categories[categoryId].volume = std::clamp(volume, 0.0f, 1.0f);
    m_categories[categoryId].targetVolume = m_categories[categoryId].volume;
    m_categories[categoryId].fadeDuration = 0.0f; // Cancel any active fade
}

// ============================================================================
// getCategoryVolume(categoryId)
// @addr 0x80578800 (68 bytes)
// ============================================================================
f32 AudioBus::getCategoryVolume(u32 categoryId) const {
    if (categoryId >= SOUND_CAT_MAX) return 0.0f;
    return m_categories[categoryId].volume;
}

// ============================================================================
// getEffectiveCategoryVolume(categoryId)
// @addr 0x80578900 (68 bytes)
// ============================================================================
f32 AudioBus::getEffectiveCategoryVolume(u32 categoryId) const {
    if (categoryId >= SOUND_CAT_MAX) return 0.0f;
    return m_categories[categoryId].effectiveVolume;
}

// ============================================================================
// fadeCategory(categoryId, targetVolume, duration)
// @addr 0x80578A00 (360 bytes)
//
// Smoothly fades a category's volume. The fade is linear
// and processed in update() each frame.
// ============================================================================
void AudioBus::fadeCategory(u32 categoryId, f32 targetVolume, f32 duration) {
    if (categoryId >= SOUND_CAT_MAX) return;

    CategoryBus& bus = m_categories[categoryId];
    bus.targetVolume = std::clamp(targetVolume, 0.0f, 1.0f);
    bus.fadeDuration = duration;
    bus.fadeTimer = 0.0f;
}

// ============================================================================
// muteCategory(categoryId, muted)
// @addr 0x80578C00 (120 bytes)
// ============================================================================
void AudioBus::muteCategory(u32 categoryId, bool muted) {
    if (categoryId >= SOUND_CAT_MAX) return;
    m_categories[categoryId].muted = muted ? 1 : 0;
}

// ============================================================================
// soloCategory(categoryId, soloed)
// @addr 0x80578E00 (200 bytes)
//
// When a category is soloed, only that category is audible.
// All other categories are effectively muted.
// ============================================================================
void AudioBus::soloCategory(u32 categoryId, bool soloed) {
    if (categoryId >= SOUND_CAT_MAX) return;

    if (soloed) {
        // Un-solo all other categories
        for (u32 i = 0; i < SOUND_CAT_MAX; i++) {
            m_categories[i].soloed = (i == categoryId) ? 1 : 0;
        }
    } else {
        // Un-solo this category
        m_categories[categoryId].soloed = 0;
    }
}

// ============================================================================
// pauseCategory(categoryId, paused)
// ============================================================================
void AudioBus::pauseCategory(u32 categoryId, bool paused) {
    if (categoryId >= SOUND_CAT_MAX) return;
    m_categories[categoryId].paused = paused ? 1 : 0;
}

// ============================================================================
// setMasterVolume(volume)
// @addr 0x80579000 (200 bytes)
// ============================================================================
void AudioBus::setMasterVolume(f32 volume) {
    m_masterVolume = std::clamp(volume, 0.0f, 1.0f);
}

// ============================================================================
// getMasterVolume()
// @addr 0x80579100 (68 bytes)
// ============================================================================
f32 AudioBus::getMasterVolume() const {
    return m_masterVolume;
}

// ============================================================================
// update()
// @addr 0x80579200 (640 bytes, 100 code lines)
//
// Per-frame update: processes category volume fades and
// recalculates effective volumes.
// ============================================================================
void AudioBus::update() {
    if (!m_initialized) return;

    f32 dt = 1.0f / 60.0f; // 60 FPS

    for (u32 i = 0; i < SOUND_CAT_MAX; i++) {
        CategoryBus& bus = m_categories[i];

        // Process volume fade
        if (bus.fadeDuration > 0.0f && bus.fadeTimer < bus.fadeDuration) {
            bus.fadeTimer += dt;
            if (bus.fadeTimer >= bus.fadeDuration) {
                bus.fadeTimer = bus.fadeDuration;
            }

            // Linear interpolation from current to target
            f32 t = bus.fadeDuration > 0.0f ?
                    (bus.fadeTimer / bus.fadeDuration) : 1.0f;
            bus.volume = bus.volume + (bus.targetVolume - bus.volume) * t;

            if (bus.fadeTimer >= bus.fadeDuration) {
                bus.volume = bus.targetVolume;
                bus.fadeDuration = 0.0f;
            }
        }

        // Calculate effective volume
        bus.effectiveVolume = calculateEffectiveVolume(bus);
    }
}

// ============================================================================
// mixFrame()
// @addr 0x80579400 (840 bytes, 132 code lines, has_assert)
//
// Mixes one frame of audio from all categories into the output.
//
// On Wii, the actual mixing is done by the AX DSP hardware.
// The CPU sets up voice parameters (volume, pitch, pan) and the
// DSP reads them during the next frame. The CPU doesn't manually
// mix samples — it just configures the AX voices.
//
// This function:
// 1. Updates the effective volume for each category
// 2. Applies category volume to all voices in that category
// 3. The DSP does the actual sample mixing
// ============================================================================
void AudioBus::mixFrame() {
    if (!m_initialized) return;

    // Clear the mix buffer
    if (m_mixData != nullptr && m_mixBuffer.size > 0) {
        std::memset(m_mixData, 0, m_mixBuffer.size);
    }

    // On Wii, we don't manually mix samples.
    // The AX DSP handles mixing based on voice parameters.
    // What we do here is ensure all category volumes are up-to-date
    // so that when the DSP reads the AXVPB structures, it has the
    // correct per-voice volumes.
    //
    // The volume chain for each voice:
    //   effective_volume = voice_volume × category_effective_volume × master_volume
    //
    // This multiplication is applied when SoundPlayer::update() calls
    // AxVoiceManager::setVolume() for each active voice.

    // Check for solo mode
    bool anySolo = hasSoloedCategory();

    // Apply category volumes
    for (u32 i = 0; i < SOUND_CAT_MAX; i++) {
        CategoryBus& bus = m_categories[i];

        if (anySolo && !bus.soloed) {
            // This category is muted because another is soloed
            bus.effectiveVolume = 0.0f;
        } else if (bus.muted) {
            bus.effectiveVolume = 0.0f;
        } else if (bus.paused) {
            // Paused categories keep their volume but don't advance
        }
    }
}

// ============================================================================
// incrementVoiceCount(categoryId)
// ============================================================================
void AudioBus::incrementVoiceCount(u32 categoryId) {
    if (categoryId < SOUND_CAT_MAX) {
        m_categories[categoryId].voiceCount++;
    }
}

// ============================================================================
// decrementVoiceCount(categoryId)
// ============================================================================
void AudioBus::decrementVoiceCount(u32 categoryId) {
    if (categoryId < SOUND_CAT_MAX && m_categories[categoryId].voiceCount > 0) {
        m_categories[categoryId].voiceCount--;
    }
}

// ============================================================================
// canPlayVoice(categoryId, priority)
//
// Checks if a category can accept a new voice.
// Returns true if the voice count is below the limit
// and the priority meets the threshold.
// ============================================================================
bool AudioBus::canPlayVoice(u32 categoryId, u32 priority) const {
    if (categoryId >= SOUND_CAT_MAX) return false;

    const CategoryBus& bus = m_categories[categoryId];

    // Check voice limit
    if (bus.voiceCount >= bus.voiceLimit) {
        return false;
    }

    // Check priority threshold
    if (priority < bus.priorityThreshold) {
        return false;
    }

    // Check mute
    if (bus.muted) {
        return false;
    }

    // Check pause
    if (bus.paused) {
        return false;
    }

    return true;
}

// ============================================================================
// setVoiceLimit(categoryId, maxVoices)
// ============================================================================
void AudioBus::setVoiceLimit(u32 categoryId, u32 maxVoices) {
    if (categoryId < SOUND_CAT_MAX) {
        m_categories[categoryId].voiceLimit = maxVoices;
    }
}

// ============================================================================
// getCategoryBus(categoryId)
// ============================================================================
const CategoryBus* AudioBus::getCategoryBus(u32 categoryId) const {
    if (categoryId >= SOUND_CAT_MAX) return nullptr;
    return &m_categories[categoryId];
}

// ============================================================================
// getTotalVoiceCount()
// ============================================================================
u32 AudioBus::getTotalVoiceCount() const {
    u32 total = 0;
    for (u32 i = 0; i < SOUND_CAT_MAX; i++) {
        total += m_categories[i].voiceCount;
    }
    return total;
}

// ============================================================================
// isInitialized()
// ============================================================================
bool AudioBus::isInitialized() const {
    return m_initialized != 0;
}

// ============================================================================
// calculateEffectiveVolume(bus)
//
// Calculates the final effective volume for a category, taking into
// account: base volume, fade state, mute, solo, and master volume.
// ============================================================================
f32 AudioBus::calculateEffectiveVolume(const CategoryBus& bus) const {
    if (bus.muted) return 0.0f;

    f32 vol = bus.volume;

    // Apply solo logic
    if (hasSoloedCategory() && !bus.soloed) {
        return 0.0f;
    }

    // Apply master volume
    vol *= m_masterVolume;

    return std::clamp(vol, 0.0f, 1.0f);
}

// ============================================================================
// hasSoloedCategory()
// ============================================================================
bool AudioBus::hasSoloedCategory() const {
    for (u32 i = 0; i < SOUND_CAT_MAX; i++) {
        if (m_categories[i].soloed) return true;
    }
    return false;
}

} // namespace snd
} // namespace nw4r