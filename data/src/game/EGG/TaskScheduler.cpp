// TaskScheduler.cpp — EGG::Thread and TaskScheduler Implementation
// GENESIS Phase 28 — EGG Framework Expansion
// Address range: 0x8016E000 - 0x80170000 (DOL)

#include "TaskScheduler.hpp"
#include <cstring>

namespace EGG {

// Static members
Thread* Thread::spCurrentThread = nullptr;
Thread Thread::spThreadTable[MAX_THREADS];
s32 Thread::sThreadCount = 0;
TaskScheduler* TaskScheduler::spInstance = nullptr;

// ===========================================================================
// Thread Implementation
// ===========================================================================

/* EGG_Thread_ctor @ 0x8016E020 */
Thread::Thread()
    : mState(THREAD_STATE_CREATED)
    , mPriority(THREAD_PRIORITY_IDLE)
    , mThreadId(-1)
    , mpStack(nullptr)
    , mStackSize(0)
    , mpEntryFunc(nullptr)
    , mpArg(nullptr)
    , mbAutoDestroy(false)
{
    mName[0] = '\0';
}

/* EGG_Thread_dtor @ 0x8016E060 */
Thread::~Thread() {
    if (mState == THREAD_STATE_RUNNING || mState == THREAD_STATE_READY) {
        stop();
    }
}

/* EGG_Thread_create @ 0x8016E0A0 */
bool Thread::create(ThreadEntryFunc entry, void* arg, s32 priority,
                    void* stack, u32 stackSize) {
    if (entry == nullptr || stack == nullptr || stackSize == 0) {
        return false;
    }
    if (sThreadCount >= MAX_THREADS) {
        return false;
    }

    mpEntryFunc = entry;
    mpArg = arg;
    mPriority = priority;
    mpStack = stack;
    mStackSize = stackSize;

    // Register in the thread table
    mThreadId = sThreadCount;
    spThreadTable[sThreadCount] = *this;
    sThreadCount++;

    mState = THREAD_STATE_READY;
    return true;
}

/* EGG_Thread_start @ 0x8016E120 */
bool Thread::start() {
    if (mState != THREAD_STATE_READY) {
        return false;
    }

    // In the original game, this calls OSCreateThread() with:
    //   - entry function, argument, stack base, stack top
    //   - priority, thread attributes (OS_ATTR_DETACH for worker threads)
    // Then OSCreateThread followed by OSResumeThread
    //
    // For the decompiled version, we simulate the thread lifecycle
    // by calling the entry function synchronously (single-threaded host)
    mState = THREAD_STATE_RUNNING;
    spCurrentThread = this;

    // Simulated: call entry function directly on host
    if (mpEntryFunc != nullptr) {
        mpEntryFunc(mpArg);
    }

    mState = THREAD_STATE_TERMINATED;
    spCurrentThread = nullptr;
    return true;
}

/* EGG_Thread_stop @ 0x8016E180 */
void Thread::stop() {
    if (mState == THREAD_STATE_RUNNING) {
        // In the original: suspend thread, then destroy via OS
        mState = THREAD_STATE_SUSPENDED;
    }
    mState = THREAD_STATE_TERMINATED;
}

/* EGG_Thread_yield @ 0x8016E1E0 */
void Thread::yield() {
    // In the original: OSYieldThread()
    // Yields execution to other threads with equal or higher priority.
    // On a single-threaded host, this is a no-op.
}

/* EGG_Thread_suspend @ 0x8016E220 */
void Thread::suspend() {
    if (mState == THREAD_STATE_RUNNING) {
        // In the original: OSSuspendThread(mThreadId)
        mState = THREAD_STATE_SUSPENDED;
    }
}

/* EGG_Thread_resume @ 0x8016E260 */
void Thread::resume() {
    if (mState == THREAD_STATE_SUSPENDED) {
        // In the original: OSResumeThread(mThreadId)
        mState = THREAD_STATE_RUNNING;
    }
}

/* EGG_Thread_join @ 0x8016E2A0 */
void Thread::join() {
    // In the original: OSJoinThread — waits for thread to terminate.
    // Blocks the calling thread until the target thread finishes.
    if (mState == THREAD_STATE_TERMINATED) {
        return;
    }
    // Simulated: no-op on single-threaded host
}

/* EGG_Thread_getCurrentThread @ 0x8016E300 */
Thread* Thread::getCurrentThread() {
    return spCurrentThread;
}

/* EGG_Thread_isAlive */
bool Thread::isAlive() const {
    return mState == THREAD_STATE_RUNNING || mState == THREAD_STATE_READY;
}

/* EGG_Thread_setName @ 0x8016E340 */
void Thread::setName(const char* name) {
    if (name != nullptr) {
        for (s32 i = 0; i < 31 && name[i] != '\0'; i++) {
            mName[i] = name[i];
        }
        mName[31] = '\0';
    }
}

// ===========================================================================
// TaskScheduler Implementation
// ===========================================================================

/* TaskScheduler_ctor @ 0x8016E400 */
TaskScheduler::TaskScheduler()
    : mMaxTasks(MAX_TASKS)
    , mPendingCount(0)
    , mActiveCount(0)
    , mbInitialized(false)
{
    for (s32 i = 0; i < MAX_TASKS; i++) {
        mTaskQueue[i].func = nullptr;
        mTaskQueue[i].arg = nullptr;
        mTaskQueue[i].priority = 0;
        mTaskQueue[i].stackSize = 0;
        mTaskQueue[i].stackBase = nullptr;
        mTaskQueue[i].ownerThread = nullptr;
        mTaskQueue[i].isDone = true;
    }
}

/* TaskScheduler_dtor @ 0x8016E440 */
TaskScheduler::~TaskScheduler() {
    for (s32 i = 0; i < mMaxTasks; i++) {
        if (!mTaskQueue[i].isDone && mTaskQueue[i].ownerThread != nullptr) {
            mTaskQueue[i].ownerThread->stop();
        }
    }
}

/* TaskScheduler_init @ 0x8016E480 */
void TaskScheduler::init(s32 maxTasks) {
    mMaxTasks = maxTasks < MAX_TASKS ? maxTasks : MAX_TASKS;
    mPendingCount = 0;
    mActiveCount = 0;
    mbInitialized = true;
}

/* TaskScheduler_submit @ 0x8016E500 */
s32 TaskScheduler::submit(ThreadEntryFunc func, void* arg, s32 priority,
                         u32 stackSize) {
    if (!mbInitialized || func == nullptr) {
        return -1;
    }
    if (mPendingCount >= mMaxTasks) {
        return -1; // Queue full
    }

    // Find an empty slot
    s32 slotIdx = -1;
    for (s32 i = 0; i < mMaxTasks; i++) {
        if (mTaskQueue[i].isDone && mTaskQueue[i].func == nullptr) {
            slotIdx = i;
            break;
        }
    }
    if (slotIdx < 0) {
        return -1;
    }

    // Insert task, maintaining priority order (lower number = higher priority)
    // Simple insertion sort: find the position after all higher-or-equal tasks
    Task newTask;
    newTask.func = func;
    newTask.arg = arg;
    newTask.priority = priority;
    newTask.stackSize = stackSize;
    newTask.stackBase = nullptr;
    newTask.ownerThread = nullptr;
    newTask.isDone = false;

    // Insert at the found slot
    mTaskQueue[slotIdx] = newTask;
    mPendingCount++;

    return slotIdx;
}

/* TaskScheduler_cancel @ 0x8016E560 */
bool TaskScheduler::cancel(s32 taskId) {
    if (taskId < 0 || taskId >= mMaxTasks) {
        return false;
    }
    if (mTaskQueue[taskId].isDone) {
        return true; // Already done
    }

    // Mark as done without executing
    mTaskQueue[taskId].isDone = true;
    mTaskQueue[taskId].func = nullptr;
    mPendingCount--;

    if (mPendingCount < 0) {
        mPendingCount = 0;
    }
    return true;
}

/* TaskScheduler_update @ 0x8016E5C0 */
void TaskScheduler::update() {
    if (!mbInitialized) {
        return;
    }

    // Process pending tasks in priority order
    for (s32 i = 0; i < mMaxTasks; i++) {
        if (mTaskQueue[i].isDone || mTaskQueue[i].func == nullptr) {
            continue;
        }

        // Found a pending task — execute it
        Task& task = mTaskQueue[i];
        task.isDone = true;
        mActiveCount++;
        mPendingCount--;

        // Execute the task function
        if (task.func != nullptr) {
            task.func(task.arg);
        }

        task.func = nullptr;
        mActiveCount--;
    }
}

/* TaskScheduler_waitAll @ 0x8016E600 */
void TaskScheduler::waitAll() {
    // Spin until all tasks are done
    while (mPendingCount > 0 || mActiveCount > 0) {
        update();
    }
}

/* TaskScheduler_createInstance */
void TaskScheduler::createInstance() {
    if (spInstance == nullptr) {
        spInstance = new TaskScheduler();
        spInstance->init(MAX_TASKS);
    }
}

/* TaskScheduler_destroyInstance */
void TaskScheduler::destroyInstance() {
    if (spInstance != nullptr) {
        delete spInstance;
        spInstance = nullptr;
    }
}

} // namespace EGG
