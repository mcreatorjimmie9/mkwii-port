#pragma once
// ============================================================================
// DSPManager.hpp — DSP Register Management & Output Buffer Setup
// Reconstructed from nw4r::snd::detail::DSPManager
//
// The DSPManager handles low-level DSP hardware initialization and
// communication on the Wii. It manages:
//   - DSP initialization (DSPInit, DSPRegisterCallback)
//   - DSP mailbox communication (DSPSendMail, DSPReadMailbox)
//   - Output buffer configuration (AUX buffers for surround, headroom)
//   - Frame synchronization (DSP completion callbacks)
//   - DSP task management
//
// On Wii, the DSP runs a separate audio processing pipeline. The CPU
// communicates via mailboxes and shared memory (ARAM/DSP memory).
// On PC, this maps to the audio backend's mixer context.
//
// Key functions reconstructed:
//   0x80574000: DSPManager::DSPManager()        — Constructor
//   0x80574200: DSPManager::init()             — Initialize DSP subsystem
//   0x80574600: DSPManager::shutdown()         — Shut down DSP
//   0x80574800: DSPManager::setOutputMode()    — Set audio output mode
//   0x80574A00: DSPManager::setMasterVolume()  — Set master output volume
//   0x80574C00: DSPManager::setOutputBuffers() — Configure output buffers
//   0x80574E00: DSPManager::sendDSPMail()      — Send command to DSP
//   0x80575000: DSPManager::readDSPMail()      — Read DSP response
//   0x80575200: DSPManager::onFrameDone()      — DSP frame completion callback
//   0x80575400: DSPManager::update()           — Per-frame DSP sync
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// DSP Output Mode — Audio output configuration
// ============================================================================
enum DSPOutputMode {
    DSP_OUTPUT_MODE_MONO    = 0,  // Mono output
    DSP_OUTPUT_MODE_STEREO  = 1,  // Stereo output (default for MKWii)
    DSP_OUTPUT_MODE_SURROUND = 2, // Surround (Dolby Pro Logic II)
    DSP_OUTPUT_MODE_6CH     = 3   // 6-channel (L/R/C/LFE/SL/SR)
};

// ============================================================================
// DSP Mailbox Commands — Commands sent from CPU to DSP
// ============================================================================
enum DSPCommand {
    DSP_CMD_INIT           = 0x0001,  // Initialize DSP
    DSP_CMD_RESET          = 0x0002,  // Reset DSP state
    DSP_CMD_SET_MODE       = 0x0003,  // Set output mode
    DSP_CMD_SET_VOLUME     = 0x0004,  // Set master volume
    DSP_CMD_SET_BUFFER     = 0x0005,  // Set output buffer address
    DSP_CMD_START_STREAM   = 0x0010,  // Start streaming
    DSP_CMD_STOP_STREAM    = 0x0011,  // Stop streaming
    DSP_CMD_SET_STREAM_POS = 0x0012,  // Set stream position
    DSP_CMD_MIX_VOICE      = 0x0020,  // Mix a voice into output
    DSP_CMD_SET_REVERB     = 0x0030,  // Set reverb parameters
    DSP_CMD_CLEAR_REVERB   = 0x0031,  // Clear reverb state
};

// ============================================================================
// DSP Status Codes — Response codes from DSP
// ============================================================================
enum DSPStatus {
    DSP_STATUS_READY       = 0x0000,  // DSP ready for commands
    DSP_STATUS_BUSY        = 0x0001,  // DSP processing
    DSP_STATUS_INIT_DONE   = 0x8001,  // Initialization complete
    DSP_STATUS_FRAME_DONE  = 0x8002,  // Frame processing complete
    DSP_STATUS_ERROR       = 0xFFFF,  // Error occurred
};

