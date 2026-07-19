#pragma once
// ============================================================================
// System_Classes.hpp — EGG System Manager Class Hierarchy
// Address range: 0x805e0000 - 0x80600000 (411 functions)
//
// Hierarchy:
//   EGG::System::SystemManager  — system init, lifecycle, OS config
//   EGG::System::FrameManager   — frame timing, VSync, FPS control
//   EGG::System::TaskManager    — OS task scheduling and message queues
//   EGG::System::MemoryArena    — memory region / arena management
//   EGG::System::ConfigStore    — persistent system configuration (SYSCONF)
//
// Categorization: GENESIS Phase 8 (Runtime System Class Extraction)
// ============================================================================
#include "rk_types.h"

namespace EGG {
namespace System {

// Forward declarations
class SystemManager;
class FrameManager;
class TaskManager;
class MemoryArena;
class ConfigStore;

// ============================================================
// EGG::System::SystemManager — System initialization & lifecycle
// ============================================================
// Manages the overall system state: OS initialization, memory
// configuration, thread setup, and shutdown procedures.
//
// Layout (~0x100 bytes):
//   0x00  vtable
//   0x04  mState           — system lifecycle state
//   0x08  mInitFlags       — initialization flags
//   0x0C  mOSVersion       — OS version info
//   0x10  mConsoleType     — console hardware type
//   0x14  mLanguage        — system language
//   0x18  mRegion          — system region
//   0x1C  mMem1Size        — MEM1 arena size
//   0x20  mMem2Size        — MEM2 arena size
//   0x24  mArenaStart      — start of application arena
//   0x28  mArenaEnd        — end of application arena
//   0x2C  mBootInfo        — pointer to OS boot info
//   0x30  mIsInitialized   — init complete flag
//   0x34  mIsShutdown      — shutdown in progress flag
//   0x38  mErrorFlag       — fatal error flag
//   0x3C  mResetCallback   — reset handler callback
//   0x40  _pad40[48]       — reserved
//
// Maps functions: 0x805e0044 – 0x805e1604
// ============================================================
class SystemManager {
public:
    enum State {
        STATE_UNINITIALIZED = 0,
        STATE_INITIALIZING  = 1,
        STATE_RUNNING       = 2,
        STATE_SUSPENDED     = 3,
        STATE_SHUTTING_DOWN = 4,
    };

    virtual ~SystemManager();

    // --- Lifecycle ---
    // @addr 0x805e0044
    void init();
    // @addr 0x805e0510
    void shutdown();
    // @addr 0x805e07e8
    void configure(s32 configFlags);
    // @addr 0x805e1604
    void reset();

    // --- OS integration ---
    // @addr 0x805e02e8
    void setBootInfo(u32* bootInfo);
    // @addr 0x805e0494
    u32 getOSInfo() const;
    // @addr 0x805e0888
    void setArenaConfig(u32* config, u32 flags);
    // @addr 0x805e0960
    void detectHardware(s32 probeType);
    // @addr 0x805e0af8
    void initMemory(u32* mem1Info, s32* mem2Info);
    // @addr 0x805e0c28
    void setupHeap(s32* heapParams);
    // @addr 0x805e0d40
    void initDebugger(s32* debugInfo);

    // --- State queries ---
    // @addr 0x805e02a0
    s32 getState(s32 padding) const;
    // @addr 0x805e10f4
    void checkRunning(s32 timeout);
    // @addr 0x805e119c
    void waitReady(s32 timeout);

    // --- Thread setup ---
    // @addr 0x805e0aac
    s32 createMainThread(s32 padding, s32 stackSize);
    // @addr 0x805e12f8
    s32 createTimerThread(s32 padding, s32 interval);
    // @addr 0x805e13d8
    s32 createDVDThread(s32 padding, s32 priority);
    // @addr 0x805e1368
    void startThreads();
    // @addr 0x805e1418
    void stopThreads(s32 reason);
    // @addr 0x805e1528
    void joinThread(s32 threadId);

    // --- Handler setup ---
    // @addr 0x805e1594
    void registerResetHandler(u32* handler, s32* userData);
    // @addr 0x805e16bc
    static void onReset();

    // --- Extended init ---
    // @addr 0x805e17e8
    u32 getInitStatus() const;
    // @addr 0x805e184c
    s32 initSubsystem(s32 padding, s32 subsysId);
    // @addr 0x805e1920
    void initVideo(s32 mode);
    // @addr 0x805e1cec
    void initAudio(s32 sampleRate);
    // @addr 0x805e1d3c
    void initInput(s32 configFlags);

