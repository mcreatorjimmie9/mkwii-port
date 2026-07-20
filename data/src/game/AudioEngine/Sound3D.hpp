#pragma once
// ============================================================================
// Sound3D.hpp — 3D Positional Audio Calculations
// Reconstructed from nw4r::snd::detail::Sound3D
//
// The Sound3D module handles 3D positional audio for objects in the
// game world. MKWii uses 3D audio for:
//   - Kart engine sounds (distance-based attenuation)
//   - Item sound effects (positioned at item location)
//   - Course environment sounds (positioned at fixed world locations)
//   - Other player karts (distance and Doppler)
//
// The 3D calculations include:
//   - Distance attenuation (inverse distance model)
//   - Doppler effect (pitch shift based on relative velocity)
//   - Stereo pan calculation (from 3D position to left/right)
//   - Listener transform (camera position/orientation)
//
// On Wii, 3D audio is implemented via AXSetVoiceVe() which sets
// the voice's 3D position/velocity. The DSP handles the actual
// panning and distance attenuation in hardware.
// On PC, this maps to OpenAL's 3D listener/source model.
//
// Key functions reconstructed:
//   0x80576000: Sound3D::Sound3D()              — Constructor
//   0x80576200: Sound3D::setListener()          — Set listener transform
//   0x80576600: Sound3D::calculateAttenuation() — Distance attenuation
//   0x80576800: Sound3D::calculateDoppler()     — Doppler pitch shift
//   0x80576A00: Sound3D::calculatePan()         — 3D to stereo pan
//   0x80576C00: Sound3D::updateSound3D()       — Update all 3D sounds
//   0x80577000: Sound3D::setDistanceModel()    — Set attenuation model
//   0x80577200: Sound3D::setDopplerFactor()    — Set Doppler strength
//   0x80577400: Sound3D::updateListener()      — Update from camera
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// Distance Model — How volume falls off with distance
// ============================================================================
enum DistanceModel {
    DISTANCE_MODEL_NONE            = 0,  // No attenuation
    DISTANCE_MODEL_LINEAR          = 1,  // Linear falloff
    DISTANCE_MODEL_INVERSE         = 2,  // Inverse distance (1/d)
    DISTANCE_MODEL_INVERSE_CLAMPED = 3   // Inverse distance, clamped (MKWii default)
};

// ============================================================================
// Listener Transform — The 3D audio listener (typically the camera)
// ============================================================================
struct ListenerTransform {
    // Position in world space
    f32 posX, posY, posZ;      // 0x00-0x08: Listener position

    // Forward direction (unit vector, where the listener is facing)
    f32 forwardX, forwardY, forwardZ;  // 0x0C-0x14: Forward vector

    // Up direction (unit vector)
    f32 upX, upY, upZ;          // 0x18-0x20: Up vector

    // Velocity (for Doppler calculations)
    f32 velX, velY, velZ;       // 0x24-0x2C: Listener velocity
};

// ============================================================================
// 3D Sound Source — Per-sound 3D positioning state
// ============================================================================
struct Sound3DSource {
    // World-space position
    f32 posX, posY, posZ;      // 0x00-0x08: Source position

    // Velocity (for Doppler)
    f32 velX, velY, velZ;       // 0x0C-0x14: Source velocity

    // Calculated parameters (updated each frame)
    f32 distance;               // 0x18: Distance to listener
    f32 effectiveVolume;        // 0x1C: Volume after attenuation
    f32 effectivePitch;         // 0x20: Pitch after Doppler
    f32 effectivePan;           // 0x24: Pan after 3D projection

    // 3D parameters from the archive
    f32 innerRadius;            // 0x28: Full volume radius
    f32 outerRadius;            // 0x2C: Silent radius
    f32 outerVolume;            // 0x30: Volume at outer radius

    // State
    u8  active;                 // 0x34: Active flag
    u8  dopplerEnabled;         // 0x35: Doppler enabled
    u8  attenuationEnabled;     // 0x36: Attenuation enabled
    u8  _pad;
};

// ============================================================================
// Sound3D — 3D Positional Audio Calculator
//
// This class calculates the effective volume, pitch, and pan for
// 3D-positioned sounds based on the listener's position/orientation
// and each sound's world-space position/velocity.
//
// On Wii, the results are applied via AXSetVoiceVe().
// On PC, the results are applied via alSource3f(AL_POSITION/VELOCITY).
// ============================================================================
class Sound3D {
public:
    Sound3D();
    ~Sound3D();

