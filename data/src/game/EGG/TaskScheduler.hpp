// ============================================================================
// TaskScheduler.hpp — EGG::Thread and task scheduling framework
// Address range: 0x8016E000 - 0x80170000 (DOL)
// Corresponding ELF range: ~0x805B0E30 - 0x805B2E30
//
// Manages OS-level thread creation, priority scheduling, and cooperative
// multitasking for the game's subsystem threads. MKW uses multiple threads:
//   - Main thread: game logic + rendering
//   - Audio thread: AX sound processing
//   - Network thread: Wi-Fi communication
//   - DVD thread: disc I/O
//
// The EGG threading layer wraps OSCreateThread/OSYieldThread with a
// priority-based scheduler and cooperative yield points.
//
// GENESIS Phase 28 — EGG Framework Expansion
// ============================================================================
#pragma once

#include "rk_common.h"

namespace EGG {

// Thread priority levels (lower number = higher priority)
enum ThreadPriority {
    THREAD_PRIORITY_MAIN     = 10,  // Main game loop
    THREAD_PRIORITY_AUDIO    = 20,  // AX audio processing
    THREAD_PRIORITY_NETWORK  = 30,  // Wi-Fi socket handling
    THREAD_PRIORITY_DVD      = 40,  // Disc read operations
    THREAD_PRIORITY_IDLE     = 255, // Idle/background thread
};

// Thread state for lifecycle tracking
enum ThreadState {
    THREAD_STATE_CREATED    = 0,
    THREAD_STATE_READY      = 1,
    THREAD_STATE_RUNNING    = 2,
    THREAD_STATE_SUSPENDED   = 3,
    THREAD_STATE_TERMINATED = 4,
};

// Thread entry function signature
typedef void (*ThreadEntryFunc)(void* arg);

// Forward declarations
class Thread;

// Task descriptor — a unit of work that can be scheduled on a thread
struct Task {
    ThreadEntryFunc func;      // Task function to execute
    void* arg;                 // Argument passed to task function
    s32 priority;              // Task priority (0 = highest)
    u32 stackSize;            // Stack size in bytes
    void* stackBase;           // Allocated stack pointer
    Thread* ownerThread;      // Thread that executes this task
    bool isDone;              // Task completion flag
};

// Thread abstraction — wraps OS thread with EGG lifecycle management
class Thread {
public:
    /* EGG_Thread_ctor @ 0x8016E020 */
    Thread();
    /* EGG_Thread_dtor @ 0x8016E060 */
    virtual ~Thread();

    // Create a thread with given entry function, priority, and stack size
    /* EGG_Thread_create @ 0x8016E0A0 */
    bool create(ThreadEntryFunc entry, void* arg, s32 priority,
                void* stack, u32 stackSize);

    // Start execution of this thread
    /* EGG_Thread_start @ 0x8016E120 */
    bool start();

    // Request thread termination
    /* EGG_Thread_stop @ 0x8016E180 */
    void stop();

    // Yield execution to other threads of equal/higher priority
    /* EGG_Thread_yield @ 0x8016E1E0 */
    static void yield();

    // Suspend this thread (cooperative)
    /* EGG_Thread_suspend @ 0x8016E220 */
    void suspend();

    // Resume a suspended thread
    /* EGG_Thread_resume @ 0x8016E260 */
    void resume();

    // Join — wait for thread to finish
    /* EGG_Thread_join @ 0x8016E2A0 */
    void join();

    // Get current thread state
    ThreadState getState() const { return mState; }

    // Get thread priority
    s32 getPriority() const { return mPriority; }

    // Get OS-level thread ID
    s32 getThreadId() const { return mThreadId; }

    // Get the current running thread (static)
    /* EGG_Thread_getCurrentThread @ 0x8016E300 */
    static Thread* getCurrentThread();

    // Query if thread is alive
    bool isAlive() const;

