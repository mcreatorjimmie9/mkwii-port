#pragma once
// pad.hpp — Wii GameCube controller (PAD) and Wii Remote (KPAD/WPAD) shims
// MKWii uses KPAD (the Wii Remote library built on top of WPAD) as its
// primary input, with PAD (GameCube controller) as a secondary/legacy input.
// On PC, all input functions return safe defaults (no buttons pressed, centered sticks).

#include "../rk_types.h"
#include <cstring>

// ============================================================================
// PAD (GameCube Controller) types
// ============================================================================

// PAD error codes (in PADStatus::err)
enum {
    PAD_ERR_NONE        = 0,   // No error
    PAD_ERR_NO_CONTROLLER = -1, // No controller connected
    PAD_ERR_TRANSFER    = -2,  // Transfer error
    PAD_ERR_NOT_READY   = -3,  // Controller not ready
    PAD_ERR_OVERRUN     = -4,  // Overrun
};

// PADStatus — status of a single GameCube controller.
// Matches the Wii SDK layout (0x0C bytes, padded to 0x0C for arrays).
typedef struct PADStatus {
    u16 button;       // 0x00: button state bitmask
    s8  stickX;       // 0x02: main stick X (-128..127)
    s8  stickY;       // 0x03: main stick Y (-128..127)
    s8  substickX;    // 0x04: C-stick X (-128..127)
    s8  substickY;    // 0x05: C-stick Y (-128..127)
    u8  triggerL;     // 0x06: left trigger analog (0..255)
    u8  triggerR;     // 0x07: right trigger analog (0..255)
    u8  analogA;      // 0x08: A button analog
    u8  analogB;      // 0x09: B button analog
    s8  err;          // 0x0A: error code
} PADStatus;

// PADClampRegion — calibration data for stick clamping.
typedef struct PADClampRegion {
    u8 unk_00;
    u8 unk_01;
    s8 stickMin;
    s8 unk_03;
    s8 unk_04;
    s8 substickMin;
    s8 unk_06;
    s8 unk_07;
    s8 stickRad;
    s8 substickRad;
} PADClampRegion;

// PAD button bitmasks (standard GameCube controller)
// Some of these are in rk_types.h already; we add the rest here.
#ifndef PAD_BUTTON_A
#define PAD_BUTTON_A      0x0100
#endif
#ifndef PAD_BUTTON_B
#define PAD_BUTTON_B      0x0200
#endif
#ifndef PAD_BUTTON_X
#define PAD_BUTTON_X      0x0400
#endif
#ifndef PAD_BUTTON_Y
#define PAD_BUTTON_Y      0x0800
#endif
#ifndef PAD_BUTTON_START
#define PAD_BUTTON_START  0x1000
#endif
#ifndef PAD_BUTTON_L
#define PAD_BUTTON_L      0x0020
#endif
#ifndef PAD_BUTTON_R
#define PAD_BUTTON_R      0x0010
#endif
#ifndef PAD_BUTTON_Z
#define PAD_BUTTON_Z      0x2000
#endif
#ifndef PAD_BUTTON_UP
#define PAD_BUTTON_UP     0x0001
#endif
#ifndef PAD_BUTTON_DOWN
#define PAD_BUTTON_DOWN   0x0002
#endif
#ifndef PAD_BUTTON_LEFT
#define PAD_BUTTON_LEFT   0x0004
#endif
#ifndef PAD_BUTTON_RIGHT
#define PAD_BUTTON_RIGHT  0x0008
#endif

// PAD trigger / stick button masks
#define PAD_TRIGGER_L     0x0020
#define PAD_TRIGGER_R     0x0010
#define PAD_STICK_X       0x0080
#define PAD_STICK_Y       0x0040

// PAD specification (controller protocol version)
enum {
    PAD_SPEC_0 = 0,  // Original spec
    PAD_SPEC_1 = 1,  // Type 1
    PAD_SPEC_2 = 2,  // Type 2 (default)
};

// PAD motor commands (for rumble)
enum {
    PAD_MOTOR_STOP     = 0,
    PAD_MOTOR_RUMBLE   = 1,
    PAD_MOTOR_STOP_HARD = 2,
};

// PAD sampling callback type
typedef void (*PADSamplingCallback)(void);

// ============================================================================
// WPAD (Wii Remote) types — minimal stubs
// ============================================================================

