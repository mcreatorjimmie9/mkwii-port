#pragma once
// ============================================================================
// os_alarm.hpp — Wii OS Alarm/Timer Bridge Shims
// OSAlarm provides one-shot and periodic timer functionality
// ============================================================================

#include "rk_types.h"
#include <cstdint>
#include <cstring>

// Forward declaration of OSContext (defined in os_thread.hpp)
struct OSContext;

// Forward declaration of OSAlarm (defined below)
struct OSAlarm;

// OSAlarmHandler — Callback function type for alarm expiration
typedef void (*OSAlarmHandler)(OSAlarm*, OSContext*);

// OSAlarm — Timer alarm structure
// On Wii: managed by the OS timer subsystem (decrementer interrupt)
struct OSAlarm {
    OSAlarmHandler handler;    // 0x00: callback function
    void*          data;        // 0x04: user data pointer
    OSTime         fire;        // 0x08: next fire time (OSTime = u64)
    OSTime         period;      // 0x10: period for periodic alarms (0 = one-shot)
    s32            tag;         // 0x18: alarm group tag
    OSAlarm*       pred;        // 0x1C: predecessor in sorted queue
    OSAlarm*       succ;        // 0x20: successor in sorted queue
};
// Note: sizeof(OSAlarm) = 0x24 on Wii (but OSSetAlarmUserData uses 0x08 offset for data)

// OSCreateAlarm — Initialize an alarm to safe default state
inline void OSCreateAlarm(OSAlarm* alarm) {
    std::memset(alarm, 0, sizeof(OSAlarm));
}

// OSSetAlarm — Arm a one-shot alarm
inline void OSSetAlarm(OSAlarm* alarm, OSTime time, OSAlarmHandler handler) {
    alarm->handler = handler;
    alarm->fire = time;
    alarm->period = 0;
}

// OSSetPeriodicAlarm — Arm a repeating alarm
inline void OSSetPeriodicAlarm(OSAlarm* alarm, OSTime start, OSTime period, OSAlarmHandler handler) {
    alarm->handler = handler;
    alarm->fire = start;
    alarm->period = period;
}

// OSCancelAlarm — Disarm an alarm
inline void OSCancelAlarm(OSAlarm* alarm) {
    alarm->handler = nullptr;
    alarm->period = 0;
}

// OSSetAlarmTag — Set the group tag for an alarm
inline void OSSetAlarmTag(OSAlarm* alarm, u32 tag) {
    alarm->tag = static_cast<s32>(tag);
}

// OSSetAlarmUserData — Set user data pointer
inline void OSSetAlarmUserData(OSAlarm* alarm, void* data) {
    alarm->data = data;
}

// OSGetAlarmUserData — Get user data pointer
inline void* OSGetAlarmUserData(OSAlarm* alarm) {
    return alarm->data;
}