#pragma once
// ============================================================================
// Core_Classes.hpp — EGG Core Framework Class Hierarchy
// Address range: 0x80480000 - 0x804A0000 (374 functions)
//
// Hierarchy:
//   EGG::Disposer      — base class for managed objects (vtable: ~dtor)
//     +-- EGG::Thread   — OS thread wrapper
//           +-- EGG::TaskThread — thread with task message queue
//   EGG::Actor         — base actor with calc/draw lifecycle
//   EGG::ActorFreed    — interface for actor disposal callbacks
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "rk_types.h"
#define UNUSED(x) (void)(x)

namespace EGG {

// Forward declarations
class Heap;
class Thread;
class TaskThread;
class Actor;
class ActorFreed;

// ============================================================
// EGG::Disposer — Base class for objects with disposal tracking
// ============================================================
// Every EGG object that participates in the disposal system
// inherits from Disposer. It provides a unique disposal ID and
// links into a global disposal chain.
//
// Layout:
//   0x00  vtable
//   0x04  mDisposerID    — unique disposal ID (assigned at construction)
//   0x08  mNextDisposer  — next in disposal linked list
//   0x0C  mPrevDisposer  — prev in disposal linked list
//
// The vtable has a single virtual destructor at index 0.
// @addr 0x80480050 maps to disposal ID computation
// ============================================================
class Disposer {
public:
    virtual ~Disposer();

    u32 getDisposerID() const { return mDisposerID; }

    static u32 sCurrentID;   // global disposal ID counter

protected:
    Disposer();
    Disposer(Heap* heap, u32 align = 4);

    u32      mDisposerID;    // 0x04
    Disposer* mNextDisposer;  // 0x08
    Disposer* mPrevDisposer;  // 0x0C
};

// ============================================================
// EGG::Thread — OS thread wrapper
// ============================================================
// Wraps the Revolution SDK's OSThread with EGG-specific state.
//
// Layout:
//   0x00  vtable
//   0x04  mHeap          — heap this thread was allocated from
//   0x08  mStackBase     — base of the thread's stack
//   0x0C  mStackSize     — stack size in bytes
//   0x10  mPriority      — OS thread priority
//   0x14  mOspThread     — pointer to embedded OS thread (at +0x40)
//   0x18  mMsgQueue      — OS message queue (embedded)
//   0x28  mIsRunning     — thread running flag
//   0x2C  mIsDone        — thread completion flag
//   0x30  mThreadHandle  — OS thread reference
//   0x34  ...            (OS thread struct is embedded here)
//   0x40  mOspThreadStorage[0xC8] — actual OSThread struct (200 bytes)
// Total: ~0x108
//
// Key virtuals:
//   vtable[0]  destructor
//   vtable[1]  run()        — main thread entry point
//   vtable[2]  onRun()      — called after thread starts
//   vtable[3]  onExit()     — called before thread exits
//   vtable[4]  handleMessage() — process one message
// ============================================================
class Thread : public Disposer {
public:
    enum State {
        STATE_READY    = 0,
        STATE_RUNNING  = 1,
        STATE_DONE     = 2,
        STATE_CANCELED = 3,
    };

    enum Priority {
        PRIORITY_MAX  = 0,
        PRIORITY_HIGH = 8,
        PRIORITY_NORM = 16,
        PRIORITY_LOW  = 24,
        PRIORITY_MIN  = 31,
    };

    virtual ~Thread();

    // --- Pure virtual ---
    virtual void run() = 0;

    // --- Optional overrides ---
    virtual void onRun() {}
    virtual void onExit() {}
    virtual void handleMessage(void* msg) { UNUSED(msg); }

    // --- Thread control ---
    // @addr 0x80486344 — start the thread
    void start(s32 priority, void* stack, u32 stackSize);
    // @addr 0x804814f4 — request thread to stop
    void requestQuit();
    // @addr 0x80486c08 — join/wait for thread completion
    void join();

    // @addr 0x80481910 — check if thread is running
    bool isRunning() const { return mState == STATE_RUNNING; }
    State getState() const { return mState; }

    // --- OS integration ---
    // @addr 0x80485c58 — get current thread
    static Thread* getCurrentThread();

