// window.cpp — SDL2 window management
// MAESTRO Phase 7, Milestone M4: Uses SDL2Loader for runtime SDL2 loading

#include "platform/window.hpp"
#include <cstdio>

#ifdef HAS_SDL2
#include "platform/sdl2_stub.h"

// Forward declaration for GL function loading
extern "C" void* SDL_GL_GetProcAddress(const char* name);

// SDL_GL_GetProcAddress via dlsym
static void* getGLProcAddr(const char* name) {
    if (!SDL2Loader::s_handle) return nullptr;
    return ::dlsym(SDL2Loader::s_handle, name);
}
#endif

namespace Platform {

Window* Window::spInstance = nullptr;

Window::Window()
    : m_isOpen(false)
    , m_width(0)
    , m_height(0)
    , m_nativeHandle(nullptr)
    , m_glContext(nullptr)
{
}

Window::~Window() {
    destroy();
}

bool Window::create(u16 width, u16 height, const char* title) {
    if (spInstance != nullptr) {
        printf("  Window: Already created\n");
        return true;
    }

    spInstance = new Window();
    spInstance->m_width = width;
    spInstance->m_height = height;

#ifdef HAS_SDL2
    // Load SDL2 at runtime
    if (!SDL2Loader::init()) {
        printf("  Window: Failed to load libSDL2-2.0.so.0 via dlopen\n");
        delete spInstance;
        spInstance = nullptr;
        return false;
    }

    // Initialize SDL2 video subsystem
    if (SDL2Loader::SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("  Window: SDL_Init failed — %s\n", SDL2Loader::SDL_GetError());
        SDL2Loader::shutdown();
        delete spInstance;
        spInstance = nullptr;
        return false;
    }

    // Set OpenGL 3.3 core profile attributes
    SDL2Loader::SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL2Loader::SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL2Loader::SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                                     SDL_GL_CONTEXT_PROFILE_CORE);
    SDL2Loader::SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL2Loader::SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

    // Create window
    spInstance->m_nativeHandle = static_cast<void*>(
        SDL2Loader::SDL_CreateWindow(
            title,
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            static_cast<int>(width),
            static_cast<int>(height),
            SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN
        )
    );

    if (spInstance->m_nativeHandle == nullptr) {
        printf("  Window: SDL_CreateWindow failed — %s\n",
               SDL2Loader::SDL_GetError());
        SDL2Loader::SDL_Quit();
        SDL2Loader::shutdown();
        delete spInstance;
        spInstance = nullptr;
        return false;
    }

    // Create OpenGL context
    spInstance->m_glContext = static_cast<void*>(
        SDL2Loader::SDL_GL_CreateContext(
            static_cast<SDL_Window*>(spInstance->m_nativeHandle))
    );

    if (spInstance->m_glContext == nullptr) {
        printf("  Window: SDL_GL_CreateContext failed — %s\n",
               SDL2Loader::SDL_GetError());
        SDL2Loader::SDL_DestroyWindow(
            static_cast<SDL_Window*>(spInstance->m_nativeHandle));
        SDL2Loader::SDL_Quit();
        SDL2Loader::shutdown();
        delete spInstance;
        spInstance = nullptr;
        return false;
    }

    SDL2Loader::SDL_GL_MakeCurrent(
        static_cast<SDL_Window*>(spInstance->m_nativeHandle),
        static_cast<SDL_GLContext>(spInstance->m_glContext));
    SDL2Loader::SDL_GL_SetSwapInterval(1); // VSync on

    spInstance->m_isOpen = true;
    printf("  Window: Created %dx%d (SDL2 + OpenGL 3.3 core)\n", width, height);
#else
    // Stub mode — no SDL2 available
    spInstance->m_isOpen = true;
    printf("  Window: Stub mode — would create %dx%d \"%s\" (SDL2 not available)\n",
           width, height, title);
#endif

    return true;
}

void Window::destroy() {
    if (spInstance == nullptr)
        return;

#ifdef HAS_SDL2
    if (spInstance->m_glContext != nullptr) {
        SDL2Loader::SDL_GL_DeleteContext(
            static_cast<SDL_GLContext>(spInstance->m_glContext));
        spInstance->m_glContext = nullptr;
    }
    if (spInstance->m_nativeHandle != nullptr) {
        SDL2Loader::SDL_DestroyWindow(
            static_cast<SDL_Window*>(spInstance->m_nativeHandle));
        spInstance->m_nativeHandle = nullptr;
    }
    SDL2Loader::SDL_Quit();
    SDL2Loader::shutdown();
#else
    printf("  Window: Destroy (stub)\n");
#endif

    spInstance->m_isOpen = false;
    delete spInstance;
    spInstance = nullptr;
}

void Window::swapBuffers() {
    if (spInstance == nullptr)
        return;

#ifdef HAS_SDL2
    SDL2Loader::SDL_GL_SwapWindow(
        static_cast<SDL_Window*>(spInstance->m_nativeHandle));
#else
    // Stub: actual SDL_GL_SwapWindow call
#endif
}

void Window::pollEvents() {
    if (spInstance == nullptr)
        return;

#ifdef HAS_SDL2
    SDL_Event event;
    while (SDL2Loader::SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            spInstance->m_isOpen = false;
        }
    }
#else
    // Stub: in headless/stub mode, stay open for test frames
#endif
}

bool Window::isOpen() {
    if (spInstance == nullptr)
        return false;
    return spInstance->m_isOpen;
}

u16 Window::getWidth() {
    if (spInstance == nullptr)
        return 0;
    return spInstance->m_width;
}

u16 Window::getHeight() {
    if (spInstance == nullptr)
        return 0;
    return spInstance->m_height;
}

void* Window::getNativeHandle() {
    if (spInstance == nullptr)
        return nullptr;
    return spInstance->m_nativeHandle;
}

} // namespace Platform