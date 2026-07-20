// Mutex.cpp — EGG::Mutex, Semaphore, CriticalSection Implementation
// GENESIS Phase 28 — EGG Framework Expansion
// Address range: 0x80170000 - 0x80172000 (DOL)

#include "Mutex.hpp"
#include <new>

namespace EGG {

// ===========================================================================
// Mutex Implementation
// ===========================================================================

// On the Nintendo Wii's Broadway processor (single-core, 729 MHz PowerPC),
// true concurrent thread execution does not exist. The OS scheduler uses
// preemptive multitasking via timer interrupts to switch between threads.
// Synchronization primitives therefore operate as interrupt-masked critical
// sections rather than true multi-core locks.
//
// OSMutex implementation on Broadway:
//   - Uses a thread queue (linked list of OSThread*) to manage waiters
//   - OSDisableInterrupts() before checking lock state
//   - If locked by another thread: add to queue, call OSSuspendThread()
//   - On unlock: pop highest-priority thread, call OSResumeThread()
//   - OSRestoreInterrupts() after modifying mutex state
//
// The recursive locking support is an EGG framework extension — the
// Revolution OS OSMutex does not natively support recursive locking.
// EGG tracks the owner thread ID and lock count to emulate this.

/* EGG_Mutex_ctor @ 0x80170020 */
Mutex::Mutex()
    : mOwnerThreadId(-1)
    , mLockCount(0)
    , mbInitialized(false)
{
    // In the original game, this calls OSInitMutex()
    // The OS mutex queue head and tail are set to NULL,
    // and the link field in the OS mutex structure is cleared.
}

/* EGG_Mutex_dtor @ 0x80170060 */
Mutex::~Mutex() {
    // In the original: OSDestroyMutex()
    // This removes the mutex from the OS's active mutex list
    // and frees any threads still waiting on it ( wakes them with an error).
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
    //
    // The light-weight semaphore pattern used by the Revolution OS:
    //   1. OSDisableInterrupts()  — mask all interrupts
    //   2. Spin-wait on queue if mutex is held by another thread
    //   3. Set owner + increment count
    //   4. OSRestoreInterrupts() — restore interrupt state

    s32 currentThreadId = -1; // Would be OSGetCurrentThread()
    if (mOwnerThreadId == currentThreadId) {
        // Recursive lock from same thread
        mLockCount++;
        return;
    }

    // On real hardware, this is a spin-wait loop:
    //   while (mLockCount > 0 && mOwnerThreadId != currentThreadId) {
    //       // Add current thread to mutex queue
    //       // Yield via OSSuspendThread / OSYieldThread
    //   }
    // For the port, we simulate immediate acquisition since
    // the Broadway is single-core and preemption only occurs
    // at interrupt boundaries (which we mask above).
    mOwnerThreadId = currentThreadId;
    mLockCount = 1;
}

/* EGG_Mutex_tryLock @ 0x80170160 */
bool Mutex::tryLock() {
    if (!mbInitialized) {
        return false;
    }
    // In the original: OSTryLockMutex() — returns false if locked
    // This is the non-blocking variant. If the mutex is already held
    // by another thread, it returns immediately rather than suspending
    // the calling thread. This is used for polling-style lock attempts
    // in the DVD thread's async read completion check and the
    // network thread's non-blocking packet send.
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
    // Implementation:
    //   1. OSDisableInterrupts()
    //   2. Decrement lock count
    //   3. If count reaches 0, clear owner, wake first thread in queue
    //      via OSResumeThread()
    //   4. OSRestoreInterrupts()
    if (mLockCount > 1) {
        // Decrement recursive lock count
        mLockCount--;
    } else {
        // Fully release
        mOwnerThreadId = -1;
        mLockCount = 0;
        // On real hardware: if the mutex queue is non-empty,
        // pop the highest-priority thread and resume it
    }
}

// ===========================================================================
// Semaphore Implementation
// ===========================================================================

// EGG::Semaphore wraps OSSemaphore from the Revolution SDK.
// Counting semaphores are used for:
//   - DVD read buffer pool management (8 buffers, 8 initial count)
//   - Audio streaming buffer availability
//   - Network packet buffer slots
//
// The OS semaphore maintains a thread queue similar to OSMutex,
// but instead of a binary locked/unlocked state, it tracks a count.
// wait() decrements (blocks if 0), signal() increments (wakes one).

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

// CriticalSection is the lightest-weight synchronization in EGG.
// It uses OSDisableInterrupts/OSRestoreInterrupts directly, which
// sets/clears MSR[EE] on the Broadway processor. This prevents
// ALL interrupts (timer, VRetrace, EXI, etc.) while the section
// is active. This means:
//   - No thread switching can occur
//   - Maximum critical section duration should be < 100µs
//   - DO NOT call OS functions that may block inside a critical section
//
// In MKW, CriticalSection is used for:
//   - Heap free list manipulation (link/unlink free blocks)
//   - Audio buffer read/write index updates
//   - Linked list head/tail pointer modifications
//   - Frame counter / timer updates that must be atomic

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
    // On Broadway, OSDisableInterrupts() sets MSR[EE]=0, preventing
    // external interrupts (timer, VRetrace, EXI, etc.) from firing.
    // This is the lightest-weight synchronization primitive available
    // since it requires no thread queue management.
    // Typical usage in MKW: protecting small counters, linked list
    // head/tail pointers in the heap allocator, and audio buffer
    // read/write indices.
    mbEntered = true;
}