    // --- Factory ---
    // @addr 0x80487728 — create thread on heap
    static Thread* create(Heap* heap, u32 stackSize, s32 priority,
                          s32 msgCount = 0);

protected:
    Thread();
    Thread(Heap* heap, u32 stackSize, s32 priority, s32 msgCount);

    // Static thread entry trampoline
    static void entryPoint(void* arg);

    // --- Member data ---
    Heap* mHeap;             // 0x10
    void* mStackBase;        // 0x14
    u32   mStackSize;        // 0x18
    s32   mPriority;         // 0x1C
    State mState;            // 0x20
    u8    mMsgQueueBuffer[0x20]; // 0x24 (OSMessageQueue embedded)
    void* mMesgBuffer;      // 0x44 — heap-allocated OSMessage buffer (tracked for cleanup)
    u32   _pad48;            // 0x48
    u32   mMesgCount;        // 0x4C — number of messages in queue
    // The full OSThread is stored after; simplified here
    u8    mOspThread[0xC8];  // 0x50
};

// ============================================================
// EGG::TaskThread — Thread with task message processing
// ============================================================
// Extends Thread to provide a task-based execution model.
// Tasks are posted as messages and processed in the thread's run loop.
//
// Layout (extends Thread, adds):
//   0x110  mTaskQueue     — task message queue
//   0x114  mTaskCount     — number of pending tasks
//   0x118  mProcessing    — currently processing flag
// ============================================================
class TaskThread : public Thread {
public:
    struct Task {
        void (*callback)(void* arg);
        void* arg;
        Task* next;
    };

    virtual ~TaskThread();

    // --- Task interface ---
    // Post a task for execution on this thread
    // @addr 0x80486c88
    void postTask(void (*callback)(void*), void* arg);
    // @addr 0x80488280
    void waitForTaskComplete();

    // --- Thread override ---
    void run() override;

protected:
    TaskThread();
    TaskThread(Heap* heap, u32 stackSize, s32 priority, s32 msgCount);

    // Process next task from queue
    bool processNextTask();

    // --- TaskThread member data ---
    Task* mTaskQueueHead;    // 0x110
    Task* mTaskQueueTail;    // 0x114
    u32   mTaskCount;        // 0x118
    u8    mProcessing;       // 0x11C
    u8    _pad11D[3];        // 0x11D
};

// ============================================================
// EGG::Actor — Base actor with calc/draw lifecycle
// ============================================================
// Actors are the fundamental drawable/updatable objects in EGG.
// They participate in the Disposer system and have calc/draw phases.
//
// Layout:
//   0x00  vtable
//   0x04  mDisposerID    (inherited from Disposer)
//   0x08  mNextDisposer  (inherited)
//   0x0C  mPrevDisposer  (inherited)
//   0x10  mFlags         — actor state flags
//   0x14  mCalcOrder     — order in calc phase
//   0x18  mDrawOrder     — order in draw phase
//   0x1C  mActorID       — unique actor identifier
//
// Key virtuals:
//   vtable[0]  ~Actor()
//   vtable[1]  calc()       — called every frame for update logic
//   vtable[2]  draw()       — called every frame for rendering
//   vtable[3]  calcVisibility()
// ============================================================
class Actor : public Disposer {
public:
    enum Flag {
        FLAG_CALC    = BIT(0),   // calc is enabled
        FLAG_DRAW    = BIT(1),   // draw is enabled
        FLAG_VISIBLE = BIT(2),   // visibility state
        FLAG_INVALID = BIT(3),   // marked for removal
    };

    virtual ~Actor();

    // --- Core lifecycle ---
    // @addr 0x804978ac — calc: update logic, called each frame
    virtual void calc() {}
    // @addr 0x804978ec — draw: render, called each frame
    virtual void draw() {}
    // @addr 0x80493c54 — calc visibility
    virtual void calcVisibility();

    // --- Control ---
    void setFlag(Flag f, bool enable) {
        if (enable) mFlags |= f;
        else        mFlags &= ~f;
    }
    bool hasFlag(Flag f) const { return (mFlags & f) != 0; }

