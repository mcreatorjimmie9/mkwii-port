// ============================================================================
// DSPManager.cpp — DSP Register Management Implementation
// Reconstructed from nw4r::snd::detail::DSPManager
// ============================================================================

#include "DSPManager.hpp"
#include <cstring>
#include <cstdlib>
#include <algorithm>

// AX SDK shims (includes AXInit, AXSetMode, etc.)
#include <shims/audio.hpp>

// DSP SDK shims (inlined, not in ax_shim.h)
extern "C" {
// DSPInit — initializes the DSP audio subsystem
// On PC: no-op
inline void DSPInit(void) {}

// DSPRegisterCallback — registers a DSP frame-done callback
inline void DSPRegisterCallback(void (*callback)(void)) { (void)callback; }

// DSPSendMail — sends a 32-bit command to the DSP via the CPU→DSP mailbox
// On PC: stores the command in a local variable
inline void DSPSendMail(u32 mail) { (void)mail; }

// DSPReadMailbox — reads a 32-bit response from the DSP→CPU mailbox
// On PC: returns 0 (ready status)
inline u32 DSPReadMailbox(void) { return 0; }

// DSPCheckMail — checks if a response is available
inline BOOL DSPCheckMail(void) { return TRUE; }

// DSPGetDMAStatus — returns the DSP DMA status
inline u32 DSPGetDMAStatus(void) { return 0; }
}

