#pragma once
// ============================================================================
// Camera — Camera Projection, View Matrix Computation
// ============================================================================
// Handles the game's camera system including perspective projection,
// orthographic projection for UI, viewport management, and view matrix
// computation from camera position/rotation.
//
// Mario Kart Wii uses EGG's camera framework with multiple camera types:
//   - Follow camera: Behind the player kart, with smooth interpolation
//   - Replay camera: Fixed or scripted positions for race replays
//   - Cutscene camera: Pre-defined path cameras for intros/outros
//   - Debug camera: Free-fly camera for development
//
// The camera computes both a view matrix (3x4) and a projection matrix (4x4)
// each frame and uploads them to GX via GXLoadPosMtxImm and GXSetProjection.
//
// Address range: 0x80550000 - 0x8055FFFF
// ============================================================================

#include <types.h>
#include <EGG/math.h>

// ============================================================================
// CameraProjType — Projection type enumeration
// ============================================================================
enum CameraProjType {
    CAM_PROJ_PERSPECTIVE  = 0,  // Perspective projection
    CAM_PROJ_ORTHOGRAPHIC = 1,  // Orthographic projection
};

// ============================================================================
// CameraFlags — Camera state flags
// ============================================================================
enum CameraFlags {
    CAM_FLAG_ACTIVE        = (1 << 0),  // Camera is currently in use
    CAM_FLAG_FOV_ANIMATING = (1 << 1),  // FOV is being animated
    CAM_FLAG_SHAKE         = (1 << 2),  // Camera shake is active
    CAM_FLAG_SPLINE_PATH   = (1 << 3),  // Following a spline path
    CAM_FLAG_LOCKED        = (1 << 4),  // Camera is locked (no input)
    CAM_FLAG_NEAR_CLIP_SET = (1 << 5),  // Custom near clip distance
    CAM_FLAG_FAR_CLIP_SET  = (1 << 6),  // Custom far clip distance
};

// ============================================================================
// CameraShake — Camera shake parameters
// ============================================================================
// When shake is active, the view matrix is perturbed by a decaying
// sinusoidal offset.
//
// Size: 0x1C bytes
// ============================================================================
struct CameraShake {
    f32 intensity;          // 0x00: shake intensity (initial amplitude)
    f32 duration;           // 0x04: total shake duration in seconds
    f32 elapsed;            // 0x08: time elapsed since shake started
    f32 frequency;          // 0x0C: shake frequency in Hz
    f32 decayRate;          // 0x10: exponential decay rate
    f32 offsetX;            // 0x14: computed X offset this frame
    f32 offsetY;            // 0x18: computed Y offset this frame
    f32 offsetZ;            // 0x1C: computed Z offset this frame
};

// ============================================================================
// ViewportConfig — Viewport rectangle and depth range
// ============================================================================
// Size: 0x18 bytes
// ============================================================================
struct ViewportConfig {
    f32 x;                  // 0x00: viewport left edge
    f32 y;                  // 0x04: viewport top edge
    f32 width;              // 0x08: viewport width
    f32 height;             // 0x0C: viewport height
    f32 nearZ;              // 0x10: near clip plane
    f32 farZ;               // 0x14: far clip plane
};

// ============================================================================
// ScissorConfig — Scissor rectangle
// ============================================================================
// Size: 0x10 bytes
// ============================================================================
struct ScissorConfig {
    u32 x;                  // 0x00: scissor left
    u32 y;                  // 0x04: scissor top
    u32 width;              // 0x08: scissor width
    u32 height;             // 0x0C: scissor height
};

// ============================================================================
// Camera — Main camera structure
// ============================================================================
// Holds position, rotation, projection parameters, and computed matrices.
// Updated once per frame by the camera director.
//
// Size: 0x100 bytes
// ============================================================================
struct Camera {
    // Transform
    Vec3f position;         // 0x00: camera world position
    Vec3f interest;         // 0x0C: look-at target point
    Vec3f up;               // 0x18: up vector (usually 0,1,0)
    f32  roll;              // 0x24: camera roll in radians