// ============================================================================
// DSP Buffer Config — Output buffer configuration
// ============================================================================
struct DSPBufferConfig {
    void* mainL;           // 0x00: Main left channel buffer (32-byte aligned)
    void* mainR;           // 0x04: Main right channel buffer (32-byte aligned)
    void* auxAL;           // 0x08: AUX-A left (surround rear left)
    void* auxAR;           // 0x0C: AUX-A right (surround rear right)
    void* auxBL;           // 0x10: AUX-B left (center/LFE)
    void* auxBR;           // 0x14: AUX-B right (reserved)
    u32  bufferSize;       // 0x18: Buffer size in bytes (per channel)
    u32  sampleRate;       // 0x1C: Output sample rate
};

// ============================================================================
// DSP Reverb Parameters
// ============================================================================
struct DSPReverbParams {
    f32 roomSize;          // 0x00: Room size (0.0 - 1.0)
    f32 damping;           // 0x04: High-frequency damping (0.0 - 1.0)
    f32 wetLevel;          // 0x08: Reverb wet level (0.0 - 1.0)
    f32 dryLevel;          // 0x0C: Dry level (0.0 - 1.0)
    f32 width;             // 0x10: Stereo width (0.0 - 1.0)
    f32 preDelay;          // 0x14: Pre-delay in seconds (0.0 - 0.2)
};

// ============================================================================
// DSP Frame Info — Information about the current DSP frame
// ============================================================================
struct DSPFrameInfo {
    u32 frameCount;        // 0x00: Total frames processed
    u32 samplesPerFrame;   // 0x04: Samples per frame (e.g., 160 at 32kHz)
    u32 currentSample;     // 0x08: Current sample within frame
    u32 underrunCount;     // 0x0C: Number of buffer underruns
    u32 processingTime;    // 0x10: DSP processing time (microseconds)
};

// ============================================================================
// DSPManager — Manages the DSP audio subsystem
//
// On Wii:
//   - Initializes the DSP audio ucode via DSPInit
//   - Manages CPU↔DSP communication via mailboxes
//   - Configures output buffers for 32kHz/48kHz mixing
//   - Handles frame synchronization via DSP completion callbacks
// On PC:
//   - Initializes the audio backend (e.g., OpenAL context)
//   - Output buffers are managed by the backend
//   - Frame sync is handled by the audio device
// ============================================================================
class DSPManager {
public:
    DSPManager();
    ~DSPManager();

    // --- Initialization ---
    // @addr 0x80574200 (640 bytes, 100 code lines, has_assert)
    // Initializes the DSP subsystem. Allocates output buffers,
    // starts the DSP, and waits for initialization confirmation.
    // /* DSP_SDK: DSPInit() → alcOpenDevice() + alcCreateContext() */
    bool init(DSPOutputMode outputMode, u32 sampleRate = 32000);

    // @addr 0x80574600 (360 bytes)
    // Shuts down the DSP and releases all resources.
    // /* DSP_SDK: DSPShutdown() → alcDestroyContext() + alcCloseDevice() */
    void shutdown();

    // --- Output Configuration ---
    // @addr 0x80574800 (360 bytes)
    // Sets the audio output mode (mono, stereo, surround).
    // /* DSP_SDK: AXSetMode() → alcDevice parameters */
    void setOutputMode(DSPOutputMode mode);

    // @addr 0x80574A00 (200 bytes)
    // Sets the master output volume. Range: 0.0 (mute) to 1.0 (max).
    // /* DSP_SDK: AXSetMasterVolume() → alListenerf(AL_GAIN) */
    void setMasterVolume(f32 volume);

    // @addr 0x80574B00 (68 bytes)
    f32 getMasterVolume() const;

    // --- Buffer Management ---
    // @addr 0x80574C00 (680 bytes, 108 code lines, has_assert)
    // Configures the DSP output buffers. On Wii, these are
    // 32-byte aligned buffers in MEM1 that the DSP writes to.
    // /* DSP_SDK: AXSetInit() + buffer setup → (backend manages buffers) */
    bool setOutputBuffers(const DSPBufferConfig& config);