    // --- Accessors ---
    State getState() const { return mState; }
    u32   getLanguage() const { return mLanguage; }
    u32   getRegion() const { return mRegion; }
    u32   getMem1Size() const { return mMem1Size; }
    u32   getMem2Size() const { return mMem2Size; }

    // --- Member data ---
    State mState;          // 0x04
    u32   mInitFlags;      // 0x08
    u32   mOSVersion;      // 0x0C
    u32   mConsoleType;    // 0x10
    u32   mLanguage;       // 0x14
    u32   mRegion;         // 0x18
    u32   mMem1Size;       // 0x1C
    u32   mMem2Size;       // 0x20
    u32   mArenaStart;     // 0x24
    u32   mArenaEnd;       // 0x28
    void* mBootInfo;       // 0x2C
    u32   mIsInitialized;  // 0x30
    u32   mIsShutdown;     // 0x34
    u32   mErrorFlag;      // 0x38
    void (*mResetCallback)(void*); // 0x3C
    u32   _pad40[48];      // 0x40
};

// ============================================================
// EGG::System::FrameManager — Frame timing & VSync
// ============================================================
// Controls frame pacing, VSync, FPS counting, and delta-time
// computation. Used by the main loop to maintain consistent timing.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mFrameCount      — total frames rendered
//   0x08  mVSyncCount      — total VSyncs occurred
//   0x0C  mTargetFps       — desired frames per second
//   0x10  mCurrentFps      — measured FPS (x100 fixed point)
//   0x14  mFrameTime       — time of last frame start (OS ticks)
//   0x18  mDeltaTime       — seconds since last frame (x1000)
//   0x1C  mMinFrameTime    — minimum frame time (OS ticks)
//   0x20  mMaxFrameTime    — maximum frame time (OS ticks)
//   0x24  mAvgFrameTime    — average frame time (OS ticks)
//   0x28  mFrameTimeAccum  — accumulator for averaging
//   0x2C  mFrameTimeCount  — count for averaging
//   0x30  mIsVSyncEnabled  — VSync on/off
//   0x34  mIsPaused        — frame timing paused
//   0x38  mVSyncRetraceCount — retraces to wait
//   0x3C  _pad3c[9]        — reserved
//
// Maps functions: 0x805e1eb4 – 0x805e2e70
// ============================================================
class FrameManager {
public:
    virtual ~FrameManager();

    // --- Lifecycle ---
    // @addr 0x805e1eb4
    void init(u32 targetFps);
    // @addr 0x805e1f08
    void reset(u32* savedState);
    // @addr 0x805e20e0
    void shutdown(u32* stats, u32 flags);

    // --- Frame control ---
    // @addr 0x805e21f8
    void beginFrame();
    // @addr 0x805e2294
    void endFrame(s32 frameFlags);
    // @addr 0x805e2300
    void waitForNextFrame(s32* frameInfo);
    // @addr 0x805e2424
    void skipFrame();

    // --- VSync ---
    // @addr 0x805e25b4
    void waitVSync(s32 retraceCount);
    // @addr 0x805e2620
    void measureVSync(s32* timingData);
    // @addr 0x805e26b8
    void setVSync(s32 mode);

    // --- Timing ---
    // @addr 0x805e276c
    void updateTiming(s32* timing);
    // @addr 0x805e2920
    s32 getFrameDelta(s32 padding, s32 scale);
    // @addr 0x805e2968
    void recordFrameTime(u32* timestamp, u32 value);
    // @addr 0x805e2a68
    void computeAverage(s32* accumulator);
    // @addr 0x805e2aa4
    void updateStats(s32* stats);

    // --- Status ---
    // @addr 0x805e2cbc
    s32 getDropCount(s32 padding, s32 window);
    // @addr 0x805e2cfc
    void setRetraceTarget(u32* target, u32 count);
    // @addr 0x805e2e0c
    u32 getVSyncCount() const;
    // @addr 0x805e2e70
    void getStats();

    // --- Accessors ---
    u32 getFrameCount() const { return mFrameCount; }
    u32 getCurrentFps() const { return mCurrentFps; }
    f64 getDeltaTimeSec() const;

