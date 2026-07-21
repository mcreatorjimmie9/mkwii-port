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
#define SDL_INIT_VIDEO    0x00000020u
#define SDL_INIT_JOYSTICK 0x00000200u
#define SDL_INIT_GAMECONTROLLER 0x00001000u

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
#define SDL_QUIT             0x100u
#define SDL_KEYDOWN          0x300u
#define SDL_KEYUP            0x301u
#define SDL_JOYDEVICEADDED  0x606u
#define SDL_JOYDEVICEREMOVED 0x607u
#define SDL_CONTROLLERDEVICEADDED    0x650u
#define SDL_CONTROLLERDEVICEREMOVED  0x651u

// ---------------------------------------------------------------------------
// SDL_Event — padded to 56 bytes (matches SDL 2.0 ABI on 64-bit)
// ---------------------------------------------------------------------------
// Keyboard event layout (first 4 bytes = type, then key info)
struct SDL_KeyboardEvent {
    Uint32 type;        // SDL_KEYDOWN or SDL_KEYUP
    Uint32 timestamp;
    Uint32 windowID;
    std::uint8_t state;  // SDL_PRESSED or SDL_RELEASED
    std::uint8_t repeat;
    std::uint8_t padding2[2];
    union {
        // SDL uses a keysym struct; we only need the scancode
        struct {
            std::int32_t scancode;
            std::int32_t keycode;  // SDL virtual key code
            std::uint16_t mod;
            std::uint32_t unused;
        } keysym;
    };
};

union SDL_Event {
    Uint32 type;
    SDL_KeyboardEvent key;
    std::uint8_t padding[56];
};

#define SDL_PRESSED  1
#define SDL_RELEASED 0

// SDL_SCANCODE — minimal set for kart controls
#define SDL_SCANCODE_A       4
#define SDL_SCANCODE_D       7
#define SDL_SCANCODE_S      22
#define SDL_SCANCODE_W      26
#define SDL_SCANCODE_UP     82
#define SDL_SCANCODE_DOWN   85
#define SDL_SCANCODE_LEFT   80
#define SDL_SCANCODE_RIGHT  79
#define SDL_SCANCODE_SPACE  62
#define SDL_SCANCODE_LSHIFT 42
#define SDL_SCANCODE_RSHIFT 54
#define SDL_SCANCODE_ESCAPE 41
#define SDL_SCANCODE_RETURN 40
#define SDL_SCANCODE_LCTRL  29
#define SDL_SCANCODE_RCTRL  229
#define SDL_SCANCODE_NUM_SCANCODES 512

// SDLK codes (virtual key codes)
#define SDLK_ESCAPE 27
#define SDLK_RETURN 13
#define SDLK_SPACE  32
#define SDLK_LSHIFT 1073742049
#define SDLK_RSHIFT 1073742053
#define SDLK_LCTRL  1073742041
#define SDLK_RCTRL  1073742297

// SDL_Joystick axis constants
#define SDL_JOYSTICK_AXIS_MAX  32767
#define SDL_JOYSTICK_AXIS_MIN -32768
#define SDL_JOYSTICK_AXIS_THRESHOLD 8000

// SDL_CONTROLLER_AXIS constants
#define SDL_CONTROLLER_AXIS_LEFTX        0
#define SDL_CONTROLLER_AXIS_LEFTY        1
#define SDL_CONTROLLER_AXIS_RIGHTX       2
#define SDL_CONTROLLER_AXIS_RIGHTY       3
#define SDL_CONTROLLER_AXIS_TRIGGERLEFT  4
#define SDL_CONTROLLER_AXIS_TRIGGERRIGHT 5
#define SDL_CONTROLLER_AXIS_MAX          1.0f
#define SDL_CONTROLLER_AXIS_MIN          -1.0f
#define SDL_CONTROLLER_AXIS_DEADZONE     0.2f