    // Set thread name (for debugging)
    /* EGG_Thread_setName @ 0x8016E340 */
    void setName(const char* name);

    const char* getName() const { return mName; }

    static const u32 DEFAULT_STACK_SIZE = 0x8000; // 32KB default stack
    static const s32 MAX_THREADS = 8;

private:
    ThreadState mState;
    s32 mPriority;
    s32 mThreadId;             // OS thread ID
    void* mpStack;
    u32 mStackSize;
    ThreadEntryFunc mpEntryFunc;
    void* mpArg;
    char mName[32];
    bool mbAutoDestroy;        // Destroy thread object when terminated

    static Thread* spCurrentThread;
    static Thread spThreadTable[MAX_THREADS];
    static s32 sThreadCount;
};

// TaskScheduler — manages task queue and thread pool
class TaskScheduler {
public:
    /* TaskScheduler_ctor @ 0x8016E400 */
    TaskScheduler();
    /* TaskScheduler_dtor @ 0x8016E440 */
    ~TaskScheduler();

    // Initialize the scheduler with a maximum task count
    /* TaskScheduler_init @ 0x8016E480 */
    void init(s32 maxTasks);

    // Submit a new task for execution
    /* TaskScheduler_submit @ 0x8016E500 */
    s32 submit(ThreadEntryFunc func, void* arg, s32 priority,
               u32 stackSize);

    // Cancel a task by ID
    /* TaskScheduler_cancel @ 0x8016E560 */
    bool cancel(s32 taskId);

    // Process the task queue — call from the main loop
    /* TaskScheduler_update @ 0x8016E5C0 */
    void update();

    // Get number of pending tasks
    s32 getPendingCount() const { return mPendingCount; }

    // Get number of active (running) tasks
    s32 getActiveCount() const { return mActiveCount; }

    // Wait for all tasks to complete
    /* TaskScheduler_waitAll @ 0x8016E600 */
    void waitAll();

    // Extended API
    /* TaskScheduler_addTask @ 0x8016E640 */
    s32 addTask(ThreadEntryFunc func, void* arg, s32 priority);
    /* TaskScheduler_removeTask @ 0x8016E6A0 */
    bool removeTask(s32 taskId);
    /* TaskScheduler_update_dt @ 0x8016E700 */
    void update(f32 dt);
    /* TaskScheduler_pause @ 0x8016E760 */
    void pause();
    /* TaskScheduler_resume @ 0x8016E7C0 */
    void resume();
    /* TaskScheduler_getTaskCount @ 0x8016E800 */
    s32 getTaskCount() const;
    /* TaskScheduler_getActiveTask @ 0x8016E840 */
    Task* getActiveTask(s32 index);
    /* TaskScheduler_setPriority @ 0x8016E8A0 */
    bool setPriority(s32 taskId, s32 newPriority);
    /* TaskScheduler_isEmpty @ 0x8016E960 */
    bool isEmpty() const;
    /* TaskScheduler_clear @ 0x8016E9A0 */
    void clear();
    /* TaskScheduler_getTaskPriority @ 0x8016EA00 */
    s32 getTaskPriority(s32 taskId) const;
    /* TaskScheduler_hasTask @ 0x8016EA40 */
    bool hasTask(s32 taskId) const;
    /* TaskScheduler_processOne @ 0x8016EA80 */
    bool processOne();

    // Singleton access
    static TaskScheduler* getInstance() { return spInstance; }
    static void createInstance();
    static void destroyInstance();

private:
    static const s32 MAX_TASKS = 32;

    Task mTaskQueue[MAX_TASKS];
    s32 mMaxTasks;
    s32 mPendingCount;
    s32 mActiveCount;
    bool mbInitialized;
    static TaskScheduler* spInstance;

    // Internal: sort the task queue by priority
    void sortQueueByPriority();
};

} // namespace EGG

// @addr 0x8016EB00
void TaskScheduler_sortByPriority(EGG::TaskScheduler* scheduler);
