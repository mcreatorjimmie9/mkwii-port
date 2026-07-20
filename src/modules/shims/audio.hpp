#pragma once
// audio.hpp — Wii AX Audio SDK shims
// Extends the existing ax_shim.h with a comprehensive set of AX function
// stubs. The real AX library manages the DSP for audio mixing, streaming,
// and playback. On PC this maps to a backend like OpenAL or SDL_mixer.
// These stubs allow the code to compile without a real audio backend.

#include "../rk_types.h"
#include <cstring>

// ============================================================================
// AX types
// ============================================================================

// AXVPB — AX Voice Parameter Block (a mixing voice).
// On Wii this is ~0x280 bytes of DSP memory. Opaque for the shim.
typedef void* AXVPB;

// AX PB flags
enum {
    AX_PB_FLAG_NONE           = 0,
    AX_PB_FLAG_LOOP           = 0x0001,
    AX_PB_FLAG_STREAM         = 0x0002,
};

// AX voice addresses
enum {
    AX_ADDR_LOOP = -1,  // internal: use voice loop settings
};

// AX DSP callbacks
typedef void (*AXDSPCallback)(void* task, void* context);

// AXFrameInfo — info about one frame of audio processing.
typedef struct {
    u32  lpFifo;     // current read position in the input FIFO
    u32  currentDsp;  // current DSP address
} AXFrameInfo;

// AXVoiceCallbackData — callback data structure for voice completion callbacks.
typedef struct {
    void (*callback)(AXVPB* vpb);
} AXVoiceCallbackData;

// ============================================================================
// AX function stubs
// ============================================================================

extern "C" {

// AXInit — initializes the AX audio subsystem.
// On PC: no-op. A real port calls alcOpenDevice / alcCreateContext.
inline void AXInit(void) {}

// AXQuit — shuts down the AX audio subsystem.
inline void AXQuit(void) {}

// AXSetMode — sets the audio output mode (stereo, surround, etc.).
inline void AXSetMode(u32 mode) { (void)mode; }

// AXGetMode — returns the current audio output mode.
inline u32 AXGetMode(void) { return 0; }

// AXRegisterCallback — registers a frame-done callback.
// The callback fires once per audio frame (~5.5ms at 32kHz).
typedef void (*AXFrameCallback)(void);
inline void AXRegisterCallback(AXFrameCallback cb) { (void)cb; }

// AXIsInit — returns TRUE if AX has been initialized.
inline BOOL AXIsInit(void) { return FALSE; }

// --- Voice management ---

// AXAllocVoice — allocates a voice for playback.
// On PC: returns a dummy pointer. Real port: alGenSources().
inline AXVPB AXAllocVoice(u16 priority) {
    (void)priority;
    return nullptr;
}

// AXFreeVoice — frees a voice, stopping it if playing.
inline void AXFreeVoice(AXVPB voice) { (void)voice; }

// AXGetFirstFreeVoice — returns the first available voice (or NULL).
inline AXVPB AXGetFirstFreeVoice(void) { return nullptr; }

// AXGetVoice — returns a pointer to a voice's parameter block.
inline AXVPB AXGetVoice(u32 voiceBit) { (void)voiceBit; return nullptr; }

// --- Voice parameter setting ---

// AXSetVoiceAddr — sets the address of the sample data for a voice.
inline void AXSetVoiceAddr(AXVPB voice, void* addr) {
    (void)voice; (void)addr;
}

// AXSetVoiceVolume — sets the voice's master volume (0x0000..0x7FFF).
inline void AXSetVoiceVolume(AXVPB voice, u16 vol) {
    (void)voice; (void)vol;
}

// AXSetVoiceVolumeF — same but with float (0.0..1.0).
inline void AXSetVoiceVolumeF(AXVPB voice, f32 vol) {
    (void)voice; (void)vol;
}

// AXSetVoicePitch — sets the playback pitch ratio (1.0 = normal).
inline void AXSetVoicePitch(AXVPB voice, f32 pitch) {
    (void)voice; (void)pitch;
}

// AXSetVoiceLoop — configures loop playback for a voice.
// loop: TRUE to enable looping.
// startAddr / endAddr: loop region (0 = use default from sample).
inline void AXSetVoiceLoop(AXVPB voice, BOOL loop, void* startAddr, void* endAddr) {
    (void)voice; (void)loop; (void)startAddr; (void)endAddr;
}

// AXSetVoiceVe — sets the voice's 3D position/velocity.
// x,y,z are the position or velocity components depending on mode.
// mode: 0 = position, 1 = velocity.
inline void AXSetVoiceVe(AXVPB voice, f32 x, f32 y, f32 z) {
    (void)voice; (void)x; (void)y; (void)z;
}

// AXSetVoicePriority — changes a voice's priority (0 = highest, 15 = lowest).
inline void AXSetVoicePriority(AXVPB voice, u16 priority) {
    (void)voice; (void)priority;
}

// AXSetVoiceSrcType — sets whether a voice uses ADPCM or PCM data.
inline void AXSetVoiceSrcType(AXVPB voice, u32 type) {
    (void)voice; (void)type;
}

// AXSetVoiceState — sets a voice's playback state.
// state: 0=stopped, 1=playing
inline void AXSetVoiceState(AXVPB voice, u32 state) {
    (void)voice; (void)state;
}

// AXSetVoiceAdpcm — configures ADPCM decode parameters.
inline void AXSetVoiceAdpcm(AXVPB voice, void* adpcm, u32 offset, u32 gain) {
    (void)voice; (void)adpcm; (void)offset; (void)gain;
}

// AXSetVoiceDspCallback — sets a per-voice DSP callback (for filters/effects).
inline void AXSetVoiceDspCallback(AXVPB voice, AXDSPCallback cb) {
    (void)voice; (void)cb;
}

// --- Voice playback control ---

// AXPlayVoice — starts playback of a voice.
inline u32 AXPlayVoice(AXVPB voice) {
    (void)voice;
    return 0; // success
}

// AXStopVoice — stops a playing voice.
inline void AXStopVoice(AXVPB voice) { (void)voice; }

// AXIsVoicePlaying — returns TRUE if a voice is currently playing.
inline BOOL AXIsVoicePlaying(AXVPB voice) {
    (void)voice;
    return FALSE;
}

// --- Global AX settings ---

// AXSetMemPerVoice — sets the memory allocated per voice for internal buffers.
inline void AXSetMemPerVoice(u32 size) { (void)size; }

// AXGetMaxVoices — returns the maximum number of voices.
inline u32 AXGetMaxVoices(void) { return 0; }

// AXGetActiveVoices — returns the number of currently active voices.
inline u32 AXGetActiveVoices(void) { return 0; }

// AXGetPerfCallbacks — returns pointers to DSP performance counter callbacks.
inline void AXGetPerfCallbacks(u32* cb0, u32* cb1) {
    if (cb0) *cb0 = 0;
    if (cb1) *cb1 = 0;
}

// AXSetProfiler — enables/disables the AX performance profiler.
inline void AXSetProfiler(BOOL enable) { (void)enable; }

} // extern "C"