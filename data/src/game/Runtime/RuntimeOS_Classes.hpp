#pragma once
// ============================================================================
// RuntimeOS_Classes.hpp — EGG Runtime/OS Subsystem Class Hierarchy
// Address range: 0x80400000 - 0x80440000 (1012 functions)
//
// Hierarchy:
//   EGG::RuntimeOS::OSAlarm         — OS alarm / periodic timer
//   EGG::RuntimeOS::OSMutex         — OS mutex / lock wrapper
//   EGG::RuntimeOS::OSMsgQueue      — OS message queue wrapper
//   EGG::RuntimeOS::ThreadManager   — thread lifecycle & scheduling
//   EGG::RuntimeOS::ExceptionManager — exception handler registration
//   EGG::RuntimeOS::StreamIO        — binary stream I/O
//
// Categorization: GENESIS Phase 8 (Runtime OS Class Extraction)
// ============================================================================
#include "rk_types.h"

namespace EGG {
namespace RuntimeOS {

// Forward declarations
class OSAlarm;
class OSMutex;
class OSMsgQueue;
class ThreadManager;
class ExceptionManager;
class StreamIO;

// ============================================================
// EGG::RuntimeOS::OSAlarm — OS alarm / periodic timer
// ============================================================
// Wraps the Revolution SDK's OSAlarm. Provides one-shot and
// periodic timers with microsecond precision.
//
// Layout (~0x50 bytes):
//   0x00  vtable
//   0x04  mHandler        — alarm fire callback
//   0x08  mUserData       — user data passed to callback
//   0x0C  mPeriod         — period in microseconds
//   0x10  mNextFire       — next fire time (OS ticks)
//   0x14  mRepeatCount    — repeat count (0 = infinite)
//   0x18  mFireCount      — times fired
//   0x1C  mIsRunning      — alarm active flag
//   0x20  mIsPeriodic     — periodic vs one-shot
//   0x24  mPriority       — alarm handler priority
//   0x28  mQueue          — message queue to notify on fire
//   0x2C  mQueueMsg       — message value to post
//   0x30  _pad30[8]       — reserved
//
// Maps functions: 0x80402990 – 0x80403a6c
// ============================================================
class OSAlarm {
public:
    typedef void (*Handler)(OSAlarm* alarm, void* userData);

    virtual ~OSAlarm();

    // --- Lifecycle ---
    // @addr 0x80402990
    void init();
    // @addr 0x80402ab0
    void start(s32 periodUs, s32 delayUs);
    // @addr 0x80402bd0
    void stop();
    // @addr 0x80402cf0
    void reset(s32 periodUs, s32 delayUs);
    // @addr 0x80402e10
    void restart(s32 periodUs, s32 delayUs);
    // @addr 0x80402f30
    void cancel(s32 timeout, s32 flags);
    // @addr 0x80402fc4
    u32 queryState(s32 timeout, s32 flags);

    // --- Configuration ---
    // @addr 0x804030f4
    void setHandler(Handler handler, s32 userData);
    // @addr 0x8040322c
    s32 setPeriod(s32 periodUs, s32 flags);
    // @addr 0x8040326c
    u32 getPeriod() const;
    // @addr 0x80403708
    u32 setRepeat(s32 count, s32 flags);
    // @addr 0x80403828
    u32 getRepeatCount() const;
    // @addr 0x80403944
    u32 getFireCount(s32 reset, s32 flags);
    // @addr 0x80403a6c
    u32 isRunning(s32 flags, s32 padding);

    // --- Queue notification ---
    // @addr 0x80403b88
    void setQueueNotify(u32 queue, s32 msg);
    // @addr 0x80403d74
    u32 getQueueState(s32 queue, u32 flags);
    // @addr 0x80403dc0
    u32 getQueueHandle(s32* outHandle);

    // --- Accessors ---
    Handler getHandler() const   { return mHandler; }
    void*   getUserData() const  { return mUserData; }
    u32     getPeriodUs() const  { return mPeriod; }
    bool    isRunning() const    { return mIsRunning != 0; }

