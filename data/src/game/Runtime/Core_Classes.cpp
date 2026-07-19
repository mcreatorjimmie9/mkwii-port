// ============================================================================
// Core_Classes.cpp — EGG Core Framework Implementations
// Address range: 0x80480000 - 0x804A0000 (374 functions)
//
// Filled from decompiled sources:
//   eggDisposer.cpp  — Disposer ctor/dtor
//   eggThread.cpp    — Thread lifecycle, OS integration
//   eggTaskThread.cpp — Task-based thread processing
//   eggSystem.cpp    — Core memory initialization (BaseSystem)
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "Core_Classes.hpp"
#include "Heap_Classes.hpp"

#include <cstring>
#include <cstdint>

// --- OS/SDK function declarations (from Revolution SDK) ---
extern "C" {
struct OSThread;

void OSCreateThread(OSThread*, void* (*)(void*), void*, void*, u32, s32, s32);
void OSResumeThread(OSThread*);
void OSCancelThread(OSThread*);
void OSDetachThread(OSThread*);
BOOL OSIsThreadTerminated(OSThread*);
void OSJoinThread(OSThread*, void**);
OSThread* OSGetCurrentThread();
void OSInitMessageQueue(void* queue, void* msgs, s32 count);
void OSInitFastCast();
BOOL OSSendMessage(void* queue, void* msg, s32 flags);

void* OSGetMEM1ArenaLo();
void* OSGetMEM1ArenaHi();
void* OSGetMEM2ArenaLo();
void* OSGetMEM2ArenaHi();
void* OSInitAlloc(void* lo, void* hi, s32 maxBlocks);

void* OSSetMEM1ArenaLo(void* ptr);
void* OSSetMEM1ArenaHi(void* ptr);
void* OSSetMEM2ArenaLo(void* ptr);
void* OSSetMEM2ArenaHi(void* ptr);
} // extern "C"

// --- SDK macros ---
#ifndef OS_MESSAGE_NOBLOCK
#define OS_MESSAGE_NOBLOCK 0
#endif

#ifndef ROUND_DOWN
#define ROUND_DOWN(val, align) ((val) & ~((align) - 1))
#endif

// EGG_ASSERT stub (decompiled uses EGG_ASSERT extensively)
#ifndef EGG_ASSERT
#define EGG_ASSERT(cond, file, line, msg) \
    do { if (!(cond)) { (void)(file); (void)(line); (void)(msg); } } while (0)
#endif