    // --- Member data ---
    u32 mFrameCount;        // 0x04
    u32 mVSyncCount;        // 0x08
    u32 mTargetFps;         // 0x0C
    u32 mCurrentFps;        // 0x10
    u32 mFrameTime;         // 0x14
    u32 mDeltaTime;         // 0x18
    u32 mMinFrameTime;      // 0x1C
    u32 mMaxFrameTime;      // 0x20
    u32 mAvgFrameTime;      // 0x24
    u32 mFrameTimeAccum;    // 0x28
    u32 mFrameTimeCount;    // 0x2C
    u32 mIsVSyncEnabled;    // 0x30
    u32 mIsPaused;          // 0x34
    u32 mVSyncRetraceCount; // 0x38
    u32 _pad3c[9];          // 0x3C
};

// ============================================================
// EGG::System::TaskManager — OS task scheduling & messages
// ============================================================
// Manages OS tasks, message queues, timers, and inter-thread
// communication primitives used by the EGG framework.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mTaskCount       — active task count
//   0x08  mMaxTasks        — maximum tasks
//   0x0C  mTasks           — pointer to task array
//   0x10  mMsgQueue        — message queue handle
//   0x14  mMsgCount        — queued message count
//   0x18  mIsProcessing    — processing flag
//   0x1C  mTimerHandle     — OS timer handle
//   0x20  mTimerInterval   — timer interval (ms)
//   0x24  mTimerCallback   — timer fire callback
//   0x28  mTimerActive     — timer running flag
//   0x2C  mNextTaskId      — auto-increment task ID
//   0x30  mActiveTaskMask  — bitmask of active tasks
//   0x34  _pad34[20]       — reserved
//
// Maps functions: 0x805e31c4 – 0x805e66ec
// ============================================================
class TaskManager {
public:
    virtual ~TaskManager();

    // --- Lifecycle ---
    // @addr 0x805e31c4
    void init(s32 maxTasks);
    // @addr 0x805e355c
    void shutdown();

    // --- Task management ---
    // @addr 0x805e3730
    void createTask();
    // @addr 0x805e3a48
    void destroyTask();
    // @addr 0x805e3e10
    void scheduleTask(s32 taskId);
    // @addr 0x805e3ed0
    void cancelTask(s32 taskId);
    // @addr 0x805e4234
    void prioritizeTask(s32 taskId);
    // @addr 0x805e4398
    void getTaskStatus();

    // --- Message queue ---
    // @addr 0x805e4420
    void initMessageQueue();
    // @addr 0x805e47f4
    void sendMessage(s32 msgId);
    // @addr 0x805e48d0
    static void receiveMessage();
    // @addr 0x805e4bac
    void flushMessages();
    // @addr 0x805e4d9c
    void getMessageCount();
    // @addr 0x805e4fb8
    void peekMessage();

    // --- Timer ---
    // @addr 0x805e54a4
    void initTimer();
    // @addr 0x805e55dc
    void startTimer(s32 intervalMs);
    // @addr 0x805e56d8
    void stopTimer();
    // @addr 0x805e577c
    void resetTimer();
    // @addr 0x805e583c
    void setTimerInterval(s32 intervalMs);
    // @addr 0x805e59cc
    void setTimerCallback(s32 callbackId);
    // @addr 0x805e5a48
    void onTimerFire();
    // @addr 0x805e5b98
    void getTimerRemaining();

    // --- Scheduling ---
    // @addr 0x805e5c6c
    void runNextTask(s32 priority);
    // @addr 0x805e5d34
    void processAllTasks(s32 maxCount);
    // @addr 0x805e5e2c
    s32 getPendingCount(s32 padding, s32 priority);
    // @addr 0x805e5e9c
    void setTaskPriority(u32 taskId);
    // @addr 0x805e5f14
    void rebalanceQueue();

    // --- Status ---
    // @addr 0x805e60c4
    void getSystemLoad();
    // @addr 0x805e6234
    void getCpuUsage();
    // @addr 0x805e6450
    void getTaskInfo();
    // @addr 0x805e6584
    u32 getQueueDepth() const;
    // @addr 0x805e661c
    s32 getActiveTaskCount();
    // @addr 0x805e66ec
    static void dumpState();

    // --- Advanced ---
    // @addr 0x805e6804
    f64 getTimerPrecision(u32 samples, s8 mode, u32 flags);
    // @addr 0x805e68e4
    s32 waitTask(s32 taskId, s32 timeout);
    // @addr 0x805e6924
    s32 waitForAll(s32 taskId, s32 timeout);
    // @addr 0x805e6964
    s32 waitAny(s32 taskId, s32 timeout);

