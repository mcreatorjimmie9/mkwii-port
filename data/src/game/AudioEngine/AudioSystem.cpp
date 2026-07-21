#include "AudioSystem.hpp"
#include "AxVoiceManager.hpp"
#include "SoundArchive.hpp"
#include "Sound3D.hpp"
#include <cstring>
#include <algorithm>

namespace nw4r {
namespace snd {

AudioSystem& AudioSystem::instance() {
    static AudioSystem s_instance;
    return s_instance;
}

AudioSystem::AudioSystem()
    : m_voiceMgr(nullptr)
    , m_archive(nullptr)
    , m_sound3d(nullptr)
    , m_initialized(false)
    , m_masterVolume(1.0f)
{
    for (u32 i = 0; i < 16; i++) {
        m_categoryVolumes[i] = 1.0f;
    }
}

AudioSystem::~AudioSystem() {
    shutdown();
}

bool AudioSystem::initialize() {
    if (m_initialized) return true;

    // Create voice manager
    m_voiceMgr = new AxVoiceManager();
    if (!m_voiceMgr->init(MAX_AX_VOICES)) {
        // OpenAL not available — continue in silent mode
        // Voice manager's init() gracefully handles missing OpenAL
    }

    // Create sound archive
    m_archive = new SoundArchive();

    // Create 3D audio system
    m_sound3d = new Sound3D();

    m_initialized = true;
    return true;
}

void AudioSystem::shutdown() {
    if (!m_initialized) return;

    if (m_sound3d) { delete m_sound3d; m_sound3d = nullptr; }
    if (m_archive) { delete m_archive; m_archive = nullptr; }
    if (m_voiceMgr) { m_voiceMgr->shutdown(); delete m_voiceMgr; m_voiceMgr = nullptr; }

    m_initialized = false;
}

void AudioSystem::update() {
    if (!m_initialized) return;

    // Update voice manager (handles voice state transitions, auto-free)
    if (m_voiceMgr) {
        m_voiceMgr->update();
    }

    // Update 3D audio (pushes listener position to OpenAL)
    if (m_sound3d) {
        m_sound3d->updateSound3D();
    }
}

bool AudioSystem::loadArchive(const void* data, u32 size) {
    if (!m_initialized || !m_archive) return false;
    return m_archive->load(data, size);
}

AxVoiceManager* AudioSystem::getVoiceManager() const {
    return m_voiceMgr;
}

SoundArchive* AudioSystem::getArchive() const {
    return m_archive;
}

Sound3D* AudioSystem::getSound3D() const {
    return m_sound3d;
}

bool AudioSystem::isInitialized() const {
    return m_initialized;
}

void AudioSystem::setMasterVolume(f32 volume) {
    m_masterVolume = std::clamp(volume, 0.0f, 1.0f);
}

void AudioSystem::setCategoryVolume(u32 category, f32 volume) {
    if (category < 16) {
        m_categoryVolumes[category] = std::clamp(volume, 0.0f, 1.0f);
    }
}

f32 AudioSystem::getCategoryVolume(u32 category) const {
    if (category < 16) {
        return m_categoryVolumes[category];
    }
    return 1.0f;
}

} // namespace snd
} // namespace nw4r