    // --- Member data ---
    Handler mHandler;         // 0x04
    void*   mUserData;        // 0x08
    u32     mPeriod;          // 0x0C
    u32     mNextFire;        // 0x10
    u32     mRepeatCount;     // 0x14
    u32     mFireCount;       // 0x18
    u32     mIsRunning;       // 0x1C
    u32     mIsPeriodic;      // 0x20
    u32     mPriority;        // 0x24
    u32     mQueue;           // 0x28
    u32     mQueueMsg;        // 0x2C
    u32     _pad30[8];        // 0x30
};

// ============================================================
// EGG::RuntimeOS::OSMutex — OS mutex / lock wrapper
// ============================================================
// Wraps the Revolution SDK's OSMutex. Provides recursive
// and non-recursive locking with priority inheritance.
//
// Layout (~0x30 bytes):
//   0x00  vtable
//   0x04  mQueue          — waiting thread queue
//   0x08  mThread         — current owner thread
//   0x0C  mCount          — recursive lock count
//   0x10  mIsLocked       — locked flag
//   0x14  mIsRecursive    — recursive mode flag
//   0x18  mPriority       — mutex priority ceiling
//   0x1C  mWaitCount      — threads waiting
//   0x20  _pad20[4]       — reserved
//
// Maps functions: 0x804043c0 – 0x80404968
// ============================================================
class OSMutex {
public:
    virtual ~OSMutex();

    // --- Lifecycle ---
    // @addr 0x804043c0
    void init(s32 initialCount, s32 maxCount);
    // @addr 0x8040475c
    u32 lock(s32 threadId, u32 flags);
    // @addr 0x804047a8
    u32 tryLock(s32 threadId, u32 flags);
    // @addr 0x804047f4
    u32 unlock(s32 threadId, u32 flags);
    // @addr 0x80404968
    u32 query(s32 threadId, u32 flags);

    // --- Accessors ---
    u32  getLockCount() const { return mCount; }
    bool isLocked() const     { return mIsLocked != 0; }
    void* getOwner() const    { return mThread; }

    // --- Member data ---
    u32  mQueue;          // 0x04
    void* mThread;         // 0x08
    u32  mCount;          // 0x0C
    u32  mIsLocked;       // 0x10
    u32  mIsRecursive;    // 0x14
    u32  mPriority;       // 0x18
    u32  mWaitCount;      // 0x1C
    u32  _pad20[4];       // 0x20
};

// ============================================================
// EGG::RuntimeOS::OSMsgQueue — OS message queue wrapper
// ============================================================
// Wraps the Revolution SDK's OSMessageQueue. Provides
// thread-safe message passing with blocking semantics.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mMsgBuffer      — pointer to message buffer
//   0x08  mCapacity       — max messages in queue
//   0x0C  mCount          — current message count
//   0x10  mHead           — read index
//   0x14  mTail           — write index
//   0x18  mIsInitialized  — queue ready flag
//   0x1C  mSendCount      — total messages sent
//   0x20  mRecvCount      — total messages received
//   0x24  mMaxUsed        — peak queue usage
//   0x28  mOverflowCount  — overflow/lost messages
//   0x2C  _pad2c[12]      — reserved
//
// Maps functions: 0x80405210 – 0x80406900
// ============================================================
class OSMsgQueue {
public:
    virtual ~OSMsgQueue();

    // --- Lifecycle ---
    // @addr 0x80405210
    void init(s32 capacity, s32 msgSize);
    // @addr 0x80405850
    u32 send(s32 threadId, u32 msg);
    // @addr 0x80405a30
    u32 receive(s32 threadId, u32 timeout);
    // @addr 0x80405cdc
    u32 peek(s32* outMsg, f32* outTimestamp);
    // @addr 0x80405fe0
    s32 waitMsg(s32 threadId, s32 timeout);
    // @addr 0x80406020
    u32 poll(s32 threadId, f32* outTimestamp);
    // @addr 0x804062b4
    u32 flush(s32 threadId, f32* outTimestamp);
    // @addr 0x80406394
    u32 configure(s32 threadId, u32 flags);
    // @addr 0x8040668c
    u32 sendWithTimestamp(s32 threadId, f32* timestamp, f32* outTs);
    // @addr 0x80406828
    u32 getCapacity(s32 threadId, u32 flags);
    // @addr 0x80406900
    u32 getCount(s32* outCount);