    // --- Listener ---
    // @addr 0x80576200 (360 bytes, 56 code lines)
    // Sets the listener's world-space transform.
    // The listener is typically the camera following the player kart.
    // /* AX_SDK: AXSetListenerPos() → alListener3f(AL_POSITION, ...) */
    // /* AX_SDK: AXSetListenerOrientation() → alListenerfv(AL_ORIENTATION, ...) */
    void setListener(const ListenerTransform& transform);

    // @addr 0x80577400 (480 bytes, 76 code lines)
    // Updates the listener from the game camera object.
    // Extracts position, forward, and up vectors from the camera.
    void updateListener(void* cameraObject);

    // Gets the current listener transform.
    const ListenerTransform& getListener() const;

    // --- 3D Calculations ---
    // @addr 0x80576600 (520 bytes, 80 code lines)
    // Calculates the distance attenuation for a sound source.
    // Returns the effective volume (0.0 - 1.0) based on distance.
    f32 calculateAttenuation(const Sound3DSource& source) const;

    // @addr 0x80576800 (640 bytes, 100 code lines)
    // Calculates the Doppler pitch shift for a sound source.
    // Returns the effective pitch multiplier.
    // Formula: f' = f × (c + v_listener) / (c + v_source)
    // where c = speed of sound (scaled for gameplay)
    f32 calculateDoppler(const Sound3DSource& source) const;

    // @addr 0x80576A00 (560 bytes, 88 code lines)
    // Projects a 3D position to stereo pan (-1.0 to 1.0).
    // Uses the listener's forward and right vectors to calculate
    // the angle to the sound source, then maps to pan.
    f32 calculatePan(const Sound3DSource& source) const;

    // --- Sound Source Management ---
    // @addr 0x80576C00 (840 bytes, 132 code lines, has_assert)
    // Updates all active 3D sound sources.
    // Recalculates distance, attenuation, Doppler, and pan for each source.
    // Applies the results to the corresponding AX voices.
    void updateSound3D();

    // Registers a 3D sound source for per-frame updates.
    u32 registerSource(Sound3DSource* source);

    // Unregisters a 3D sound source.
    void unregisterSource(u32 sourceId);

    // Updates a source's world-space position.
    void setSourcePosition(u32 sourceId, f32 x, f32 y, f32 z);

    // Updates a source's velocity.
    void setSourceVelocity(u32 sourceId, f32 x, f32 y, f32 z);

    // --- Configuration ---
    // @addr 0x80577000 (280 bytes)
    // Sets the distance attenuation model.
    // MKWii uses INVERSE_CLAMPED by default.
    void setDistanceModel(DistanceModel model);

    // @addr 0x80577100 (200 bytes)
    // Sets the reference distance (where attenuation begins).
    void setReferenceDistance(f32 distance);

    // @addr 0x80577200 (200 bytes)
    // Sets the maximum distance (beyond which sound is silent).
    void setMaxDistance(f32 distance);

    // @addr 0x80577300 (200 bytes)
    // Sets the Doppler effect factor (0.0 = disabled, 1.0 = realistic).
    void setDopplerFactor(f32 factor);

    // @addr 0x80577380 (200 bytes)
    // Sets the rolloff factor for distance attenuation.
    void setRolloffFactor(f32 factor);

    // Queries
    DistanceModel getDistanceModel() const;
    f32 getReferenceDistance() const;
    f32 getMaxDistance() const;
    f32 getDopplerFactor() const;
    f32 getRolloffFactor() const;

private:
    // Calculates the squared distance between two 3D points.
    static f32 distanceSquared(f32 x1, f32 y1, f32 z1,
                               f32 x2, f32 y2, f32 z2);

    // Calculates the listener's right vector (forward × up).
    void calculateRightVector();

    // Listener transform
    ListenerTransform m_listener;   // 0x00: Current listener
    f32 m_rightX, m_rightY, m_rightZ; // 0x30: Right vector (forward × up)

    // 3D source pool
    static const u32 MAX_3D_SOURCES = 64;
    Sound3DSource* m_sources[MAX_3D_SOURCES]; // 0x3C: Registered sources
    u32 m_sourceCount;             // 0x13C: Active source count

    // Configuration
    DistanceModel m_distanceModel;  // 0x140: Distance attenuation model
    f32 m_referenceDistance;        // 0x144: Reference distance (1.0)
    f32 m_maxDistance;              // 0x148: Maximum distance (1000.0)
    f32 m_dopplerFactor;            // 0x14C: Doppler strength (1.0)
    f32 m_rolloffFactor;            // 0x150: Rolloff factor (1.0)
};

} // namespace snd
} // namespace nw4r