    void enableCalc()  { setFlag(FLAG_CALC, true); }
    void disableCalc() { setFlag(FLAG_CALC, false); }
    void enableDraw()  { setFlag(FLAG_DRAW, true); }
    void disableDraw() { setFlag(FLAG_DRAW, false); }

    void setCalcOrder(s16 order) { mCalcOrder = order; }
    void setDrawOrder(s16 order) { mDrawOrder = order; }

    // @addr 0x80498580 — get actor's heap
    Heap* getHeap() const;

    // @addr 0x80492da8 — get global actor count
    static u32 getActiveCount();

protected:
    Actor();
    Actor(Heap* heap, u32 align = 4);

    // --- Member data ---
    u32  mFlags;       // 0x10
    s16  mCalcOrder;   // 0x14
    s16  mDrawOrder;   // 0x16
    u32  mActorID;     // 0x18
};

// ============================================================
// EGG::ActorFreed — Callback interface for actor disposal
// ============================================================
// Implementers receive a callback when an Actor is freed.
// This is used for cleanup/notification patterns.
//
// Layout:
//   0x00  vtable
//   0x04  mActor         — the actor being watched
//   0x08  mCallback      — function pointer called on disposal
//   0x0C  mUserData      — user data passed to callback
// ============================================================
class ActorFreed {
public:
    typedef void (*Callback)(Actor* actor, void* userData);

    virtual ~ActorFreed() {}

    // Called when the watched actor is destroyed
    virtual void onActorFreed(Actor* actor) = 0;

    // @addr 0x80491fe4 — register callback
    void setup(Actor* actor, Callback cb, void* userData = nullptr);

protected:
    ActorFreed();

    Actor*   mActor;     // 0x04
    Callback mCallback;  // 0x08
    void*    mUserData;  // 0x0C
};

// ============================================================
// EGG::Core — Application core singleton
// ============================================================
// Manages the main application lifecycle: initialization,
// framework configuration, and the global heap.
//
// Layout (simplified):
//   0x00  vtable
//   0x04  mRootHeap      — the root admin heap
//   0x08  mDefaultHeap   — current default heap
//   0x0C  mMem1Heap      — MEM1 arena heap
//   0x10  mMem2Heap      — MEM2 arena heap
//   0x14  mFrameworkHeap — EGG framework heap
//   0x18  mState         — core state flags
//   0x1C  mFrameCount    — total frames rendered
//   0x20  mDeltaTime     — time since last frame (s)
//   0x24  mFps           — current FPS
//   ...
//
// @addr 0x80480824 — reset frame counter
// @addr 0x80480660 — get deltaTime as double
// ============================================================
class Core {
public:
    enum State {
        STATE_UNINITIALIZED = 0,
        STATE_INITIALIZING  = 1,
        STATE_RUNNING       = 2,
        STATE_SHUTTING_DOWN = 3,
    };

    static Core* getInstance();

    // @addr 0x80480824 — reset frame counter
    void resetFrameCount();
    // @addr 0x80480660 — get delta time
    f64 getDeltaTime() const;

    // Heap accessors
    Heap* getRootHeap() const      { return mRootHeap; }
    Heap* getDefaultHeap() const   { return mDefaultHeap; }
    Heap* getMem1Heap() const      { return mMem1Heap; }
    Heap* getMem2Heap() const      { return mMem2Heap; }
    Heap* getFrameworkHeap() const { return mFrameworkHeap; }

    void setDefaultHeap(Heap* heap) { mDefaultHeap = heap; }

    u32  getFrameCount() const { return mFrameCount; }
    f32  getFps() const        { return mFps; }

    State getState() const { return mState; }

    // @addr 0x80480908 — initialize core
    bool initialize();

private:
    Core();
    ~Core();

    static Core* sInstance;

    // --- Member data ---
    Heap* mRootHeap;        // 0x04
    Heap* mDefaultHeap;     // 0x08
    Heap* mMem1Heap;        // 0x0C
    Heap* mMem2Heap;        // 0x10
    Heap* mFrameworkHeap;   // 0x14
    State mState;           // 0x18
    u32   mFrameCount;      // 0x1C
    f32   mDeltaTime;       // 0x20
    f32   mFps;             // 0x24
};

} // namespace EGG