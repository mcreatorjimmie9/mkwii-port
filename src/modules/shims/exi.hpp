#pragma once
// exi.hpp — Wii EXI (External Interface) bus shims
// The EXI bus connects to memory cards (Slot A/B), the RTC, and other
// peripherals. MKWii uses it for memory card save data.
// On PC, all operations are no-ops or return safe defaults.

#include "../rk_types.h"
#include <cstring>

// EXI device IDs
enum {
    EXI_DEVICE_0 = 0,
    EXI_DEVICE_1 = 1,
    EXI_DEVICE_2 = 2,
};

// EXI channels
enum {
    EXI_CHANNEL_0 = 0,  // Slot A / Memory Card A
    EXI_CHANNEL_1 = 1,  // Slot B / Memory Card B
    EXI_CHANNEL_2 = 2,  // RTC / I2C / SPI
};

// EXI return codes
enum {
    EXI_RESULT_SUCCESS = 0,
    EXI_RESULT_FAIL    = -1,
    EXI_RESULT_BUSY    = -2,
};

// EXI transfer directions
enum {
    EXI_READ  = 0,
    EXI_WRITE = 1,
    EXI_READ_WRITE = 2,
};

// Callback type for async EXI operations.
typedef void (*EXICallback)(s32 result);

extern "C" {

// EXIInit — initializes the EXI bus subsystem.
inline void EXIInit(void) {}

// EXIGetID — reads the device ID from an EXI channel.
// Returns TRUE if a device was found and its ID was read.
// On PC: no devices, return FALSE.
inline BOOL EXIGetID(s32 channel, u32 device, u32* id) {
    (void)channel; (void)device;
    if (id) *id = 0xFFFFFFFF; // no device present
    return FALSE;
}

// EXIAttach — attaches (enables) an EXI device.
inline BOOL EXIAttach(s32 channel, u32 device) {
    (void)channel; (void)device;
    return FALSE; // no hardware
}

// EXIDetach — detaches an EXI device.
inline BOOL EXIDetach(s32 channel, u32 device) {
    (void)channel; (void)device;
    return TRUE;
}

// EXIImm — performs an immediate (synchronous) EXI transfer.
// Writes/reads length bytes from/to the data buffer.
inline BOOL EXIImm(s32 channel, void* data, u32 length, u32 direction,
                   EXICallback callback) {
    (void)channel; (void)data; (void)length; (void)direction;
    if (callback) callback(EXI_RESULT_SUCCESS);
    return TRUE;
}

// EXIImmEx — extended immediate transfer with a separate command buffer.
inline BOOL EXIImmEx(s32 channel, void* buf, u32 len, u32 mode) {
    (void)channel; (void)buf; (void)len; (void)mode;
    return TRUE;
}

// EXISync — waits for a previously issued async transfer to complete.
inline BOOL EXISync(s32 channel) {
    (void)channel;
    return TRUE;
}

// EXILock — acquires exclusive access to an EXI channel.
inline BOOL EXILock(s32 channel, u32 device, void* callback) {
    (void)channel; (void)device; (void)callback;
    return FALSE; // no hardware to lock
}

// EXIUnlock — releases exclusive access to an EXI channel.
inline BOOL EXIUnlock(s32 channel) {
    (void)channel;
    return TRUE;
}

// EXISelect — selects a device on an EXI channel for communication.
inline BOOL EXISelect(s32 channel, u32 device, u32 freq) {
    (void)channel; (void)device; (void)freq;
    return FALSE;
}

// EXIDeselect — deselects the current device on an EXI channel.
inline BOOL EXIDeselect(s32 channel) {
    (void)channel;
    return TRUE;
}

// EXIProbe — checks if a device is present on an EXI channel.
inline BOOL EXIProbe(s32 channel) {
    (void)channel;
    return FALSE; // no devices on PC
}

// EXIGetType — gets the type of device attached to a channel.
inline s32 EXIGetType(s32 channel) {
    (void)channel;
    return -1; // EXI_TYPE_NONE
}

// EXIAsync — performs an asynchronous EXI transfer.
inline BOOL EXIAsync(s32 channel, void* data, u32 length, u32 direction,
                     EXICallback callback) {
    (void)channel; (void)data; (void)length; (void)direction;
    if (callback) callback(EXI_RESULT_SUCCESS);
    return TRUE;
}

} // extern "C"