    // --- Accessors ---
    u32  getMsgCount() const    { return mCount; }
    u32  getCapacity() const    { return mCapacity; }
    bool isFull() const         { return mCount >= mCapacity; }
    bool isEmpty() const        { return mCount == 0; }
    u32  getOverflowCount() const { return mOverflowCount; }

    // --- Member data ---
    void* mMsgBuffer;      // 0x04
    u32   mCapacity;       // 0x08
    u32   mCount;          // 0x0C
    u32   mHead;           // 0x10
    u32   mTail;           // 0x14
    u32   mIsInitialized;  // 0x18
    u32   mSendCount;      // 0x1C
    u32   mRecvCount;      // 0x20
    u32   mMaxUsed;        // 0x24
    u32   mOverflowCount;  // 0x28
    u32   _pad2c[12];      // 0x2C
};

// ============================================================
// EGG::RuntimeOS::ThreadManager — Thread lifecycle & scheduling
// ============================================================
// Manages OS thread creation, destruction, priority management,
// and thread-local storage. Wraps the Revolution SDK's thread API.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mThreadCount    — active thread count
//   0x08  mMaxThreads     — maximum concurrent threads
//   0x0C  mActiveMask     — bitmask of active thread IDs
//   0x10  mDefaultPriority — default thread priority
//   0x14  mDefaultStackSize — default stack size
//   0x18  mMainThread     — main thread handle
//   0x1C  mIdleThread     — idle thread handle
//   0x20  mTimerThread    — timer thread handle
//   0x24  mCurrentThread  — currently executing thread
//   0x28  mTLSBase        — thread-local storage base
//   0x2C  mTLSAllocSize   — TLS allocation size
//   0x30  mSchedulerFlags — scheduler mode flags
//   0x34  mPreemptCount   — preemption count
//   0x38  mContextSwitches — total context switches
//   0x3C  _pad3c[16]      — reserved
//
// Maps functions: 0x80410550 – 0x8041a490
// ============================================================
class ThreadManager {
public:
    virtual ~ThreadManager();

    // --- Lifecycle ---
    // @addr 0x80410550
    u32 init(u32* config);
    // @addr 0x80411ee0
    s32 createThread(s32 priority, s32 stackSize);
    // @addr 0x80411f20
    u32 destroyThread(u32* threadId);
    // @addr 0x804123c8
    s32 startThread(s32 threadId, s32 entryPoint);
    // @addr 0x80412408
    s32 suspendThread(s32 threadId, s32 flags);
    // @addr 0x804124a0
    s32 resumeThread(s32 threadId, s32 flags);
    // @addr 0x80412560
    s32 joinThread(s32 threadId, s32 timeout);

    // --- Priority ---
    // @addr 0x80412888
    u32 getThreadPriority(s32* threadId);
    // @addr 0x80412b6c
    u32 setThreadPriority(s32* threadId);
    // @addr 0x80412d68
    s32 getDefaultPriority();
    // @addr 0x80412e08
    u32 setDefaultPriority(s32 priority);
    // @addr 0x80412edc
    s32 boostPriority(s32 threadId, s32 delta);

    // --- Thread queries ---
    // @addr 0x80413200
    u32 getThreadInfo(s32 threadId, s32 field, u32 flags, u32 mask);
    // @addr 0x804135bc
    u32 getThreadState(s32 threadId, s32 stateField, s32 flags, s32 padding, s32 mode);
    // @addr 0x804136ac
    u32 enumerateThreads(s32 threadId, s32 field, s32 flags, s32 mode);
    // @addr 0x804137f4
    s32 getActiveCount(s32 threadId);
    // @addr 0x8041393c
    u32 getThreadAffinity(s32 threadId, s32 core);
    // @addr 0x80413ae8
    s32 setThreadAffinity(s32 threadId, u32 coreMask, s32 flags);
    // @addr 0x80413d18
    u32 getThreadStack(s32 threadId, s32 field);
    // @addr 0x80413f04
    u32 getStackBase(s32 threadId);
    // @addr 0x80414254
    u32 getStackInfo(s32 threadId, s32 field, u16* outInfo);
    // @addr 0x804143b4
    u32 getStackUsed(s32 threadId);
    // @addr 0x80414410
    u32 getStackFree(s32 threadId);

