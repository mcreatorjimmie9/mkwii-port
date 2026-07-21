#pragma once
// AudioSystem.hpp — Global Audio System Initialization
// Provides a singleton that connects AxVoiceManager to SoundPlayers
// and manages per-frame audio updates (3D listener, category volumes, etc.)

#include <rk_types.h>

namespace nw4r {
namespace snd {

class AxVoiceManager;
class SoundArchive;
class Sound3D;

class AudioSystem {
public:
    // Get singleton instance
    static AudioSystem& instance();

    // Initialize the audio system (called once at startup)
    // Returns true if OpenAL is available, false if running in silent mode
    bool initialize();

    // Shutdown the audio system
    void shutdown();

    // Per-frame update — call once per game frame
    // Updates voice manager, 3D listener, category volumes
    void update();

    // Load a BRSAR sound archive
    bool loadArchive(const void* data, u32 size);

    // Get the voice manager (for wiring to SoundPlayers)
    AxVoiceManager* getVoiceManager() const;

    // Get the sound archive
    SoundArchive* getArchive() const;

    // Get the 3D audio system
    Sound3D* getSound3D() const;

    // Check if audio is initialized
    bool isInitialized() const;

    // Set master volume (0.0 to 1.0)
    void setMasterVolume(f32 volume);

    // Set category volume
    void setCategoryVolume(u32 category, f32 volume);

    // Get category volume
    f32 getCategoryVolume(u32 category) const;

private:
    AudioSystem();
    ~AudioSystem();

    // Non-copyable
    AudioSystem(const AudioSystem&) = delete;
    AudioSystem& operator=(const AudioSystem&) = delete;

    AxVoiceManager* m_voiceMgr;
    SoundArchive*   m_archive;
    Sound3D*       m_sound3d;
    bool           m_initialized;
    f32            m_masterVolume;
    f32            m_categoryVolumes[16]; // SOUND_CAT_MAX = 16
};

} // namespace snd
} // namespace nw4r