    // Projection
    f32  fovY;              // 0x28: vertical field of view in radians
    f32  aspectRatio;       // 0x2C: width / height
    f32  nearPlane;         // 0x30: near clip distance
    f32  farPlane;          // 0x34: far clip distance
    u8   projType;          // 0x38: CameraProjType
    u8   _39[3];            // 0x39: padding

    // Computed matrices
    Mat34 viewMatrix;       // 0x3C: 3x4 view matrix (48 bytes)
    f32  projMatrix[4][4];  // 0x6C: 4x4 projection matrix (64 bytes)

    // Viewport and scissor
    ViewportConfig viewport;  // 0xAC: viewport configuration
    ScissorConfig scissor;    // 0xC4: scissor configuration

    // State
    u32  flags;             // 0xD4: CameraFlags bitmask
    u32  _D8;               // 0xD8: unknown
    f32  _DC;               // 0xDC: unknown

    // FOV animation
    f32  fovTarget;         // 0xE0: target FOV for animation
    f32  fovSpeed;          // 0xE4: FOV interpolation speed

    // Shake
    CameraShake shake;      // 0xE8: shake parameters

    // Camera ID / priority
    u8   cameraId;          // 0x104: camera identifier
    u8   priority;          // 0x105: render priority
    u16  _106;              // 0x106: padding
    f32  _108;              // 0x108: unknown

    // Global camera pointer for this frame
    static Camera* sCurrent;  // @addr 0x80552000
};

// ============================================================================
// Function declarations — Camera System
// ============================================================================

// 0x80550000 — Initialize a camera to default values
// @addr 0x80550000
void Camera_Init(Camera* cam, u8 cameraId);

// 0x80550100 — Set camera position and look-at target
// @addr 0x80550100
void Camera_SetLookAt(Camera* cam, const Vec3f* pos, const Vec3f* interest, const Vec3f* up);

// 0x80550200 — Set perspective projection parameters
// @addr 0x80550200
void Camera_SetPerspective(Camera* cam, f32 fovY, f32 aspect, f32 nearZ, f32 farZ);

// 0x80550300 — Set orthographic projection parameters
// @addr 0x80550300
void Camera_SetOrtho(Camera* cam, f32 left, f32 right, f32 bottom, f32 top, f32 nearZ, f32 farZ);

// 0x80550400 — Compute the view matrix from position, interest, and up
// @addr 0x80550400
void Camera_ComputeViewMatrix(Camera* cam);

// 0x80550540 — Compute the projection matrix from projection parameters
// @addr 0x80550540
void Camera_ComputeProjMatrix(Camera* cam);

// 0x80550700 — Upload viewport and scissor to GX hardware
// @addr 0x80550700
void Camera_UploadViewport(const Camera* cam);

// 0x805507C0 — Upload view and projection matrices to GX hardware
// @addr 0x805507C0
void Camera_UploadMatrices(const Camera* cam);

// 0x80550880 — Set viewport rectangle
// @addr 0x80550880
void Camera_SetViewport(Camera* cam, f32 x, f32 y, f32 w, f32 h, f32 nearZ, f32 farZ);

// 0x80550900 — Set scissor rectangle
// @addr 0x80550900
void Camera_SetScissor(Camera* cam, u32 x, u32 y, u32 w, u32 h);

// 0x80550960 — Start a camera shake effect
// @addr 0x80550960
void Camera_StartShake(Camera* cam, f32 intensity, f32 duration, f32 frequency);

// 0x80550A00 — Update camera shake offset (call per frame)
// @addr 0x80550A00
void Camera_UpdateShake(Camera* cam, f32 dt);

// 0x80550B00 — Animate FOV toward target value
// @addr 0x80550B00
void Camera_UpdateFOV(Camera* cam, f32 dt);

// 0x80550B80 — Set camera as the current active camera
// @addr 0x80550B80
void Camera_MakeCurrent(Camera* cam);

// 0x80550BC0 — Get the current active camera
// @addr 0x80550BC0
Camera* Camera_GetCurrent(void);

// 0x80550BE0 — Apply camera transform to a world-space point
// @addr 0x80550BE0
void Camera_WorldToScreen(const Camera* cam, const Vec3f* world, Vec3f* screen);