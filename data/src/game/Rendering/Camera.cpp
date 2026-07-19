#include "Camera.hpp"
#include "RenderUtil.hpp"
#include <common.h>
#include <gx.hpp>
#include <cmath>

// ============================================================================
// Global current camera pointer
// ============================================================================
Camera* Camera::sCurrent = nullptr;  // @addr 0x80552000

// ============================================================================
// Helper: make a 4x4 perspective matrix
// ============================================================================
static void MakePerspective(f32 mtx[4][4], f32 fovY, f32 aspect,
                             f32 nearZ, f32 farZ) {
    f32 cotHalf = 1.0f / std::tan(fovY * 0.5f);

    std::memset(mtx, 0, sizeof(f32) * 16);
    mtx[0][0] = cotHalf / aspect;
    mtx[1][1] = cotHalf;
    mtx[2][2] = (farZ + nearZ) / (nearZ - farZ);
    mtx[2][3] = (2.0f * farZ * nearZ) / (nearZ - farZ);
    mtx[3][2] = -1.0f;
}

// ============================================================================
// Helper: make a 4x4 orthographic matrix
// ============================================================================
static void MakeOrtho(f32 mtx[4][4], f32 left, f32 right,
                       f32 bottom, f32 top, f32 nearZ, f32 farZ) {
    std::memset(mtx, 0, sizeof(f32) * 16);
    mtx[0][0] = 2.0f / (right - left);
    mtx[1][1] = 2.0f / (top - bottom);
    mtx[2][2] = -2.0f / (farZ - nearZ);
    mtx[0][3] = -(right + left) / (right - left);
    mtx[1][3] = -(top + bottom) / (top - bottom);
    mtx[2][3] = -(farZ + nearZ) / (farZ - nearZ);
    mtx[3][3] = 1.0f;
}

// ============================================================================
// Helper: compute a right vector from forward and up
// ============================================================================
static Vec3f ComputeRight(const Vec3f& forward, const Vec3f& up) {
    return Vec3f::cross(forward, up);
}

// ============================================================================
// Camera_Init()
// 0x80550000 (256 bytes)
// ============================================================================
// Initialize a camera to sensible defaults.
// Sets up a perspective camera at the origin looking down -Z.
//
// @param cam       Camera to initialize
// @param cameraId  Camera identifier
// ============================================================================
void Camera_Init(Camera* cam, u8 cameraId) {
    cam->position.set(0.0f, 100.0f, 500.0f);
    cam->interest.set(0.0f, 100.0f, 0.0f);
    cam->up.set(0.0f, 1.0f, 0.0f);
    cam->roll = 0.0f;

    // Default perspective: 60 degree FOV, 4:3 aspect
    cam->fovY = 60.0f * EGG::DEG_TO_RAD;
    cam->aspectRatio = 4.0f / 3.0f;
    cam->nearPlane = 10.0f;
    cam->farPlane = 100000.0f;
    cam->projType = CAM_PROJ_PERSPECTIVE;

    // Zero matrices
    cam->viewMatrix.makeIdentity();
    std::memset(cam->projMatrix, 0, sizeof(cam->projMatrix));

    // Default viewport: full screen (640x480)
    cam->viewport.x = 0.0f;
    cam->viewport.y = 0.0f;
    cam->viewport.width = 640.0f;
    cam->viewport.height = 480.0f;
    cam->viewport.nearZ = 0.0f;
    cam->viewport.farZ = 1.0f;

    // Default scissor: full screen
    cam->scissor.x = 0;
    cam->scissor.y = 0;
    cam->scissor.width = 640;
    cam->scissor.height = 480;

    cam->flags = CAM_FLAG_ACTIVE;
    cam->_D8 = 0;
    cam->_DC = 0.0f;

    // FOV animation
    cam->fovTarget = cam->fovY;
    cam->fovSpeed = 3.0f;  // default interpolation speed

    // Shake: disabled
    cam->shake.intensity = 0.0f;
    cam->shake.duration = 0.0f;
    cam->shake.elapsed = 0.0f;
    cam->shake.frequency = 10.0f;
    cam->shake.decayRate = 3.0f;
    cam->shake.offsetX = 0.0f;
    cam->shake.offsetY = 0.0f;
    cam->shake.offsetZ = 0.0f;

    cam->cameraId = cameraId;
    cam->priority = 0;
    cam->_106 = 0;
    cam->_108 = 0.0f;
}