    // --- TLS ---
    // @addr 0x80414858
    u32 initTLS(u32* config);
    // @addr 0x804149fc
    u32 allocateTLS(s32 size);
    // @addr 0x80414e30
    u32 getTLSValue(u32* slot);

    // --- Thread-local info ---
    // @addr 0x804155a0
    u32 getCurrentThreadId(s32 padding);
    // @addr 0x80415864
    s32 setThreadName(s32 threadId, s32 nameId);
    // @addr 0x804158a4
    s32 getThreadName(s32 threadId, s32 nameId);
    // @addr 0x8041602c
    u32 getThreadSpecific(s32 threadId, u32 key);

    // --- Scheduler ---
    // @addr 0x80416790
    u32 yield(s32 flags);
    // @addr 0x80416828
    s32 sleep(s32 ms);
    // @addr 0x80416980
    s32 sleepTicks(s32 ticks, s32 padding);
    // @addr 0x80416d84
    u32 reschedule(s32 priority);

    // --- Multi-core ---
    // @addr 0x804171b8
    u32 assignCore(u32 coreMask, u32 flags);
    // @addr 0x80417218
    u32 getCurrentCore(s32 padding);
    // @addr 0x80417230
    u32 getCoreCount(u32 padding);
    // @addr 0x8041732c
    u32 getCoreFrequency(u32 core);

    // --- Advanced ---
    // @addr 0x8041798c
    u32 migrateThread(s32 threadId, s32 core, s32 flags);
    // @addr 0x80417edc
    u32 setThreadDestructor(s32 threadId, u32 callback, s32 arg, u32 flags);
    // @addr 0x804183e8
    s32 compareAndSwap(s32 threadId, s32 field, s32 oldVal, s32 newVal);
    // @addr 0x80418c60
    s32 cancelThread(s32 threadId, s32 flags);
    // @addr 0x80418ca0
    u32 dumpThreadState(u32 threadId, s32 field, u8* buffer, s32 bufSize);
    // @addr 0x804191bc
    u32 getThreadError(s32 threadId);
    // @addr 0x80419794
    u32 getThreadHandle(u32* outHandle);
    // @addr 0x80419c78
    u32 waitThreadState(s32 threadId, u32* outState);
    // @addr 0x80419cc4
    u32 isThreadAlive(s32 threadId);

    // --- Shutdown ---
    // @addr 0x8041a05c
    s32 requestTermination(s32 threadId, s32 flags);
    // @addr 0x8041a0b4
    s32 forceTerminate(s32 threadId, s32 flags);
    // @addr 0x8041a10c
    s32 cleanupThread(s32 threadId, s32 flags);
    // @addr 0x8041a308
    u32 shutdown(u32* stats);
    // @addr 0x8041a38c
    s32 terminateAll(u32 flags, u32 timeout);
    // @addr 0x8041a42c
    u32 waitAllTerminated(s32 threadId);
    // @addr 0x8041a490
    u32 getTerminationCount(s32 threadId, u32 flags);

    // --- Accessors ---
    u32   getThreadCount() const  { return mThreadCount; }
    void* getCurrentThread() const { return reinterpret_cast<void*>(mCurrentThread); }
    u32   getContextSwitches() const { return mContextSwitches; }