    // --- Member data ---
    u32   mTaskCount;      // 0x04
    u32   mMaxTasks;       // 0x08
    void* mTasks;          // 0x0C
    u32   mMsgQueue;       // 0x10
    u32   mMsgCount;       // 0x14
    u32   mIsProcessing;   // 0x18
    u32   mTimerHandle;    // 0x1C
    u32   mTimerInterval;  // 0x20
    void (*mTimerCallback)(void*); // 0x24
    u32   mTimerActive;    // 0x28
    u32   mNextTaskId;     // 0x2C
    u32   mActiveTaskMask; // 0x30
    u32   _pad34[20];      // 0x34
};

// ============================================================
// EGG::System::MemoryArena — Memory region / arena management
// ============================================================
// Manages fixed-size memory arenas. Tracks allocations,
// free space, and provides arena-level alloc/free operations.
//
// Layout (~0x40 bytes):
//   0x00  vtable
//   0x04  mBase            — arena base address
//   0x08  mSize            — arena total size
//   0x0C  mUsed            — currently used bytes
//   0x10  mPeakUsed        — peak usage
//   0x14  mFreeList        — head of free block list
//   0x18  mAllocCount      — total allocations made
//   0x1C  mFreeCount       — total frees performed
//   0x20  mIsInitialized   — arena ready flag
//   0x24  mAlignment       — default alignment
//   0x28  _pad28[6]        — reserved
//
// Maps functions: 0x805e6880 – 0x805e880c
// ============================================================
class MemoryArena {
public:
    virtual ~MemoryArena();

    // --- Lifecycle ---
    // @addr 0x805e6880
    static void globalInit();
    // @addr 0x805e6a0c
    void initArena();

    // --- Allocation ---
    // @addr 0x805e7228
    void alloc();
    // @addr 0x805e72b0
    s32 allocAligned(u32 size, u32* outPtr, u32* outActual, s32 align);
    // @addr 0x805e7538
    u32 getFreeSize() const;
    // @addr 0x805e76d8
    s32 getAllocCount();
    // @addr 0x805e7780
    static void dumpStatistics();
    // @addr 0x805e78fc
    static void validateHeap();
    // @addr 0x805e79c4
    u32 getHeapFreeSize(s32 heapId);
    // @addr 0x805e7a18
    u32 getHeapTotalSize(s32 heapId);
    // @addr 0x805e7984
    s32 getHeapInfo(s32 padding, s32 heapId);
    // @addr 0x805e7b48
    void compact();

    // --- Advanced allocation ---
    // @addr 0x805e7c60
    u32 realloc(s32 heapId, s32 size, void* ptr);
    // @addr 0x805e7e7c
    void allocFromArena(s32 arenaId, u32 offset, u32 size);
    // @addr 0x805e7eb0
    u32 allocBlock(s32 arenaId, u32 size, s32 flags);
    // @addr 0x805e7fbc
    u32 freeBlock(s32 arenaId, s32 blockId, s32 flags);
    // @addr 0x805e8118
    u32 setBlockFlags(s32 blockId, u16 flags);
    // @addr 0x805e819c
    void lockArena(s32 arenaId);
    // @addr 0x805e81a8
    void unlockArena(s32 arenaId);
    // @addr 0x805e8220
    u32 queryBlock(u32 queryType, s32* outInfo);
    // @addr 0x805e877c
    s32 findFreeBlock(s32 minSize);

    // --- Arena info ---
    // @addr 0x805e8990
    u32 getArenaUsed(s32 arenaId);
    // @addr 0x805e8a74
    u32 getArenaInfo() const;
    // @addr 0x805e8ba0
    s32 getFragmentationCount();
    // @addr 0x805e8c48
    static void dumpArenaMap();
    // @addr 0x805e8cfc
    void defragment();

