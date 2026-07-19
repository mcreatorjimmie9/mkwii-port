// ============================================================================
// Core_Classes.cpp — EGG Core Framework Implementations (stubs)
// Address range: 0x80480000 - 0x804A0000 (374 functions)
//
// These are stub implementations. Real method bodies require full
// reimplementation from the decompiled Runtime.c.
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "Core_Classes.hpp"
#include "Heap_Classes.hpp"

namespace EGG {

// ============================================================
// EGG::Disposer
// ============================================================

u32 Disposer::sCurrentID = 0;

Disposer::Disposer()
    : mDisposerID(0), mNextDisposer(nullptr), mPrevDisposer(nullptr) {}

Disposer::Disposer(Heap* heap, u32 align)
    : mDisposerID(sCurrentID++), mNextDisposer(nullptr), mPrevDisposer(nullptr) {
    UNUSED(heap); UNUSED(align);
}

Disposer::~Disposer() {
    // Unlink from disposal chain
    if (mNextDisposer) mNextDisposer->mPrevDisposer = mPrevDisposer;
    if (mPrevDisposer) mPrevDisposer->mNextDisposer = mNextDisposer;
}

// ============================================================
// EGG::Thread
// ============================================================

Thread::Thread()
    : Disposer(), mHeap(nullptr), mStackBase(nullptr), mStackSize(0)
    , mPriority(16), mState(STATE_READY) {
    __builtin_memset(mOspThread, 0, sizeof(mOspThread));
}

Thread::Thread(Heap* heap, u32 stackSize, s32 priority, s32 msgCount)
    : Disposer(heap), mHeap(heap), mStackBase(nullptr), mStackSize(stackSize)
    , mPriority(priority), mState(STATE_READY) {
    UNUSED(msgCount);
    __builtin_memset(mOspThread, 0, sizeof(mOspThread));
}

Thread::~Thread() {
    if (mState == STATE_RUNNING) {
        requestQuit();
        join();
    }
}

void Thread::entryPoint(void* arg) {
    Thread* thread = static_cast<Thread*>(arg);
    thread->mState = STATE_RUNNING;
    thread->onRun();
    thread->run();
    thread->onExit();
    thread->mState = STATE_DONE;
}

// @addr 0x80486344
void Thread::start(s32 priority, void* stack, u32 stackSize) {
    if (mState != STATE_READY) return;
    mPriority = priority;
    mStackBase = stack;
    mStackSize = stackSize;
    // In real implementation: OSCreateThread, OSResumeThread
    mState = STATE_RUNNING;
    UNUSED(stack); UNUSED(stackSize);
}

// @addr 0x804814f4
void Thread::requestQuit() {
    mState = STATE_CANCELED;
}

// @addr 0x80486c08
void Thread::join() {
    // In real implementation: OSJoinThread
}

// @addr 0x80485c58
Thread* Thread::getCurrentThread() {
    // In real implementation: reads thread-local storage
    return nullptr;
}

// @addr 0x80487728
Thread* Thread::create(Heap* heap, u32 stackSize, s32 priority, s32 msgCount) {
    // In real implementation: allocates from heap, initializes OSThread
    UNUSED(heap); UNUSED(stackSize); UNUSED(priority); UNUSED(msgCount);
    return nullptr;
}

// ============================================================
// EGG::TaskThread
// ============================================================

TaskThread::TaskThread()
    : Thread(), mTaskQueueHead(nullptr), mTaskQueueTail(nullptr)
    , mTaskCount(0), mProcessing(0) {}

TaskThread::TaskThread(Heap* heap, u32 stackSize, s32 priority, s32 msgCount)
    : Thread(heap, stackSize, priority, msgCount)
    , mTaskQueueHead(nullptr), mTaskQueueTail(nullptr)
    , mTaskCount(0), mProcessing(0) {}

TaskThread::~TaskThread() {
    // Drain remaining tasks
    while (mTaskQueueHead) {
        Task* next = mTaskQueueHead->next;
        // Would free the task node here
        mTaskQueueHead = next;
    }
    mTaskQueueTail = nullptr;
    mTaskCount = 0;
}

void TaskThread::run() {
    // @addr 0x80486c88 — main task loop
    while (mState == STATE_RUNNING) {
        if (!processNextTask()) {
            // No tasks, wait for message
            break;
        }
    }
}

// @addr 0x80486c88
void TaskThread::postTask(void (*callback)(void*), void* arg) {
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
}

// @addr 0x80488280
void TaskThread::waitForTaskComplete() {
    while (mProcessing) {
        // Spin-wait (real impl uses condition variable)
    }
}

bool TaskThread::processNextTask() {
    if (!mTaskQueueHead) return false;

    Task* task = mTaskQueueHead;
    mTaskQueueHead = task->next;
    if (!mTaskQueueHead) mTaskQueueTail = nullptr;
    mTaskCount--;

    mProcessing = 1;
    task->callback(task->arg);
    mProcessing = 0;

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

// @addr 0x80493c54
void Actor::calcVisibility() {
    setFlag(FLAG_VISIBLE, true);
}

// @addr 0x80498580
Heap* Actor::getHeap() const {
    // In real implementation: follows disposal chain to find heap
    return nullptr;
}

// @addr 0x80492da8
u32 Actor::getActiveCount() {
    // In real implementation: walks the disposal chain
    return 0;
}

// ============================================================
// EGG::ActorFreed
// ============================================================

ActorFreed::ActorFreed()
    : mActor(nullptr), mCallback(nullptr), mUserData(nullptr) {}

// @addr 0x80491fe4
void ActorFreed::setup(Actor* actor, Callback cb, void* userData) {
    mActor = actor;
    mCallback = cb;
    mUserData = userData;
}

// ============================================================
// EGG::Core
// ============================================================

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

// @addr 0x80480824
void Core::resetFrameCount() {
    mFrameCount = 0;
}

// @addr 0x80480660
f64 Core::getDeltaTime() const {
    return static_cast<f64>(mDeltaTime);
}

// @addr 0x80480908
bool Core::initialize() {
    if (mState != STATE_UNINITIALIZED) return false;
    mState = STATE_INITIALIZING;
    // In real implementation: sets up heaps, initializes subsystems
    mState = STATE_RUNNING;
    return true;
}

} // namespace EGG