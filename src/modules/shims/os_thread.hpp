#pragma once
// os_thread.hpp — Wii OS thread / interrupt / tick shims
// Maps Wii SDK threading and interrupt primitives to std::thread / std::mutex.
// The Wii has cooperative scheduling with priority-based preemptive threads;
// on PC we use a simplified model that satisfies the call signatures.

#include "../rk_types.h"
#include <cstdlib>
#include <cstring>
#include <thread>
#include <chrono>
#include <atomic>
#include <mutex>

// Forward-declare the Wii OSThread struct (opaque blob, 0x318 bytes on HW).
// The decompiled code accesses it by pointer but rarely inspects fields directly.
// PC-only extensions are appended after the hardware layout.
struct OSThread {
    char _00[0x304];
    char* stack_high; // offset 0x304
    char* stack_low;  // offset 0x308
    u32 error;        // offset 0x30C
    char _310[0x318 - 0x310];

    // --- PC-only extensions (not part of Wii layout) ---
    void (*pc_entry)(void*) = nullptr;
    void* pc_arg = nullptr;
    std::thread* pc_thread = nullptr;   // heap-allocated to avoid non-trivial memset
    std::atomic<int> pc_state{0};       // 0=created, 1=running, 2=terminated
};

struct OSThreadQueue {
    OSThread* head;
    OSThread* tail;
};

// OSContext — saved CPU context (registers, etc.) used for context switches.
// On PC this is never actually populated; we keep the layout for struct compat.
struct OSContext {
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
};

// ============================================================================
// Thread-safe wrapper for OSGetCurrentThread (single static instance)
// ============================================================================
namespace shim_thread_detail {
    inline OSThread& getMainThread() {
        static OSThread sMainThread = {};
        return sMainThread;
    }
}

