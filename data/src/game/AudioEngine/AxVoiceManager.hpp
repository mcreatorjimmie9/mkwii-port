#pragma once
// ============================================================================
// AxVoiceManager.hpp — AX Voice Allocation & Management
// Reconstructed from nw4r::snd voice management (Cluster 2: 0x805401-0x8054FE)
//
// On Wii: Manages AXVPB (Voice Processing Block) voice allocation
// On PC:  Maps to OpenAL source management via alGenSources/alDeleteSources
//
// Key functions reconstructed:
//   0x805401AC: AxVoiceManager::init()       — Initialize voice pool
//   0x80542074: AxVoiceManager::allocVoice()  — Allocate a voice by priority
//   0x80542A98: AxVoiceManager::freeVoice()   — Release voice back to pool
//   0x80544920: AxVoiceManager::update()      — Per-frame voice state update
//   0x80544D7C: AxVoiceManager::setVolume()   — Set voice volume
//   0x805450B8: AxVoiceManager::setPitch()    — Set voice pitch
//   0x80549970: AxVoiceManager::setPan()      — Set voice stereo pan
//   0x8054B8C4: AxVoiceManager::setAddr()     — Set voice buffer address
//   0x8054D614: AxVoiceManager::startVoice()  — Begin voice playback
//   0x8054DBC0: AxVoiceManager::stopVoice()   — Stop voice playback
//   0x8054DE4C: AxVoiceManager::pauseVoice()  — Pause voice
//   0x8054E3F4: AxVoiceManager::resumeVoice() — Resume paused voice
//   0x8054F51C: AxVoiceManager::getFreeCount() — Get available voice count
//   0x8054F8F8: AxVoiceManager::getAllCount()  — Get total voice count
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"

// Forward-declare OpenAL types (defined in shim header)
typedef unsigned int ALuint;
typedef int ALenum;
typedef float ALfloat;

namespace nw4r {
namespace snd {

// ============================================================================
// AX Voice Descriptor — Low-level voice state (maps to AXVPBVoice)
// 0xF0 bytes per voice on Wii, simplified for PC port
// ============================================================================
struct AxVoiceDesc {
    u32 voiceIndex;      // 0x00: Voice index in pool
    u32 state;           // 0x04: AxVoiceState
    u32 priority;        // 0x08: Priority (higher = more important)
    u32 ownerId;         // 0x0C: Owner identifier (player/sound ID)
    void* userData;      // 0x10: User data pointer

    // Audio parameters
    f32 volume;          // 0x14: Volume (0.0 - 1.0)
    f32 pitch;           // 0x18: Pitch multiplier (0.25 - 4.0)
    f32 pan;             // 0x1C: Stereo pan (-1.0 to 1.0)

    // 3D positioning
    f32 posX, posY, posZ;  // 0x20-0x28: 3D position
    f32 velX, velY, velZ;  // 0x2C-0x34: 3D velocity (Doppler)

    // Buffer info
    void* bufferAddr;    // 0x38: Wave data buffer
    u32 bufferSize;      // 0x3C: Buffer size in bytes
    u32 loopStart;       // 0x40: Loop start sample offset
    u32 loopEnd;         // 0x44: Loop end sample offset
    u32 sampleRate;      // 0x48: Sample rate
    u16 channels;        // 0x4C: Channel count
    u16 encoding;        // 0x4E: Encoding format (ADPCM/PCM)

    // PC port: OpenAL source ID
    ALuint alSource;     // 0x50: OpenAL source
    ALuint alBuffer;     // 0x54: OpenAL buffer
    u8   active;         // 0x58: Active flag
    u8   looping;        // 0x59: Looping flag
    u8   paused;         // 0x5A: Paused flag
    u8   _pad;           // 0x5B: Padding
};
static_assert(sizeof(AxVoiceDesc) == 0x5C);

// ============================================================================
// AxVoiceManager — Manages the pool of AX voices / OpenAL sources
//
// On Wii, this manages the AXVPB voice pool (typically 64 voices).
// On PC, this manages a pool of OpenAL sources.
// ============================================================================
class AxVoiceManager {
public:
    AxVoiceManager();
    ~AxVoiceManager();

    // --- Initialization ---
    // @addr 0x805401AC (576 bytes)
    // Initializes the voice pool with the given maximum voice count.
    // Allocates voice descriptors and OpenAL sources.
    // /* AX_SDK: AXInit() → alcOpenDevice() / alcCreateContext() */
    bool init(u32 maxVoices = MAX_AX_VOICES);

    // --- Shutdown ---
    // Releases all allocated voices and OpenAL resources.
    // /* AX_SDK: AXQuit() → alcDestroyContext() / alcCloseDevice() */
    void shutdown();

    // --- Voice Allocation ---
    // @addr 0x80542074 (620 bytes)
    // Allocates a voice with the given priority. If no free voices,
    // steals the lowest-priority voice. Returns voice index or -1.
    // /* AX_SDK: AXAllocVoice() → alGenSources() */
    s32 allocVoice(u32 priority, u32 ownerId = 0, void* userData = nullptr);