// WPAD button bitmasks
enum WPADButton {
    WPAD_BUTTON_A      = 0x0001,
    WPAD_BUTTON_B      = 0x0002,
    WPAD_BUTTON_1      = 0x0010,
    WPAD_BUTTON_2      = 0x0020,
    WPAD_BUTTON_PLUS   = 0x0100,
    WPAD_BUTTON_MINUS  = 0x0200,
    WPAD_BUTTON_HOME   = 0x0800,
    WPAD_BUTTON_LEFT   = 0x10000,
    WPAD_BUTTON_RIGHT  = 0x20000,
    WPAD_BUTTON_DOWN   = 0x40000,
    WPAD_BUTTON_UP     = 0x80000,
};

// WPADData / WPADStatus — simplified Wii Remote data.
typedef struct WPADStatus {
    u16 button;       // button state
    u8  err;          // error code
    s8  accelX;       // accelerometer X
    s8  accelY;       // accelerometer Y
    s8  accelZ;       // accelerometer Z
    u8  ir0Valid;     // IR point 0 valid
    u16 ir0X;         // IR point 0 X
    u16 ir0Y;         // IR point 0 Y
    u8  ir1Valid;     // IR point 1 valid
    u16 ir1X;         // IR point 1 X
    u16 ir1Y;         // IR point 1 Y
    u8  expansion;    // expansion type
    u8  nunchukStickX;  // nunchuk stick X
    u8  nunchukStickY;  // nunchuk stick Y
    u8  nunchukBtnC;    // nunchuk C button
    u8  nunchukBtnZ;    // nunchuk Z button
} WPADStatus;

// ============================================================================
// KPAD (High-level Wii Remote library) types
// ============================================================================

// KPADStatus — high-level input status used by the game.
typedef struct KPADStatus {
    WPADStatus core;  // raw WPAD data
    // Additional KPAD-specific fields would go here.
    char _extra[0x40 - sizeof(WPADStatus)];
} KPADStatus;

// ============================================================================
// PAD function stubs
// ============================================================================

extern "C" {

// PADInit — initializes the GameCube controller subsystem.
inline int PADInit(void) { return 0; }

// PADRead — reads the current status of all 4 controllers.
// Status array must have room for 4 PADStatus entries.
// Returns a bitmask of connected controllers.
inline u32 PADRead(PADStatus* status) {
    if (status) {
        std::memset(status, 0, sizeof(PADStatus) * 4);
        for (int i = 0; i < 4; i++) {
            status[i].err = PAD_ERR_NO_CONTROLLER;
        }
    }
    return 0; // no controllers connected
}

// PADReset — resets the controller subsystem. mask selects which channels.
inline int PADReset(u32 mask) { (void)mask; return 0; }

// PADRecalibrate — recalibrates controllers. mask selects channels.
inline int PADRecalibrate(u32 mask) { (void)mask; return 0; }

// PADControlMotor — controls the rumble motor.
// chan: controller channel (0-3), command: PAD_MOTOR_*
inline void PADControlMotor(s32 chan, u32 command) {
    (void)chan; (void)command;
}

// PADSetSpec — sets the controller protocol version.
inline void PADSetSpec(u32 spec) { (void)spec; }

// PADGetSpec — gets the current controller protocol version.
inline u32 PADGetSpec(void) { return PAD_SPEC_2; }

// PADClampCircle — clamps stick values to the calibrated range.
inline void PADClampCircle(PADStatus* status) {
    // No-op: sticks are already at 0 on PC
    (void)status;
}

// PADClampCircle2 — same but with an extra type parameter.
inline void PADClampCircle2(PADStatus* status, u32 type) {
    (void)status; (void)type;
}

// PADSetSamplingCallback — sets the VBlank sampling callback.
inline PADSamplingCallback PADSetSamplingCallback(PADSamplingCallback cb) {
    (void)cb;
    return nullptr;
}

// PADOnReset — called on system reset to reinitialize controllers.
inline int PAD_OnReset(int param) { (void)param; return 0; }

// PAD_SamplingHandler — called during VBlank to sample controllers.
// Declared as extern in the decompiled code.
// (This is an internal function, not normally called by game code directly.)
// extern void PAD_SamplingHandler(s32 chan, struct OSContext* ctx);

// ============================================================================
// WPAD / KPAD function stubs
// ============================================================================

// WPADInit — initializes the Wii Remote subsystem.
inline void WPADInit(void) {}

// WPADRead — reads data from a Wii Remote.
// Returns the number of valid data entries.
inline s32 WPADRead(s32 chan, WPADStatus* data, u32 count) {
    (void)chan; (void)data; (void)count;
    return 0;
}

// KPADRead — high-level read of KPAD status (used by game code).
// Returns the number of valid status entries.
inline s32 KPADRead(s32 chan, KPADStatus* status, u32 count) {
    (void)chan;
    if (status && count > 0) {
        std::memset(status, 0, sizeof(KPADStatus) * count);
    }
    return 0; // no remotes connected
}

} // extern "C"