    // @addr 0x80575000 (200 bytes)
    // Returns the current buffer configuration.
    const DSPBufferConfig& getBufferConfig() const;

    // --- DSP Communication ---
    // @addr 0x80574E00 (320 bytes)
    // Sends a command to the DSP via the CPU→DSP mailbox.
    // Waits for the DSP to acknowledge the command.
    // /* DSP_SDK: DSPSendMail(command) */
    bool sendDSPMail(u32 command, u32 param = 0);

    // @addr 0x80575000 (240 bytes)
    // Reads a response from the DSP via the DSP→CPU mailbox.
    // /* DSP_SDK: DSPReadMailbox() */
    u32 readDSPMail();

    // --- Frame Synchronization ---
    // @addr 0x80575200 (440 bytes, 68 code lines)
    // Called when the DSP completes one frame of audio processing.
    // This is registered as the AX frame callback.
    // On Wii: fires every ~5.5ms (160 samples at 32kHz).
    // /* AX_SDK: AXRegisterCallback() → (backend callback) */
    static void onFrameDone();

    // @addr 0x80575400 (520 bytes, 80 code lines)
    // Per-frame update: checks for DSP completion, syncs buffers.
    void update();

    // --- Reverb ---
    // @addr 0x80575600 (360 bytes)
    // Sets the DSP reverb parameters.
    // /* DSP_SDK: AXSetVoiceDspCallback() → OpenAL EFX reverb */
    void setReverb(const DSPReverbParams& params);

    // @addr 0x80575800 (120 bytes)
    // Disables reverb processing.
    void clearReverb();

    // --- Queries ---
    // Returns the current output mode.
    DSPOutputMode getOutputMode() const;

    // Returns the current sample rate.
    u32 getSampleRate() const;

    // Returns true if the DSP is initialized and ready.
    bool isInitialized() const;

    // Returns frame info from the last completed DSP frame.
    const DSPFrameInfo& getFrameInfo() const;

    // Returns true if the DSP is currently processing a frame.
    bool isBusy() const;

    // --- Global singleton access ---
    static DSPManager* getInstance();
    static void setInstance(DSPManager* instance);

private:
    // Allocates 32-byte aligned output buffers.
    void* allocBuffer(u32 size);

    // Frees an output buffer.
    void freeBuffer(void* ptr);

    // DSP initialization state
    u8   m_initialized;         // 0x00: Initialization flag
    u8   m_busy;                // 0x01: DSP busy flag
    u8   _pad[2];

    // Output configuration
    DSPOutputMode m_outputMode; // 0x04: Current output mode
    u32  m_sampleRate;          // 0x08: Output sample rate
    f32  m_masterVolume;        // 0x0C: Master volume (0.0 - 1.0)

    // Buffer configuration
    DSPBufferConfig m_bufferConfig; // 0x10: Output buffer config
    u8*  m_mainBufferL;         // 0x30: Allocated main L buffer
    u8*  m_mainBufferR;         // 0x34: Allocated main R buffer
    u8*  m_auxBufferAL;         // 0x38: Allocated AUX-A L buffer
    u8*  m_auxBufferAR;         // 0x3C: Allocated AUX-A R buffer
    u32  m_bufferAllocSize;     // 0x40: Size of allocated buffers

    // Mailbox state
    u32  m_lastCommand;         // 0x44: Last command sent
    u32  m_lastResponse;        // 0x48: Last DSP response
    u32  m_mailboxFlags;        // 0x4C: Mailbox status flags

    // Frame tracking
    DSPFrameInfo m_frameInfo;   // 0x50: Frame info
    u32  m_frameCallbackCount;  // 0x64: Number of frame callbacks received

    // Reverb
    DSPReverbParams m_reverb;   // 0x68: Current reverb parameters
    u8   m_reverbEnabled;       // 0x80: Reverb active flag
    u8   _pad2[3];

    // Singleton
    static DSPManager* s_instance;
};

} // namespace snd
} // namespace nw4r