    // --- Memory protection ---
    // @addr 0x805e8dc4
    void setProtection();
    // @addr 0x805e8f04
    void protectRegion(s32 regionId);
    // @addr 0x805e8f5c
    void setWatchpoint(f64 addr, s32 size, s32 mode, u32 flags);
    // @addr 0x805e8fa0
    void clearWatchpoint();
    // @addr 0x805e9064
    u32 getWatchpointStatus() const;
    // @addr 0x805e9190
    s32 getProtectionError();
    // @addr 0x805e9238
    static void reportLeaks();
    // @addr 0x805e92ec
    void resetProtection();
    // @addr 0x805e9390
    void initGuardPages(s32 count, s32* sizes, u32 pageSize, u8 fillPattern);
    // @addr 0x805e9558
    static void validateGuardPages();
    // @addr 0x805e96e4
    void resizeArena(s32 newSize);
    // @addr 0x805e973c
    void splitArena(u32 arenaId, s32 splitPoint);
    // @addr 0x805e97b0
    void mergeArena(s32 targetArena);
    // @addr 0x805e9870
    void relocateArena(s32 newArenaId);
    // @addr 0x805e9bec
    static void globalReset();
    // @addr 0x805e9c64
    static void globalShutdown();
    // @addr 0x805e9f98
    void configureRegion(u32* config, u32 flags);
    // @addr 0x805ea0ec
    void finalizeConfig();

    // --- Member data ---
    void* mBase;           // 0x04
    u32   mSize;           // 0x08
    u32   mUsed;           // 0x0C
    u32   mPeakUsed;       // 0x10
    u32   mFreeList;       // 0x14
    u32   mAllocCount;     // 0x18
    u32   mFreeCount;      // 0x1C
    u32   mIsInitialized;  // 0x20
    u32   mAlignment;      // 0x24
    u32   _pad28[6];       // 0x28
};

// ============================================================
// EGG::System::ConfigStore — Persistent system configuration
// ============================================================
// Reads and writes system configuration values (SYSCONF-style).
// Provides typed access to settings like language, video mode,
// sound, network config, etc.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mIsLoaded        — config loaded flag
//   0x08  mIsDirty         — modified-since-load flag
//   0x0C  mData            — pointer to config data buffer
//   0x10  mDataSize        — config data size
//   0x14  mSectionCount    — number of config sections
//   0x18  mErrorCount      — read/write errors
//   0x1C  mVersion         — config format version
//   0x20  mChecksum        — data checksum
//   0x24  mLanguage        — cached language value
//   0x28  mVideoMode       — cached video mode
//   0x2C  mSoundMode       — cached sound mode
//   0x30  mProgressive     — progressive scan flag
//   0x34  mPal60           — PAL 60Hz flag
//   0x38  _pad38[10]       — reserved
//
// Maps functions: 0x805ea434 – 0x805eabe8
// ============================================================
class ConfigStore {
public:
    virtual ~ConfigStore();

    // --- Lifecycle ---
    // @addr 0x805ea434
    void load(s32* configData);
    // @addr 0x805ea57c
    void save();
    // @addr 0x805ea690
    void validate(f64 expectedChecksum, s32* actualData);
    // @addr 0x805ea778
    void computeChecksum(f64 dataAddr, f64 sizeAddr, s32 algo);
    // @addr 0x805ea858
    void reset();

    // --- Typed access ---
    // @addr 0x805ea9f0
    s32 getSystemLanguage();
    // @addr 0x805eaa9c
    void getVideoConfig();
    // @addr 0x805eabe8
    static void getNetworkConfig();
    // @addr 0x805eaca8
    void setVideoMode();
    // @addr 0x805eadc8
    void setStringValue(s32 section, u32 offset);
    // @addr 0x805eadfc
    void setIntValue(s32 value);
    // @addr 0x805eae14
    void setBoolValue(s32 value);
    // @addr 0x805eaf4c
    void getStringValue(s32 maxLength);
    // @addr 0x805eaf68
    void getIntValue(s32 value);

    // --- Advanced ---
    // @addr 0x805eac68
    s32 findSection(s32 padding, s32 sectionId);
    // @addr 0x805ebeac
    void setSectionData(s32 sectionId, s32 entryId, u32 offset);
    // @addr 0x805ebee0
    void getSectionData(s32 sectionId, s32 entryId, s32 count);
    // @addr 0x805ebcd8
    u32 getSectionSize(s32 sectionId, s32 entryId);

    // --- Member data ---
    u32 mIsLoaded;         // 0x04
    u32 mIsDirty;          // 0x08
    void* mData;           // 0x0C
    u32 mDataSize;         // 0x10
    u32 mSectionCount;     // 0x14
    u32 mErrorCount;       // 0x18
    u32 mVersion;          // 0x1C
    u32 mChecksum;         // 0x20
    u32 mLanguage;         // 0x24
    u32 mVideoMode;        // 0x28
    u32 mSoundMode;        // 0x2C
    u32 mProgressive;      // 0x30
    u32 mPal60;            // 0x34
    u32 _pad38[10];        // 0x38
};

} // namespace System
} // namespace EGG