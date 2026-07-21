#ifndef MKWII_PORT_SDL2_STUB_H
#define MKWII_PORT_SDL2_STUB_H

/*
 * Minimal self-contained SDL2 header for the mkwii-port project.
 * No SDL2 dev headers required — all symbols are declared here and
 * resolved at runtime via dlopen/dlsym against libSDL2-2.0.so.0.
 *
 * Usage:
 *   #include "platform/sdl2_stub.h"
 *   if (!SDL2Loader::init()) { ... handle failure ... }
 *   // Now SDL_Init, SDL_CreateWindow, etc. are usable.
 */

#include <dlfcn.h>
#include <cstdint>

// ---------------------------------------------------------------------------
// SDL basic types (minimal set)
// ---------------------------------------------------------------------------
typedef std::uint32_t Uint32;
typedef std::int32_t  Sint32;

// ---------------------------------------------------------------------------
// SDL init flags
// ---------------------------------------------------------------------------
#define SDL_INIT_VIDEO 0x00000020u

// ---------------------------------------------------------------------------
// SDL window flags
// ---------------------------------------------------------------------------
#define SDL_WINDOW_OPENGL 0x00000002u
#define SDL_WINDOW_SHOWN  0x00000004u

// ---------------------------------------------------------------------------
// SDL window position constants
// ---------------------------------------------------------------------------
#define SDL_WINDOWPOS_CENTERED 0x2FFF0000u

// ---------------------------------------------------------------------------
// SDL_GLattr enum — actual numeric values from SDL_video.h
// ---------------------------------------------------------------------------
enum SDL_GLattr {
    SDL_GL_RED_SIZE                  = 0,
    SDL_GL_GREEN_SIZE                = 1,
    SDL_GL_BLUE_SIZE                 = 2,
    SDL_GL_ALPHA_SIZE                = 3,
    SDL_GL_BUFFER_SIZE               = 4,
    SDL_GL_DOUBLEBUFFER              = 5,
    SDL_GL_DEPTH_SIZE                = 6,
    SDL_GL_STENCIL_SIZE              = 7,
    SDL_GL_ACCUM_RED_SIZE            = 8,
    SDL_GL_ACCUM_GREEN_SIZE          = 9,
    SDL_GL_ACCUM_BLUE_SIZE           = 10,
    SDL_GL_ACCUM_ALPHA_SIZE          = 11,
    SDL_GL_STEREO                    = 12,
    SDL_GL_MULTISAMPLEBUFFERS        = 13,
    SDL_GL_MULTISAMPLESAMPLES        = 14,
    SDL_GL_ACCELERATED_VISUAL        = 15,
    SDL_GL_RETAINED_BACKING          = 16,
    SDL_GL_CONTEXT_MAJOR_VERSION     = 17,
    SDL_GL_CONTEXT_MINOR_VERSION     = 18,
    SDL_GL_CONTEXT_EGL               = 19,
    SDL_GL_CONTEXT_FLAGS             = 20,
    SDL_GL_CONTEXT_PROFILE_MASK      = 21,
    SDL_GL_SHARE_WITH_CURRENT_CONTEXT = 22,
    SDL_GL_FRAMEBUFFER_SRGB_CAPABLE  = 23,
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR  = 24,
    SDL_GL_CONTEXT_RESET_NOTIFICATION = 25,
    SDL_GL_CONTEXT_NO_ERROR          = 26
};

// Context profile mask values
#define SDL_GL_CONTEXT_PROFILE_CORE          0x0001u
#define SDL_GL_CONTEXT_PROFILE_COMPATIBILITY 0x0002u
#define SDL_GL_CONTEXT_PROFILE_ES            0x0004u

// ---------------------------------------------------------------------------
// SDL event types
// ---------------------------------------------------------------------------
#define SDL_QUIT 0x100u

// ---------------------------------------------------------------------------
// SDL_Event — padded to 56 bytes (matches SDL 2.0 ABI on 64-bit)
// ---------------------------------------------------------------------------
union SDL_Event {
    Uint32 type;
    std::uint8_t padding[56];
};

// ---------------------------------------------------------------------------
// Opaque types
// ---------------------------------------------------------------------------
struct SDL_Window {};
typedef struct SDL_Window SDL_Window;
typedef void* SDL_GLContext;

// ---------------------------------------------------------------------------
// SDL function pointer types (extern "C" signatures)
// ---------------------------------------------------------------------------
extern "C" {
    typedef int  (*PFN_SDL_Init)(Uint32 flags);
    typedef void (*PFN_SDL_Quit)(void);
    typedef const char* (*PFN_SDL_GetError)(void);

    typedef SDL_Window* (*PFN_SDL_CreateWindow)(
        const char* title,
        int x, int y,
        int w, int h,
        Uint32 flags);
    typedef void (*PFN_SDL_DestroyWindow)(SDL_Window* window);

    typedef SDL_GLContext (*PFN_SDL_GL_CreateContext)(SDL_Window* window);
    typedef int  (*PFN_SDL_GL_MakeCurrent)(SDL_Window* window, SDL_GLContext context);
    typedef void (*PFN_SDL_GL_DeleteContext)(SDL_GLContext context);
    typedef int  (*PFN_SDL_GL_SetAttribute)(SDL_GLattr attr, int value);
    typedef int  (*PFN_SDL_GL_SetSwapInterval)(int interval);
    typedef void (*PFN_SDL_GL_SwapWindow)(SDL_Window* window);

    typedef int  (*PFN_SDL_PollEvent)(SDL_Event* event);
}

