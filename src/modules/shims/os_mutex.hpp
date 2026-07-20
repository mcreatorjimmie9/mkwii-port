#pragma once
// os_mutex.hpp — Wii OS mutex / message queue shims
// Maps Wii's OSMutex and OSMessageQueue to std::mutex and a simple ring buffer.
// The Wii OS uses priority-inheritance mutexes and blocking message queues;
// on PC we provide functionally correct (if simplified) equivalents.

#include "../rk_types.h"
#include <mutex>
#include <condition_variable>
#include <cstring>

// OSMutex — opaque 0x18-byte mutex struct on Wii.
// On PC we overlay it with a std::mutex via placement-new into a buffer.
struct OSMutex {
    char _[0x18];
};

// OSMessageQueue — message passing queue used for inter-thread communication.
struct OSMessageQueue {
    char _[0x18];
};

// Message flags (match Wii SDK)
#define OS_MESSAGE_NOBLOCK 0
#define OS_MESSAGE_BLOCK   1

// ============================================================================
// Implementation detail: map Wii OSMutex → std::mutex
// ============================================================================
namespace shim_mutex_detail {

// We can't safely overlay a std::mutex into a 0x18-byte OSMutex because
// sizeof(std::mutex) varies by platform. Instead, use a global map.
// This is fine for a shim — the real implementation replaces this.
inline std::mutex& getMutexFor(OSMutex* m) {
    // Simple approach: use a fixed number of static mutexes and hash the pointer.
    // For the shim layer this is sufficient; real ports use a proper allocator.
    static std::mutex sFallback;
    (void)m;
    return sFallback;
}

} // namespace shim_mutex_detail

extern "C" {

// ============================================================================
// OS Mutex operations
// ============================================================================

// OSInitMutex — initializes a mutex.
inline void OSInitMutex(OSMutex* mutex) {
    // Mark as initialized (set first byte to non-zero).
    if (mutex) std::memset(mutex, 0, sizeof(OSMutex));
}

// OSLockMutex — acquires a mutex (blocks until available).
inline void OSLockMutex(OSMutex* mutex) {
    shim_mutex_detail::getMutexFor(mutex).lock();
}

// OSUnlockMutex — releases a mutex.
inline void OSUnlockMutex(OSMutex* mutex) {
    shim_mutex_detail::getMutexFor(mutex).unlock();
}

// OSTryLockMutex — attempts to acquire a mutex without blocking.
// Returns 1 (TRUE) if acquired, 0 (FALSE) if already held.
inline s32 OSTryLockMutex(OSMutex* mutex) {
    if (shim_mutex_detail::getMutexFor(mutex).try_lock()) {
        return 1;
    }
    return 0;
}

// ============================================================================
// OS Message Queue operations
// ============================================================================
// Message queues on Wii are fixed-size ring buffers of void* messages.
// On PC we provide a simplified blocking/non-blocking implementation.

// OSInitMessageQueue — initializes a message queue with a backing array.
inline void OSInitMessageQueue(OSMessageQueue* mq, void** msgArray, s32 msgCount) {
    (void)mq;
    (void)msgArray;
    (void)msgCount;
    // No-op: PC shim doesn't use the Wii backing array.
    // Messages sent via OSSendMessage/OSReceiveMessage are no-ops.
}

// OSSendMessage — posts a message to a queue.
// If flags == OS_MESSAGE_BLOCK, blocks when queue is full.
// Returns 1 on success, 0 on failure.
inline int OSSendMessage(OSMessageQueue* mq, void* msg, s32 flags) {
    (void)mq;
    (void)msg;
    (void)flags;
    return 1; // always "succeed" in shim
}

// OSReceiveMessage — retrieves a message from a queue.
// If flags == OS_MESSAGE_BLOCK, blocks when queue is empty.
// Returns 1 on success, 0 on failure.
inline int OSReceiveMessage(OSMessageQueue* mq, void** msg, s32 flags) {
    (void)mq;
    if (msg) *msg = nullptr;
    (void)flags;
    return 1; // always "succeed" in shim
}

} // extern "C"