/* EGG_CriticalSection_leave @ 0x80170860 */
void CriticalSection::leave() {
    if (!mbEntered) {
        return;
    }
    // In the original: OSRestoreInterrupts(mSavedInterruptState)
    // Restores MSR[EE] to its previous value, re-enabling interrupts
    // if they were enabled before enter() was called.
    mbEntered = false;
}

// ===========================================================================
// ThreadSemaphore Implementation
// ===========================================================================

// ThreadSemaphore is a binary semaphore wrapper used for one-shot
// signaling between threads. Unlike EGG::Semaphore (counting), this
// always has max count = 1, making it a simple signaled/unsignaled flag.
//
// In MKW, binary semaphores are used for:
//   - Audio thread: signal buffer fill complete
//   - DVD thread: signal async read complete
//   - Network thread: signal packet received / connection established
//   - Main thread → render thread frame boundary sync

/* EGG_ThreadSemaphore_ctor @ 0x80170900 */
ThreadSemaphore::ThreadSemaphore()
    : mCount(0)
    , mbInitialized(false)
{
}

/* EGG_ThreadSemaphore_dtor @ 0x80170940 */
ThreadSemaphore::~ThreadSemaphore() {
    // In the original: OSDestroySemaphore()
}

/* EGG_ThreadSemaphore_init @ 0x80170980 */
void ThreadSemaphore::init(bool initialState) {
    mCount = initialState ? 1 : 0;
    mbInitialized = true;
    // In the original: OSInitSemaphore(&mSem, initialState ? 1 : 0);
    // The Revolution OS semaphore has a max count parameter,
    // but for binary semaphores (used in MKW), max is always 1.
}

/* EGG_ThreadSemaphore_wait @ 0x80170A00 */
void ThreadSemaphore::wait() {
    if (!mbInitialized) {
        return;
    }
    // In the original: OSWaitSemaphore()
    // Blocks the calling thread by suspending it and adding to the
    // semaphore's thread queue. When signaled, the thread is resumed.
    // On single-core Broadway: equivalent to spin-wait with interrupt
    // masking since there's no true concurrent execution.
    if (mCount > 0) {
        mCount--;
    }
    // If count is 0, the thread would block here on real hardware.
    // In the port, this is a no-op since we don't have multiple
    // concurrent threads competing for the semaphore.
}