    // --- Member data ---
    u32   mThreadCount;      // 0x04
    u32   mMaxThreads;       // 0x08
    u32   mActiveMask;       // 0x0C
    u32   mDefaultPriority;  // 0x10
    u32   mDefaultStackSize; // 0x14
    u32   mMainThread;       // 0x18
    u32   mIdleThread;       // 0x1C
    u32   mTimerThread;      // 0x20
    u32   mCurrentThread;    // 0x24
    u32   mTLSBase;          // 0x28
    u32   mTLSAllocSize;     // 0x2C
    u32   mSchedulerFlags;   // 0x30
    u32   mPreemptCount;     // 0x34
    u32   mContextSwitches;  // 0x38
    u32   _pad3c[16];        // 0x3C
};

// ============================================================
// EGG::RuntimeOS::ExceptionManager — Exception handling
// ============================================================
// Registers exception handlers for the Revolution OS exception
// system (ISI, DSI, program, floating-point, alignment, etc.)
// and provides crash dump / reporting capabilities.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mHandlerTable   — exception handler table (16 entries)
//   0x44  mIsInitialized  — exception system initialized flag
//   0x48  mDumpBuffer     — crash dump output buffer
//   0x4C  mDumpBufferSize — crash dump buffer size
//   0x50  mExceptionCount — total exceptions caught
//   0x54  mLastException  — last exception type
//   0x58  mFlags          — configuration flags
//   0x5C  _pad5c[2]       — reserved
//
// Maps functions: 0x8041b988 – 0x8042318c
// ============================================================
class ExceptionManager {
public:
    virtual ~ExceptionManager();

    enum ExceptionType {
        EXC_DSI         = 0,
        EXC_ISI         = 1,
        EXC_PROGRAM     = 2,
        EXC_FLOAT       = 3,
        EXC_ALIGNMENT   = 4,
        EXC_MACHINE     = 5,
        EXC_TRACE       = 6,
        EXC_PERFORMANCE = 7,
        EXC_SYSTEM      = 8,
        EXC_MAX         = 16,
    };

    // --- Lifecycle ---
    // @addr 0x8041b988
    u32 init(u32* config);
    // @addr 0x8041ba20
    s32 shutdown();
    // @addr 0x8041bb70
    u32 reset(u32 flags);
    // @addr 0x8041be38
    s32 configure(s32 exceptionType, s32 mode);
    // @addr 0x8041c410
    s32 enableException(s32 exceptionType, u32 flags, s32 handler);

    // --- Handler registration ---
    // @addr 0x8041c798
    s32 registerHandler(s32 excType, s32 priority, s32 flags, u32 handler, s32 userData);
    // @addr 0x8041c8d0
    s32 unregisterHandler(s32 excType, s32 priority, s32 flags, u32 handler, s32 userData);
    // @addr 0x8041c2b8
    void setHandler(s32 excType);
    // @addr 0x8041c73c
    void setHandlerData(u32 handler, u8* userData);

    // --- Exception handling ---
    // @addr 0x8041cb24
    f64 getExceptionInfo(f64 excType);
    // @addr 0x8041cc94
    f64 getExceptionContext(s32 excType, s32 field);
    // @addr 0x8041cd44
    s32 handleException(s32 excType, s32 flags);
    // @addr 0x8041cdec
    s32 dispatchException(s32 excType, s32 flags);
    // @addr 0x8041cf68
    s32 recoverException(s32 excType, s32 flags);
    // @addr 0x8041d048
    u32 getLastException(s32 excType);
    // @addr 0x8041d1c0
    s32 clearException(s32 excType, s32 flags);
    // @addr 0x8041d200
    u32 getExceptionCount(s32 excType);
    // @addr 0x8041d270
    u32 getTotalExceptions(s32 excType);
    // @addr 0x8041d278
    s32 checkPending(s32 excType, s32 flags);
    // @addr 0x8041d288
    u8  hasPending() const;

    // --- Crash dump ---
    // @addr 0x8041d98c
    s32 initCrashDump(s32 excType, s32 flags);
    // @addr 0x8041e270
    u32 writeCrashDump(s32 excType);
    // @addr 0x8041e278
    u32 getCrashDumpSize(s32 excType);
    // @addr 0x8041e448
    u32 formatDump(s32 excType, s32 flags, s8 format);