extern "C" {

// ============================================================================
// Tick / timing
// ============================================================================

// OSGetTick is defined in rk_types.h. When wii_shims.hpp is used, the
// rk_types.h stub (return 0) suffices for compilation. A real implementation
// with std::chrono will replace it in a future phase.

// OSTicksToMilliseconds — convert OS ticks to milliseconds.
inline u32 OSTicksToMilliseconds(u32 ticks) {
    // 60750 ticks per millisecond (243 MHz / 4)
    return static_cast<u32>(static_cast<u64>(ticks) * 1000ULL / 60750ULL);
}

// ============================================================================
// Interrupt control
// ============================================================================

// OSDisableInterrupts — masks external interrupts, returns previous state.
// On PC: interrupts are always enabled conceptually; return 0.
inline int OSDisableInterrupts(void) { return 0; }

// OSRestoreInterrupts — restores previous interrupt state.
inline void OSRestoreInterrupts(int level) { (void)level; }

// ============================================================================
// Thread management
// ============================================================================

// OSGetCurrentThread — returns a pointer to the currently running OSThread.
inline OSThread* OSGetCurrentThread(void) {
    return &shim_thread_detail::getMainThread();
}

// OSCreateThread — initializes an OSThread with entry point, stack, and priority.
// The real Wii signature is:
//   int OSCreateThread(OSThread*, void*(*)(void*), void*, void*, u32, s32, u16)
inline int OSCreateThread(OSThread* thread, void* (*entry)(void*),
                          void* arg, void* stack, u32 stack_size,
                          s32 prio, u16 flags) {
    if (!thread) return -1;

    // Zero only the Wii portion (avoid clobbering PC extensions)
    std::memset(thread->_00, 0, sizeof(thread->_00));
    thread->stack_high = nullptr;
    thread->stack_low = nullptr;
    thread->error = 0;
    std::memset(thread->_310, 0, sizeof(thread->_310));

    thread->pc_entry = reinterpret_cast<void (*)(void*)>(entry);
    thread->pc_arg = arg;
    thread->pc_state = 0;
    thread->pc_thread = nullptr;

    if (stack) {
        thread->stack_high = static_cast<char*>(stack) + stack_size;
        thread->stack_low = static_cast<char*>(stack);
    }
    (void)prio;
    (void)flags;
    return 0;
}

// OSResumeThread — starts a suspended thread (creates std::thread on PC).
inline s32 OSResumeThread(OSThread* thread) {
    if (!thread) return -1;
    thread->pc_thread = new std::thread([thread]() {
        thread->pc_state = 1; // running
        auto fn = reinterpret_cast<void* (*)(void*)>(thread->pc_entry);
        fn(thread->pc_arg);
        thread->pc_state = 2; // terminated
    });
    return 0;
}

// OSSuspendThread — suspends a running thread (no-op on PC).
inline s32 OSSuspendThread(OSThread* thread) {
    (void)thread;
    return 0;
}

// OSCancelThread — cancels (terminates) a thread.
inline void OSCancelThread(OSThread* thread) {
    if (!thread) return;
    thread->pc_state = 2;
    if (thread->pc_thread && thread->pc_thread->joinable()) {
        thread->pc_thread->detach();
    }
    delete thread->pc_thread;
    thread->pc_thread = nullptr;
}

// OSDetachThread — detaches a thread so its resources are reclaimed on exit.
inline void OSDetachThread(OSThread* thread) {
    if (!thread) return;
    if (thread->pc_thread && thread->pc_thread->joinable()) {
        thread->pc_thread->detach();
    }
}

// OSIsThreadTerminated — returns 1 if the thread has finished execution.
inline int OSIsThreadTerminated(OSThread* thread) {
    if (!thread) return 1;
    return (thread->pc_state.load() >= 2) ? 1 : 0;
}

// OSSetThreadPriority — sets a thread's scheduling priority.
inline void OSSetThreadPriority(OSThread* thread, s32 prio) {
    (void)thread;
    (void)prio;
}

// OSSetSwitchThreadCallback — sets a callback invoked during context switches.
typedef void (*OSSwitchFunction)(OSThread*, OSThread*);
inline OSSwitchFunction OSSetSwitchThreadCallback(OSSwitchFunction fn) {
    (void)fn;
    return nullptr;
}

// OSYieldThread — yields the current thread's time slice.
inline void OSYieldThread(void) { std::this_thread::yield(); }

// OSExitThread — terminates the calling thread.
inline void OSExitThread(OSThread* thread) {
    if (thread) thread->pc_state = 2;
}

// OSJoinThread — blocks until thread finishes, writes exit value to *val.
inline BOOL OSJoinThread(OSThread* thread, void* val) {
    if (thread && thread->pc_thread && thread->pc_thread->joinable()) {
        thread->pc_thread->join();
    }
    if (val) *static_cast<void**>(val) = nullptr;
    return TRUE;
}

// OSSleepTicks — sleeps the current thread for the given number of OS ticks.
inline void OSSleepTicks(u32 ticks) {
    auto ms = static_cast<u64>(ticks) * 1000ULL / 60750ULL;
    if (ms < 1) ms = 1;
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

// OSInitThreadQueue — initializes a thread queue.
inline void OSInitThreadQueue(OSThreadQueue* queue) {
    if (queue) { queue->head = nullptr; queue->tail = nullptr; }
}

// OSSleepThread — puts the current thread to sleep on a queue.
inline void OSSleepThread(OSThreadQueue* queue) {
    (void)queue;
    std::this_thread::yield();
}

// OSWakeupThread — wakes up one thread sleeping on a queue.
inline void OSWakeupThread(OSThreadQueue* queue) { (void)queue; }

// OSDisableScheduler / OSEnableScheduler — scheduler lock/unlock.
inline s32 OSDisableScheduler(void) { return 0; }
inline s32 OSEnableScheduler(void) { return 0; }
inline void __OSReschedule(void) {}

// ============================================================================
// OSContext stubs — no-op on PC
// ============================================================================

inline void OSLoadFPUContext(OSContext*) {}
inline void OSSaveFPUContext(OSContext*) {}
inline void OSSetCurrentContext(OSContext*) {}
inline OSContext* OSGetCurrentContext(void) { return nullptr; }
inline void OSLoadContext(OSContext*) {}
inline u32 OSGetStackPointer(void) { return 0; }
inline void OSClearContext(OSContext*) {}
inline void OSInitContext(OSContext* ctx, u32 pc, u32 sp) {
    (void)ctx; (void)pc; (void)sp;
}
inline void OSDumpContext(OSContext*) {}

} // extern "C"