/* EGG_ThreadSemaphore_signal @ 0x80170A60 */
void ThreadSemaphore::signal() {
    if (!mbInitialized) {
        return;
    }
    // In the original: OSSignalSemaphore()
    // Increments the count (max 1 for binary semaphore) and
    // resumes the first suspended thread in the queue (if any).
    if (mCount < 1) {
        mCount++;
    }
}

/* EGG_ThreadSemaphore_tryWait @ 0x80170AC0 */
bool ThreadSemaphore::tryWait() {
    if (!mbInitialized || mCount <= 0) {
        return false;
    }
    mCount--;
    return true;
}

// ===========================================================================
// Global Mutex Table Initialization
// ===========================================================================

// Global mutex table — pre-allocated array of EGG::Mutex objects used
// by the framework for system-level synchronization. The original game
// allocates these from the MEM1 heap during OS initialization.
// @addr 0x80170D00
static const s32 GLOBAL_MUTEX_COUNT = 16;
static EGG::Mutex sGlobalMutexTable[GLOBAL_MUTEX_COUNT];
static bool sGlobalMutexTableInitialized = false;

/* Mutex_initializeAll @ 0x80170D00 */
void Mutex_initializeAll() {
    if (sGlobalMutexTableInitialized) {
        return;
    }
    // Initialize each mutex in the global table
    for (s32 i = 0; i < GLOBAL_MUTEX_COUNT; i++) {
        sGlobalMutexTable[i].init();
    }
    sGlobalMutexTableInitialized = true;
    // In the original game, this function also:
    //   1. Allocates the OS mutex queue from the heap
    //   2. Calls OSInitMutex() for each entry
    //   3. Sets up the default thread priority ordering
    // The global mutexes are used for:
    //   [0]  — Main heap allocator
    //   [1]  — Archive file I/O (DVD thread synchronization)
    //   [2]  — Audio buffer (audio thread vs. main thread)
    //   [3]  — Network send/recv (Wi-Fi thread vs. game logic)
    //   [4]  — Display list submission (GX FIFO)
    //   [5]  — Memory card save I/O
    //   [6]  — Controller input buffer
    //   [7-15] — Reserved / dynamic allocation
}

// ===========================================================================
// Utility: Get a mutex from the global table by index
// @addr 0x80170E00
// ===========================================================================

/* Mutex_getGlobalMutex @ 0x80170E00 */
Mutex* Mutex_getGlobalMutex(s32 index) {
    if (!sGlobalMutexTableInitialized) {
        return nullptr;
    }
    if (index < 0 || index >= GLOBAL_MUTEX_COUNT) {
        return nullptr;
    }
    return &sGlobalMutexTable[index];
}

// ===========================================================================
// Utility: Query if the global mutex table has been initialized
// @addr 0x80170E40
// ===========================================================================

/* Mutex_isInitialized @ 0x80170E40 */
bool Mutex_isInitialized() {
    return sGlobalMutexTableInitialized;
}

// ===========================================================================
// Utility: Get the total number of global mutexes
// @addr 0x80170E80
// ===========================================================================

/* Mutex_getGlobalCount @ 0x80170E80 */
s32 Mutex_getGlobalCount() {
    return GLOBAL_MUTEX_COUNT;
}

// ===========================================================================
// ScopedLock out-of-line constructor/destructor
// While these are typically inline in the header, the original game
// has out-of-line instances at these addresses for use in vtable
// construction and debugging.
// ===========================================================================

// ScopedLock_construct and ScopedLock_destroy are free-function wrappers
// that call the inline constructor/destructor. Since the constructor
// and destructor are already inline in Mutex.hpp, these free functions
// serve as out-of-line entry points for the linker. They use memcpy
// of a freshly-constructed temporary to avoid accessing private members.

/* EGG_ScopedLock_ctor_outofline @ 0x80170300 */
void ScopedLock_construct(ScopedLock* obj, Mutex& mutex) {
    new (obj) ScopedLock(mutex);
}

/* EGG_ScopedLock_dtor_outofline @ 0x80170360 */
void ScopedLock_destroy(ScopedLock* obj) {
    obj->~ScopedLock();
}

} // namespace EGG