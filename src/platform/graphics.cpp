// graphics.cpp — OpenGL 3.3 Core rendering
// MAESTRO Phase 7, Milestone M4: Real GL 3.3 rendering

#include "platform/graphics.hpp"
#include <cstdio>
#include <cmath>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#include "platform/sdl2_stub.h"

// Load SDL_GL_GetProcAddress via dlsym for GL function loading
#include <dlfcn.h>

static void* sdlGetProcAddress(const char* name) {
    if (!SDL2Loader::s_handle) return nullptr;
    return dlsym(SDL2Loader::s_handle, name);
}

// Perspective projection matrix builder (column-major m[col][row])
static void buildPerspective(EGG::Matrix44f& out, f32 fovDeg, f32 aspect,
                              f32 nearZ, f32 farZ) {
    const f32 fovRad = fovDeg * (3.14159265358979323846f / 180.0f);
    const f32 f = 1.0f / std::tan(fovRad * 0.5f);

    std::memset(out.m, 0, sizeof(out.m));
    out.m[0][0] = f / aspect;
    out.m[1][1] = f;
    out.m[2][2] = (farZ + nearZ) / (nearZ - farZ);
    out.m[2][3] = (2.0f * farZ * nearZ) / (nearZ - farZ);
    out.m[3][2] = -1.0f;
}

// Look-at view matrix builder (column-major m[col][row])
// eye = camera position, target = look-at point, up = world up vector
static void buildLookAt(EGG::Matrix44f& out,
                         const EGG::Vector3f& eye,
                         const EGG::Vector3f& target,
                         const EGG::Vector3f& up) {
    // Compute forward (camera looks down -Z in OpenGL)
    EGG::Vector3f f = target - eye;
    f.normalise();

    // Right = forward x up
    EGG::Vector3f r = EGG::TVector3<f32>::cross(f, up);
    r.normalise();

    // Recompute up = right x forward
    EGG::Vector3f u = EGG::TVector3<f32>::cross(r, f);

    std::memset(out.m, 0, sizeof(out.m));

    // Column 0 = right
    out.m[0][0] = r.x;
    out.m[0][1] = u.x;
    out.m[0][2] = -f.x;

    // Column 1 = up
    out.m[1][0] = r.y;
    out.m[1][1] = u.y;
    out.m[1][2] = -f.y;

    // Column 2 = -forward
    out.m[2][0] = r.z;
    out.m[2][1] = u.z;
    out.m[2][2] = -f.z;

    // Column 3 = translation (dot products for eye position)
    out.m[3][0] = -(r.dot(eye));
    out.m[3][1] = -(u.dot(eye));
    out.m[3][2] = f.dot(eye);
    out.m[3][3] = 1.0f;
}

#endif // HAS_OPENGL

namespace Platform {

// Static view-projection matrix storage (set by setupCamera, read by renderers)
static EGG::Matrix44f s_viewProjMatrix;
static bool s_glLoaded = false;

bool Graphics::initialize() {
#ifdef HAS_SDL2
    // Load GL 3.3 function pointers via SDL's GetProcAddress
    if (!GL3::loadFunctions(sdlGetProcAddress)) {
        printf("  Graphics: Failed to load GL 3.3 functions\n");
        return true; // Non-fatal — stub mode fallback
    }
    s_glLoaded = true;
    printf("  Graphics: OpenGL 3.3 Core functions loaded (%d functions)\n", 28 + 1);
    return true;
#else
    printf("  Graphics: Stub mode — OpenGL not available\n");
    return true;
#endif
}

void Graphics::shutdown() {
#ifdef HAS_OPENGL
    if (s_glLoaded) {
        s_glLoaded = false;
    }
#endif
    printf("  Graphics: Shutdown complete\n");
}

void Graphics::setViewport(u16 x, u16 y, u16 w, u16 h) {
#ifdef HAS_OPENGL
    if (s_glLoaded && GL3::gl.glViewport) {
        GL3::gl.glViewport(static_cast<GLint>(x), static_cast<GLint>(y),
                           static_cast<GLsizei>(w), static_cast<GLsizei>(h));
    }
#endif
}

void Graphics::clearScreen(f32 r, f32 g, f32 b, f32 a) {
#ifdef HAS_OPENGL
    if (s_glLoaded && GL3::gl.glClearColor && GL3::gl.glClear) {
        GL3::gl.glClearColor(r, g, b, a);
        GL3::gl.glClear(GL3::GL_COLOR_BUFFER_BIT | GL3::GL_DEPTH_BUFFER_BIT);
    }
#endif
}

void Graphics::beginFrame() {
#ifdef HAS_OPENGL
    if (s_glLoaded) {
        if (GL3::gl.glEnable)
            GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
        if (GL3::gl.glDepthFunc)
            GL3::gl.glDepthFunc(GL3::GL_LESS);
        if (GL3::gl.glEnable)
            GL3::gl.glEnable(GL3::GL_CULL_FACE);
    }
#endif
}

void Graphics::endFrame() {
    // Future: submit draw calls, update profiler, etc.
}

// =============================================================================
// Camera — Build view-projection matrix and store it for use by renderers
// =============================================================================

#ifdef HAS_OPENGL
void Graphics::setupCamera(f32 eyeX, f32 eyeY, f32 eyeZ,
                            f32 targetX, f32 targetY, f32 targetZ,
                            f32 fovDeg, f32 aspect, f32 nearZ, f32 farZ) {
    EGG::Matrix44f proj;
    buildPerspective(proj, fovDeg, aspect, nearZ, farZ);

    EGG::Matrix44f view;
    EGG::Vector3f eye(eyeX, eyeY, eyeZ);
    EGG::Vector3f target(targetX, targetY, targetZ);
    EGG::Vector3f up(0.0f, 1.0f, 0.0f);
    buildLookAt(view, eye, target, up);

    // viewProj = proj * view  (column-major multiply)
    EGG::Matrix44f tmp;
    for (int c = 0; c < 4; c++) {
        for (int rr = 0; rr < 4; rr++) {
            tmp.m[c][rr] = proj.m[0][rr] * view.m[c][0]
                          + proj.m[1][rr] * view.m[c][1]
                          + proj.m[2][rr] * view.m[c][2]
                          + proj.m[3][rr] * view.m[c][3];
        }
    }
    s_viewProjMatrix = tmp;
}
#else
void Graphics::setupCamera(f32, f32, f32, f32, f32, f32,
                            f32, f32, f32, f32) {
    // Stub: no-op
}
#endif

const EGG::Matrix44f& Graphics::getViewProjMatrix() {
    return s_viewProjMatrix;
}

} // namespace Platform