// ---------------------------------------------------------------------------
// SDL2Loader — resolves all SDL2 symbols at runtime via dlopen/dlsym
// ---------------------------------------------------------------------------
namespace SDL2Loader {

// Resolved function pointers (initially nullptr)
inline PFN_SDL_Init              SDL_Init              = nullptr;
inline PFN_SDL_Quit              SDL_Quit              = nullptr;
inline PFN_SDL_GetError          SDL_GetError          = nullptr;
inline PFN_SDL_CreateWindow      SDL_CreateWindow      = nullptr;
inline PFN_SDL_DestroyWindow     SDL_DestroyWindow     = nullptr;
inline PFN_SDL_GL_CreateContext  SDL_GL_CreateContext  = nullptr;
inline PFN_SDL_GL_MakeCurrent    SDL_GL_MakeCurrent    = nullptr;
inline PFN_SDL_GL_DeleteContext  SDL_GL_DeleteContext  = nullptr;
inline PFN_SDL_GL_SetAttribute   SDL_GL_SetAttribute   = nullptr;
inline PFN_SDL_GL_SetSwapInterval SDL_GL_SetSwapInterval = nullptr;
inline PFN_SDL_GL_SwapWindow     SDL_GL_SwapWindow     = nullptr;
inline PFN_SDL_PollEvent         SDL_PollEvent         = nullptr;

// Internal handle to the dlopen'd library
inline void* s_handle = nullptr;

/*
 * Load libSDL2-2.0.so.0 and resolve all function pointers.
 * Returns true on success, false if the library or any symbol cannot be found.
 * Safe to call multiple times — subsequent calls after a successful init
 * return true immediately.
 */
inline bool init() {
    if (s_handle) return true;  // already loaded

    s_handle = dlopen("libSDL2-2.0.so.0", RTLD_LAZY | RTLD_GLOBAL);
    if (!s_handle) {
        return false;
    }

    // Helper macro — resolves one symbol and checks for failure.
    // On failure, dlclose and reset everything.
    #define RESOLVE_SDL(var, name)                                        \
        do {                                                             \
            var = reinterpret_cast<PFN_##name>(dlsym(s_handle, #name));  \
            if (!var) {                                                  \
                dlclose(s_handle);                                       \
                s_handle = nullptr;                                      \
                var = nullptr;                                           \
                return false;                                            \
            }                                                            \
        } while (0)

    RESOLVE_SDL(SDL_Init,              SDL_Init);
    RESOLVE_SDL(SDL_Quit,              SDL_Quit);
    RESOLVE_SDL(SDL_GetError,          SDL_GetError);
    RESOLVE_SDL(SDL_CreateWindow,      SDL_CreateWindow);
    RESOLVE_SDL(SDL_DestroyWindow,     SDL_DestroyWindow);
    RESOLVE_SDL(SDL_GL_CreateContext,  SDL_GL_CreateContext);
    RESOLVE_SDL(SDL_GL_MakeCurrent,    SDL_GL_MakeCurrent);
    RESOLVE_SDL(SDL_GL_DeleteContext,  SDL_GL_DeleteContext);
    RESOLVE_SDL(SDL_GL_SetAttribute,   SDL_GL_SetAttribute);
    RESOLVE_SDL(SDL_GL_SetSwapInterval, SDL_GL_SetSwapInterval);
    RESOLVE_SDL(SDL_GL_SwapWindow,     SDL_GL_SwapWindow);
    RESOLVE_SDL(SDL_PollEvent,         SDL_PollEvent);

    #undef RESOLVE_SDL

    return true;
}

/*
 * Unload the SDL2 shared library. After calling this, all SDL function
 * pointers are invalid and init() must be called again before use.
 */
inline void shutdown() {
    if (s_handle) {
        dlclose(s_handle);
        s_handle = nullptr;
    }
    SDL_Init              = nullptr;
    SDL_Quit              = nullptr;
    SDL_GetError          = nullptr;
    SDL_CreateWindow      = nullptr;
    SDL_DestroyWindow     = nullptr;
    SDL_GL_CreateContext  = nullptr;
    SDL_GL_MakeCurrent    = nullptr;
    SDL_GL_DeleteContext  = nullptr;
    SDL_GL_SetAttribute   = nullptr;
    SDL_GL_SetSwapInterval = nullptr;
    SDL_GL_SwapWindow     = nullptr;
    SDL_PollEvent         = nullptr;
}

} // namespace SDL2Loader

#endif // MKWII_PORT_SDL2_STUB_H