// SDL_CONTROLLER_BUTTON constants
#define SDL_CONTROLLER_BUTTON_A               0
#define SDL_CONTROLLER_BUTTON_B               1
#define SDL_CONTROLLER_BUTTON_X               2
#define SDL_CONTROLLER_BUTTON_Y               3
#define SDL_CONTROLLER_BUTTON_BACK            4
#define SDL_CONTROLLER_BUTTON_GUIDE           5
#define SDL_CONTROLLER_BUTTON_START           6
#define SDL_CONTROLLER_BUTTON_LEFTSTICK       7
#define SDL_CONTROLLER_BUTTON_RIGHTSTICK      8
#define SDL_CONTROLLER_BUTTON_LEFTSHOULDER     9
#define SDL_CONTROLLER_BUTTON_RIGHTSHOULDER   10
#define SDL_CONTROLLER_BUTTON_DPAD_UP         11
#define SDL_CONTROLLER_BUTTON_DPAD_DOWN        12
#define SDL_CONTROLLER_BUTTON_DPAD_LEFT       13
#define SDL_CONTROLLER_BUTTON_DPAD_RIGHT      14
#define SDL_CONTROLLER_BUTTON_MAX             15

// ---------------------------------------------------------------------------
// Opaque types
// ---------------------------------------------------------------------------
struct SDL_Window {};
typedef struct SDL_Window SDL_Window;
typedef void* SDL_GLContext;
struct SDL_Joystick {};
typedef struct SDL_Joystick SDL_Joystick;
struct SDL_GameController {};
typedef struct SDL_GameController SDL_GameController;

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

    // Keyboard state
    typedef const std::uint8_t* (*PFN_SDL_GetKeyboardState)(int* numkeys);
    typedef int  (*PFN_SDL_GetScancodeFromKey)(int key);

    // Joystick
    typedef int  (*PFN_SDL_NumJoysticks)(void);
    typedef SDL_Joystick* (*PFN_SDL_JoystickOpen)(int device_index);
    typedef void (*PFN_SDL_JoystickClose)(SDL_Joystick* joystick);
    typedef int  (*PFN_SDL_JoystickNumAxes)(SDL_Joystick* joystick);
    typedef int  (*PFN_SDL_JoystickNumButtons)(SDL_Joystick* joystick);
    typedef Sint32 (*PFN_SDL_JoystickGetAxis)(SDL_Joystick* joystick, int axis);
    typedef std::uint8_t (*PFN_SDL_JoystickGetButton)(SDL_Joystick* joystick, int button);
    typedef const char* (*PFN_SDL_JoystickName)(int device_index);
    typedef int  (*PFN_SDL_JoystickGetAttached)(SDL_Joystick* joystick);
    typedef int  (*PFN_SDL_JoystickIndex)(SDL_Joystick* joystick);

    // Game Controller
    typedef int  (*PFN_SDL_GameControllerAddMappingsFromFile)(const char* rwops);
    typedef int  (*PFN_SDL_IsGameController)(int joystick_index);
    typedef SDL_GameController* (*PFN_SDL_GameControllerOpen)(int joystick_index);
    typedef void (*PFN_SDL_GameControllerClose)(SDL_GameController* gamecontroller);
    typedef int  (*PFN_SDL_GameControllerGetAttached)(SDL_GameController* gamecontroller);
    typedef SDL_Joystick* (*PFN_SDL_GameControllerGetJoystick)(SDL_GameController* gamecontroller);
    typedef f32 (*PFN_SDL_GameControllerGetAxis)(SDL_GameController* gamecontroller, int axis);
    typedef std::uint8_t (*PFN_SDL_GameControllerGetButton)(SDL_GameController* gamecontroller, int button);
    typedef const char* (*PFN_SDL_GameControllerName)(SDL_GameController* gamecontroller);
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
inline PFN_SDL_PollEvent              SDL_PollEvent              = nullptr;
inline PFN_SDL_GetKeyboardState      SDL_GetKeyboardState      = nullptr;
inline PFN_SDL_GetScancodeFromKey    SDL_GetScancodeFromKey    = nullptr;
inline PFN_SDL_NumJoysticks           SDL_NumJoysticks           = nullptr;
inline PFN_SDL_JoystickOpen           SDL_JoystickOpen           = nullptr;
inline PFN_SDL_JoystickClose          SDL_JoystickClose          = nullptr;
inline PFN_SDL_JoystickNumAxes         SDL_JoystickNumAxes         = nullptr;
inline PFN_SDL_JoystickNumButtons      SDL_JoystickNumButtons      = nullptr;
inline PFN_SDL_JoystickGetAxis         SDL_JoystickGetAxis         = nullptr;
inline PFN_SDL_JoystickGetButton       SDL_JoystickGetButton       = nullptr;
inline PFN_SDL_JoystickName            SDL_JoystickName            = nullptr;
inline PFN_SDL_JoystickGetAttached     SDL_JoystickGetAttached     = nullptr;
inline PFN_SDL_JoystickIndex           SDL_JoystickIndex           = nullptr;
inline PFN_SDL_GameControllerAddMappingsFromFile SDL_GameControllerAddMappingsFromFile = nullptr;
inline PFN_SDL_IsGameController        SDL_IsGameController        = nullptr;
inline PFN_SDL_GameControllerOpen      SDL_GameControllerOpen      = nullptr;
inline PFN_SDL_GameControllerClose     SDL_GameControllerClose     = nullptr;
inline PFN_SDL_GameControllerGetAttached SDL_GameControllerGetAttached = nullptr;
inline PFN_SDL_GameControllerGetJoystick SDL_GameControllerGetJoystick = nullptr;
inline PFN_SDL_GameControllerGetAxis   SDL_GameControllerGetAxis   = nullptr;
inline PFN_SDL_GameControllerGetButton SDL_GameControllerGetButton = nullptr;
inline PFN_SDL_GameControllerName      SDL_GameControllerName      = nullptr;

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
    RESOLVE_SDL(SDL_PollEvent,              SDL_PollEvent);
    RESOLVE_SDL(SDL_GetKeyboardState,      SDL_GetKeyboardState);
    RESOLVE_SDL(SDL_GetScancodeFromKey,    SDL_GetScancodeFromKey);
    RESOLVE_SDL(SDL_NumJoysticks,           SDL_NumJoysticks);
    RESOLVE_SDL(SDL_JoystickOpen,           SDL_JoystickOpen);
    RESOLVE_SDL(SDL_JoystickClose,          SDL_JoystickClose);
    RESOLVE_SDL(SDL_JoystickNumAxes,         SDL_JoystickNumAxes);
    RESOLVE_SDL(SDL_JoystickNumButtons,      SDL_JoystickNumButtons);
    RESOLVE_SDL(SDL_JoystickGetAxis,         SDL_JoystickGetAxis);
    RESOLVE_SDL(SDL_JoystickGetButton,       SDL_JoystickGetButton);
    RESOLVE_SDL(SDL_JoystickName,            SDL_JoystickName);
    RESOLVE_SDL(SDL_JoystickGetAttached,     SDL_JoystickGetAttached);
    RESOLVE_SDL(SDL_JoystickIndex,           SDL_JoystickIndex);
    RESOLVE_SDL(SDL_GameControllerAddMappingsFromFile, SDL_GameControllerAddMappingsFromFile);
    RESOLVE_SDL(SDL_IsGameController,        SDL_IsGameController);
    RESOLVE_SDL(SDL_GameControllerOpen,      SDL_GameControllerOpen);
    RESOLVE_SDL(SDL_GameControllerClose,     SDL_GameControllerClose);
    RESOLVE_SDL(SDL_GameControllerGetAttached, SDL_GameControllerGetAttached);
    RESOLVE_SDL(SDL_GameControllerGetJoystick, SDL_GameControllerGetJoystick);
    RESOLVE_SDL(SDL_GameControllerGetAxis,   SDL_GameControllerGetAxis);
    RESOLVE_SDL(SDL_GameControllerGetButton, SDL_GameControllerGetButton);
    RESOLVE_SDL(SDL_GameControllerName,      SDL_GameControllerName);

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
    SDL_PollEvent              = nullptr;
    SDL_GetKeyboardState      = nullptr;
    SDL_GetScancodeFromKey    = nullptr;
    SDL_NumJoysticks           = nullptr;
    SDL_JoystickOpen           = nullptr;
    SDL_JoystickClose          = nullptr;
    SDL_JoystickNumAxes         = nullptr;
    SDL_JoystickNumButtons      = nullptr;
    SDL_JoystickGetAxis         = nullptr;
    SDL_JoystickGetButton       = nullptr;
    SDL_JoystickName            = nullptr;
    SDL_JoystickGetAttached     = nullptr;
    SDL_JoystickIndex           = nullptr;
    SDL_GameControllerAddMappingsFromFile = nullptr;
    SDL_IsGameController        = nullptr;
    SDL_GameControllerOpen      = nullptr;
    SDL_GameControllerClose     = nullptr;
    SDL_GameControllerGetAttached = nullptr;
    SDL_GameControllerGetJoystick = nullptr;
    SDL_GameControllerGetAxis   = nullptr;
    SDL_GameControllerGetButton = nullptr;
    SDL_GameControllerName      = nullptr;
}

} // namespace SDL2Loader

#endif // MKWII_PORT_SDL2_STUB_H