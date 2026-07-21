// SceneCamera.cpp - Camera system implementation
// Reconstructed from Camera_* and scene_Camera_* functions

#include "SceneCamera.hpp"
#include <math.h>
#include <string.h>

namespace Scene {

// --- Constants for auto-camera spline points (simplified) ---
static const u32 MAX_AUTO_CAM_POINTS = 64;
static const f32 PI = 3.14159265358979f;
static const f32 DEG2RAD = PI / 180.0f;
static const f32 RAD2DEG = 180.0f / PI;

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
    , m_cinematicTime(0.0f)
    , m_cinematicKeyframe(0)
    , m_replayLerp(0.0f)
    , m_replayPos(0.0f, 0.0f, 0.0f)
    , m_replayTarget(0.0f, 0.0f, 0.0f)
    , m_baseFov(60.0f)
    , m_currentSpeed(0.0f)
    , m_frameCount(0)
    , m_initialized(false) {
    m_shake.intensity = 0.0f;
    m_shake.duration = 0.0f;
    m_shake.timer = 0.0f;
    m_shake.offset = Vec3(0.0f, 0.0f, 0.0f);
    memset(&m_viewport, 0, sizeof(CameraViewport));
    m_projection.makeIdentity();
    m_view.makeIdentity();
}

SceneCamera::~SceneCamera() {
    shutdown();
}

void SceneCamera::init(u8 playerCount) {
    m_mode = CAMERA_MODE_FOLLOW;
    // MKWii default FOV: 60 degrees (0x8074e89c Camera_validate)
    m_fov = 60.0f;
    // MKWii near/far: near=10, far=50000 (standard for GX)
    m_near = 10.0f;
    m_far = 50000.0f;
    // MKWii follow camera smoothing: position=0.08, target=0.06
    // These control the chase cam lag — lower = more lag (more faithful)
    m_positionSmoothing = 0.08f;
    m_targetSmoothing = 0.06f;
    m_autoCamera = false;
    m_cinematic = false;
    m_frameCount = 0;
    m_cinematicTime = 0.0f;
    m_cinematicKeyframe = 0;
    m_replayLerp = 0.0f;
    // MKWii base FOV: 60 degrees
    m_baseFov = 60.0f;
    m_currentSpeed = 0.0f;
    m_shake.timer = 0.0f;
    m_up = Vec3(0.0f, 1.0f, 0.0f);

    setupViewport(0, playerCount);
    m_initialized = true;
}

void SceneCamera::shutdown() {
    m_initialized = false;
}

void SceneCamera::calc(f32 dt) {
    if (!m_initialized) return;

    m_frameCount++;

    // Dispatch to mode-specific update
    switch (m_mode) {
    case CAMERA_MODE_AUTO:
        updateAutoCamera(dt);
        break;
    case CAMERA_MODE_REPLAY:
        updateReplay(dt);
        break;
    case CAMERA_MODE_CINEMATIC:
        updateCinematic(dt);
        break;
    default:
        break;
    }

    applySmoothing(dt);
    updateShake(dt);

    // Apply shake offset to position
    if (m_shake.timer > 0.0f) {
        m_position.x += m_shake.offset.x;
        m_position.y += m_shake.offset.y;
        m_position.z += m_shake.offset.z;
    }

    // Recompute matrices each frame
    calcView();
    calcProjection();
}

void SceneCamera::draw() const {
    // Camera draws nothing itself; it sets up the view/projection matrices
}

void SceneCamera::updateFollow(const Vec3& kartPos, const Vec3& kartForward,
                                  f32 speed, f32 dt) {
    // Store speed for FOV calculation
    m_currentSpeed = speed;

    if (m_mode == CAMERA_MODE_AUTO && m_autoCamera) {
        updateAutoCamera(dt);
        return;
    }

    if (m_mode == CAMERA_MODE_CINEMATIC) {
        updateCinematic(dt);
        return;
    }

    if (m_mode == CAMERA_MODE_REPLAY) {
        updateReplay(dt);
        return;
    }

    // =====================================================================
    // MKWii Follow Camera — faithful reconstruction
    // =====================================================================
    // In MKWii, the chase camera uses these key parameters:
    //   - Base distance behind kart: ~400 units (constant, no speed scaling)
    //   - Height above kart: ~100 units (constant, no speed scaling)
    //   - Look-ahead distance: 200 units forward (constant)
    //   - Position smoothing: exponential lerp at 0.08/frame-rate-independent
    //   - Target smoothing: exponential lerp at 0.06/frame-rate-independent
    //   - FOV: base 60°, widens by up to 5° at top speed (~120 km/h game scale)
    //   - Up vector: always (0, 1, 0) world-up (no roll in normal racing)
    //
    // The camera does NOT dynamically scale distance/height with speed.
    // Speed feel comes from FOV widening and faster target tracking.
    // =====================================================================

    // Desired camera position: behind and above the kart
    // MKWii constant offset (from KartCamera sub in 0x8074e268 area)
    const f32 CAM_BACK_DIST = 400.0f;   // Distance behind kart
    const f32 CAM_HEIGHT    = 100.0f;   // Height above kart
    const f32 CAM_LOOK_AHEAD = 200.0f;  // Look-ahead in forward direction

    Vec3 desiredPos;
    desiredPos.x = kartPos.x - kartForward.x * CAM_BACK_DIST;
    desiredPos.y = kartPos.y + CAM_HEIGHT;
    desiredPos.z = kartPos.z - kartForward.z * CAM_BACK_DIST;

    // Frame-rate-independent exponential smoothing (MKWii runs at 60fps)
    // Formula: lerp(alpha, dt) = 1 - (1 - alpha)^(dt * 60)
    // This ensures consistent behavior regardless of frame rate.
    f32 posT = 1.0f - powf(1.0f - m_positionSmoothing, dt * 60.0f);
    m_position.x += (desiredPos.x - m_position.x) * posT;
    m_position.y += (desiredPos.y - m_position.y) * posT;
    m_position.z += (desiredPos.z - m_position.z) * posT;

    // Look target: kart position + look-ahead distance in forward direction
    // MKWii uses a fixed look-ahead, not speed-scaled
    Vec3 lookTarget;
    lookTarget.x = kartPos.x + kartForward.x * CAM_LOOK_AHEAD;
    lookTarget.y = kartPos.y;
    lookTarget.z = kartPos.z + kartForward.z * CAM_LOOK_AHEAD;

    f32 targetT = 1.0f - powf(1.0f - m_targetSmoothing, dt * 60.0f);
    m_target.x += (lookTarget.x - m_target.x) * targetT;
    m_target.y += (lookTarget.y - m_target.y) * targetT;
    m_target.z += (lookTarget.z - m_target.z) * targetT;

    // Speed-dependent FOV — MKWii FOV animation (Camera_validate_8074e89c)
    // Base FOV: 60°, max additional width: 5° at top speed
    // Top speed in MKWii is approximately 120 km/h internal units
    // FOV change is subtle — just enough to convey speed sensation
    f32 speedNorm = speed / 3000.0f; // Normalize to max game speed
    if (speedNorm > 1.0f) speedNorm = 1.0f;
    f32 targetFov = m_baseFov + speedNorm * 5.0f;
    m_fov += (targetFov - m_fov) * targetT;
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

// --- Projection and View matrix computation ---

void SceneCamera::calcProjection() {
    // Build perspective projection matrix from fov/near/far/aspectRatio
    f32 fovRad = m_fov * DEG2RAD;
    f32 halfFov = fovRad * 0.5f;
    f32 cotHalf = 1.0f / tanf(halfFov);
    f32 aspect = m_viewport.aspectRatio > 0.001f ? m_viewport.aspectRatio : (4.0f / 3.0f);

    // Zero out the projection matrix
    for (s32 i = 0; i < 4; i++)
        for (s32 j = 0; j < 4; j++)
            m_projection.m[i][j] = 0.0f;

    // Standard perspective projection (right-handed, depth -1 to 1 range)
    m_projection.m[0][0] = cotHalf / aspect;
    m_projection.m[1][1] = cotHalf;
    m_projection.m[2][2] = (m_far + m_near) / (m_near - m_far);
    m_projection.m[2][3] = (2.0f * m_far * m_near) / (m_near - m_far);
    m_projection.m[3][2] = -1.0f;
}

void SceneCamera::calcView() {
    // Build view matrix from position/target/up vectors (look-at)
    Vec3 forward = m_target - m_position;
    f32 lenSq = forward.squaredLength();
    if (lenSq < 0.0001f) {
        m_view.makeIdentity();
        return;
    }
    f32 invLen = 1.0f / sqrtf(lenSq);
    forward.x *= invLen;
    forward.y *= invLen;
    forward.z *= invLen;

    // Right = forward x up
    Vec3 right = Vec3::cross(forward, m_up);
    f32 rLenSq = right.squaredLength();
    if (rLenSq < 0.0001f) {
        // Degenerate up vector, use fallback
        right = Vec3::cross(forward, Vec3(0.0f, 0.0f, 1.0f));
        rLenSq = right.squaredLength();
        if (rLenSq < 0.0001f) {
            m_view.makeIdentity();
            return;
        }
    }
    invLen = 1.0f / sqrtf(rLenSq);
    right.x *= invLen;
    right.y *= invLen;
    right.z *= invLen;

    // Recalculate true up = right x forward
    Vec3 trueUp = Vec3::cross(right, forward);

    // Fill view matrix: rows are right, trueUp, -forward
    m_view.m[0][0] = right.x;
    m_view.m[0][1] = right.y;
    m_view.m[0][2] = right.z;
    m_view.m[0][3] = -(right.x * m_position.x + right.y * m_position.y + right.z * m_position.z);

    m_view.m[1][0] = trueUp.x;
    m_view.m[1][1] = trueUp.y;
    m_view.m[1][2] = trueUp.z;
    m_view.m[1][3] = -(trueUp.x * m_position.x + trueUp.y * m_position.y + trueUp.z * m_position.z);

    m_view.m[2][0] = -forward.x;
    m_view.m[2][1] = -forward.y;
    m_view.m[2][2] = -forward.z;
    m_view.m[2][3] = (forward.x * m_position.x + forward.y * m_position.y + forward.z * m_position.z);
}

// --- Camera basis vectors ---

Vec3 SceneCamera::getForward() const {
    Vec3 fwd = m_target - m_position;
    f32 lenSq = fwd.squaredLength();
    if (lenSq < 0.0001f) return Vec3(0.0f, 0.0f, -1.0f);
    f32 invLen = 1.0f / sqrtf(lenSq);
    return Vec3(fwd.x * invLen, fwd.y * invLen, fwd.z * invLen);
}

Vec3 SceneCamera::getRight() const {
    Vec3 fwd = getForward();
    Vec3 right = Vec3::cross(fwd, m_up);
    f32 lenSq = right.squaredLength();
    if (lenSq < 0.0001f) return Vec3(1.0f, 0.0f, 0.0f);
    f32 invLen = 1.0f / sqrtf(lenSq);
    return Vec3(right.x * invLen, right.y * invLen, right.z * invLen);
}

Vec3 SceneCamera::getUp() const {
    Vec3 fwd = getForward();
    Vec3 right = getRight();
    return Vec3::cross(right, fwd);
}

// --- Auto-camera: follow predefined spline/waypoint path ---

void SceneCamera::updateAutoCamera(f32 dt) {
    if (!m_autoCamera) return;

    // Advance along the auto-camera point sequence
    m_autoCameraPoint++;
    if (m_autoCameraPoint >= MAX_AUTO_CAM_POINTS) {
        m_autoCameraPoint = 0;
    }

    // Simplified waypoint interpolation — real impl uses course JUGEM points
    // Camera moves in a smooth arc around current target
    f32 t = (f32)m_autoCameraPoint / (f32)MAX_AUTO_CAM_POINTS;
    f32 angle = t * 2.0f * PI;
    f32 radius = 300.0f;

    Vec3 desiredPos;
    desiredPos.x = m_target.x + sinf(angle) * radius;
    desiredPos.y = m_target.y + 80.0f + 40.0f * sinf(angle * 2.0f);
    desiredPos.z = m_target.z + cosf(angle) * radius;

    f32 smoothT = 1.0f - powf(1.0f - m_positionSmoothing, dt * 60.0f);
    m_position.x += (desiredPos.x - m_position.x) * smoothT;
    m_position.y += (desiredPos.y - m_position.y) * smoothT;
    m_position.z += (desiredPos.z - m_position.z) * smoothT;
}

// --- Replay camera: follows replay data positions ---

void SceneCamera::updateReplay(f32 dt) {
    if (m_mode != CAMERA_MODE_REPLAY) return;

    // Lerp between replay positions at a fixed rate
    // In the real game, positions are read from replay RKG data
    m_replayLerp += dt * 0.5f;
    if (m_replayLerp > 1.0f) m_replayLerp = 1.0f;

    f32 t = m_replayLerp;
    t = t * t * (3.0f - 2.0f * t); // Smoothstep

    m_position.x += (m_replayPos.x - m_position.x) * t * dt * 10.0f;
    m_position.y += (m_replayPos.y - m_position.y) * t * dt * 10.0f;
    m_position.z += (m_replayPos.z - m_position.z) * t * dt * 10.0f;

    m_target.x += (m_replayTarget.x - m_target.x) * t * dt * 10.0f;
    m_target.y += (m_replayTarget.y - m_target.y) * t * dt * 10.0f;
    m_target.z += (m_replayTarget.z - m_target.z) * t * dt * 10.0f;
}

// --- Cinematic camera with keyframe interpolation ---

void SceneCamera::updateCinematic(f32 dt) {
    if (!m_cinematic) return;

    m_cinematicTime += dt;
    m_cinematicKeyframe++;

    // Simplified cinematic: orbit around a target with smooth motion
    f32 t = m_cinematicTime * 0.1f;
    f32 radius = 400.0f;

    Vec3 desiredPos;
    desiredPos.x = m_target.x + sinf(t) * radius;
    desiredPos.y = m_target.y + 50.0f + 30.0f * sinf(t * 0.7f);
    desiredPos.z = m_target.z + cosf(t) * radius;

    // Smooth interpolation with slower easing for cinematic feel
    f32 smoothT = 1.0f - powf(1.0f - 0.03f, dt * 60.0f);
    m_position.x += (desiredPos.x - m_position.x) * smoothT;
    m_position.y += (desiredPos.y - m_position.y) * smoothT;
    m_position.z += (desiredPos.z - m_position.z) * smoothT;
}

// --- Screen-to-world and world-to-screen conversion ---

Vec3 SceneCamera::screenToWorld(const Vec3& screenPos) {
    // Unproject screen coords to world ray
    // screenPos: x,y in [0,1] normalized device coords, z = depth
    f32 fovRad = m_fov * DEG2RAD;
    f32 halfFov = fovRad * 0.5f;
    f32 tanHalf = tanf(halfFov);
    f32 aspect = m_viewport.aspectRatio > 0.001f ? m_viewport.aspectRatio : (4.0f / 3.0f);

    // Compute ray direction in camera space
    Vec3 rayCam;
    rayCam.x = (screenPos.x * 2.0f - 1.0f) * tanHalf * aspect;
    rayCam.y = (1.0f - screenPos.y * 2.0f) * tanHalf;
    rayCam.z = -1.0f;

    // Normalize
    f32 lenSq = rayCam.squaredLength();
    if (lenSq < 0.0001f) return m_position;
    f32 invLen = 1.0f / sqrtf(lenSq);
    rayCam.x *= invLen;
    rayCam.y *= invLen;
    rayCam.z *= invLen;

    // Transform to world space using camera basis vectors
    Vec3 fwd = getForward();
    Vec3 right = getRight();
    Vec3 up = getUp();

    Vec3 rayWorld;
    rayWorld.x = right.x * rayCam.x + up.x * rayCam.y + fwd.x * rayCam.z;
    rayWorld.y = right.y * rayCam.x + up.y * rayCam.y + fwd.y * rayCam.z;
    rayWorld.z = right.z * rayCam.x + up.z * rayCam.y + fwd.z * rayCam.z;

    // Scale by depth and offset by camera position
    return Vec3(
        m_position.x + rayWorld.x * screenPos.z,
        m_position.y + rayWorld.y * screenPos.z,
        m_position.z + rayWorld.z * screenPos.z
    );
}

Vec3 SceneCamera::worldToScreen(const Vec3& worldPos) {
    // Project world pos to normalized screen coords [0,1]
    Vec3 toPoint;
    toPoint.x = worldPos.x - m_position.x;
    toPoint.y = worldPos.y - m_position.y;
    toPoint.z = worldPos.z - m_position.z;

    Vec3 fwd = getForward();
    Vec3 right = getRight();
    Vec3 up = getUp();

    // Project onto camera axes
    f32 z = toPoint.x * fwd.x + toPoint.y * fwd.y + toPoint.z * fwd.z;
    if (z >= -0.1f) {
        // Behind camera — return off-screen
        return Vec3(-1.0f, -1.0f, z);
    }

    f32 x = toPoint.x * right.x + toPoint.y * right.y + toPoint.z * right.z;
    f32 y = toPoint.x * up.x + toPoint.y * up.y + toPoint.z * up.z;

    f32 fovRad = m_fov * DEG2RAD;
    f32 halfFov = fovRad * 0.5f;
    f32 tanHalf = tanf(halfFov);
    f32 aspect = m_viewport.aspectRatio > 0.001f ? m_viewport.aspectRatio : (4.0f / 3.0f);

    f32 screenX = (x / (-z * tanHalf * aspect) * 0.5f) + 0.5f;
    f32 screenY = (-y / (-z * tanHalf) * 0.5f) + 0.5f;

    return Vec3(screenX, screenY, -z);
}

} // namespace Scene