// ============================================================================
// Camera_SetLookAt()
// 0x80550100 (96 bytes)
// ============================================================================
// Set the camera position, interest point, and up vector.
// Does NOT recompute matrices; call Camera_ComputeViewMatrix() afterward.
//
// @param cam       Camera to configure
// @param pos       Camera world position
// @param interest  Look-at target
// @param up        Up vector
// ============================================================================
void Camera_SetLookAt(Camera* cam, const Vec3f* pos, const Vec3f* interest, const Vec3f* up) {
    if (cam == nullptr) return;
    if (pos != nullptr) cam->position = *pos;
    if (interest != nullptr) cam->interest = *interest;
    if (up != nullptr) cam->up = *up;
}

// ============================================================================
// Camera_SetPerspective()
// 0x80550200 (80 bytes)
// ============================================================================
// Configure perspective projection parameters.
//
// @param cam    Camera to configure
// @param fovY   Vertical field of view in radians
// @param aspect Width / height ratio
// @param nearZ  Near clip distance
// @param farZ   Far clip distance
// ============================================================================
void Camera_SetPerspective(Camera* cam, f32 fovY, f32 aspect, f32 nearZ, f32 farZ) {
    if (cam == nullptr) return;
    cam->fovY = fovY;
    cam->aspectRatio = aspect;
    cam->nearPlane = nearZ;
    cam->farPlane = farZ;
    cam->projType = CAM_PROJ_PERSPECTIVE;
}

// ============================================================================
// Camera_SetOrtho()
// 0x80550300 (96 bytes)
// ============================================================================
// Configure orthographic projection parameters.
//
// @param cam     Camera to configure
// @param left    Left clip plane
// @param right   Right clip plane
// @param bottom  Bottom clip plane
// @param top     Top clip plane
// @param nearZ   Near clip distance
// @param farZ    Far clip distance
// ============================================================================
void Camera_SetOrtho(Camera* cam, f32 left, f32 right, f32 bottom, f32 top,
                      f32 nearZ, f32 farZ) {
    if (cam == nullptr) return;
    cam->projType = CAM_PROJ_ORTHOGRAPHIC;
    // Store ortho params in the fov/aspect/near/far fields for matrix compute
    cam->nearPlane = nearZ;
    cam->farPlane = farZ;
    // We stash left/right/bottom/top for ortho in unused fields
    /* WII_GX: In the original code, ortho params are stored in a separate
       struct. For simplicity, we compute the matrix immediately. */
    MakeOrtho(cam->projMatrix, left, right, bottom, top, nearZ, farZ);
}

