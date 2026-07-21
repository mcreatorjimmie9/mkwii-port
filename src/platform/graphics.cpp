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

// =============================================================================
// Particle rendering — Billboard quads using GL 3.3 Core
// =============================================================================
// Uses a lazy-initialized particle shader and VAO for efficient rendering.
// Each particle is a camera-facing quad (billboard) at the particle's position.

#ifdef HAS_OPENGL
namespace {
// Particle shader handles
static u32 s_particleVAO = 0;
static u32 s_particleVBO = 0;
static u32 s_particleShader = 0;
static s32 s_particleMvpLoc = -1;
static s32 s_particleColorLoc = -1;
static bool s_particleInit = false;

// Particle vertex data: unit quad (2 triangles, 4 vertices)
// Each vertex: position (x, y) — z, billboard orientation, and size
// are computed in the vertex shader from the model matrix.
static const f32 PARTICLE_VERTS[] = {
    // pos_x, pos_y
    -1.0f, -1.0f,
     1.0f, -1.0f,
     1.0f,  1.0f,
    -1.0f, -1.0f,
     1.0f,  1.0f,
    -1.0f,  1.0f,
};

static bool initParticleResources() {
    if (s_particleInit) return true;
    if (!s_glLoaded) return false;

    // Compile particle shaders
    auto compile = [](u32 type, const char* src) -> u32 {
        u32 s = GL3::gl.glCreateShader(type);
        GL3::gl.glShaderSource(s, 1, &src, nullptr);
        GL3::gl.glCompileShader(s);
        s32 ok = 0;
        GL3::gl.glGetShaderiv(s, GL3::GL_COMPILE_STATUS, &ok);
        if (!ok) {
            char log[256];
            GL3::gl.glGetShaderInfoLog(s, sizeof(log), nullptr, log);
            std::printf("  Particle shader error: %s\n", log);
            GL3::gl.glDeleteShader(s);
            return 0;
        }
        return s;
    };

    const char* vertSrc =
        "#version 330 core\n"
        "layout(location=0) in vec2 aPos;\n"
        "uniform mat4 u_mvp;\n"
        "uniform float u_size;\n"
        "uniform vec3 u_worldPos;\n"
        "out float v_alpha;\n"
        "void main() {\n"
        "    // Billboard: expand the quad in screen space\n"
        "    vec4 clipPos = u_mvp * vec4(u_worldPos, 1.0);\n"
        "    // Offset in clip space proportional to size and inverse depth\n"
        "    float scale = u_size / -clipPos.w;\n"
        "    clipPos.xy += aPos * scale;\n"
        "    gl_Position = clipPos;\n"
        "}\n";

    const char* fragSrc =
        "#version 330 core\n"
        "uniform vec4 u_color;\n"
        "out vec4 fragColor;\n"
        "void main() {\n"
        "    fragColor = u_color;\n"
        "}\n";

    u32 vs = compile(GL3::GL_VERTEX_SHADER, vertSrc);
    u32 fs = compile(GL3::GL_FRAGMENT_SHADER, fragSrc);
    if (!vs || !fs) return false;

    s_particleShader = GL3::gl.glCreateProgram();
    GL3::gl.glAttachShader(s_particleShader, vs);
    GL3::gl.glAttachShader(s_particleShader, fs);
    GL3::gl.glLinkProgram(s_particleShader);
    GL3::gl.glDeleteShader(vs);
    GL3::gl.glDeleteShader(fs);

    s32 linkOk = 0;
    GL3::gl.glGetProgramiv(s_particleShader, GL3::GL_LINK_STATUS, &linkOk);
    if (!linkOk) {
        char log[256];
        GL3::gl.glGetProgramInfoLog(s_particleShader, sizeof(log), nullptr, log);
        std::printf("  Particle program link error: %s\n", log);
        return false;
    }

    s_particleMvpLoc = GL3::gl.glGetUniformLocation(s_particleShader, "u_mvp");
    s_particleColorLoc = GL3::gl.glGetUniformLocation(s_particleShader, "u_color");

    // Create VAO/VBO
    GL3::gl.glGenVertexArrays(1, &s_particleVAO);
    GL3::gl.glGenBuffers(1, &s_particleVBO);

    GL3::gl.glBindVertexArray(s_particleVAO);
    GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, s_particleVBO);
    GL3::gl.glBufferData(GL3::GL_ARRAY_BUFFER,
                          sizeof(PARTICLE_VERTS), PARTICLE_VERTS, GL3::GL_STATIC_DRAW);
    GL3::gl.glVertexAttribPointer(0, 2, GL3::GL_FLOAT, GL3::GL_FALSE, 0, nullptr);
    GL3::gl.glEnableVertexAttribArray(0);
    GL3::gl.glBindVertexArray(0);

    s_particleInit = true;
    return true;
}

static s32 s_particleSizeLoc = -1;
static s32 s_particleWorldPosLoc = -1;
} // anonymous namespace
#endif // HAS_OPENGL

void Graphics::drawParticle(f32 x, f32 y, f32 z, f32 size,
                              f32 r, f32 g, f32 b, f32 a) {
#ifdef HAS_OPENGL
    if (!s_glLoaded) return;
    if (!initParticleResources()) return;

    // Lazily get uniform locations (they're constant after linking)
    if (s_particleSizeLoc < 0) {
        s_particleSizeLoc = GL3::gl.glGetUniformLocation(s_particleShader, "u_size");
        s_particleWorldPosLoc = GL3::gl.glGetUniformLocation(s_particleShader, "u_worldPos");
    }

    // Save/restore state (simplified — avoid glIsEnabled which isn't loaded)
    GL3::gl.glDisable(GL3::GL_CULL_FACE);

    // Enable alpha blending for particles
    GL3::gl.glEnable(GL3::GL_BLEND);
    GL3::gl.glBlendFunc(GL3::GL_SRC_ALPHA, GL3::GL_ONE_MINUS_SRC_ALPHA);

    GL3::gl.glUseProgram(s_particleShader);

    // Set uniforms
    if (s_particleMvpLoc >= 0)
        GL3::gl.glUniformMatrix4fv(s_particleMvpLoc, 1, GL3::GL_FALSE, &s_viewProjMatrix.m[0][0]);
    if (s_particleColorLoc >= 0)
        GL3::gl.glUniform4f(s_particleColorLoc, r, g, b, a);
    if (s_particleSizeLoc >= 0)
        GL3::gl.glUniform1f(s_particleSizeLoc, size);
    if (s_particleWorldPosLoc >= 0)
        GL3::gl.glUniform3f(s_particleWorldPosLoc, x, y, z);

    // Draw the billboard quad
    GL3::gl.glBindVertexArray(s_particleVAO);
    GL3::gl.glDrawArrays(GL3::GL_TRIANGLES, 0, 6);
    GL3::gl.glBindVertexArray(0);

    // Restore state
    GL3::gl.glUseProgram(0);
    GL3::gl.glDisable(GL3::GL_BLEND);
    GL3::gl.glEnable(GL3::GL_CULL_FACE);
#else
    (void)x; (void)y; (void)z; (void)size;
    (void)r; (void)g; (void)b; (void)a;
#endif
}

} // namespace Platform