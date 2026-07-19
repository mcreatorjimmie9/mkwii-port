// SceneCamera.cpp - Camera system implementation
// Reconstructed from Camera_* and scene_Camera_* functions

#include "SceneCamera.hpp"
#include <math.h>

namespace Scene {

SceneCamera::SceneCamera()
    : m_position(0.0f, 50.0f, -200.0f)
    , m_target(0.0f, 0.0f, 0.0f)
    , m_up(0.0f, 1.0f, 0.0f)
    , m_velocity(0.0f, 0.0f, 0.0f)
    , m_mode(CAMERA_MODE_FOLLOW)
    , m_fov(60.0f)
    , m_near(10.0f)
    , m_far(50000.0f)
    , m_autoCamera(false)
    , m_autoCameraPoint(0)
    , m_cinematic(false)
    , m_positionSmoothing(0.1f)
    , m_targetSmoothing(0.05f)
    , m_frameCount(0)
    , m_initialized(false) {
    m_shake.intensity = 0.0f;
    m_shake.duration = 0.0f;
    m_shake.timer = 0.0f;
    m_shake.offset = Vec3(0.0f, 0.0f, 0.0f);
    memset(&m_viewport, 0, sizeof(CameraViewport));
}

SceneCamera::~SceneCamera() {
    shutdown();
}

void SceneCamera::init(u8 playerCount) {
    m_mode = CAMERA_MODE_FOLLOW;
    m_fov = 60.0f;
    m_near = 10.0f;
    m_far = 50000.0f;
    m_positionSmoothing = 0.1f;
    m_targetSmoothing = 0.05f;
    m_autoCamera = false;
    m_cinematic = false;
    m_frameCount = 0;
    m_shake.timer = 0.0f;

    setupViewport(0, playerCount);
    m_initialized = true;
}

void SceneCamera::shutdown() {
    m_initialized = false;
}

void SceneCamera::calc(f32 dt) {
    if (!m_initialized) return;

    m_frameCount++;
    applySmoothing(dt);
    updateShake(dt);

    // Apply shake offset to position
    if (m_shake.timer > 0.0f) {
        m_position.x += m_shake.offset.x;
        m_position.y += m_shake.offset.y;
        m_position.z += m_shake.offset.z;
    }
}

void SceneCamera::draw() const {
    // Camera draws nothing itself; it sets up the view/projection matrices
}

void SceneCamera::updateFollow(const Vec3& kartPos, const Vec3& kartForward,
                                  f32 speed, f32 dt) {
    if (m_mode == CAMERA_MODE_AUTO && m_autoCamera) {
        // Auto-camera follows a predefined route
        (void)kartPos;
        (void)kartForward;
        (void)speed;
        (void)dt;
        return;
    }

    if (m_mode == CAMERA_MODE_CINEMATIC) {
        return;
    }

    // Follow camera: position behind and above the kart
    f32 dist = 350.0f + speed * 0.5f;
    f32 height = 100.0f + speed * 0.15f;

    Vec3 desiredPos;
    desiredPos.x = kartPos.x - kartForward.x * dist;
    desiredPos.y = kartPos.y + height;
    desiredPos.z = kartPos.z - kartForward.z * dist;

    // Smooth position interpolation
    f32 t = 1.0f - powf(1.0f - m_positionSmoothing, dt * 60.0f);
    m_position.x += (desiredPos.x - m_position.x) * t;
    m_position.y += (desiredPos.y - m_position.y) * t;
    m_position.z += (desiredPos.z - m_position.z) * t;

    // Target is the kart position
    m_target = kartPos;
}

void SceneCamera::setMode(CameraMode mode) {
    if (mode >= CAMERA_MODE_COUNT) return;
    m_mode = mode;
}

void SceneCamera::startShake(f32 intensity, f32 duration) {
    m_shake.intensity = intensity;
    m_shake.duration = duration;
    m_shake.timer = duration;
}

void SceneCamera::stopShake() {
    m_shake.timer = 0.0f;
    m_shake.offset = Vec3(0.0f, 0.0f, 0.0f);
}

void SceneCamera::setupViewport(u8 screenIndex, u8 playerCount) {
    m_viewport.playerIndex = screenIndex;
    m_viewport.screenIndex = screenIndex;

    if (playerCount <= 1) {
        // Full screen
        m_viewport.x = 0;
        m_viewport.y = 0;
        m_viewport.width = 640;
        m_viewport.height = 480;
    } else if (playerCount == 2) {
        // Horizontal split
        m_viewport.width = 320;
        m_viewport.height = 480;
        m_viewport.x = screenIndex * 320;
        m_viewport.y = 0;
    } else {
        // 3-4 player: 2x2 grid
        u32 col = screenIndex % 2;
        u32 row = screenIndex / 2;
        m_viewport.width = 320;
        m_viewport.height = 240;
        m_viewport.x = col * 320;
        m_viewport.y = row * 240;
    }

    m_viewport.aspectRatio = (f32)m_viewport.width / (f32)m_viewport.height;
    m_viewport.nearPlane = m_near;
    m_viewport.farPlane = m_far;
    m_viewport.fov = m_fov;
}

void SceneCamera::setAutoCameraPoint(u32 pointIndex) {
    m_autoCameraPoint = pointIndex;
}

void SceneCamera::setReplayTarget(u32 replayFrame) {
    m_mode = CAMERA_MODE_REPLAY;
    (void)replayFrame;
}

void SceneCamera::startCinematic() {
    m_cinematic = true;
    m_mode = CAMERA_MODE_CINEMATIC;
}

void SceneCamera::endCinematic() {
    m_cinematic = false;
    m_mode = CAMERA_MODE_FOLLOW;
}

void SceneCamera::setSmoothing(f32 positionSmooth, f32 targetSmooth) {
    m_positionSmoothing = positionSmooth;
    m_targetSmoothing = targetSmooth;
}

void SceneCamera::updateShake(f32 dt) {
    if (m_shake.timer <= 0.0f) return;

    m_shake.timer -= dt;
    if (m_shake.timer < 0.0f) {
        m_shake.timer = 0.0f;
        m_shake.offset = Vec3(0.0f, 0.0f, 0.0f);
        return;
    }

    f32 progress = 1.0f - (m_shake.timer / m_shake.duration);
    f32 currentIntensity = m_shake.intensity * (1.0f - progress);

    // Random shake direction (simplified)
    m_shake.offset.x = sinf(m_frameCount * 0.7f) * currentIntensity;
    m_shake.offset.y = cosf(m_frameCount * 1.1f) * currentIntensity * 0.5f;
    m_shake.offset.z = sinf(m_frameCount * 0.3f + 1.0f) * currentIntensity * 0.3f;
}

void SceneCamera::applySmoothing(f32 dt) {
    // Position smoothing applied in updateFollow
    (void)dt;
}

} // namespace Scene