// ============================================================================
// Camera_ComputeViewMatrix()
// 0x80550400 (320 bytes)
// ============================================================================
// Compute the view (camera) matrix from position, interest, and up vector.
// Uses the standard look-at algorithm:
//   forward = normalize(interest - position)
//   right   = normalize(cross(forward, up))
//   trueUp  = cross(right, forward)
//
// The resulting 3x4 matrix transforms world coordinates to view coordinates.
//
// @param cam  Camera with position, interest, and up set
// ============================================================================
void Camera_ComputeViewMatrix(Camera* cam) {
    if (cam == nullptr) return;

    // Forward direction (camera looks from position toward interest)
    Vec3f forward = cam->interest - cam->position;
    f32 fwdLen = forward.squaredLength();
    if (fwdLen > 0.0001f) {
        f32 invLen = 1.0f / std::sqrt(fwdLen);
        forward = forward * invLen;
    } else {
        forward.set(0.0f, 0.0f, -1.0f);
    }

    // Right direction
    Vec3f right = ComputeRight(forward, cam->up);
    f32 rightLen = right.squaredLength();
    if (rightLen > 0.0001f) {
        f32 invLen = 1.0f / std::sqrt(rightLen);
        right = right * invLen;
    } else {
        right.set(1.0f, 0.0f, 0.0f);
    }

    // Recompute up = cross(forward, right)
    Vec3f trueUp = Vec3f::cross(right, forward);

    // Apply roll rotation around forward axis
    if (cam->roll != 0.0f) {
        f32 cosR = std::cos(cam->roll);
        f32 sinR = std::sin(cam->roll);
        f32 newRightX = right.x * cosR + trueUp.x * sinR;
        f32 newRightY = right.y * cosR + trueUp.y * sinR;
        f32 newRightZ = right.z * cosR + trueUp.z * sinR;
        f32 newUpX = -right.x * sinR + trueUp.x * cosR;
        f32 newUpY = -right.y * sinR + trueUp.y * cosR;
        f32 newUpZ = -right.z * sinR + trueUp.z * cosR;
        right.set(newRightX, newRightY, newRightZ);
        trueUp.set(newUpX, newUpY, newUpZ);
    }

    // Apply shake offset to position
    f32 shakeX = 0.0f, shakeY = 0.0f, shakeZ = 0.0f;
    if (cam->flags & CAM_FLAG_SHAKE) {
        shakeX = cam->shake.offsetX;
        shakeY = cam->shake.offsetY;
        shakeZ = cam->shake.offsetZ;
    }

    // View matrix: rows are right, up, -forward
    // Translation: -dot(right, pos), -dot(up, pos), dot(forward, pos)
    cam->viewMatrix.mtx[0][0] = right.x;
    cam->viewMatrix.mtx[0][1] = right.y;
    cam->viewMatrix.mtx[0][2] = right.z;
    cam->viewMatrix.mtx[0][3] = -(right.x * (cam->position.x + shakeX) +
                                   right.y * (cam->position.y + shakeY) +
                                   right.z * (cam->position.z + shakeZ));

    cam->viewMatrix.mtx[1][0] = trueUp.x;
    cam->viewMatrix.mtx[1][1] = trueUp.y;
    cam->viewMatrix.mtx[1][2] = trueUp.z;
    cam->viewMatrix.mtx[1][3] = -(trueUp.x * (cam->position.x + shakeX) +
                                   trueUp.y * (cam->position.y + shakeY) +
                                   trueUp.z * (cam->position.z + shakeZ));

    cam->viewMatrix.mtx[2][0] = -forward.x;
    cam->viewMatrix.mtx[2][1] = -forward.y;
    cam->viewMatrix.mtx[2][2] = -forward.z;
    cam->viewMatrix.mtx[2][3] = (forward.x * (cam->position.x + shakeX) +
                                  forward.y * (cam->position.y + shakeY) +
                                  forward.z * (cam->position.z + shakeZ));
}

// ============================================================================
// Camera_ComputeProjMatrix()
// 0x80550540 (448 bytes)
// ============================================================================
// Compute the projection matrix from the camera's projection parameters.
// Handles both perspective and orthographic types.
//
// The perspective matrix uses the standard D3D-style formulation:
//   cot(fov/2) / aspect  0              0                   0
//   0                    cot(fov/2)      0                   0
//   0                    0              (f+n)/(n-f)         2fn/(n-f)
//   0                    0              -1                  0
//
// Note: GX uses the transposed layout compared to OpenGL.
//
// @param cam  Camera with projection parameters set
// ============================================================================
void Camera_ComputeProjMatrix(Camera* cam) {
    if (cam == nullptr) return;

    if (cam->projType == CAM_PROJ_PERSPECTIVE) {
        MakePerspective(cam->projMatrix, cam->fovY, cam->aspectRatio,
                        cam->nearPlane, cam->farPlane);
    }
    // Orthographic matrix is computed in Camera_SetOrtho

    /* WII_GX: The original code uses MTXPerspective / MTXOrtho from
       the Nintendo SDK math library, which produce row-major matrices
       matching the GX hardware's expected layout. */
}

// ============================================================================
// Camera_UploadViewport()
// 0x80550700 (192 bytes)
// ============================================================================
// Upload the viewport and scissor rectangles to GX hardware.
// Called after Camera_SetViewport and before any drawing.
//
// @param cam  Camera with viewport configuration
// ============================================================================
void Camera_UploadViewport(const Camera* cam) {
    if (cam == nullptr) return;

    const ViewportConfig* vp = &cam->viewport;
    GXSetViewport(vp->x, vp->y, vp->width, vp->height, vp->nearZ, vp->farZ);

    const ScissorConfig* sc = &cam->scissor;
    GXSetScissor(sc->x, sc->y, sc->width, sc->height);
}