namespace EGG {

// --- Internal state (mirrors decompiled statics) ---
namespace {
    // Thread-local current thread pointer
    // Original: accessed via OS thread-specific storage in Thread::getCurrentThread()
    Thread* sCurrentThreadPtr = nullptr;
} // anonymous namespace

// ============================================================
// EGG::Disposer
// ============================================================
// Filled from decompiled eggDisposer.cpp
//
// Field mapping (decompiled → .hpp):
//   mContainHeap  → no field (use local variable)
//   (vtable)      → (vtable at 0x00)
//   mDisposerID   → 0x04
//   mNextDisposer → 0x08
//   mPrevDisposer → 0x0C

u32 Disposer::sCurrentID = 0;

// @addr 0x80480050 (disposal ID computation side-effect)
// From eggDisposer.cpp: Disposer::Disposer()
Disposer::Disposer()
    : mDisposerID(sCurrentID++), mNextDisposer(nullptr), mPrevDisposer(nullptr) {
    // Original decompiled:
    //   mContainHeap = Heap::findContainHeap(this);
    //   if (mContainHeap != nullptr)
    //       mContainHeap->appendDisposer(this);
    //
    // Adapted: ExpHeap::findContainHeap exists in Heap_Classes.hpp;
    // appendDisposer not yet available on Heap class.
    Heap* containHeap = ExpHeap::findContainHeap(this);
    if (containHeap != nullptr) {
        // TODO: containHeap->appendDisposer(this);
        (void)containHeap;
    }
}

// From eggDisposer.cpp: Disposer(Heap*) variant
Disposer::Disposer(Heap* heap, u32 align)
    : mDisposerID(sCurrentID++), mNextDisposer(nullptr), mPrevDisposer(nullptr) {
    UNUSED(align);
    // Original decompiled (heap-qualified constructor):
    //   mContainHeap = heap;
    //   if (mContainHeap != nullptr)
    //       mContainHeap->appendDisposer(this);
    if (heap != nullptr) {
        // TODO: heap->appendDisposer(this);
    }
}

// From eggDisposer.cpp: Disposer::~Disposer()
Disposer::~Disposer() {
    // Original decompiled:
    //   if (mContainHeap != nullptr)
    //       mContainHeap->removeDisposer(this);
    //
    // Fallback: manually unlink from disposal chain.
    // This is equivalent to what Heap::removeDisposer does internally
    // (updates the intrusive linked list pointers).
    if (mNextDisposer)
        mNextDisposer->mPrevDisposer = mPrevDisposer;
    if (mPrevDisposer)
        mPrevDisposer->mNextDisposer = mNextDisposer;
}

// ============================================================
// EGG::Thread
// ============================================================
// Filled from decompiled eggThread.cpp
//
// Field mapping (decompiled → .hpp):
//   mContainingHeap → mHeap (0x10)
//   mStackMemory    → mStackBase (0x14)
//   mStackSize      → mStackSize (0x18)
//   (prio)          → mPriority (0x1C)
//   (state)         → mState (0x20)
//   mMesgQueue      → mMsgQueueBuffer[0x20] (0x24)
//   mOSThread (ptr) → mOspThread[0xC8] embedded (0x48)
//   mAlloctableHeap → not in .hpp layout

// Default constructor (protected, for derived classes)
Thread::Thread()
    : Disposer(), mHeap(nullptr), mStackBase(nullptr), mStackSize(0)
    , mPriority(PRIORITY_NORM), mState(STATE_READY) {
    __builtin_memset(mOspThread, 0, sizeof(mOspThread));
    __builtin_memset(mMsgQueueBuffer, 0, sizeof(mMsgQueueBuffer));
}

// Parameterized constructor
// From eggThread.cpp: Thread::Thread(u32 stackSize, int msgCount, int prio, Heap* heap)
Thread::Thread(Heap* heap, u32 stackSize, s32 priority, s32 msgCount)
    : Disposer(heap), mHeap(heap), mStackBase(nullptr), mStackSize(stackSize)
    , mPriority(priority), mState(STATE_READY) {
    // From decompiled:
    //   if (!heap)
    //       heap = Heap::getCurrentHeap();
    //   mContainingHeap = heap;
    if (!mHeap) {
        // TODO: mHeap = Heap::getCurrentHeap();
    }

    // Round down stack size to 32-byte alignment
    // Original: mStackSize = ROUND_DOWN(stackSize, 32);
    mStackSize = ROUND_DOWN(mStackSize, 32);

    // Allocate stack memory from heap
    // Original: mStackMemory = (char*)Heap::alloc(mStackSize, 32, mContainingHeap);
    //           EGG_ASSERT(mStackMemory, "eggThread.cpp", 70, "mStackMemory");
    if (mHeap) {
        mStackBase = mHeap->alloc(mStackSize, 32);
        EGG_ASSERT(mStackBase, "eggThread.cpp", 70, "mStackBase");
    }

    // Create OS thread
    // Original: mOSThread = Heap::alloc<OSThread>(mContainingHeap, 32);
    //           OSCreateThread(mOSThread, start, this,
    //                          mStackMemory + mStackSize, mStackSize, prio, 1);
    //
    // In this layout, mOspThread is embedded (not heap-allocated).
    // The stack base passed to OSCreateThread is the TOP of the stack
    // (PPC stack grows downward).
    // Create OS thread — cast entryPoint to void*(*)(void*) for OSCreateThread.
    // Thread::entryPoint returns void; OSCreateThread expects void*(*)(void*).
    // The trampoline behavior is inlined within entryPoint itself.
    OSCreateThread(
        reinterpret_cast<OSThread*>(mOspThread),
        reinterpret_cast<void* (*)(void*)>(&Thread::entryPoint),
        this,
        static_cast<u8*>(mStackBase) + mStackSize,     // stack top
        mStackSize,
        mPriority,
        1                                              // processor affinity
    );

    // Initialize message queue
    // From decompiled setCommonMesgQueue():
    //   mMesgCount = msgCount;
    //   mMesgBuffer = Heap::alloc<OSMessage>(msgCount, heap);
    //   EGG_ASSERT(mMesgBuffer, "eggThread.cpp", 262, "mMesgBuffer");
    //   OSInitMessageQueue(&mMesgQueue, mMesgBuffer, mMesgCount);
    //
    // In this layout, mMsgQueueBuffer[0x20] is the embedded OSMessageQueue.
    // The message buffer would need separate heap allocation (no field to
    // track the buffer pointer in this layout), so we zero-init the queue.
    __builtin_memset(mMsgQueueBuffer, 0, sizeof(mMsgQueueBuffer));
    if (msgCount > 0 && mHeap) {
        // TODO: void* msgBuf = mHeap->alloc(sizeof(OSMessage) * msgCount, 4);
        //       OSInitMessageQueue(mMsgQueueBuffer, msgBuf, msgCount);
    }
    UNUSED(msgCount);
}

// Thread destructor
// From eggThread.cpp: Thread::~Thread()
Thread::~Thread() {
    // Original decompiled:
    //   nw4r::ut::List_Remove(&sThreadList, this);
    //   if (mContainingHeap != nullptr) {
    //       if (!OSIsThreadTerminated(mOSThread)) {
    //           OSDetachThread(mOSThread);
    //           OSCancelThread(mOSThread);
    //       }
    //       Heap::free(mStackMemory, mContainingHeap);
    //       Heap::free(mOSThread, mContainingHeap);
    //   }
    //   Heap::free(mMesgBuffer, nullptr);
    //
    // Adapted for this layout:
    // - mOspThread is embedded (not heap-allocated, so no Heap::free for it)
    // - nw4r::ut::List operations omitted (nw4r not available)

    OSThread* osThread = reinterpret_cast<OSThread*>(mOspThread);

    if (mHeap != nullptr && !OSIsThreadTerminated(osThread)) {
        OSDetachThread(osThread);
        OSCancelThread(osThread);
    }

    if (mHeap != nullptr && mStackBase != nullptr) {
        mHeap->free(mStackBase);
        mStackBase = nullptr;
    }

    // Heap::free(mMesgBuffer, nullptr); // TODO: track message buffer pointer
}

// Static thread entry point
// Maps to decompiled Thread::start(void* eggThread):
//   void* Thread::start(void* eggThread) {
//       return reinterpret_cast<Thread*>(eggThread)->run();
//   }
//
// Adapted for this layout where run() returns void (pure virtual):
void Thread::entryPoint(void* arg) {
    Thread* thread = static_cast<Thread*>(arg);
    sCurrentThreadPtr = thread;

    thread->mState = STATE_RUNNING;

    // Original: calls onEnter() via switchThreadCallback when thread is
    // switched TO. In our layout, onRun() is the closest equivalent.
    thread->onRun();

    // Original: reinterpret_cast<Thread*>(eggThread)->run();
    thread->run();

    // Original: calls onExit() via switchThreadCallback when thread is
    // switched FROM.
    thread->onExit();

    thread->mState = STATE_DONE;
    sCurrentThreadPtr = nullptr;
}

// @addr 0x80486344 — Start the thread
// From decompiled pattern: thread creation happens in constructor;
// start() resumes the already-created thread.
void Thread::start(s32 priority, void* stack, u32 stackSize) {
    if (mState != STATE_READY)
        return;

    mPriority = priority;

    // If caller provides an explicit stack, use it instead of heap-allocated
    if (stack != nullptr) {
        mStackBase = stack;
        mStackSize = stackSize;
    }

    // Re-create the OS thread with (possibly updated) parameters
    OSCreateThread(
        reinterpret_cast<OSThread*>(mOspThread),
        reinterpret_cast<void* (*)(void*)>(&Thread::entryPoint),
        this,
        static_cast<u8*>(mStackBase) + mStackSize,
        mStackSize,
        mPriority,
        1
    );

    // Resume the thread (begins execution)
    OSResumeThread(reinterpret_cast<OSThread*>(mOspThread));
}

// @addr 0x804814f4 — Request thread to stop
void Thread::requestQuit() {
    mState = STATE_CANCELED;
    // Original: OSCancelThread(mOSThread)
    OSCancelThread(reinterpret_cast<OSThread*>(mOspThread));
}

// @addr 0x80486c08 — Join/wait for thread completion
void Thread::join() {
    // Original: OSJoinThread(mOSThread, nullptr)
    void* retval = nullptr;
    OSJoinThread(reinterpret_cast<OSThread*>(mOspThread), &retval);
    UNUSED(retval);
}

// @addr 0x80485c58 — Get current thread
Thread* Thread::getCurrentThread() {
    // Original decompiled: uses OSGetCurrentThread() then
    // Thread::findThread(osThread) to look up in sThreadList.
    //
    // Simplified: return the thread-local pointer set in entryPoint.
    return sCurrentThreadPtr;
}

// @addr 0x80487728 — Create thread on heap
Thread* Thread::create(Heap* heap, u32 stackSize, s32 priority, s32 msgCount) {
    // Original decompiled pattern (from Thread constructor):
    //   if (!heap) heap = Heap::getCurrentHeap();
    //   allocate + construct
    if (!heap) {
        // TODO: heap = Heap::getCurrentHeap();
        return nullptr;
    }

    void* mem = heap->alloc(sizeof(Thread), 4);
    if (!mem)
        return nullptr;

    // Note: Thread has pure virtual run(), so only concrete subclasses
    // can be instantiated. The real create() is templated or overridden
    // by derived classes (e.g. TaskThread::create).
    // TODO: accept a factory/callback or template parameter for concrete type
    // For now, return nullptr — callers must use subclass create().
    heap->free(mem);
    (void)stackSize; (void)priority; (void)msgCount;
    return nullptr;
}

// ============================================================
// EGG::TaskThread
// ============================================================
// Filled from decompiled eggTaskThread.cpp
//
// Field mapping (decompiled → .hpp):
//   mJobs               → not in .hpp (uses linked-list Task instead)
//   mJobCount           → not in .hpp (uses mTaskCount for queue length)
//   mCurrentJob         → not in .hpp (uses mProcessing flag)
//   mTaskEndMessageQueue → not in .hpp
//   TJob                → Task { callback, arg, next }

TaskThread::TaskThread()
    : Thread(), mTaskQueueHead(nullptr), mTaskQueueTail(nullptr)
    , mTaskCount(0), mProcessing(0) {}

// Parameterized constructor
// From eggTaskThread.cpp: TaskThread(int msgCount, int prio, u32 stackSize)
//   : Thread(stackSize, msgCount, prio, nullptr),
//     mTaskEndMessageQueue(nullptr) { resume(); }
TaskThread::TaskThread(Heap* heap, u32 stackSize, s32 priority, s32 msgCount)
    : Thread(heap, stackSize, priority, msgCount)
    , mTaskQueueHead(nullptr), mTaskQueueTail(nullptr)
    , mTaskCount(0), mProcessing(0) {
    // From decompiled: immediately resume the thread after construction
    // Original: resume();  // calls OSResumeThread(getOSThread())
    OSResumeThread(reinterpret_cast<OSThread*>(mOspThread));
}

TaskThread::~TaskThread() {
    // From decompiled destroy():
    //   if (OSIsThreadTerminated(getOSThread()) != 1) {
    //       DVDCancelAll();
    //       delete[] mJobs;
    //       delete this;
    //   }
    //
    // Adapted: drain remaining task nodes from the linked list
    while (mTaskQueueHead) {
        Task* next = mTaskQueueHead->next;
        delete mTaskQueueHead;
        mTaskQueueHead = next;
    }
    mTaskQueueTail = nullptr;
    mTaskCount = 0;
}

// Main task processing loop
// From decompiled eggTaskThread.cpp: TaskThread::run()
// @addr 0x80486c88
void TaskThread::run() {
    // Original decompiled:
    //   OSInitFastCast();
    //   while (true) {
    //       TJob* currentJob = (TJob*)waitMessageBlock();
    //       mCurrentJob = currentJob;
    //       if (mCurrentJob->mMainFunction) {
    //           mCurrentJob->mMainFunction(mCurrentJob->mArg);
    //           if (mCurrentJob && mCurrentJob->mCallbackFunction)
    //               mCurrentJob->mCallbackFunction(mCurrentJob->mArg);
    //           if (mTaskEndMessageQueue)
    //               OSSendMessage(mTaskEndMessageQueue,
    //                             currentJob->mTaskEndMessage, OS_MESSAGE_NOBLOCK);
    //       }
    //       currentJob->mMainFunction = nullptr;
    //       mCurrentJob = nullptr;
    //       currentJob->clearFunctions();
    //   }
    //
    // Adapted for this layout's linked-list Task queue (instead of
    // message-queue-based TJob dispatch):

    while (mState == STATE_RUNNING) {
        if (!processNextTask()) {
            // No tasks available — in real impl, blocks on
            // waitMessageBlock() until a new job is dispatched.
            // Original: TJob* currentJob = (TJob*)waitMessageBlock();
            break;
        }
    }
}

// @addr 0x80486c88 — Post a task for execution
// Adapted from decompiled TaskThread::request(TFunction, void*, void*)
void TaskThread::postTask(void (*callback)(void*), void* arg) {
    // Original decompiled request():
    //   TJob* slot = findBlank();
    //   if (!slot) return false;
    //   slot->mMainFunction = mainFunction;
    //   slot->mArg = arg;
    //   slot->mTaskEndMessage = taskEndMessage;
    //   bool res = sendMessage(slot);
    //   if (!res) slot->mMainFunction = nullptr;
    //   return res;
    //
    // Adapted for linked-list Task model:

    Task* task = new Task();
    task->callback = callback;
    task->arg = arg;
    task->next = nullptr;

    if (mTaskQueueTail) {
        mTaskQueueTail->next = task;
    } else {
        mTaskQueueHead = task;
    }
    mTaskQueueTail = task;
    mTaskCount++;

    // Original: sendMessage(task) — wakes the waiting thread.
    // In this layout, the thread polls the linked list instead.
}

// @addr 0x80488280 — Wait for current task to complete
void TaskThread::waitForTaskComplete() {
    // Original decompiled: would use message queue synchronization
    // (waitMessageBlock / OSSendMessage pattern)
    while (mProcessing) {
        // Spin-wait. Real impl uses OS message queue or condition variable.
    }
}

// Process next task from queue
bool TaskThread::processNextTask() {
    if (!mTaskQueueHead)
        return false;

    Task* task = mTaskQueueHead;
    mTaskQueueHead = task->next;
    if (!mTaskQueueHead)
        mTaskQueueTail = nullptr;
    mTaskCount--;

    mProcessing = 1;

    // Original: mCurrentJob->mMainFunction(mCurrentJob->mArg);
    task->callback(task->arg);

    // Original callback check:
    // if (mCurrentJob && mCurrentJob->mCallbackFunction)
    //     mCurrentJob->mCallbackFunction(mCurrentJob->mArg);

    mProcessing = 0;

    // Original: currentJob->mMainFunction = nullptr;
    //           currentJob->clearFunctions();
    delete task;
    return true;
}

// ============================================================
// EGG::Actor
// ============================================================

Actor::Actor()
    : Disposer(), mFlags(FLAG_CALC | FLAG_DRAW | FLAG_VISIBLE)
    , mCalcOrder(0), mDrawOrder(0), mActorID(0) {}

Actor::Actor(Heap* heap, u32 align)
    : Disposer(heap, align)
    , mFlags(FLAG_CALC | FLAG_DRAW | FLAG_VISIBLE)
    , mCalcOrder(0), mDrawOrder(0), mActorID(0) {}

Actor::~Actor() {}

// @addr 0x80493c54 — calc visibility
void Actor::calcVisibility() {
    setFlag(FLAG_VISIBLE, true);
}

// @addr 0x80498580 — get actor's heap
Heap* Actor::getHeap() const {
    // Traverses the heap tree to find which heap contains this actor.
    // Uses ExpHeap::findContainHeap which walks the heap's memory block lists.
    return ExpHeap::findContainHeap(this);
}

// @addr 0x80492da8 — get global actor count
u32 Actor::getActiveCount() {
    // Original: walks the disposal chain counting actors.
    // Requires global disposal list access not available in this layout.
    return 0;
}

// ============================================================
// EGG::ActorFreed
// ============================================================

ActorFreed::ActorFreed()
    : mActor(nullptr), mCallback(nullptr), mUserData(nullptr) {}

// @addr 0x80491fe4 — register callback
void ActorFreed::setup(Actor* actor, Callback cb, void* userData) {
    mActor = actor;
    mCallback = cb;
    mUserData = userData;
}

// ============================================================
// EGG::Core
// ============================================================
// Filled from decompiled eggSystem.cpp (BaseSystem)
//
// Field mapping (decompiled BaseSystem → .hpp Core):
//   mRootHeapMem1  → mMem1Heap
//   mRootHeapMem2  → mMem2Heap
//   mSysHeap       → mFrameworkHeap
//   _2c, _30       → not in .hpp
//   mMEM1ArenaLo/Hi → local variables in initialize()
//   mMEM2ArenaLo/Hi → local variables in initialize()
//   mMemorySize    → not in .hpp
//   mRootHeapDebug → not in .hpp

Core* Core::sInstance = nullptr;

Core::Core()
    : mRootHeap(nullptr), mDefaultHeap(nullptr), mMem1Heap(nullptr)
    , mMem2Heap(nullptr), mFrameworkHeap(nullptr), mState(STATE_UNINITIALIZED)
    , mFrameCount(0), mDeltaTime(0.0f), mFps(0.0f) {}

Core::~Core() {}

Core* Core::getInstance() {
    if (!sInstance) {
        sInstance = new Core();
    }
    return sInstance;
}

// @addr 0x80480824 — reset frame counter
void Core::resetFrameCount() {
    mFrameCount = 0;
}

// @addr 0x80480660 — get delta time
f64 Core::getDeltaTime() const {
    return static_cast<f64>(mDeltaTime);
}

// @addr 0x80480908 — initialize core
// Filled from BaseSystem::initMemory() in eggSystem.cpp
bool Core::initialize() {
    if (mState != STATE_UNINITIALIZED)
        return false;
    mState = STATE_INITIALIZING;

    // === From decompiled BaseSystem::initMemory() ===

    // Get memory arena boundaries from OS
    // Original:
    //   void* mem1Lo = OSGetMEM1ArenaLo();
    //   void* mem1Hi = OSGetMEM1ArenaHi();
    //   void* mem2Lo = OSGetMEM2ArenaLo();
    //   void* mem2Hi = OSGetMEM2ArenaHi();
    void* mem1Lo = OSGetMEM1ArenaLo();
    void* mem1Hi = OSGetMEM1ArenaHi();
    void* mem2Lo = OSGetMEM2ArenaLo();
    void* mem2Hi = OSGetMEM2ArenaHi();

    // Initialize OS allocators for each arena (2 heap blocks each)
    // Original:
    //   void *arena1Start = OSInitAlloc(mem1Lo, mem1Hi, 2);
    //   void *arena2Start = OSInitAlloc(mem2Lo, mem2Hi, 2);
    void* arena1Start = OSInitAlloc(mem1Lo, mem1Hi, 2);
    void* arena2Start = OSInitAlloc(mem2Lo, mem2Hi, 2);

    // Align boundaries to 32 bytes
    // Original:
    //   mem1Lo = (void*)OSRoundUp32B(arena1Start);
    //   arena1Start = (void*)OSRoundDown32B(mem1Hi);
    //   mem2Lo = (void*)OSRoundUp32B(arena2Start);
    //   arena2Start = (void*)OSRoundDown32B(mem2Hi);
    mem1Lo = reinterpret_cast<void*>(
        (reinterpret_cast<std::uintptr_t>(arena1Start) + 0x1f) & ~0x1f);
    arena1Start = reinterpret_cast<void*>(
        reinterpret_cast<std::uintptr_t>(mem1Hi) & ~0x1f);
    mem2Lo = reinterpret_cast<void*>(
        (reinterpret_cast<std::uintptr_t>(arena2Start) + 0x1f) & ~0x1f);
    arena2Start = reinterpret_cast<void*>(
        reinterpret_cast<std::uintptr_t>(mem2Hi) & ~0x1f);

    // Internal pointers (not in .hpp layout, stored as locals)
    // Original:
    //   _2c = (void*)0x80000000;
    //   _30 = mem1Lo;

    // Store arena boundaries
    // Original:
    //   mMEM1ArenaLo = mem1Lo;
    //   mMEM1ArenaHi = arena1Start;
    //   mMEM2ArenaLo = mem2Lo;
    //   mMEM2ArenaHi = arena2Start;
    void* mem1ArenaLo = mem1Lo;
    void* mem1ArenaHi = arena1Start;
    void* mem2ArenaLo = mem2Lo;
    void* mem2ArenaHi = arena2Start;

    // Read memory size from hardware register
    // Original: mMemorySize = *((u32*)0x80000028);
    // Skipped: hardware-specific, not in .hpp layout

    // Consume arena memory — OSInitAlloc overhead lives at the low end,
    // so we advance the arena boundaries past it
    // Original:
    //   OSSetMEM1ArenaLo(arena1Start);
    //   OSSetMEM1ArenaHi(arena1Start);
    //   OSSetMEM2ArenaLo(arena2Start);
    //   OSSetMEM2ArenaHi(arena2Start);
    OSSetMEM1ArenaLo(arena1Start);
    OSSetMEM1ArenaHi(arena1Start);
    OSSetMEM2ArenaLo(arena2Start);
    OSSetMEM2ArenaHi(arena2Start);

    // Heap::initialize();
    // TODO: add static Heap::initialize() to Heap class

    // Calculate heap sizes
    // Original:
    //   mem1Lo = mMEM1ArenaLo;
    //   u32 mem1HeapSize = (u32)mMEM1ArenaHi - (u32)mem1Lo;
    //   mem2Lo = mMEM2ArenaLo;
    //   u32 mem2HeapSize = (u32)mMEM2ArenaHi - (u32)mem2Lo;
    mem1Lo = mem1ArenaLo;
    u32 mem1HeapSize = static_cast<u32>(reinterpret_cast<std::uintptr_t>(mem1ArenaHi) - reinterpret_cast<std::uintptr_t>(mem1Lo));
    mem2Lo = mem2ArenaLo;
    u32 mem2HeapSize = static_cast<u32>(reinterpret_cast<std::uintptr_t>(mem2ArenaHi) - reinterpret_cast<std::uintptr_t>(mem2Lo));

    // Debug heap: carve off from MEM2 if space allows (≥64 MB)
    // Original:
    //   u32 debugHeapSize;
    //   if (mem2HeapSize >= 0x4000000) {
    //       debugHeapSize = 0x3B50000;
    //       mem2HeapSize = OSRoundDown32B(mem2HeapSize - debugHeapSize);
    //   } else {
    //       debugHeapSize = 0;
    //   }
    //   void *debugHeapStart = (u8*)mem2Lo + mem2HeapSize;
    u32 debugHeapSize = 0;
    if (mem2HeapSize >= 0x4000000) {
        debugHeapSize = 0x3B50000;
        mem2HeapSize = (mem2HeapSize - debugHeapSize) & ~0x1f;
        // void* debugHeapStart = static_cast<u8*>(mem2Lo) + mem2HeapSize;
        //
        // mRootHeapDebug = ExpHeap::create(debugHeapStart, debugHeapSize, 0);
        // mRootHeapDebug->mName = "EGGRootDebug";
        // (mRootHeapDebug not in .hpp layout)
    }

    // Create root heaps
    // Original:
    //   mRootHeapMem1 = ExpHeap::create(mem1Lo, mem1HeapSize, 0);
    //   mRootHeapMem1->mName = "EGGRootMEM1";
    //   mRootHeapMem2 = ExpHeap::create(mem2Lo, mem2HeapSize, 0);
    //   mRootHeapMem2->mName = "EGGRootMEM2";
    mMem1Heap = ExpHeap::create(mem1Lo, mem1HeapSize);
    mMem2Heap = ExpHeap::create(mem2Lo, mem2HeapSize);

    // Create system/framework heap as child of MEM1 root
    // Original:
    //   mSysHeap = ExpHeap::create(mSysHeapSize, mRootHeapMem1, 0);
    //   mSysHeap->mName = "EGGSystem";
    //   mSysHeap->becomeCurrentHeap();
    //
    // Adapted: use MEM1 root as framework heap
    mFrameworkHeap = mMem1Heap;

    // Set up core heap references
    mRootHeap = mMem1Heap;
    mDefaultHeap = mMem1Heap;

    UNUSED(mem2ArenaLo);
    UNUSED(mem2ArenaHi);
    UNUSED(mem1ArenaLo);
    UNUSED(mem1ArenaHi);
    UNUSED(debugHeapSize);

    mState = STATE_RUNNING;
    return true;
}

} // namespace EGG