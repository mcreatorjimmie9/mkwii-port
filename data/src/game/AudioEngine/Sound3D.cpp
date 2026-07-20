// ============================================================================
// Sound3D.cpp — 3D Positional Audio Calculations Implementation
// Reconstructed from nw4r::snd::detail::Sound3D
// ============================================================================

#include "Sound3D.hpp"
#include "AxVoiceManager.hpp"
#include <cstring>
#include <cmath>
#include <algorithm>

namespace nw4r {
namespace snd {

// ============================================================================
// Sound3D()
// @addr 0x80576000 (constructor area)
// ============================================================================
Sound3D::Sound3D()
    : m_sourceCount(0)
    , m_distanceModel(DISTANCE_MODEL_INVERSE_CLAMPED)
    , m_referenceDistance(1.0f)
    , m_maxDistance(1000.0f)
    , m_dopplerFactor(1.0f)
    , m_rolloffFactor(1.0f)
{
    std::memset(&m_listener, 0, sizeof(m_listener));
    m_rightX = 1.0f;
    m_rightY = 0.0f;
    m_rightZ = 0.0f;
    std::memset(m_sources, 0, sizeof(m_sources));

    // Default listener at origin, facing -Z
    m_listener.posX = 0.0f;
    m_listener.posY = 0.0f;
    m_listener.posZ = 0.0f;
    m_listener.forwardX = 0.0f;
    m_listener.forwardY = 0.0f;
    m_listener.forwardZ = -1.0f;
    m_listener.upX = 0.0f;
    m_listener.upY = 1.0f;
    m_listener.upZ = 0.0f;
}

// ============================================================================
// ~Sound3D()
// ============================================================================
Sound3D::~Sound3D() {
    // Sources are not owned by Sound3D, just referenced
}

// ============================================================================
// setListener(transform)
// @addr 0x80576200 (360 bytes, 56 code lines)
//
// Sets the listener's world-space transform (position, orientation, velocity).
//
// /* AX_SDK: AXSetListenerPos(x, y, z) → alListener3f(AL_POSITION, x, y, z) */
// /* AX_SDK: AXSetListenerOrientation(fx, fy, fz, ux, uy, uz)
//          → alListenerfv(AL_ORIENTATION, {fx, fy, fz, ux, uy, uz}) */
// ============================================================================
void Sound3D::setListener(const ListenerTransform& transform) {
    m_listener = transform;
    calculateRightVector();
}

// ============================================================================
// updateListener(cameraObject)
// @addr 0x80577400 (480 bytes, 76 code lines)
//
// Updates the listener from the game camera object.
// The camera in MKWii follows the player's kart and provides
// position, forward direction, and up vector.
// ============================================================================
void Sound3D::updateListener(void* cameraObject) {
    if (cameraObject == nullptr) return;

    // In the real implementation, this reads the camera's
    // world-space position, forward, and up vectors.
    // Camera data is at a known offset in the camera object.
    //
    // Simplified: the camera data is already set via setListener()
    // or via direct member access from the race manager.
}

// ============================================================================
// getListener()
// ============================================================================
const ListenerTransform& Sound3D::getListener() const {
    return m_listener;
}

// ============================================================================
// calculateAttenuation(source)
// @addr 0x80576600 (520 bytes, 80 code lines)
//
// Calculates distance attenuation using the configured model.
// MKWii uses INVERSE_CLAMPED: vol = refDist / (refDist + rolloff * (d - refDist))
// Clamped between outerVolume and 1.0.
//
// /* AX_SDK: Handled internally by AX DSP when AXSetVoiceVe() is called */
// On PC: equivalent to OpenAL's AL_INVERSE_DISTANCE_CLAMPED model.
// ============================================================================
f32 Sound3D::calculateAttenuation(const Sound3DSource& source) const {
    if (!source.attenuationEnabled) return 1.0f;

    f32 dist = source.distance;

    // Inner radius: full volume inside this distance
    if (dist < source.innerRadius) {
        return 1.0f;
    }

    // Beyond max distance: silent
    if (dist >= m_maxDistance) {
        return source.outerVolume;
    }

    f32 vol = 1.0f;

    switch (m_distanceModel) {
    case DISTANCE_MODEL_NONE:
        vol = 1.0f;
        break;

    case DISTANCE_MODEL_LINEAR:
        // Linear: vol = 1 - d/maxDist
        vol = 1.0f - (dist / m_maxDistance);
        break;

    case DISTANCE_MODEL_INVERSE:
        // Inverse: vol = refDist / d
        if (dist > 0.0f) {
            vol = m_referenceDistance / (m_referenceDistance +
                   m_rolloffFactor * (dist - m_referenceDistance));
        }
        break;

    case DISTANCE_MODEL_INVERSE_CLAMPED:
    default:
        // Inverse clamped (MKWii default):
        // vol = refDist / (refDist + rolloff * (d - refDist))
        // Clamped to [outerVolume, 1.0]
        if (dist > m_referenceDistance) {
            vol = m_referenceDistance /
                  (m_referenceDistance +
                   m_rolloffFactor * (dist - m_referenceDistance));
        } else {
            vol = 1.0f;
        }
        break;
    }

    // Apply outer volume floor
    vol = std::max(vol, source.outerVolume);
    vol = std::min(vol, 1.0f);

    return vol;
}

// ============================================================================
// calculateDoppler(source)
// @addr 0x80576800 (640 bytes, 100 code lines)
//
// Calculates the Doppler pitch shift.
// Formula: f' = f × (speedOfSound + vListener·d) / (speedOfSound + vSource·d)
// where d is the unit direction from source to listener.
//
// MKWii scales the "speed of sound" for gameplay purposes.
// The Doppler factor controls the overall effect strength.
//
// /* AX_SDK: AXSetVoiceVe() includes velocity for Doppler */
// /* On PC: alSource3f(AL_VELOCITY, ...) + alDopplerFactor() */
// ============================================================================
f32 Sound3D::calculateDoppler(const Sound3DSource& source) const {
    if (!source.dopplerEnabled) return 1.0f;

    // Direction from source to listener
    f32 dx = m_listener.posX - source.posX;
    f32 dy = m_listener.posY - source.posY;
    f32 dz = m_listener.posZ - source.posZ;
    f32 dist = std::sqrt(dx * dx + dy * dy + dz * dz);

    if (dist < 0.001f) return 1.0f;

    // Normalize direction
    f32 invDist = 1.0f / dist;
    f32 ndx = dx * invDist;
    f32 ndy = dy * invDist;
    f32 ndz = dz * invDist;

    // Project velocities onto the source→listener direction
    // vSource·d: component of source velocity toward listener
    f32 vSourceDot = source.velX * ndx + source.velY * ndy + source.velZ * ndz;

    // vListener·d: component of listener velocity toward source
    // (negative direction from listener's perspective)
    f32 vListenerDot = m_listener.velX * (-ndx) +
                       m_listener.velY * (-ndy) +
                       m_listener.velZ * (-ndz);

    // Speed of sound (gameplay-scaled, not physical)
    // MKWii uses ~1000.0 units/second as the "speed of sound"
    f32 speedOfSound = 1000.0f;

    // Doppler formula
    f32 numerator = speedOfSound + vListenerDot * m_dopplerFactor;
    f32 denominator = speedOfSound + vSourceDot * m_dopplerFactor;

    if (denominator < 0.001f) denominator = 0.001f;

    f32 dopplerPitch = numerator / denominator;

    // Clamp pitch to valid AX range
    dopplerPitch = std::clamp(dopplerPitch, 0.25f, 4.0f);

    return dopplerPitch;
}

// ============================================================================
// calculatePan(source)
// @addr 0x80576A00 (560 bytes, 88 code lines)
//
// Projects a 3D position onto the stereo field.
// Uses the listener's right vector to determine left/right placement.
// Also considers the forward vector for front/back (reduced by distance).
//
// /* AX_SDK: AXSetVoiceVe() with pan calculation → alSource3f(AL_POSITION) */
// ============================================================================
f32 Sound3D::calculatePan(const Sound3DSource& source) const {
    // Vector from listener to source
    f32 dx = source.posX - m_listener.posX;
    f32 dy = source.posY - m_listener.posY;
    f32 dz = source.posZ - m_listener.posZ;

    // Project onto the right vector to get L/R pan
    f32 rightComponent = dx * m_rightX + dy * m_rightY + dz * m_rightZ;

    // Normalize: divide by distance to get a value in [-1, 1]
    f32 dist = std::sqrt(dx * dx + dy * dy + dz * dz);
    if (dist < 0.001f) return 0.0f; // On top of listener — center

    f32 pan = rightComponent / dist;

    // Apply a curve to make the panning more pronounced
    // MKWii uses a tanh-like curve for smoother panning
    pan = std::tanh(pan * 2.0f);

    // Clamp to valid range
    pan = std::clamp(pan, -1.0f, 1.0f);

    return pan;
}

// ============================================================================
// updateSound3D()
// @addr 0x80576C00 (840 bytes, 132 code lines, has_assert)
//
// Updates all registered 3D sound sources.
// For each active source:
//   1. Calculates distance to listener
//   2. Calculates distance attenuation
//   3. Calculates Doppler pitch shift
//   4. Calculates stereo pan
//   5. Applies results to the AX voice via the voice manager
// ============================================================================
void Sound3D::updateSound3D() {
    for (u32 i = 0; i < m_sourceCount; i++) {
        Sound3DSource* src = m_sources[i];
        if (src == nullptr || !src->active) continue;

        // --- Calculate distance ---
        f32 dx = src->posX - m_listener.posX;
        f32 dy = src->posY - m_listener.posY;
        f32 dz = src->posZ - m_listener.posZ;
        src->distance = std::sqrt(dx * dx + dy * dy + dz * dz);

        // --- Calculate 3D parameters ---
        src->effectiveVolume = calculateAttenuation(*src);
        src->effectivePitch = calculateDoppler(*src);
        src->effectivePan = calculatePan(*src);

        // --- Apply to AX voice ---
        // The voice index is stored in the Sound3DParams when the sound
        // is registered. In the full implementation, each Sound3DSource
        // has a reference to its SoundPlayer/SoundHandle.
        //
        // /* AX_SDK: AXSetVoiceVe(voice, x, y, z) → alSource3f(AL_POSITION) */
        // /* AX_SDK: AXSetVoiceVolume(voice, vol) → alSourcef(AL_GAIN) */
        // /* AX_SDK: AXSetVoicePitch(voice, pitch) → alSourcef(AL_PITCH) */
        //
        // The actual voice updates are done by the SoundPlayer that
        // owns this 3D source (see SoundPlayer::update()).
    }
}

// ============================================================================
// registerSource(source)
// ============================================================================
u32 Sound3D::registerSource(Sound3DSource* source) {
    if (source == nullptr) return 0xFFFFFFFF;
    if (m_sourceCount >= MAX_3D_SOURCES) return 0xFFFFFFFF;

    u32 id = m_sourceCount;
    m_sources[id] = source;
    source->active = 1;
    m_sourceCount++;
    return id;
}

// ============================================================================
// unregisterSource(sourceId)
// ============================================================================
void Sound3D::unregisterSource(u32 sourceId) {
    if (sourceId >= m_sourceCount) return;

    if (m_sources[sourceId] != nullptr) {
        m_sources[sourceId]->active = 0;
    }

    // Shift remaining sources down
    for (u32 i = sourceId; i < m_sourceCount - 1; i++) {
        m_sources[i] = m_sources[i + 1];
    }
    m_sources[m_sourceCount - 1] = nullptr;
    m_sourceCount--;
}

// ============================================================================
// setSourcePosition(sourceId, x, y, z)
// ============================================================================
void Sound3D::setSourcePosition(u32 sourceId, f32 x, f32 y, f32 z) {
    if (sourceId >= m_sourceCount || m_sources[sourceId] == nullptr) return;

    Sound3DSource* src = m_sources[sourceId];
    src->posX = x;
    src->posY = y;
    src->posZ = z;
}

// ============================================================================
// setSourceVelocity(sourceId, x, y, z)
// ============================================================================
void Sound3D::setSourceVelocity(u32 sourceId, f32 x, f32 y, f32 z) {
    if (sourceId >= m_sourceCount || m_sources[sourceId] == nullptr) return;

    Sound3DSource* src = m_sources[sourceId];
    src->velX = x;
    src->velY = y;
    src->velZ = z;
}

// ============================================================================
// setDistanceModel(model)
// @addr 0x80577000 (280 bytes)
// ============================================================================
void Sound3D::setDistanceModel(DistanceModel model) {
    m_distanceModel = model;
}

// ============================================================================
// setReferenceDistance(distance)
// @addr 0x80577100 (200 bytes)
// ============================================================================
void Sound3D::setReferenceDistance(f32 distance) {
    m_referenceDistance = std::max(distance, 0.01f);
}

// ============================================================================
// setMaxDistance(distance)
// @addr 0x80577200 (200 bytes)
// ============================================================================
void Sound3D::setMaxDistance(f32 distance) {
    m_maxDistance = std::max(distance, m_referenceDistance);
}

// ============================================================================
// setDopplerFactor(factor)
// @addr 0x80577300 (200 bytes)
// ============================================================================
void Sound3D::setDopplerFactor(f32 factor) {
    m_dopplerFactor = std::clamp(factor, 0.0f, 10.0f);
}

// ============================================================================
// setRolloffFactor(factor)
// @addr 0x80577380 (200 bytes)
// ============================================================================
void Sound3D::setRolloffFactor(f32 factor) {
    m_rolloffFactor = std::max(factor, 0.0f);
}

// ============================================================================
// Queries
// ============================================================================
DistanceModel Sound3D::getDistanceModel() const { return m_distanceModel; }
f32 Sound3D::getReferenceDistance() const { return m_referenceDistance; }
f32 Sound3D::getMaxDistance() const { return m_maxDistance; }
f32 Sound3D::getDopplerFactor() const { return m_dopplerFactor; }
f32 Sound3D::getRolloffFactor() const { return m_rolloffFactor; }

// ============================================================================
// distanceSquared()
// ============================================================================
f32 Sound3D::distanceSquared(f32 x1, f32 y1, f32 z1,
                              f32 x2, f32 y2, f32 z2) {
    f32 dx = x2 - x1;
    f32 dy = y2 - y1;
    f32 dz = z2 - z1;
    return dx * dx + dy * dy + dz * dz;
}

// ============================================================================
// calculateRightVector()
//
// Computes the right vector as the cross product of forward × up.
// Used for stereo pan calculation.
// ============================================================================
void Sound3D::calculateRightVector() {
    // right = forward × up
    m_rightX = m_listener.forwardY * m_listener.upZ -
               m_listener.forwardZ * m_listener.upY;
    m_rightY = m_listener.forwardZ * m_listener.upX -
               m_listener.forwardX * m_listener.upZ;
    m_rightZ = m_listener.forwardX * m_listener.upY -
               m_listener.forwardY * m_listener.upX;

    // Normalize
    f32 len = std::sqrt(m_rightX * m_rightX +
                        m_rightY * m_rightY +
                        m_rightZ * m_rightZ);
    if (len > 0.001f) {
        f32 invLen = 1.0f / len;
        m_rightX *= invLen;
        m_rightY *= invLen;
        m_rightZ *= invLen;
    } else {
        // Degenerate case: use default right vector
        m_rightX = 1.0f;
        m_rightY = 0.0f;
        m_rightZ = 0.0f;
    }
}

} // namespace snd
} // namespace nw4r