// ============================================================================
// Camera_UploadMatrices()
// 0x805507C0 (128 bytes)
// ============================================================================
// Upload the view matrix and projection matrix to GX hardware.
// The view matrix goes to position matrix slot 0 (GX_PNMTX0).
// The projection matrix is set globally.
//
// @param cam  Camera with computed matrices
// ============================================================================
void Camera_UploadMatrices(const Camera* cam) {
    if (cam == nullptr) return;

    // Load view matrix to position matrix slot 0
    GXLoadPosMtxImm(cam->viewMatrix.mtx[0], 0);
    GXSetCurrentMtx(0);

    // Set projection matrix
    GXSetProjection(cam->projMatrix[0], cam->projType == CAM_PROJ_PERSPECTIVE
                    ? GX_PERSPECTIVE : GX_ORTHOGRAPHIC);
}

// ============================================================================
// Camera_SetViewport()
// 0x80550880 (64 bytes)
// ============================================================================
// Set the viewport rectangle and depth range.
// Does NOT upload to GX; call Camera_UploadViewport() afterward.
//
// @param cam    Camera to configure
// @param x,y    Top-left corner
// @param w,h    Dimensions
// @param nearZ  Near depth (0.0)
// @param farZ   Far depth (1.0)
// ============================================================================
void Camera_SetViewport(Camera* cam, f32 x, f32 y, f32 w, f32 h,
                         f32 nearZ, f32 farZ) {
    if (cam == nullptr) return;
    cam->viewport.x = x;
    cam->viewport.y = y;
    cam->viewport.width = w;
    cam->viewport.height = h;
    cam->viewport.nearZ = nearZ;
    cam->viewport.farZ = farZ;
}

// ============================================================================
// Camera_SetScissor()
// 0x80550900 (48 bytes)
// ============================================================================
// Set the scissor rectangle. Pixels outside this rectangle are clipped.
//
// @param cam  Camera to configure
// @param x,y  Top-left corner (in EFB pixels)
// @param w,h  Dimensions
// ============================================================================
void Camera_SetScissor(Camera* cam, u32 x, u32 y, u32 w, u32 h) {
    if (cam == nullptr) return;
    cam->scissor.x = x;
    cam->scissor.y = y;
    cam->scissor.width = w;
    cam->scissor.height = h;
}

// ============================================================================
// Camera_StartShake()
// 0x80550960 (96 bytes)
// ============================================================================
// Begin a camera shake effect.
// If a shake is already active, it is replaced.
//
// @param cam        Camera to shake
// @param intensity  Initial shake amplitude in world units
// @param duration   Shake duration in seconds
// @param frequency  Shake frequency in Hz
// ============================================================================
void Camera_StartShake(Camera* cam, f32 intensity, f32 duration, f32 frequency) {
    if (cam == nullptr) return;

    cam->shake.intensity = intensity;
    cam->shake.duration = duration;
    cam->shake.elapsed = 0.0f;
    cam->shake.frequency = frequency;
    cam->shake.decayRate = 3.0f;  // exponential decay rate
    cam->shake.offsetX = 0.0f;
    cam->shake.offsetY = 0.0f;
    cam->shake.offsetZ = 0.0f;

    cam->flags |= CAM_FLAG_SHAKE;
}

// ============================================================================
// Camera_UpdateShake()
// 0x80550A00 (256 bytes)
// ============================================================================
// Update the camera shake offset for the current frame.
// Uses a decaying sinusoidal function:
//   offset = intensity * exp(-decayRate * t) * sin(2π * freq * t)
//
// The shake is automatically disabled when the elapsed time exceeds
// the duration.
//
// @param cam  Camera with active shake
// @param dt   Delta time in seconds
// ============================================================================
void Camera_UpdateShake(Camera* cam, f32 dt) {
    if (cam == nullptr) {
        return;
    }

    if (!(cam->flags & CAM_FLAG_SHAKE)) {
        cam->shake.offsetX = 0.0f;
        cam->shake.offsetY = 0.0f;
        cam->shake.offsetZ = 0.0f;
        return;
    }

    cam->shake.elapsed += dt;

    // Check if shake is complete
    if (cam->shake.elapsed >= cam->shake.duration) {
        cam->flags &= ~CAM_FLAG_SHAKE;
        cam->shake.offsetX = 0.0f;
        cam->shake.offsetY = 0.0f;
        cam->shake.offsetZ = 0.0f;
        return;
    }

    // Decaying sinusoidal offset
    f32 t = cam->shake.elapsed;
    f32 envelope = cam->shake.intensity * std::exp(-cam->shake.decayRate * t);
    f32 wave = std::sin(2.0f * EGG::PI * cam->shake.frequency * t);

    // Apply shake on X and Y axes (not Z for camera shake in MKW)
    cam->shake.offsetX = envelope * wave;
    cam->shake.offsetY = envelope * std::cos(2.0f * EGG::PI * cam->shake.frequency * t * 0.7f);
    cam->shake.offsetZ = 0.0f;
}