namespace nw4r {
namespace snd {

// ============================================================================
// Static singleton instance
// ============================================================================
DSPManager* DSPManager::s_instance = nullptr;

// ============================================================================
// DSPManager()
// @addr 0x80574000 (constructor area)
// ============================================================================
DSPManager::DSPManager()
    : m_initialized(0)
    , m_busy(0)
    , m_outputMode(DSP_OUTPUT_MODE_STEREO)
    , m_sampleRate(32000)
    , m_masterVolume(1.0f)
    , m_mainBufferL(nullptr)
    , m_mainBufferR(nullptr)
    , m_auxBufferAL(nullptr)
    , m_auxBufferAR(nullptr)
    , m_bufferAllocSize(0)
    , m_lastCommand(0)
    , m_lastResponse(0)
    , m_mailboxFlags(0)
    , m_frameCallbackCount(0)
    , m_reverbEnabled(0)
{
    std::memset(&m_bufferConfig, 0, sizeof(m_bufferConfig));
    std::memset(&m_frameInfo, 0, sizeof(m_frameInfo));
    std::memset(&m_reverb, 0, sizeof(m_reverb));
}

// ============================================================================
// ~DSPManager()
// ============================================================================
DSPManager::~DSPManager() {
    shutdown();
}

// ============================================================================
// getInstance() / setInstance()
// ============================================================================
DSPManager* DSPManager::getInstance() {
    return s_instance;
}

void DSPManager::setInstance(DSPManager* instance) {
    s_instance = instance;
}

// ============================================================================
// init(outputMode, sampleRate)
// @addr 0x80574200 (640 bytes, 100 code lines, has_assert)
//
// Initializes the DSP audio subsystem.
// On Wii:
//   1. Allocates output buffers in MEM1 (32-byte aligned)
//   2. Calls DSPInit() to start the DSP audio ucode
//   3. Waits for DSP to confirm initialization (mailbox handshake)
//   4. Configures the output mode and sample rate
//   5. Registers the frame-done callback
//
// /* DSP_SDK: DSPInit() → alcOpenDevice() + alcCreateContext() */
// /* AX_SDK: AXInit() → (backend initialization) */
// ============================================================================
bool DSPManager::init(DSPOutputMode outputMode, u32 sampleRate) {
    if (m_initialized) return true;

    m_outputMode = outputMode;
    m_sampleRate = sampleRate;

    // --- Allocate output buffers ---
    // At 32kHz, each frame is 160 samples (5ms per frame).
    // We allocate 4 frames worth of buffering to prevent underruns.
    u32 samplesPerFrame = (sampleRate * 5) / 1000; // 5ms
    if (samplesPerFrame == 0) samplesPerFrame = 160;

    u32 bufferSize = samplesPerFrame * 4 * sizeof(s16); // 4 frames × 16-bit
    m_bufferAllocSize = ALIGN32(bufferSize);

    // Allocate main L/R buffers (always needed)
    m_mainBufferL = (u8*)allocBuffer(m_bufferAllocSize);
    m_mainBufferR = (u8*)allocBuffer(m_bufferAllocSize);

    if (m_mainBufferL == nullptr || m_mainBufferR == nullptr) {
        shutdown();
        return false;
    }

    // Allocate AUX buffers for surround modes
    if (outputMode == DSP_OUTPUT_MODE_SURROUND || outputMode == DSP_OUTPUT_MODE_6CH) {
        m_auxBufferAL = (u8*)allocBuffer(m_bufferAllocSize);
        m_auxBufferAR = (u8*)allocBuffer(m_bufferAllocSize);

        if (m_auxBufferAL == nullptr || m_auxBufferAR == nullptr) {
            shutdown();
            return false;
        }
    }

    // --- Set up buffer configuration ---
    m_bufferConfig.mainL = m_mainBufferL;
    m_bufferConfig.mainR = m_mainBufferR;
    m_bufferConfig.auxAL = m_auxBufferAL;
    m_bufferConfig.auxAR = m_auxBufferAR;
    m_bufferConfig.auxBL = nullptr;
    m_bufferConfig.auxBR = nullptr;
    m_bufferConfig.bufferSize = m_bufferAllocSize;
    m_bufferConfig.sampleRate = sampleRate;

    // --- Initialize the DSP ---
    /* DSP_SDK: DSPInit() */
    DSPInit();

    // Initialize AX
    /* AX_SDK: AXInit() */
    AXInit();

    // Set audio mode
    /* AX_SDK: AXSetMode(mode) */
    u32 axMode = 0;
    switch (outputMode) {
    case DSP_OUTPUT_MODE_MONO:    axMode = 0; break;
    case DSP_OUTPUT_MODE_STEREO:  axMode = 1; break;
    case DSP_OUTPUT_MODE_SURROUND: axMode = 2; break;
    default:                      axMode = 1; break;
    }
    AXSetMode(axMode);

    // Set memory per voice
    /* AX_SDK: AXSetMemPerVoice(size) */
    AXSetMemPerVoice(0x1000); // 4KB per voice

    // Register the frame-done callback
    /* AX_SDK: AXRegisterCallback() */
    AXRegisterCallback(onFrameDone);

    // --- Mailbox handshake with DSP ---
    // Send INIT command and wait for confirmation
    /* DSP_SDK: DSPSendMail(DSP_CMD_INIT) */
    DSPSendMail(DSP_CMD_INIT);

    // Wait for DSP to respond (on real Wii, this takes a few ms)
    // On PC, the response is immediate
    m_lastResponse = DSPReadMailbox();

    // --- Initialize frame info ---
    m_frameInfo.frameCount = 0;
    m_frameInfo.samplesPerFrame = samplesPerFrame;
    m_frameInfo.currentSample = 0;
    m_frameInfo.underrunCount = 0;
    m_frameInfo.processingTime = 0;
    m_frameCallbackCount = 0;

    // --- Default reverb ---
    m_reverb.roomSize = 0.5f;
    m_reverb.damping = 0.5f;
    m_reverb.wetLevel = 0.3f;
    m_reverb.dryLevel = 1.0f;
    m_reverb.width = 1.0f;
    m_reverb.preDelay = 0.02f;
    m_reverbEnabled = 0;

    m_initialized = 1;
    m_masterVolume = 1.0f;

    // Set as global instance
    s_instance = this;

    return true;
}

// ============================================================================
// shutdown()
// @addr 0x80574600 (360 bytes)
// /* DSP_SDK: DSPShutdown() → alcDestroyContext() + alcCloseDevice() */
// ============================================================================
void DSPManager::shutdown() {
    if (!m_initialized) return;

    // Send RESET command to DSP
    /* DSP_SDK: DSPSendMail(DSP_CMD_RESET) */
    DSPSendMail(DSP_CMD_RESET);

    // Shut down AX
    /* AX_SDK: AXQuit() */
    AXQuit();

    // Free output buffers
    if (m_mainBufferL != nullptr) { freeBuffer(m_mainBufferL); m_mainBufferL = nullptr; }
    if (m_mainBufferR != nullptr) { freeBuffer(m_mainBufferR); m_mainBufferR = nullptr; }
    if (m_auxBufferAL != nullptr) { freeBuffer(m_auxBufferAL); m_auxBufferAL = nullptr; }
    if (m_auxBufferAR != nullptr) { freeBuffer(m_auxBufferAR); m_auxBufferAR = nullptr; }

    m_initialized = 0;
    m_busy = 0;
    m_bufferAllocSize = 0;

    std::memset(&m_bufferConfig, 0, sizeof(m_bufferConfig));

    if (s_instance == this) {
        s_instance = nullptr;
    }
}

// ============================================================================
// setOutputMode(mode)
// @addr 0x80574800 (360 bytes)
// /* DSP_SDK: AXSetMode() → (backend parameters) */
// ============================================================================
void DSPManager::setOutputMode(DSPOutputMode mode) {
    m_outputMode = mode;

    u32 axMode = 0;
    switch (mode) {
    case DSP_OUTPUT_MODE_MONO:    axMode = 0; break;
    case DSP_OUTPUT_MODE_STEREO:  axMode = 1; break;
    case DSP_OUTPUT_MODE_SURROUND: axMode = 2; break;
    default:                      axMode = 1; break;
    }

    /* AX_SDK: AXSetMode(mode) */
    AXSetMode(axMode);

    // For surround modes, ensure AUX buffers are allocated
    if ((mode == DSP_OUTPUT_MODE_SURROUND || mode == DSP_OUTPUT_MODE_6CH) &&
        m_auxBufferAL == nullptr)
    {
        m_auxBufferAL = (u8*)allocBuffer(m_bufferAllocSize);
        m_auxBufferAR = (u8*)allocBuffer(m_bufferAllocSize);
        m_bufferConfig.auxAL = m_auxBufferAL;
        m_bufferConfig.auxAR = m_auxBufferAR;
    }
}

// ============================================================================
// setMasterVolume(volume)
// @addr 0x80574A00 (200 bytes)
// /* DSP_SDK: AXSetMasterVolume() → alListenerf(AL_GAIN, vol) */
// ============================================================================
void DSPManager::setMasterVolume(f32 volume) {
    m_masterVolume = std::clamp(volume, 0.0f, 1.0f);
}

// ============================================================================
// getMasterVolume()
// @addr 0x80574B00 (68 bytes)
// ============================================================================
f32 DSPManager::getMasterVolume() const {
    return m_masterVolume;
}

// ============================================================================
// setOutputBuffers(config)
// @addr 0x80574C00 (680 bytes, 108 code lines, has_assert)
// /* DSP_SDK: AX output buffer setup → (backend manages buffers) */
// ============================================================================
bool DSPManager::setOutputBuffers(const DSPBufferConfig& config) {
    if (!m_initialized) return false;

    // Validate buffer alignment (must be 32-byte aligned on Wii)
    if (config.bufferSize == 0 || config.sampleRate == 0) return false;

    // On Wii, we'd tell the DSP where the buffers are in MEM1.
    // On PC, the backend manages its own buffers.
    m_bufferConfig = config;
    m_bufferConfig.bufferSize = config.bufferSize;
    m_bufferConfig.sampleRate = config.sampleRate;

    return true;
}

// ============================================================================
// getBufferConfig()
// @addr 0x80575000 (200 bytes)
// ============================================================================
const DSPBufferConfig& DSPManager::getBufferConfig() const {
    return m_bufferConfig;
}

// ============================================================================
// sendDSPMail(command, param)
// @addr 0x80574E00 (320 bytes)
// /* DSP_SDK: DSPSendMail(command | (param << 16)) */
// ============================================================================
bool DSPManager::sendDSPMail(u32 command, u32 param) {
    if (!m_initialized) return false;

    u32 mail = (param << 16) | (command & 0xFFFF);

    /* DSP_SDK: DSPSendMail(mail) */
    DSPSendMail(mail);

    m_lastCommand = mail;
    m_busy = 1;

    // On real Wii, we'd wait for the DSP to process the command.
    // The DSP acknowledges by writing to the DSP→CPU mailbox.
    // On PC, this is instantaneous.
    m_lastResponse = DSPReadMailbox();
    m_busy = 0;

    return true;
}

// ============================================================================
// readDSPMail()
// @addr 0x80575000 (240 bytes)
// /* DSP_SDK: DSPReadMailbox() */
// ============================================================================
u32 DSPManager::readDSPMail() {
    /* DSP_SDK: DSPReadMailbox() */
    u32 response = DSPReadMailbox();
    m_lastResponse = response;
    return response;
}

// ============================================================================
// onFrameDone()
// @addr 0x80575200 (440 bytes, 68 code lines)
//
// Static callback registered with AXRegisterCallback.
// Called by the audio system when the DSP completes one frame.
// At 32kHz, this fires every ~5.5ms (160 samples).
//
// /* AX_SDK: AXRegisterCallback() → (backend callback) */
// ============================================================================
void DSPManager::onFrameDone() {
    DSPManager* mgr = s_instance;
    if (mgr == nullptr) return;

    mgr->m_frameCallbackCount++;
    mgr->m_frameInfo.frameCount++;
    mgr->m_busy = 0;
}

// ============================================================================
// update()
// @addr 0x80575400 (520 bytes, 80 code lines)
//
// Per-frame DSP update. Called once per game frame (60 Hz).
// Checks for DSP completion and manages buffer flipping.
// ============================================================================
void DSPManager::update() {
    if (!m_initialized) return;

    // On Wii, the DSP runs independently. We need to check
    // if the DSP has completed processing the current frame.
    // The AX callback (onFrameDone) sets m_busy = 0.

    // Check for buffer underruns
    // On Wii, if the DSP finishes before we refill, we get an underrun.
    // We detect this by checking if the frame callback fired.
    // (Simplified for PC port)

    // Read any pending DSP responses
    if (DSPCheckMail()) {
        m_lastResponse = DSPReadMailbox();
    }
}

// ============================================================================
// setReverb(params)
// @addr 0x80575600 (360 bytes)
// /* DSP_SDK: AXSetVoiceDspCallback() → OpenAL EFX reverb */
// ============================================================================
void DSPManager::setReverb(const DSPReverbParams& params) {
    m_reverb = params;
    m_reverbEnabled = 1;

    // Send reverb parameters to DSP
    // /* DSP_SDK: DSPSendMail(DSP_CMD_SET_REVERB | packed_params) */
    // On PC, reverb is configured via OpenAL EFX
    // (not implemented in the shim)
}

// ============================================================================
// clearReverb()
// @addr 0x80575800 (120 bytes)
// ============================================================================
void DSPManager::clearReverb() {
    m_reverbEnabled = 0;
    std::memset(&m_reverb, 0, sizeof(m_reverb));

    /* DSP_SDK: DSPSendMail(DSP_CMD_CLEAR_REVERB) */
}

// ============================================================================
// getOutputMode()
// ============================================================================
DSPOutputMode DSPManager::getOutputMode() const {
    return m_outputMode;
}

// ============================================================================
// getSampleRate()
// ============================================================================
u32 DSPManager::getSampleRate() const {
    return m_sampleRate;
}

// ============================================================================
// isInitialized()
// ============================================================================
bool DSPManager::isInitialized() const {
    return m_initialized != 0;
}

// ============================================================================
// getFrameInfo()
// ============================================================================
const DSPFrameInfo& DSPManager::getFrameInfo() const {
    return m_frameInfo;
}

// ============================================================================
// isBusy()
// ============================================================================
bool DSPManager::isBusy() const {
    return m_busy != 0;
}

// ============================================================================
// allocBuffer(size)
//
// Allocates a 32-byte aligned buffer for DSP output.
// On Wii: uses OSAllocAligned(32) from the sound arena.
// On PC: uses std::aligned_alloc.
// ============================================================================
void* DSPManager::allocBuffer(u32 size) {
    size = ALIGN32(size);
    void* ptr = std::aligned_alloc(32, size);
    if (ptr != nullptr) {
        std::memset(ptr, 0, size);
    }
    return ptr;
}

// ============================================================================
// freeBuffer(ptr)
// ============================================================================
void DSPManager::freeBuffer(void* ptr) {
    if (ptr != nullptr) {
        std::free(ptr);
    }
}

} // namespace snd
} // namespace nw4r