    // --- Debug ---
    // @addr 0x8041f3b0
    s32 getDebugState();
    // @addr 0x8041f64c
    u32 setBreakpoint(s32 type);
    // @addr 0x80420464
    u32 clearBreakpoint(s32 type);
    // @addr 0x80420470
    u8  isBreakpointSet(s32 type);
    // @addr 0x80420478
    u32 getBreakpointInfo(s32 type);
    // @addr 0x80420480
    u32 stepExecution(s32 type);
    // @addr 0x804205c0
    s32 continueExecution(s32 type);

    // --- Register access ---
    // @addr 0x8042123c
    u8  readRegister(s32 regId);
    // @addr 0x80421470
    s32 writeRegister(s32 regId, s32 value);
    // @addr 0x804214c8
    s32 readSPR(s32 sprId, s32 flags);
    // @addr 0x80421588
    u32 getGPR(s32 regId);
    // @addr 0x804215dc
    s32 getFPR();

    // --- Misc debug ops ---
    // @addr 0x80421a04
    s32 setWatchpoint(s32 wpId, s32 flags);
    // @addr 0x80421a44
    s32 clearWatchpoint(s32 wpId, s32 flags);
    // @addr 0x80421a84
    s32 checkWatchpoint(s32 wpId, s32 flags);
    // @addr 0x80421ac4
    s32 getWatchpointStatus(s32 wpId, s32 flags);
    // @addr 0x80421b04
    s32 enableWatchpoint(s32 wpId, s32 flags);
    // @addr 0x80421b44
    s32 disableWatchpoint(s32 wpId, s32 flags);
    // @addr 0x80421b84
    s32 configureWatchpoint(s32 wpId, s32 flags);
    // @addr 0x80421bc4
    s32 queryWatchpoint(s32 wpId, s32 flags);
    // @addr 0x80421c44
    u16 getWatchpointCount(s32 wpId);

    // --- Advanced ---
    // @addr 0x80422338
    s32 setExceptionHandler(s32 excType, s32 handler);
    // @addr 0x80422394
    u32 getExceptionHandler(u32* outHandler);
    // @addr 0x804224a0
    s32 walkStack(s32 excType, s32 flags);
    // @addr 0x804225e8
    s32 symbolicate(s32 address);

    // --- State management ---
    // @addr 0x8041bd94
    void saveState();
    // @addr 0x8041befc
    void restoreState();
    // @addr 0x8041c054
    void pushContext();
    // @addr 0x8041c118
    void popContext();
    // @addr 0x8041c1fc
    void swapContext();
    // @addr 0x8041c9f4
    void dumpRegisters();
    // @addr 0x8041ca84
    void dumpStack();
    // @addr 0x8041cec4
    void dumpMemory();
    // @addr 0x8041cfa8
    void configureOutput(s32 excType, u32 flags);

    // --- Accessors ---
    bool isInitialized() const     { return mIsInitialized != 0; }
    u32  getExceptionCount() const { return mExceptionCount; }
    u32  getLastException() const  { return mLastException; }

    // --- Member data ---
    u32  mHandlerTable[EXC_MAX]; // 0x04
    u32  mIsInitialized;          // 0x44
    void* mDumpBuffer;           // 0x48
    u32  mDumpBufferSize;         // 0x4C
    u32  mExceptionCount;         // 0x50
    u32  mLastException;          // 0x54
    u32  mFlags;                  // 0x58
    u32  _pad5c[2];              // 0x5C
};

// ============================================================
// EGG::RuntimeOS::StreamIO — Binary stream I/O
// ============================================================
// Provides buffered read/write operations on memory-backed
// streams. Used for serialization, save data, and network I/O.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mBuffer         — pointer to stream data buffer
//   0x08  mCapacity       — buffer capacity
//   0x0C  mPosition       — current read/write position
//   0x10  mSize           — valid data size
//   0x14  mEndian         — endianness mode (0 = big, 1 = little)
//   0x18  mError          — error code (0 = none)
//   0x1C  mIsOpen         — stream open flag
//   0x20  mIsEof          — end-of-file flag
//   0x24  mByteOrderMark  — BOM detection result
//   0x28  mReadCount      — total bytes read
//   0x2C  mWriteCount     — total bytes written
//   0x30  _pad30[12]      — reserved
//
// Maps functions: 0x804071bc – 0x80408808
// ============================================================
class StreamIO {
public:
    virtual ~StreamIO();

