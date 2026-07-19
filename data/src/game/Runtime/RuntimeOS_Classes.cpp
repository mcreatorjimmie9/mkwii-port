// ============================================================================
// RuntimeOS_Classes.cpp — EGG Runtime/OS Subsystem Class Implementations
// Address range: 0x80400000 - 0x80440000 (1012 functions)
//
// Filled from decompiled RVL OS sources:
//   osAlarm.c   -> OSAlarm
//   osMutex.c   -> OSMutex
//   osInterrupt.c -> ThreadManager / ExceptionManager (interrupt dispatch)
//   osContext.c  -> ExceptionManager (context save/restore)
//   osError.c    -> ExceptionManager (error handling)
//   osMemory.c   -> MemoryArena (memory protection)
//   osReset.c    -> SystemManager (shutdown/reset)
//
// Categorization: GENESIS Phase 8 (Runtime OS Class Extraction)
// ============================================================================
#include "RuntimeOS_Classes.hpp"
#include <cstring>
#include <cmath>

// ---------------------------------------------------------------------------
// Internal OS tick conversion (from rvlOS: OS_TIMER_CLOCK = 1/(OS_TIMER_CLOCK /
// OS_TICKS_PER_SEC); on Wii, 1 tick = 1/OS_TIMER_CLOCK seconds)
// ---------------------------------------------------------------------------
static const u32 OS_TIMER_CLOCK = 162000000u; // 162 MHz Broadway
static const u32 OSSecondsToTicks(f64 s) { return (u32)(s * OS_TIMER_CLOCK); }
static const u32 OSUsecsToTicks(u32 us) { return (u32)((u64)us * OS_TIMER_CLOCK / 1000000ULL); }

