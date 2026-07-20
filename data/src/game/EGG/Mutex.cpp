// Mutex.cpp — EGG::Mutex, Semaphore, CriticalSection Implementation
// GENESIS Phase 28 — EGG Framework Expansion
// Address range: 0x80170000 - 0x80172000 (DOL)

#include "Mutex.hpp"

namespace EGG {

// ===========================================================================
// Mutex Implementation
// ===========================================================================

/* EGG_Mutex_ctor @ 0x80170020 */
Mutex::Mutex()
    : mOwnerThreadId(-1)
    , mLockCount(0)
    , mbInitialized(false)
{
    // In the original game, this calls OSInitMutex()
}

/* EGG_Mutex_dtor @ 0x80170060 */
Mutex::~Mutex() {
    // In the original: OSDestroyMutex()
}

/* EGG_Mutex_init @ 0x801700A0 */
void Mutex::init() {
    mOwnerThreadId = -1;
    mLockCount = 0;
    mbInitialized = true;
}

/* EGG_Mutex_lock @ 0x80170100 */
void Mutex::lock() {
    if (!mbInitialized) {
        return;
    }
    // In the original game, this calls OSLockMutex().
    // On the Broadway processor (single-core), OSMutex is implemented
    // using interrupt masking — the thread cannot be preempted while
    // holding the mutex, so deadlock from priority inversion is impossible.
    //
    // The implementation tracks the owner thread ID to support
    // recursive locking (same thread can lock multiple times).
    // This is used in the archive system where nested file reads
    // may re-lock the same archive mutex.

    s32 currentThreadId = -1; // Would be OSGetCurrentThread()
    if (mOwnerThreadId == currentThreadId) {
        // Recursive lock from same thread
        mLockCount++;
        return;
    }

    // Acquire the lock (simulated — no actual blocking on single-threaded host)
    mOwnerThreadId = currentThreadId;
    mLockCount = 1;
}

/* EGG_Mutex_tryLock @ 0x80170160 */
bool Mutex::tryLock() {
    if (!mbInitialized) {
        return false;
    }
    // In the original: OSTryLockMutex() — returns false if locked
    if (mLockCount > 0) {
        return false;
    }

    s32 currentThreadId = -1;
    mOwnerThreadId = currentThreadId;
    mLockCount = 1;
    return true;
}

/* EGG_Mutex_unlock @ 0x801701C0 */
void Mutex::unlock() {
    if (!mbInitialized) {
        return;
    }
    // In the original: OSUnlockMutex()
    if (mLockCount > 1) {
        // Decrement recursive lock count
        mLockCount--;
    } else {
        // Fully release
        mOwnerThreadId = -1;
        mLockCount = 0;
    }
}

// ===========================================================================
// Semaphore Implementation
// ===========================================================================

/* EGG_Semaphore_ctor @ 0x80170400 */
Semaphore::Semaphore()
    : mCount(0)
    , mMaxCount(16)
    , mbInitialized(false)
{
}

/* EGG_Semaphore_dtor @ 0x80170440 */
Semaphore::~Semaphore() {}

/* EGG_Semaphore_init @ 0x80170480 */
void Semaphore::init(s32 initialCount) {
    mCount = initialCount;
    mMaxCount = 16; // Default max
    mbInitialized = true;
}

/* EGG_Semaphore_wait @ 0x80170500 */
void Semaphore::wait() {
    if (!mbInitialized) {
        return;
    }
    // In the original: OSWaitSemaphore()
    // Blocks the calling thread until the count is > 0, then decrements.
    // On the Broadway (single-core), this is equivalent to a spin-wait
    // with interrupt masking.
    if (mCount > 0) {
        mCount--;
    }
    // If count is 0, the thread would block here on real hardware
}

/* EGG_Semaphore_signal @ 0x80170560 */
void Semaphore::signal() {
    if (!mbInitialized) {
        return;
    }
    // In the original: OSSignalSemaphore()
    // Increments the count and wakes one waiting thread.
    if (mCount < mMaxCount) {
        mCount++;
    }
}

/* EGG_Semaphore_tryWait @ 0x801705C0 */
bool Semaphore::tryWait() {
    if (!mbInitialized || mCount <= 0) {
        return false;
    }
    mCount--;
    return true;
}

// ===========================================================================
// CriticalSection Implementation
// ===========================================================================

/* EGG_CriticalSection_ctor @ 0x80170800 */
CriticalSection::CriticalSection()
    : mbEntered(false)
    , mSavedInterruptState(0)
{
}

/* EGG_CriticalSection_enter @ 0x80170820 */
void CriticalSection::enter() {
    if (mbEntered) {
        return; // Already entered (re-entrant guard)
    }
    // In the original game, this masks interrupts to prevent
    // preemption during the critical section:
    //   mSavedInterruptState = OSDisableInterrupts();
    mbEntered = true;
}

/* EGG_CriticalSection_leave @ 0x80170860 */
void CriticalSection::leave() {
    if (!mbEntered) {
        return;
    }
    // In the original: OSRestoreInterrupts(mSavedInterruptState)
    mbEntered = false;
}

} // namespace EGG