    enum Endian {
        ENDIAN_BIG    = 0,
        ENDIAN_LITTLE = 1,
    };

    // --- Lifecycle ---
    // @addr 0x804071bc
    u8  init(s32 mode, u8* buffer, u32 capacity);
    // @addr 0x80407238
    u8  open(s32 mode, u8* buffer);
    // @addr 0x80407e1c
    u8  initFromFile(s32 mode, u8* path, u32 flags);
    // @addr 0x80407ef8
    u8  initFromMemory(s32 mode, u8* data, u32 size);
    // @addr 0x8040854c
    u32 close(s32 mode, u32 flags);
    // @addr 0x8040870c
    u32 flush(s32 mode, u32 flags);
    // @addr 0x804087a4
    u32 seek(s32 offset);
    // @addr 0x80408808
    u32 tell(s32 mode);

    // --- Read operations ---
    // @addr 0x8040904c
    u32 read(s32 count, s8* outBuffer);
    // @addr 0x8040929c
    s32 readByte(s32 mode, s32 offset);
    // @addr 0x804092dc
    u32 readU16(s32 mode, s32 offset);
    // @addr 0x8040962c
    u32 readU32(s32 mode, u32 offset);
    // @addr 0x80409748
    u32 readBytes(s32 mode, u32 offset, s32 dest, u32 count);
    // @addr 0x80409f94
    u32 readBlock(s32 mode);
    // @addr 0x80409fec
    s32 readString(s32 mode, s32 maxLength);

    // --- Write operations ---
    // @addr 0x8040ae24
    u32 write(s32 mode);
    // @addr 0x8040bafc
    s32 writeByte(s32 mode);
    // @addr 0x8040bc5c
    u32 writeU16(s32 mode);
    // @addr 0x8040bd4c
    u32 writeU32(s32* value);
    // @addr 0x8040bf60
    s32 writeBytes(s32 mode, s32 count);
    // @addr 0x8040c15c
    u8  writeBuffer(u8* src, s32* size);
    // @addr 0x8040c3bc
    u8  writeString(u8* str, s32 length);

    // --- Position / size ---
    // @addr 0x8040c638
    u32 getPosition(s8* field, u32 mode);
    // @addr 0x8040c6ac
    u32 setPosition(s8* field, s32 offset);
    // @addr 0x8040cbbc
    u32 getRemaining(s32 mode);
    // @addr 0x8040cc24
    u32 getSize(u32* outSize);
    // @addr 0x8040ccb0
    s32 setSize(s32 mode, u32 newSize);
    // @addr 0x8040cd0c
    u32 resize(s32 mode, u32* newSize);
    // @addr 0x8040d100
    s32 skip(s32 count);
    // @addr 0x8040d1b0
    u32 alignPosition(u32* alignment);

    // --- Accessors ---
    void*  getBuffer() const   { return mBuffer; }
    u32    getCapacity() const { return mCapacity; }
    u32    getPosition() const { return mPosition; }
    u32    getSize() const     { return mSize; }
    Endian getEndian() const   { return static_cast<Endian>(mEndian); }
    bool   isOpen() const      { return mIsOpen != 0; }
    bool   isEof() const       { return mIsEof != 0; }
    u32    getError() const    { return mError; }

    // --- Member data ---
    void*  mBuffer;          // 0x04
    u32    mCapacity;        // 0x08
    u32    mPosition;        // 0x0C
    u32    mSize;            // 0x10
    u32    mEndian;          // 0x14
    u32    mError;           // 0x18
    u32    mIsOpen;          // 0x1C
    u32    mIsEof;           // 0x20
    u32    mByteOrderMark;   // 0x24
    u32    mReadCount;       // 0x28
    u32    mWriteCount;      // 0x2C
    u32    _pad30[12];       // 0x30
};

} // namespace RuntimeOS
} // namespace EGG