    // @addr 0x80542A98 (744 bytes, has_assert)
    // Releases a voice back to the free pool.
    // /* AX_SDK: AXFreeVoice() → alSourceStop() + alDeleteSources() */
    bool freeVoice(u32 voiceIndex);

    // --- Voice Parameter Setting ---
    // @addr 0x80544D7C (828 bytes)
    // Sets the volume for a voice. Range: 0.0 to 1.0.
    // /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
    void setVolume(u32 voiceIndex, f32 volume);

    // @addr 0x805450B8 (684 bytes)
    // Sets the pitch for a voice. Range: 0.25 to 4.0 (default 1.0).
    // /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
    void setPitch(u32 voiceIndex, f32 pitch);

    // @addr 0x80549970 (588 bytes)
    // Sets the stereo pan for a voice. Range: -1.0 (left) to 1.0 (right).
    // /* AX_SDK: AXSetVoiceVe() → alSource3f(src, AL_POSITION, pan, 0, 0) */
    void setPan(u32 voiceIndex, f32 pan);

    // @addr 0x8054B8C4 (524 bytes)
    // Sets the wave data address for a voice.
    // /* AX_SDK: AXSetVoiceAddr() → alBufferData() */
    void setAddr(u32 voiceIndex, void* buffer, u32 size, u32 sampleRate,
                 u16 channels, u16 encoding);

    // @addr 0x8054E8B4 (approx)
    // Sets the loop points for a voice.
    // /* AX_SDK: AXSetVoiceLoop() → alSourcei(src, AL_LOOPING, loop ? AL_TRUE : AL_FALSE) */
    void setLoop(u32 voiceIndex, bool loop, u32 loopStart = 0, u32 loopEnd = 0);

    // --- Playback Control ---
    // @addr 0x8054D614 (1156 bytes, has_assert)
    // Starts voice playback.
    // /* AX_SDK: AXPlayVoice() → alSourcePlay() */
    bool startVoice(u32 voiceIndex);

    // @addr 0x8054DBC0 (652 bytes)
    // Stops voice playback.
    // /* AX_SDK: AXStopVoice() → alSourceStop() */
    bool stopVoice(u32 voiceIndex);

    // @addr 0x8054DE4C (844 bytes)
    // Pauses voice playback.
    // /* AX_SDK: (Manual DSP pause) → alSourcePause() */
    bool pauseVoice(u32 voiceIndex);

    // @addr 0x8054E3F4 (760 bytes)
    // Resumes a paused voice.
    // /* AX_SDK: (Manual DSP resume) → alSourcePlay() */
    bool resumeVoice(u32 voiceIndex);

    // --- 3D Positioning ---
    // Sets 3D position for a voice.
    // /* AX_SDK: AXSetVoiceVe() + AXSetVoiceDspCallback() → alSource3f(src, AL_POSITION, ...) */
    void setPosition(u32 voiceIndex, f32 x, f32 y, f32 z);

    // Sets 3D velocity for Doppler effect.
    // /* AX_SDK: AXSetVoiceVe() → alSource3f(src, AL_VELOCITY, ...) */
    void setVelocity(u32 voiceIndex, f32 x, f32 y, f32 z);

    // --- Per-Frame Update ---
    // @addr 0x80544920 (1116 bytes)
    // Updates all active voices (handles priority stealing, state transitions).
    void update();

    // --- Queries ---
    // @addr 0x8054F51C (824 bytes)
    // Returns the number of free (unallocated) voices.
    u32 getFreeVoiceCount() const;

    // @addr 0x8054F8F8 (528 bytes)
    // Returns the total number of voices in the pool.
    u32 getTotalVoiceCount() const;

    // Checks if a voice is currently playing.
    bool isPlaying(u32 voiceIndex) const;

    // Gets the voice descriptor for direct manipulation.
    AxVoiceDesc* getVoiceDesc(u32 voiceIndex);

    // Gets the OpenAL source ID for a voice index.
    ALuint getALSource(u32 voiceIndex) const;

private:
    // Internal: find lowest-priority active voice for stealing
    s32 findLowestPriorityVoice(u32 minPriority);

    // Internal: validate voice index
    bool isValidVoice(u32 voiceIndex) const;

    // Voice pool
    static const u32 MAX_POOL_VOICES = 64;
    AxVoiceDesc m_voices[MAX_POOL_VOICES]; // 0x00: Voice descriptor pool
    u32 m_maxVoices;                        // Active count
    u32 m_activeCount;                      // Currently playing count
    u32 m_freeList[MAX_POOL_VOICES];       // Free list (stack)
    u32 m_freeListTop;                      // Free list pointer

    // Global voice parameters
    f32 m_masterVolume;                     // Master volume multiplier
    f32 m_dopplerFactor;                    // Doppler effect strength
};

} // namespace snd
} // namespace nw4r