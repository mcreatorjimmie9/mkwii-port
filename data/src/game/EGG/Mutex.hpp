// ============================================================================
// Mutex.hpp — EGG::Mutex synchronization primitives
// Address range: 0x80170000 - 0x80172000 (DOL)
// Corresponding ELF range: ~0x805B2E30 - 0x805B6E30
//
// Thread synchronization primitives wrapping the OS mutex/semaphore
// system. MKW uses these primarily for:
//   - Audio buffer locking (prevent data race between audio thread and main)
//   - Network packet buffer access (Wi-Fi thread vs. game logic thread)
//   - DVD read completion signaling (disc thread vs. asset loading)
//   - Heap allocation protection during multi-threaded allocations
//
// Also provides EGG::Semaphore for counting-based synchronization
// and EGG::CriticalSection for lightweight spin-lock regions.
//
// GENESIS Phase 28 — EGG Framework Expansion
// ============================================================================
#pragma once

#include "rk_common.h"

namespace EGG {

// Forward declarations
class Mutex;

// Mutex — binary lock for exclusive access to shared resources
// Wraps OSMutex from the Revolution SDK
class Mutex {
public:
    /* EGG_Mutex_ctor @ 0x80170020 */
    Mutex();
    /* EGG_Mutex_dtor @ 0x80170060 */
    ~Mutex();

    // Initialize the mutex (must call before use)
    /* EGG_Mutex_init @ 0x801700A0 */
    void init();

    // Lock the mutex — blocks if already held by another thread
    /* EGG_Mutex_lock @ 0x80170100 */
    void lock();

    // Try to lock without blocking — returns true if acquired
    /* EGG_Mutex_tryLock @ 0x80170160 */
    bool tryLock();

    // Unlock the mutex — releases ownership
    /* EGG_Mutex_unlock @ 0x801701C0 */
    void unlock();

    // Query if the mutex is currently locked
    /* EGG_Mutex_isLocked @ 0x80170200 */
    bool isLocked() const { return mLockCount > 0; }

    // Get the owner thread ID (or -1 if unlocked)
    s32 getOwnerThreadId() const { return mOwnerThreadId; }

private:
    s32 mOwnerThreadId;     // Thread ID that holds the lock (-1 = unlocked)
    s32 mLockCount;         // Recursive lock count
    bool mbInitialized;     // Has init() been called?
};

// Semaphore — counting semaphore for resource pool management
// Wraps OSSemaphore from the Revolution SDK
class Semaphore {
public:
    /* EGG_Semaphore_ctor @ 0x80170400 */
    Semaphore();
    /* EGG_Semaphore_dtor @ 0x80170440 */
    ~Semaphore();

    // Initialize with an initial count
    /* EGG_Semaphore_init @ 0x80170480 */
    void init(s32 initialCount);

    // Wait (decrement) — blocks if count is zero
    /* EGG_Semaphore_wait @ 0x80170500 */
    void wait();

    // Signal (increment) — wakes one waiting thread
    /* EGG_Semaphore_signal @ 0x80170560 */
    void signal();

    // Try wait — returns true if decremented successfully
    /* EGG_Semaphore_tryWait @ 0x801705C0 */
    bool tryWait();

    // Get current count
    s32 getCount() const { return mCount; }

private:
    s32 mCount;
    s32 mMaxCount;           // Maximum count value
    bool mbInitialized;
};

// CriticalSection — lightweight spin-lock for short critical regions
// Used for protecting small data structures (lists, counters) where
// a full mutex is overkill. On Broadway (single-core), this is
// effectively a disable-interrupts guard since there's no true
// concurrent execution.
class CriticalSection {
public:
    /* EGG_CriticalSection_ctor @ 0x80170800 */
    CriticalSection();

    // Enter the critical section (disable interrupts on Broadway)
    /* EGG_CriticalSection_enter @ 0x80170820 */
    void enter();

    // Leave the critical section (restore interrupt state)
    /* EGG_CriticalSection_leave @ 0x80170860 */
    void leave();

    // Auto-lock guard class for RAII-style critical section usage
    class LockGuard {
    public:
        explicit LockGuard(CriticalSection& cs) : mrCS(cs) {
            mrCS.enter();
        }
        ~LockGuard() {
            mrCS.leave();
        }
    private:
        CriticalSection& mrCS;
        // Non-copyable
        LockGuard(const LockGuard&);
        LockGuard& operator=(const LockGuard&);
    };

    bool isEntered() const { return mbEntered; }

private:
    bool mbEntered;           // Currently in critical section
    u32 mSavedInterruptState; // Previous interrupt mask
};

// AutoMutexGuard — RAII wrapper for Mutex
class AutoMutexGuard {
public:
    explicit AutoMutexGuard(Mutex& mutex) : mrMutex(mutex) {
        mrMutex.lock();
    }
    ~AutoMutexGuard() {
        mrMutex.unlock();
    }
private:
    Mutex& mrMutex;
    AutoMutexGuard(const AutoMutexGuard&);
    AutoMutexGuard& operator=(const AutoMutexGuard&);
};

} // namespace EGG
