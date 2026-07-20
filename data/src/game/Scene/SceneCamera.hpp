#pragma once
// SceneCamera.hpp - Camera system for the race view
// Reconstructed from Camera_* and scene_Camera_* functions (0x80740180+)
//
// SceneCamera manages the 3D view camera during races. It supports
// multiple modes (follow, auto, replay) and handles smooth interpolation
// between camera states. The camera also manages split-screen layouts.

#include "rk_common.h"
#include <EGG/math.h>

using EGG::Matrix44f;
using EGG::Matrix34f;

namespace Scene {

// Forward declarations
class Course;

// =============================================================================
// CameraMode — How the camera behaves
// =============================================================================
enum CameraMode {
    CAMERA_MODE_FOLLOW = 0,
    CAMERA_MODE_AUTO = 1,
    CAMERA_MODE_FIXED = 2,
    CAMERA_MODE_REPLAY = 3,
    CAMERA_MODE_CINEMATIC = 4,
    CAMERA_MODE_COUNT = 5,
};

// =============================================================================
// CameraShake — Screen shake parameters
// =============================================================================
struct CameraShake {
    f32 intensity;
    f32 duration;
    f32 timer;
    Vec3 offset;
};

// =============================================================================
// CameraViewport — Split-screen viewport data
// =============================================================================
struct CameraViewport {
    u8 playerIndex;
    u8 screenIndex;
    u16 x, y;
    u16 width, height;
    f32 aspectRatio;
    f32 nearPlane;
    f32 farPlane;
    f32 fov;
};

// =============================================================================
// SceneCamera — Race camera controller
//
// Per-player camera that follows a kart, handles split-screen,
// auto-camera path following, shake effects, and FOV management.
// =============================================================================
class SceneCamera {
public:
    SceneCamera();
    ~SceneCamera();

    // Lifecycle
    void init(u8 playerCount);
    void shutdown();
    void calc(f32 dt);
    void draw() const;

    // Per-frame update (from scene_Camera_8074e268)
    void updateFollow(const Vec3& kartPos, const Vec3& kartForward,
                      f32 speed, f32 dt);

    // Camera mode
    void setMode(CameraMode mode);
    CameraMode getMode() const { return m_mode; }

    // Positioning
    void setPosition(const Vec3& pos) { m_position = pos; }
    const Vec3& getPosition() const { return m_position; }
    void setTarget(const Vec3& target) { m_target = target; }
    const Vec3& getTarget() const { return m_target; }

    // FOV control (from Camera_validate_8074e89c area)
    void setFOV(f32 fov) { m_fov = fov; }
    f32 getFOV() const { return m_fov; }
    void setNearFar(f32 nearP, f32 farP) { m_near = nearP; m_far = farP; }

    // Shake effects
    void startShake(f32 intensity, f32 duration);
    void stopShake();
    bool isShaking() const { return m_shake.timer > 0.0f; }

    // Viewport / split-screen
    void setupViewport(u8 screenIndex, u8 playerCount);
    const CameraViewport& getViewport() const { return m_viewport; }

    // Auto-camera
    void setAutoCameraPoint(u32 pointIndex);
    void enableAutoCamera(bool enable) { m_autoCamera = enable; }

    // Replay camera
    void setReplayTarget(u32 replayFrame);

    // Cinematic
    void startCinematic();
    void endCinematic();
    bool isCinematic() const { return m_cinematic; }

    // Interpolation smoothing
    void setSmoothing(f32 positionSmooth, f32 targetSmooth);
    f32 getPositionSmoothing() const { return m_positionSmoothing; }
    f32 getTargetSmoothing() const { return m_targetSmoothing; }

    // Frame counter (from 0x8075ef28 pattern)
    u32 getFrameCount() const { return m_frameCount; }

    // Matrix computation
    void calcProjection();
    void calcView();
    const EGG::Matrix44f& getProjection() const { return m_projection; }
    const EGG::Matrix34f& getView() const { return m_view; }

    // Camera mode updates
    void updateAutoCamera(f32 dt);
    void updateReplay(f32 dt);
    void updateCinematic(f32 dt);

    // Coordinate conversion
    Vec3 screenToWorld(const Vec3& screenPos);
    Vec3 worldToScreen(const Vec3& worldPos);

    // Camera basis vectors
    Vec3 getForward() const;
    Vec3 getRight() const;
    Vec3 getUp() const;

private:
    void updateShake(f32 dt);
    void applySmoothing(f32 dt);

    Vec3 m_position;
    Vec3 m_target;
    Vec3 m_up;
    Vec3 m_velocity;          // For position smoothing

    CameraMode m_mode;
    f32 m_fov;
    f32 m_near;
    f32 m_far;

    CameraShake m_shake;
    CameraViewport m_viewport;

    EGG::Matrix34f m_view;
    EGG::Matrix44f m_projection;

    bool m_autoCamera;
    u32 m_autoCameraPoint;
    bool m_cinematic;

    f32 m_positionSmoothing;
    f32 m_targetSmoothing;

    // Cinematic keyframe state
    f32 m_cinematicTime;
    u32 m_cinematicKeyframe;

    // Replay camera state
    f32 m_replayLerp;
    Vec3 m_replayPos;
    Vec3 m_replayTarget;

    // Speed-dependent FOV state
    f32 m_baseFov;
    f32 m_currentSpeed;

    u32 m_frameCount;
    bool m_initialized;
};

} // namespace Scene