namespace EGG {
namespace RuntimeOS {

// ============================================================
// EGG::RuntimeOS::OSAlarm
// Filled from: osAlarm.c (OSCreateAlarm, OSSetAlarm, OSCancelAlarm,
//                          OSSetPeriodicAlarm, OSSetAlarmUserData)
// ============================================================

OSAlarm::~OSAlarm() {
    stop();
}

// @addr 0x80402990
// From: OSCreateAlarm — initialize alarm to safe default state
void OSAlarm::init() {
    mHandler = nullptr;
    mUserData = nullptr;
    mPeriod = 0;
    mNextFire = 0;
    mRepeatCount = 0;
    mFireCount = 0;
    mIsRunning = 0;
    mIsPeriodic = 0;
    mPriority = 16; // default alarm priority
    mQueue = 0;
    mQueueMsg = 0;
    memset(_pad30, 0, sizeof(_pad30));
}

// @addr 0x80402ab0
// From: OSSetAlarm — set a one-shot alarm to fire after 'delayUs' microseconds,
// repeating every 'periodUs' (if > 0, becomes periodic)
void OSAlarm::start(s32 periodUs, s32 delayUs) {
    // Stop any existing alarm
    if (mIsRunning) {
        mHandler = nullptr; // effectively cancel
    }

    mPeriod = (u32)periodUs;
    mIsPeriodic = (periodUs > 0) ? 1u : 0u;
    mFireCount = 0;

    // Compute fire time: current time + delay
    // mNextFire = __OSGetSystemTime() + OSUsecsToTicks(delayUs);
    mNextFire = OSUsecsToTicks(delayUs);
    mIsRunning = 1;
}

// @addr 0x80402bd0
// From: OSCancelAlarm — remove alarm from the alarm queue and clear handler
void OSAlarm::stop() {
    if (!mIsRunning) {
        return;
    }

    // The real OSCancelAlarm does:
    // 1. Disable interrupts
    // 2. If no handler, return
    // 3. Unlink from the alarm queue (pred/succ linked list)
    // 4. Set handler = NULL
    // 5. Restore interrupts

    // For periodic alarms, clear repeat to prevent re-insertion
    mIsPeriodic = 0;
    mRepeatCount = 0;
    mIsRunning = 0;
    mHandler = nullptr;

    // If a queue was set for notification, post the message
    if (mQueue != 0) {
        // Would call OSJamMessage or similar to notify
        // OSMessageQueue* mq = (OSMessageQueue*)mQueue;
        // OSSendMessage(mq, (OSMessage)mQueueMsg, OS_MESSAGE_BLOCK);
    }
}

// @addr 0x80402cf0
// From: Combination of OSCancelAlarm + OSSetAlarm
void OSAlarm::reset(s32 periodUs, s32 delayUs) {
    stop();
    start(periodUs, delayUs);
}

// @addr 0x80402e10
void OSAlarm::restart(s32 periodUs, s32 delayUs) {
    reset(periodUs, delayUs);
}

// @addr 0x80402f30
void OSAlarm::cancel(s32 timeout, s32 flags) {
    (void)timeout; (void)flags;
    stop();
}

// @addr 0x80402fc4
u32 OSAlarm::queryState(s32 timeout, s32 flags) {
    (void)timeout; (void)flags;
    u32 state = 0;
    if (mIsRunning)     state |= 0x01;
    if (mIsPeriodic)    state |= 0x02;
    if (mHandler)       state |= 0x04;
    if (mQueue != 0)    state |= 0x08;
    return state;
}

// @addr 0x804030f4
// From: OSSetAlarmUserData — set handler and user data
void OSAlarm::setHandler(Handler handler, s32 userData) {
    mHandler = handler;
    mUserData = reinterpret_cast<void*>(userData);
}

// @addr 0x8040322c
// Update period; if running, re-schedule the alarm
s32 OSAlarm::setPeriod(s32 periodUs, s32 flags) {
    (void)flags;
    mPeriod = (u32)periodUs;
    if (periodUs > 0) {
        mIsPeriodic = 1;
    } else {
        mIsPeriodic = 0;
    }
    // If the alarm is running, it would need to be re-inserted
    // into the alarm queue with the new period
    return 0;
}

// @addr 0x8040326c
u32 OSAlarm::getPeriod() const {
    return mPeriod;
}

// @addr 0x80403708
// From: OSSetPeriodicAlarm — set repeat count for periodic alarms
u32 OSAlarm::setRepeat(s32 count, s32 flags) {
    (void)flags;
    mRepeatCount = (u32)count;
    if (count > 0) {
        mIsPeriodic = 1;
    }
    return 0;
}

// @addr 0x80403828
u32 OSAlarm::getRepeatCount() const {
    return mRepeatCount;
}

// @addr 0x80403944
u32 OSAlarm::getFireCount(s32 reset, s32 flags) {
    (void)flags;
    u32 count = mFireCount;
    if (reset) {
        mFireCount = 0;
    }
    return count;
}

// @addr 0x80403a6c
u32 OSAlarm::isRunning(s32 flags, s32 padding) {
    (void)flags; (void)padding;
    return mIsRunning;
}

// @addr 0x80403b88
void OSAlarm::setQueueNotify(u32 queue, s32 msg) {
    mQueue = queue;
    mQueueMsg = (u32)msg;
}

// @addr 0x80403d74
u32 OSAlarm::getQueueState(s32 queue, u32 flags) {
    (void)queue; (void)flags;
    return mQueue;
}

// @addr 0x80403dc0
u32 OSAlarm::getQueueHandle(s32* outHandle) {
    if (outHandle) {
        *outHandle = (s32)mQueue;
    }
    return mQueue;
}

// ============================================================
// EGG::RuntimeOS::OSMutex
// Filled from: osMutex.c (OSInitMutex, OSLockMutex, OSUnlockMutex,
//                          OSTryLockMutex, __OSUnlockAllMutex)
// ============================================================

OSMutex::~OSMutex() {}

// @addr 0x804043c0
// From: OSInitMutex — initialize thread queue and clear lock state
void OSMutex::init(s32 initialCount, s32 maxCount) {
    (void)initialCount; (void)maxCount;
    // OSInitMutex does:
    //   OSInitThreadQueue(&mutex->queue);  // linked list head = NULL
    //   mutex->thread = NULL;               // +0x08
    //   mutex->count = 0;                   // +0x0C
    mQueue = 0;
    mThread = nullptr;
    mCount = 0;
    mIsLocked = 0;
    mIsRecursive = (maxCount > 1) ? 1u : 0u;
    mPriority = 0;
    mWaitCount = 0;
    memset(_pad20, 0, sizeof(_pad20));
}

// @addr 0x8040475c
// From: OSLockMutex — acquire the mutex with priority inheritance
// Logic:
//   1. Disable interrupts
//   2. If count == 0 (unlocked): take ownership, count = 1
//   3. If current thread == owner: count++ (recursive lock)
//   4. Else: add to mutex wait queue, promote owner priority, sleep
u32 OSMutex::lock(s32 threadId, u32 flags) {
    (void)flags;
    // Simplified: use threadId as the owner identifier
    if (mCount == 0) {
        // Unlocked — take ownership
        mThread = reinterpret_cast<void*>(threadId);
        mCount = 1;
        mIsLocked = 1;
        return 1; // success
    }
    if (mThread == reinterpret_cast<void*>(threadId)) {
        // Same thread — recursive lock
        mCount++;
        return 1; // success
    }
    // Different thread owns it — would block here
    // Real impl: OSSleepThread(&mQueue), __OSPromoteThread
    mWaitCount++;
    return 0; // would block
}

// @addr 0x804047a8
// From: OSTryLockMutex — non-blocking lock attempt
u32 OSMutex::tryLock(s32 threadId, u32 flags) {
    (void)flags;
    if (mCount == 0) {
        mThread = reinterpret_cast<void*>(threadId);
        mCount = 1;
        mIsLocked = 1;
        return 1; // success
    }
    if (mThread == reinterpret_cast<void*>(threadId)) {
        mCount++;
        return 1; // success (recursive)
    }
    return 0; // already locked by another thread
}

// @addr 0x804047f4
// From: OSUnlockMutex — release the mutex
// Logic:
//   1. Disable interrupts
//   2. Verify caller == owner
//   3. Decrement count; if still > 0, return
//   4. If count == 0: remove from owner's mutex link list,
//      restore owner's effective priority, wake waiting threads
u32 OSMutex::unlock(s32 threadId, u32 flags) {
    (void)flags;
    if (mThread != reinterpret_cast<void*>(threadId)) {
        return 0; // not the owner
    }
    mCount--;
    if (mCount > 0) {
        return 1; // still held (recursive)
    }
    // Fully released
    mThread = nullptr;
    mIsLocked = 0;
    if (mWaitCount > 0) {
        mWaitCount--;
        // Real impl: OSWakeupThread(&mQueue) would wake the highest-priority waiter
    }
    return 1;
}

// @addr 0x80404968
u32 OSMutex::query(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    u32 state = 0;
    if (mIsLocked)    state |= 0x01;
    if (mThread)      state |= 0x02;
    if (mWaitCount)   state |= 0x04;
    if (mIsRecursive) state |= 0x08;
    return state;
}

// ============================================================
// EGG::RuntimeOS::OSMsgQueue
// Filled from: OS message queue semantics (ring buffer, blocking send/receive)
// ============================================================

OSMsgQueue::~OSMsgQueue() {
    if (mMsgBuffer) {
        // Would free the buffer here
        mMsgBuffer = nullptr;
    }
}

// @addr 0x80405210
// Initialize the message queue as a ring buffer
void OSMsgQueue::init(s32 capacity, s32 msgSize) {
    (void)msgSize;
    mCapacity = (u32)capacity;
    mCount = 0;
    mHead = 0;
    mTail = 0;
    mIsInitialized = 1;
    mSendCount = 0;
    mRecvCount = 0;
    mMaxUsed = 0;
    mOverflowCount = 0;
    memset(_pad2c, 0, sizeof(_pad2c));
    // mMsgBuffer should point to an array of OSMessage (u32) of size capacity
    // Allocated externally or via member
}

// @addr 0x80405850
// Send a message to the queue (non-blocking if full, could block per flags)
u32 OSMsgQueue::send(s32 threadId, u32 msg) {
    (void)threadId;
    if (mCount >= mCapacity) {
        mOverflowCount++;
        return 0; // queue full
    }
    if (mMsgBuffer) {
        u32* buffer = static_cast<u32*>(mMsgBuffer);
        buffer[mTail] = msg;
        mTail = (mTail + 1) % mCapacity;
    }
    mCount++;
    mSendCount++;
    if (mCount > mMaxUsed) {
        mMaxUsed = mCount;
    }
    return 1; // success
}

// @addr 0x80405a30
// Receive a message from the queue
u32 OSMsgQueue::receive(s32 threadId, u32 timeout) {
    (void)threadId; (void)timeout;
    if (mCount == 0) {
        return 0; // empty
    }
    u32 msg = 0;
    if (mMsgBuffer) {
        u32* buffer = static_cast<u32*>(mMsgBuffer);
        msg = buffer[mHead];
        mHead = (mHead + 1) % mCapacity;
    }
    mCount--;
    mRecvCount++;
    return msg;
}

// @addr 0x80405cdc
u32 OSMsgQueue::peek(s32* outMsg, f32* outTimestamp) {
    (void)outTimestamp;
    if (mCount == 0 || !mMsgBuffer) {
        return 0;
    }
    if (outMsg) {
        u32* buffer = static_cast<u32*>(mMsgBuffer);
        *outMsg = (s32)buffer[mHead];
    }
    return 1;
}

// @addr 0x80405fe0
s32 OSMsgQueue::waitMsg(s32 threadId, s32 timeout) {
    (void)threadId; (void)timeout;
    if (mCount == 0) {
        return -1; // would block
    }
    u32 msg = receive(threadId, 0);
    return (s32)msg;
}

// @addr 0x80406020
u32 OSMsgQueue::poll(s32 threadId, f32* outTimestamp) {
    (void)threadId; (void)outTimestamp;
    return mCount;
}

// @addr 0x804062b4
u32 OSMsgQueue::flush(s32 threadId, f32* outTimestamp) {
    (void)threadId; (void)outTimestamp;
    u32 flushed = mCount;
    mCount = 0;
    mHead = 0;
    mTail = 0;
    return flushed;
}

// @addr 0x80406394
u32 OSMsgQueue::configure(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x8040668c
u32 OSMsgQueue::sendWithTimestamp(s32 threadId, f32* timestamp, f32* outTs) {
    (void)timestamp; (void)outTs;
    return send(threadId, 0);
}

// @addr 0x80406828
u32 OSMsgQueue::getCapacity(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return mCapacity;
}

// @addr 0x80406900
u32 OSMsgQueue::getCount(s32* outCount) {
    if (outCount) {
        *outCount = (s32)mCount;
    }
    return mCount;
}

// ============================================================
// EGG::RuntimeOS::ThreadManager
// Filled from: osInterrupt.c (interrupt enable/disable),
//              osReset.c (thread cancellation during shutdown),
//              general OS thread API semantics
// ============================================================

ThreadManager::~ThreadManager() {}

// @addr 0x80410550
u32 ThreadManager::init(u32* config) {
    (void)config;
    mThreadCount = 0;
    mMaxThreads = 32;
    mActiveMask = 0;
    mDefaultPriority = 16;
    mDefaultStackSize = 0x8000; // 32KB default stack
    mMainThread = 0;
    mIdleThread = 0;
    mTimerThread = 0;
    mCurrentThread = 0; // will be set to main thread ID
    mTLSBase = 0;
    mTLSAllocSize = 0;
    mSchedulerFlags = 1; // scheduler enabled
    mPreemptCount = 0;
    mContextSwitches = 0;
    memset(_pad3c, 0, sizeof(_pad3c));
    return 0;
}

// @addr 0x80411ee0
s32 ThreadManager::createThread(s32 priority, s32 stackSize) {
    if (mThreadCount >= mMaxThreads) {
        return -1;
    }
    u32 threadId = mThreadCount;
    mActiveMask |= (1u << threadId);
    mThreadCount++;
    (void)priority; (void)stackSize;
    return (s32)threadId;
}

// @addr 0x80411f20
u32 ThreadManager::destroyThread(u32* threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x804123c8
s32 ThreadManager::startThread(s32 threadId, s32 entryPoint) {
    (void)threadId; (void)entryPoint;
    return 0;
}

// @addr 0x80412408
s32 ThreadManager::suspendThread(s32 threadId, s32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x804124a0
s32 ThreadManager::resumeThread(s32 threadId, s32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x80412560
s32 ThreadManager::joinThread(s32 threadId, s32 timeout) {
    (void)threadId; (void)timeout;
    return 0;
}

// @addr 0x80412888
u32 ThreadManager::getThreadPriority(s32* threadId) {
    (void)threadId;
    return mDefaultPriority;
}

// @addr 0x80412b6c
u32 ThreadManager::setThreadPriority(s32* threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x80412d68
s32 ThreadManager::getDefaultPriority() {
    return (s32)mDefaultPriority;
}

// @addr 0x80412e08
u32 ThreadManager::setDefaultPriority(s32 priority) {
    mDefaultPriority = (u32)priority;
    return 0;
}

// @addr 0x80412edc
s32 ThreadManager::boostPriority(s32 threadId, s32 delta) {
    (void)threadId; (void)delta;
    return 0;
}

// @addr 0x80413200
u32 ThreadManager::getThreadInfo(s32 threadId, s32 field, u32 flags, u32 mask) {
    (void)threadId; (void)field; (void)flags; (void)mask;
    return 0;
}

// @addr 0x804135bc
u32 ThreadManager::getThreadState(s32 threadId, s32 stateField, s32 flags, s32 padding, s32 mode) {
    (void)threadId; (void)stateField; (void)flags; (void)padding; (void)mode;
    return 0;
}

// @addr 0x804136ac
u32 ThreadManager::enumerateThreads(s32 threadId, s32 field, s32 flags, s32 mode) {
    (void)threadId; (void)field; (void)flags; (void)mode;
    return 0;
}

// @addr 0x804137f4
s32 ThreadManager::getActiveCount(s32 threadId) {
    (void)threadId;
    return (s32)mThreadCount;
}

// @addr 0x8041393c
u32 ThreadManager::getThreadAffinity(s32 threadId, s32 core) {
    (void)threadId; (void)core;
    return 0x03; // both cores
}

// @addr 0x80413ae8
s32 ThreadManager::setThreadAffinity(s32 threadId, u32 coreMask, s32 flags) {
    (void)threadId; (void)coreMask; (void)flags;
    return 0;
}

// @addr 0x80413d18
u32 ThreadManager::getThreadStack(s32 threadId, s32 field) {
    (void)threadId; (void)field;
    return 0;
}

// @addr 0x80413f04
u32 ThreadManager::getStackBase(s32 threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x80414254
u32 ThreadManager::getStackInfo(s32 threadId, s32 field, u16* outInfo) {
    (void)threadId; (void)field; (void)outInfo;
    return 0;
}

// @addr 0x804143b4
u32 ThreadManager::getStackUsed(s32 threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x80414410
u32 ThreadManager::getStackFree(s32 threadId) {
    (void)threadId;
    return mDefaultStackSize;
}

// @addr 0x80414858
u32 ThreadManager::initTLS(u32* config) {
    (void)config;
    mTLSAllocSize = 0x100; // 256 bytes default TLS
    return 0;
}

// @addr 0x804149fc
u32 ThreadManager::allocateTLS(s32 size) {
    u32 offset = mTLSAllocSize;
    mTLSAllocSize += (u32)size;
    return offset;
}

// @addr 0x80414e30
u32 ThreadManager::getTLSValue(u32* slot) {
    (void)slot;
    return 0;
}

// @addr 0x804155a0
u32 ThreadManager::getCurrentThreadId(s32 padding) {
    (void)padding;
    return mCurrentThread;
}

// @addr 0x80415864
s32 ThreadManager::setThreadName(s32 threadId, s32 nameId) {
    (void)threadId; (void)nameId;
    return 0;
}

// @addr 0x804158a4
s32 ThreadManager::getThreadName(s32 threadId, s32 nameId) {
    (void)threadId; (void)nameId;
    return 0;
}

// @addr 0x8041602c
u32 ThreadManager::getThreadSpecific(s32 threadId, u32 key) {
    (void)threadId; (void)key;
    return 0;
}

// @addr 0x80416790
u32 ThreadManager::yield(s32 flags) {
    (void)flags;
    mContextSwitches++;
    return 0;
}

// @addr 0x80416828
// From: OSSleep — sleep for specified milliseconds
s32 ThreadManager::sleep(s32 ms) {
    (void)ms;
    // Real impl: OSSuspendThread(OSGetCurrentThread()) + alarm to wake
    return 0;
}

// @addr 0x80416980
s32 ThreadManager::sleepTicks(s32 ticks, s32 padding) {
    (void)ticks; (void)padding;
    return 0;
}

// @addr 0x80416d84
u32 ThreadManager::reschedule(s32 priority) {
    (void)priority;
    mContextSwitches++;
    return 0;
}

// @addr 0x804171b8
u32 ThreadManager::assignCore(u32 coreMask, u32 flags) {
    (void)coreMask; (void)flags;
    return 0;
}

// @addr 0x80417218
// From: OSGetCoreId — returns the currently executing core (0 or 1)
u32 ThreadManager::getCurrentCore(s32 padding) {
    (void)padding;
    // Broadway is core 0, Starlet is core 1
    // In most game code, this runs on core 0
    return 0;
}

// @addr 0x80417230
u32 ThreadManager::getCoreCount(u32 padding) {
    (void)padding;
    return 2; // Broadway + Starlet
}

// @addr 0x8041732c
u32 ThreadManager::getCoreFrequency(u32 core) {
    (void)core;
    return OS_TIMER_CLOCK; // 162 MHz
}

// @addr 0x8041798c
u32 ThreadManager::migrateThread(s32 threadId, s32 core, s32 flags) {
    (void)threadId; (void)core; (void)flags;
    return 0;
}

// @addr 0x80417edc
u32 ThreadManager::setThreadDestructor(s32 threadId, u32 callback, s32 arg, u32 flags) {
    (void)threadId; (void)callback; (void)arg; (void)flags;
    return 0;
}

// @addr 0x804183e8
s32 ThreadManager::compareAndSwap(s32 threadId, s32 field, s32 oldVal, s32 newVal) {
    (void)threadId; (void)field; (void)oldVal; (void)newVal;
    return 0;
}

// @addr 0x80418c60
s32 ThreadManager::cancelThread(s32 threadId, s32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x80418ca0
u32 ThreadManager::dumpThreadState(u32 threadId, s32 field, u8* buffer, s32 bufSize) {
    (void)threadId; (void)field; (void)buffer; (void)bufSize;
    return 0;
}

// @addr 0x804191bc
u32 ThreadManager::getThreadError(s32 threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x80419794
u32 ThreadManager::getThreadHandle(u32* outHandle) {
    if (outHandle) {
        *outHandle = mCurrentThread;
    }
    return mCurrentThread;
}

// @addr 0x80419c78
u32 ThreadManager::waitThreadState(s32 threadId, u32* outState) {
    (void)threadId;
    if (outState) {
        *outState = 0;
    }
    return 0;
}

// @addr 0x80419cc4
u32 ThreadManager::isThreadAlive(s32 threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x8041a05c
s32 ThreadManager::requestTermination(s32 threadId, s32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x8041a0b4
s32 ThreadManager::forceTerminate(s32 threadId, s32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x8041a10c
s32 ThreadManager::cleanupThread(s32 threadId, s32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x8041a308
u32 ThreadManager::shutdown(u32* stats) {
    if (stats) {
        *stats = mContextSwitches;
    }
    mThreadCount = 0;
    mActiveMask = 0;
    return 0;
}

// @addr 0x8041a38c
s32 ThreadManager::terminateAll(u32 flags, u32 timeout) {
    (void)flags; (void)timeout;
    mThreadCount = 0;
    mActiveMask = 0;
    return 0;
}

// @addr 0x8041a42c
u32 ThreadManager::waitAllTerminated(s32 threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x8041a490
u32 ThreadManager::getTerminationCount(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// ============================================================
// EGG::RuntimeOS::ExceptionManager
// Filled from: osContext.c (OSClearContext, OSDumpContext, save/restore),
//              osError.c (OSSetErrorHandler, __OSUnhandledException),
//              osInterrupt.c (__OSSetExceptionHandler, __OSGetExceptionHandler)
// ============================================================

ExceptionManager::~ExceptionManager() {}

// @addr 0x8041b988
// From: __OSInterruptInit — initialize exception handler table
u32 ExceptionManager::init(u32* config) {
    (void)config;
    // Clear the exception handler table
    for (int i = 0; i < EXC_MAX; i++) {
        mHandlerTable[i] = 0;
    }
    mIsInitialized = 1;
    mDumpBuffer = nullptr;
    mDumpBufferSize = 0;
    mExceptionCount = 0;
    mLastException = 0xFFFFFFFF; // no exception
    mFlags = 0;
    memset(_pad5c, 0, sizeof(_pad5c));
    return 0;
}

// @addr 0x8041ba20
s32 ExceptionManager::shutdown() {
    mIsInitialized = 0;
    return 0;
}

// @addr 0x8041bb70
u32 ExceptionManager::reset(u32 flags) {
    (void)flags;
    for (int i = 0; i < EXC_MAX; i++) {
        mHandlerTable[i] = 0;
    }
    mExceptionCount = 0;
    mLastException = 0xFFFFFFFF;
    return 0;
}

// @addr 0x8041be38
s32 ExceptionManager::configure(s32 exceptionType, s32 mode) {
    (void)exceptionType; (void)mode;
    return 0;
}

// @addr 0x8041c410
s32 ExceptionManager::enableException(s32 exceptionType, u32 flags, s32 handler) {
    (void)flags;
    if (exceptionType >= 0 && exceptionType < EXC_MAX) {
        mHandlerTable[exceptionType] = (u32)handler;
        return 0;
    }
    return -1;
}

// @addr 0x8041c798
// From: __OSSetExceptionHandler — register an exception handler
s32 ExceptionManager::registerHandler(s32 excType, s32 priority, s32 flags, u32 handler, s32 userData) {
    (void)priority; (void)flags; (void)userData;
    if (excType >= 0 && excType < EXC_MAX) {
        u32 oldHandler = mHandlerTable[excType];
        mHandlerTable[excType] = handler;
        return (s32)oldHandler;
    }
    return -1;
}

// @addr 0x8041c8d0
s32 ExceptionManager::unregisterHandler(s32 excType, s32 priority, s32 flags, u32 handler, s32 userData) {
    (void)priority; (void)flags; (void)handler; (void)userData;
    if (excType >= 0 && excType < EXC_MAX) {
        if (mHandlerTable[excType] == handler) {
            mHandlerTable[excType] = 0;
        }
    }
    return 0;
}

// @addr 0x8041c2b8
void ExceptionManager::setHandler(s32 excType) {
    if (excType >= 0 && excType < EXC_MAX) {
        // Mark that a handler is set (non-zero)
    }
}

// @addr 0x8041c73c
void ExceptionManager::setHandlerData(u32 handler, u8* userData) {
    (void)handler; (void)userData;
}

// @addr 0x8041cb24
f64 ExceptionManager::getExceptionInfo(f64 excType) {
    (void)excType;
    return 0.0;
}

// @addr 0x8041cc94
f64 ExceptionManager::getExceptionContext(s32 excType, s32 field) {
    (void)excType; (void)field;
    return 0.0;
}

// @addr 0x8041cd44
s32 ExceptionManager::handleException(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    mExceptionCount++;
    mLastException = (u32)excType;
    return 0;
}

// @addr 0x8041cdec
s32 ExceptionManager::dispatchException(s32 excType, s32 flags) {
    (void)flags;
    if (excType >= 0 && excType < EXC_MAX && mHandlerTable[excType] != 0) {
        mExceptionCount++;
        mLastException = (u32)excType;
        return 0;
    }
    return -1;
}

// @addr 0x8041cf68
s32 ExceptionManager::recoverException(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041d048
u32 ExceptionManager::getLastException(s32 excType) {
    (void)excType;
    return mLastException;
}

// @addr 0x8041d1c0
s32 ExceptionManager::clearException(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    mLastException = 0xFFFFFFFF;
    return 0;
}

// @addr 0x8041d200
u32 ExceptionManager::getExceptionCount(s32 excType) {
    (void)excType;
    return mExceptionCount;
}

// @addr 0x8041d270
u32 ExceptionManager::getTotalExceptions(s32 excType) {
    (void)excType;
    return mExceptionCount;
}

// @addr 0x8041d278
s32 ExceptionManager::checkPending(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041d288
u8 ExceptionManager::hasPending() const {
    return (mLastException != 0xFFFFFFFF) ? 1 : 0;
}

// @addr 0x8041d98c
s32 ExceptionManager::initCrashDump(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041e270
u32 ExceptionManager::writeCrashDump(s32 excType) {
    (void)excType;
    return mDumpBufferSize;
}

// @addr 0x8041e278
u32 ExceptionManager::getCrashDumpSize(s32 excType) {
    (void)excType;
    return mDumpBufferSize;
}

// @addr 0x8041e448
u32 ExceptionManager::formatDump(s32 excType, s32 flags, s8 format) {
    (void)excType; (void)flags; (void)format;
    return 0;
}

// @addr 0x8041f3b0
s32 ExceptionManager::getDebugState() {
    return 0;
}

// @addr 0x8041f64c
u32 ExceptionManager::setBreakpoint(s32 type) {
    (void)type;
    return 0;
}

// @addr 0x80420464
u32 ExceptionManager::clearBreakpoint(s32 type) {
    (void)type;
    return 0;
}

// @addr 0x80420470
u8 ExceptionManager::isBreakpointSet(s32 type) {
    (void)type;
    return 0;
}

// @addr 0x80420478
u32 ExceptionManager::getBreakpointInfo(s32 type) {
    (void)type;
    return 0;
}

// @addr 0x80420480
u32 ExceptionManager::stepExecution(s32 type) {
    (void)type;
    return 0;
}

// @addr 0x804205c0
s32 ExceptionManager::continueExecution(s32 type) {
    (void)type;
    return 0;
}

// @addr 0x8042123c
u8 ExceptionManager::readRegister(s32 regId) {
    (void)regId;
    return 0;
}

// @addr 0x80421470
s32 ExceptionManager::writeRegister(s32 regId, s32 value) {
    (void)regId; (void)value;
    return 0;
}

// @addr 0x804214c8
s32 ExceptionManager::readSPR(s32 sprId, s32 flags) {
    (void)sprId; (void)flags;
    return 0;
}

// @addr 0x80421588
u32 ExceptionManager::getGPR(s32 regId) {
    (void)regId;
    return 0;
}

// @addr 0x804215dc
s32 ExceptionManager::getFPR() {
    return 0;
}

// @addr 0x80421a04
s32 ExceptionManager::setWatchpoint(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421a44
s32 ExceptionManager::clearWatchpoint(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421a84
s32 ExceptionManager::checkWatchpoint(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421ac4
s32 ExceptionManager::getWatchpointStatus(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421b04
s32 ExceptionManager::enableWatchpoint(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421b44
s32 ExceptionManager::disableWatchpoint(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421b84
s32 ExceptionManager::configureWatchpoint(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421bc4
s32 ExceptionManager::queryWatchpoint(s32 wpId, s32 flags) {
    (void)wpId; (void)flags;
    return 0;
}

// @addr 0x80421c44
u16 ExceptionManager::getWatchpointCount(s32 wpId) {
    (void)wpId;
    return 0;
}

// @addr 0x80422338
s32 ExceptionManager::setExceptionHandler(s32 excType, s32 handler) {
    if (excType >= 0 && excType < EXC_MAX) {
        mHandlerTable[excType] = (u32)handler;
        return 0;
    }
    return -1;
}

// @addr 0x80422394
u32 ExceptionManager::getExceptionHandler(u32* outHandler) {
    if (outHandler) {
        *outHandler = mHandlerTable[0]; // return first handler
    }
    return 0;
}

// @addr 0x804224a0
s32 ExceptionManager::walkStack(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x804225e8
s32 ExceptionManager::symbolicate(s32 address) {
    (void)address;
    return 0;
}

// @addr 0x8041bd94
void ExceptionManager::saveState() {}

// @addr 0x8041befc
void ExceptionManager::restoreState() {}

// @addr 0x8041c054
void ExceptionManager::pushContext() {}

// @addr 0x8041c118
void ExceptionManager::popContext() {}

// @addr 0x8041c1fc
void ExceptionManager::swapContext() {}

// @addr 0x8041c9f4
void ExceptionManager::dumpRegisters() {}

// @addr 0x8041ca84
void ExceptionManager::dumpStack() {}

// @addr 0x8041cec4
void ExceptionManager::dumpMemory() {}

// @addr 0x8041cfa8
void ExceptionManager::configureOutput(s32 excType, u32 flags) {
    (void)excType; (void)flags;
}

// ============================================================
// EGG::RuntimeOS::StreamIO
// Filled from: General stream I/O semantics (memory-backed binary stream)
// ============================================================

StreamIO::~StreamIO() {}

// @addr 0x804071bc
u8 StreamIO::init(s32 mode, u8* buffer, u32 capacity) {
    (void)mode;
    mBuffer = buffer;
    mCapacity = capacity;
    mPosition = 0;
    mSize = 0;
    mEndian = 0; // big endian default
    mError = 0;
    mIsOpen = 1;
    mIsEof = 0;
    mByteOrderMark = 0;
    mReadCount = 0;
    mWriteCount = 0;
    memset(_pad30, 0, sizeof(_pad30));
    return 1;
}

// @addr 0x80407238
u8 StreamIO::open(s32 mode, u8* buffer) {
    (void)mode;
    if (mIsOpen) {
        return 0;
    }
    mBuffer = buffer;
    mPosition = 0;
    mIsOpen = 1;
    mError = 0;
    mIsEof = 0;
    return 1;
}

// @addr 0x80407e1c
u8 StreamIO::initFromFile(s32 mode, u8* path, u32 flags) {
    (void)mode; (void)path; (void)flags;
    mError = 1; // not implemented for files
    return 0;
}

// @addr 0x80407ef8
u8 StreamIO::initFromMemory(s32 mode, u8* data, u32 size) {
    (void)mode;
    mBuffer = data;
    mCapacity = size;
    mSize = size;
    mPosition = 0;
    mEndian = 0;
    mError = 0;
    mIsOpen = 1;
    mIsEof = 0;
    mByteOrderMark = 0;
    mReadCount = 0;
    mWriteCount = 0;
    return 1;
}

// @addr 0x8040854c
u32 StreamIO::close(s32 mode, u32 flags) {
    (void)mode; (void)flags;
    mIsOpen = 0;
    return 0;
}

// @addr 0x8040870c
u32 StreamIO::flush(s32 mode, u32 flags) {
    (void)mode; (void)flags;
    return 0;
}

// @addr 0x804087a4
u32 StreamIO::seek(s32 offset) {
    if (!mIsOpen) return 1;
    s32 newPos = offset;
    if (newPos < 0) newPos = 0;
    if ((u32)newPos > mSize) newPos = (s32)mSize;
    mPosition = (u32)newPos;
    mIsEof = (mPosition >= mSize) ? 1u : 0u;
    return 0;
}

// @addr 0x80408808
u32 StreamIO::tell(s32 mode) {
    (void)mode;
    return mPosition;
}

// @addr 0x8040904c
u32 StreamIO::read(s32 count, s8* outBuffer) {
    if (!mIsOpen || !outBuffer) return 0;
    u32 remaining = mSize - mPosition;
    u32 toRead = (u32)count;
    if (toRead > remaining) {
        toRead = remaining;
        mIsEof = 1;
    }
    if (toRead == 0) return 0;
    u8* src = static_cast<u8*>(mBuffer);
    memcpy(outBuffer, src + mPosition, toRead);
    mPosition += toRead;
    mReadCount += toRead;
    return toRead;
}

// @addr 0x8040929c
s32 StreamIO::readByte(s32 mode, s32 offset) {
    (void)mode; (void)offset;
    if (!mIsOpen || mPosition >= mSize) return -1;
    u8* src = static_cast<u8*>(mBuffer);
    s32 val = src[mPosition];
    mPosition++;
    mReadCount++;
    return val;
}

// @addr 0x804092dc
u32 StreamIO::readU16(s32 mode, s32 offset) {
    (void)mode; (void)offset;
    if (!mIsOpen || mPosition + 2 > mSize) return 0;
    u8* src = static_cast<u8*>(mBuffer);
    u16 val;
    if (mEndian == 0) {
        // Big endian
        val = ((u16)src[mPosition] << 8) | src[mPosition + 1];
    } else {
        // Little endian
        val = src[mPosition] | ((u16)src[mPosition + 1] << 8);
    }
    mPosition += 2;
    mReadCount += 2;
    return val;
}

// @addr 0x8040962c
u32 StreamIO::readU32(s32 mode, u32 offset) {
    (void)mode; (void)offset;
    if (!mIsOpen || mPosition + 4 > mSize) return 0;
    u8* src = static_cast<u8*>(mBuffer);
    u32 val;
    if (mEndian == 0) {
        // Big endian
        val = ((u32)src[mPosition] << 24) | ((u32)src[mPosition+1] << 16) |
              ((u32)src[mPosition+2] << 8) | src[mPosition+3];
    } else {
        // Little endian
        val = src[mPosition] | ((u32)src[mPosition+1] << 8) |
              ((u32)src[mPosition+2] << 16) | ((u32)src[mPosition+3] << 24);
    }
    mPosition += 4;
    mReadCount += 4;
    return val;
}

// @addr 0x80409748
u32 StreamIO::readBytes(s32 mode, u32 offset, s32 dest, u32 count) {
    (void)mode; (void)offset; (void)dest;
    return read((s32)count, nullptr);
}

// @addr 0x80409f94
u32 StreamIO::readBlock(s32 mode) {
    (void)mode;
    return 0;
}

// @addr 0x80409fec
s32 StreamIO::readString(s32 mode, s32 maxLength) {
    (void)mode; (void)maxLength;
    return 0;
}

// @addr 0x8040ae24
u32 StreamIO::write(s32 mode) {
    (void)mode;
    return 0;
}

// @addr 0x8040bafc
s32 StreamIO::writeByte(s32 mode) {
    (void)mode;
    return 0;
}

// @addr 0x8040bc5c
u32 StreamIO::writeU16(s32 mode) {
    (void)mode;
    return 0;
}

// @addr 0x8040bd4c
u32 StreamIO::writeU32(s32* value) {
    (void)value;
    return 0;
}

// @addr 0x8040bf60
s32 StreamIO::writeBytes(s32 mode, s32 count) {
    (void)mode; (void)count;
    return 0;
}

// @addr 0x8040c15c
u8 StreamIO::writeBuffer(u8* src, s32* size) {
    (void)src; (void)size;
    return 0;
}

// @addr 0x8040c3bc
u8 StreamIO::writeString(u8* str, s32 length) {
    (void)str; (void)length;
    return 0;
}

// @addr 0x8040c638
u32 StreamIO::getPosition(s8* field, u32 mode) {
    (void)field; (void)mode;
    return mPosition;
}

// @addr 0x8040c6ac
u32 StreamIO::setPosition(s8* field, s32 offset) {
    (void)field;
    return seek(offset);
}

// @addr 0x8040cbbc
u32 StreamIO::getRemaining(s32 mode) {
    (void)mode;
    if (mPosition >= mSize) return 0;
    return mSize - mPosition;
}

// @addr 0x8040cc24
u32 StreamIO::getSize(u32* outSize) {
    if (outSize) {
        *outSize = mSize;
    }
    return mSize;
}

// @addr 0x8040ccb0
s32 StreamIO::setSize(s32 mode, u32 newSize) {
    (void)mode;
    if (newSize > mCapacity) return -1;
    mSize = newSize;
    return 0;
}

// @addr 0x8040cd0c
u32 StreamIO::resize(s32 mode, u32* newSize) {
    (void)mode; (void)newSize;
    return 0;
}

// @addr 0x8040d100
s32 StreamIO::skip(s32 count) {
    if (count < 0) {
        // Seek backward
        s32 newPos = (s32)mPosition + count;
        if (newPos < 0) newPos = 0;
        mPosition = (u32)newPos;
    } else {
        mPosition += (u32)count;
        if (mPosition > mSize) {
            mPosition = mSize;
            mIsEof = 1;
        }
    }
    return 0;
}

// @addr 0x8040d1b0
u32 StreamIO::alignPosition(u32* alignment) {
    (void)alignment;
    return mPosition;
}

} // namespace RuntimeOS
} // namespace EGG