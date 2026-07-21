// =============================================================================
// input.cpp — Input Manager implementation
// MAESTRO Phase 7, Milestone M5: Basic Input — keyboard + gamepad
// =============================================================================

#include "platform/input.hpp"
#include <cstdio>
#include <cmath>

#ifdef HAS_SDL2
#include "platform/sdl2_stub.h"
#endif

namespace Platform {

// =============================================================================
// Static member storage
// =============================================================================
InputState    InputManager::s_state;
const u8*      InputManager::s_keyState       = nullptr;
int           InputManager::s_numKeys         = 0;
void*         InputManager::s_controller      = nullptr;
bool          InputManager::s_controllerOpen  = false;

// =============================================================================
// initialize
// =============================================================================

bool InputManager::initialize() {
#ifdef HAS_SDL2
    if (SDL2Loader::SDL_GetKeyboardState) {
        s_keyState = SDL2Loader::SDL_GetKeyboardState(&s_numKeys);
        if (s_keyState) {
            printf("  Input: Keyboard state acquired (%d scancodes)\n", s_numKeys);
        }
    }

    // Try to open a game controller if one is available
    openController();
#else
    printf("  Input: Stub mode — no keyboard or gamepad input\n");
#endif
    return true;
}

// =============================================================================
// shutdown
// =============================================================================

void InputManager::shutdown() {
#ifdef HAS_SDL2
    closeController();
    s_keyState = nullptr;
    s_numKeys  = 0;
#endif
    s_state = InputState();
    printf("  Input: Shutdown complete\n");
}

// =============================================================================
// poll — Called once per frame
// =============================================================================

void InputManager::poll() {
    // Start fresh each frame
    s_state = InputState();

#ifdef HAS_SDL2
    pollKeyboard(s_state);
    pollController(s_state);
#endif
}

// =============================================================================
// pollKeyboard — Read WASD / Arrow keys from SDL key state array
// =============================================================================

#ifdef HAS_SDL2
void InputManager::pollKeyboard(InputState& out) {
    if (!s_keyState) return;

    // Helper: check if a scancode is pressed, with bounds check
    auto isDown = [&](int scancode) -> bool {
        if (scancode >= 0 && scancode < s_numKeys) {
            return s_keyState[scancode] != 0;
        }
        return false;
    };

    // Accelerate: W or Up arrow
    if (isDown(SDL_SCANCODE_W) || isDown(SDL_SCANCODE_UP)) {
        out.accelerate = 1.0f;
    }

    // Brake / Reverse: S or Down arrow
    if (isDown(SDL_SCANCODE_S) || isDown(SDL_SCANCODE_DOWN)) {
        out.brake = 1.0f;
    }

    // Steer: A/D or Left/Right arrows
    f32 steerRaw = 0.0f;
    if (isDown(SDL_SCANCODE_A) || isDown(SDL_SCANCODE_LEFT))  steerRaw -= 1.0f;
    if (isDown(SDL_SCANCODE_D) || isDown(SDL_SCANCODE_RIGHT)) steerRaw += 1.0f;
    // Clamp to [-1, +1]
    if (steerRaw < -1.0f) steerRaw = -1.0f;
    if (steerRaw >  1.0f) steerRaw =  1.0f;
    out.steer = steerRaw;

    // Drift: Left Shift
    out.drift = isDown(SDL_SCANCODE_LSHIFT) || isDown(SDL_SCANCODE_RSHIFT);

    // Item use: Space
    out.item = isDown(SDL_SCANCODE_SPACE);

    // Quit: Escape
    out.quit = isDown(SDL_SCANCODE_ESCAPE);
}
#endif

// =============================================================================
// pollController — Read game controller axes and buttons
// =============================================================================

#ifdef HAS_SDL2
void InputManager::pollController(InputState& out) {
    if (!s_controllerOpen || !s_controller) return;

    // Read left stick X for steering (SDL_CONTROLLER_AXIS_LEFTX = 0)
    if (SDL2Loader::SDL_GameControllerGetAxis) {
        f32 axisX = SDL2Loader::SDL_GameControllerGetAxis(
                        static_cast<SDL_GameController*>(s_controller),
                        SDL_CONTROLLER_AXIS_LEFTX);

        // SDL returns -32768..32767; normalize to -1..+1
        axisX /= 32767.0f;
        if (axisX < -1.0f) axisX = -1.0f;

        // Apply deadzone
        if (axisX > -SDL_CONTROLLER_AXIS_DEADZONE &&
            axisX <  SDL_CONTROLLER_AXIS_DEADZONE) {
            axisX = 0.0f;
        }

        // Gamepad steering overrides keyboard if there's meaningful input
        if (axisX != 0.0f) {
            out.steer = axisX;
        }
    }

    // Read triggers for accel/brake
    if (SDL2Loader::SDL_GameControllerGetAxis) {
        // Left trigger = accelerate (SDL_CONTROLLER_AXIS_TRIGGERLEFT = 4)
        f32 triggerL = SDL2Loader::SDL_GameControllerGetAxis(
                           static_cast<SDL_GameController*>(s_controller),
                           SDL_CONTROLLER_AXIS_TRIGGERLEFT);
        triggerL /= 32767.0f;
        if (triggerL < 0.0f) triggerL = 0.0f;
        if (triggerL > 1.0f) triggerL = 1.0f;

        // Right trigger = brake (SDL_CONTROLLER_AXIS_TRIGGERRIGHT = 5)
        f32 triggerR = SDL2Loader::SDL_GameControllerGetAxis(
                           static_cast<SDL_GameController*>(s_controller),
                           SDL_CONTROLLER_AXIS_TRIGGERRIGHT);
        triggerR /= 32767.0f;
        if (triggerR < 0.0f) triggerR = 0.0f;
        if (triggerR > 1.0f) triggerR = 1.0f;

        if (triggerL > 0.0f) out.accelerate = triggerL;
        if (triggerR > 0.0f) out.brake = triggerR;
    }

    // Read buttons: A=accel, B=brake
    if (SDL2Loader::SDL_GameControllerGetButton) {
        // A button = accelerate
        if (SDL2Loader::SDL_GameControllerGetButton(
                static_cast<SDL_GameController*>(s_controller),
                SDL_CONTROLLER_BUTTON_A)) {
            if (out.accelerate < 1.0f) out.accelerate = 1.0f;
        }
        // B button = brake
        if (SDL2Loader::SDL_GameControllerGetButton(
                static_cast<SDL_GameController*>(s_controller),
                SDL_CONTROLLER_BUTTON_B)) {
            if (out.brake < 1.0f) out.brake = 1.0f;
        }
        // Start = quit
        if (SDL2Loader::SDL_GameControllerGetButton(
                static_cast<SDL_GameController*>(s_controller),
                SDL_CONTROLLER_BUTTON_START)) {
            out.quit = true;
        }
    }
}
#endif

// =============================================================================
// openController — Try to open the first available game controller
// =============================================================================

#ifdef HAS_SDL2
void InputManager::openController() {
    if (!SDL2Loader::SDL_NumJoysticks ||
        !SDL2Loader::SDL_IsGameController ||
        !SDL2Loader::SDL_GameControllerOpen) {
        return;
    }

    int numJoysticks = SDL2Loader::SDL_NumJoysticks();
    for (int i = 0; i < numJoysticks; i++) {
        if (SDL2Loader::SDL_IsGameController(i)) {
            s_controller = static_cast<void*>(
                SDL2Loader::SDL_GameControllerOpen(i));
            if (s_controller) {
                s_controllerOpen = true;
                const char* name = "(unknown)";
                if (SDL2Loader::SDL_GameControllerName) {
                    name = SDL2Loader::SDL_GameControllerName(
                        static_cast<SDL_GameController*>(s_controller));
                }
                printf("  Input: Game controller opened: %s\n", name);
                return;
            }
        }
    }
    if (numJoysticks > 0) {
        printf("  Input: %d joystick(s) detected but none are game controllers\n",
               numJoysticks);
    }
}
#endif

// =============================================================================
// closeController — Release game controller resources
// =============================================================================

#ifdef HAS_SDL2
void InputManager::closeController() {
    if (s_controllerOpen && s_controller) {
        if (SDL2Loader::SDL_GameControllerClose) {
            SDL2Loader::SDL_GameControllerClose(
                static_cast<SDL_GameController*>(s_controller));
        }
        s_controller = nullptr;
        s_controllerOpen = false;
    }
}
#endif

// =============================================================================
// getState / getControllerName
// =============================================================================

const InputState& InputManager::getState() {
    return s_state;
}

const char* InputManager::getControllerName() {
#ifdef HAS_SDL2
    if (s_controllerOpen && s_controller && SDL2Loader::SDL_GameControllerName) {
        return SDL2Loader::SDL_GameControllerName(
            static_cast<SDL_GameController*>(s_controller));
    }
#endif
    return nullptr;
}

} // namespace Platform
