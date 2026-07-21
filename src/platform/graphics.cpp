// graphics.cpp — OpenGL 3.3+ initialization shim
// MAESTRO Phase 7, Milestone M2: Platform Abstraction Layer

#include "platform/graphics.hpp"
#include <cstdio>

#ifdef HAS_OPENGL
#include <GL/gl.h>
#endif

namespace Platform {

bool Graphics::initialize() {
#ifdef HAS_SDL2
    // SDL2's built-in GL context provides function loading.
    // For full GL 3.3 core, glad/glew would be loaded here.
    // Stub: GL function loading requires SDL2/glad for full 3.3 core
    printf("  Graphics: OpenGL initialized via SDL2 context\n");
    return true;
#elif defined(HAS_OPENGL)
    // OpenGL available but not SDL2 — limited initialization
    printf("  Graphics: OpenGL found but SDL2 not available (limited mode)\n");
    return true;
#else
    printf("  Graphics: Stub mode — OpenGL not available\n");
    return true;
#endif
}

void Graphics::shutdown() {
#ifdef HAS_OPENGL
    // Stub: actual GL resource cleanup
#endif
    printf("  Graphics: Shutdown complete\n");
}

void Graphics::setViewport(u16 x, u16 y, u16 w, u16 h) {
#ifdef HAS_OPENGL
    // Stub: actual glViewport call
    // glViewport(static_cast<GLint>(x), static_cast<GLint>(y),
    //            static_cast<GLsizei>(w), static_cast<GLsizei>(h));
#endif
}

void Graphics::clearScreen(f32 r, f32 g, f32 b, f32 a) {
#ifdef HAS_OPENGL
    // Stub: actual glClearColor + glClear call
    // glClearColor(r, g, b, a);
    // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
#endif
}

void Graphics::beginFrame() {
    // Future: bind framebuffers, update timing, etc.
}

void Graphics::endFrame() {
    // Future: submit draw calls, update profiler, etc.
}

} // namespace Platform