// ============================================================================
// Camera_UpdateFOV()
// 0x80550B00 (96 bytes)
// ============================================================================
// Animate the camera's FOV toward the target value.
// Uses linear interpolation at the configured speed.
//
// @param cam  Camera with FOV animation
// @param dt   Delta time in seconds
// ============================================================================
void Camera_UpdateFOV(Camera* cam, f32 dt) {
    if (cam == nullptr) return;

    f32 diff = cam->fovTarget - cam->fovY;
    if (diff == 0.0f) {
        return;
    }

    f32 step = cam->fovSpeed * dt;
    if (step > std::abs(diff)) {
        cam->fovY = cam->fovTarget;
    } else if (diff > 0.0f) {
        cam->fovY += step;
    } else {
        cam->fovY -= step;
    }
}

// ============================================================================
// Camera_MakeCurrent()
// 0x80550B80 (48 bytes)
// ============================================================================
// Set this camera as the globally active camera.
//
// @param cam  Camera to make current
// ============================================================================
void Camera_MakeCurrent(Camera* cam) {
    Camera::sCurrent = cam;
}

// ============================================================================
// Camera_GetCurrent()
// 0x80550BC0 (32 bytes)
// ============================================================================
// Get the currently active camera.
//
// @return  Pointer to the current camera, or nullptr
// ============================================================================
Camera* Camera_GetCurrent(void) {
    return Camera::sCurrent;
}

// ============================================================================
// Camera_WorldToScreen()
// 0x80550BE0 (192 bytes)
// ============================================================================
// Transform a world-space point to screen coordinates using the
// camera's view and projection matrices.
//
// Returns normalized device coordinates (-1 to 1) in screen->x/y
// and depth in screen->z.
//
// @param cam    Camera with computed matrices
// @param world  World-space point
// @param screen Output: NDC coordinates
// ============================================================================
void Camera_WorldToScreen(const Camera* cam, const Vec3f* world, Vec3f* screen) {
    if (cam == nullptr || world == nullptr || screen == nullptr) {
        return;
    }

    // Apply view matrix
    f32 vx = cam->viewMatrix.mtx[0][0] * world->x +
             cam->viewMatrix.mtx[0][1] * world->y +
             cam->viewMatrix.mtx[0][2] * world->z +
             cam->viewMatrix.mtx[0][3];
    f32 vy = cam->viewMatrix.mtx[1][0] * world->x +
             cam->viewMatrix.mtx[1][1] * world->y +
             cam->viewMatrix.mtx[1][2] * world->z +
             cam->viewMatrix.mtx[1][3];
    f32 vz = cam->viewMatrix.mtx[2][0] * world->x +
             cam->viewMatrix.mtx[2][1] * world->y +
             cam->viewMatrix.mtx[2][2] * world->z +
             cam->viewMatrix.mtx[2][3];

    // Apply projection matrix
    f32 px = cam->projMatrix[0][0] * vx +
             cam->projMatrix[0][3] * vz;
    f32 py = cam->projMatrix[1][1] * vy +
             cam->projMatrix[1][3] * vz;
    f32 pw = cam->projMatrix[3][2] * vz;  // -vz for perspective

    // Perspective divide
    if (std::abs(pw) > 0.0001f) {
        screen->x = px / pw;
        screen->y = py / pw;
        screen->z = vz;  // depth before projection
    } else {
        screen->x = 0.0f;
        screen->y = 0.0f;
        screen->z = 0.0f;
    }
}