#pragma once
// =============================================================================
// input.hpp — Input Manager for Keyboard and Gamepad
// MAESTRO Phase 7, Milestone M5: Basic Input
// =============================================================================
//
// Polls SDL2 for keyboard and game controller state each frame.  Provides a
// unified InputState struct with normalized stick values (-1..+1) and button
// booleans that the kart movement code can consume.
//
// Keyboard mapping (WASD / Arrow keys):
//   W / Up    = Accelerate
//   S / Down  = Brake / Reverse
//   A / Left  = Steer left
//   D / Right = Steer right
//   Space     = Use item (future)
//   LShift    = Drift (future)
//   Escape    = Quit
//
// Gamepad mapping (Xbox-style controller):
//   Left trigger  = Accelerate (analog)
//   Right trigger = Brake (analog)
//   Left stick X  = Steer (analog)
//   A button      = Accelerate (digital)
//   B button      = Brake (digital)
//   Start         = Quit
//
// Dependencies: rk_types.h (for f32, bool, u8)
// Optional:     sdl2_stub.h (only when HAS_SDL2 is defined)
// =============================================================================

#include <rk_types.h>

namespace Platform {

// =============================================================================
// InputState — Snapshot of all kart-relevant inputs for one frame
// =============================================================================
// All values are normalized: stick -1..+1, triggers 0..+1, buttons bool.
// Updated once per frame by InputManager::poll().
// =============================================================================
struct InputState {
    f32  steer;          // -1.0 (left) .. +1.0 (right)
    f32  accelerate;     // 0.0 .. 1.0  (gas pedal)
    f32  brake;          // 0.0 .. 1.0  (brake pedal)
    bool drift;          // True when drift/handbrake is held
    bool item;           // True when item-use is pressed
    bool enter;          // True when Enter/Return is pressed
    bool quit;           // True when the user wants to exit

    InputState()
        : steer(0.0f)
        , accelerate(0.0f)
        , brake(0.0f)
        , drift(false)
        , item(false)
        , enter(false)
        , quit(false) {}
};

// =============================================================================
// InputManager — Reads keyboard + game controller each frame
// =============================================================================
// Singleton-style: call initialize() once after SDL2 is loaded, then poll()
// each frame.  The latest InputState is available via getState().
//
// In stub mode (no SDL2), poll() is a no-op and all inputs remain zero/false.
// =============================================================================
class InputManager {
public:
    /// Initialize the input subsystem.
    /// In SDL2 mode: queries keyboard state array, opens game controllers.
    /// In stub mode: no-op (returns true).
    static bool initialize();

    /// Shut down the input subsystem, release game controller resources.
    static void shutdown();

    /// Poll all input devices and update the cached InputState.
    /// Should be called once per frame, after Window::pollEvents().
    static void poll();

    /// Read-only access to the most recently polled input state.
    static const InputState& getState();

    /// Get the human-readable name of the active game controller, or nullptr.
    static const char* getControllerName();

private:
    InputManager() = delete;
    ~InputManager() = delete;

    /// Read keyboard state and merge into out.
    static void pollKeyboard(InputState& out);

    /// Read game controller state and merge into out.
    static void pollController(InputState& out);

    /// Try to open a game controller (called on init and hot-plug events).
    static void openController();

    /// Close the currently open game controller.
    static void closeController();

    // -- Cached state ---------------------------------------------------------
    static InputState s_state;

    // -- Keyboard state pointer (from SDL_GetKeyboardState) --------------------
    static const u8* s_keyState;
    static int       s_numKeys;

    // -- Game controller handle ------------------------------------------------
    static void* s_controller;  // SDL_GameController* as void*
    static bool  s_controllerOpen;
};

} // namespace Platform
