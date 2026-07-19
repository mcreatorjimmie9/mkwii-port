// ============================================================================
// RuntimeOS_Classes.cpp — EGG Runtime/OS Subsystem Class Implementations (Stubs)
// Address range: 0x80400000 - 0x80440000 (1012 functions)
//
// These are stub implementations. Real method bodies require full
// reimplementation from the decompiled Runtime.c.
//
// Categorization: GENESIS Phase 8 (Runtime OS Class Extraction)
// ============================================================================
#include "RuntimeOS_Classes.hpp"
#include <cstring>
#include <cmath>

namespace EGG {
namespace RuntimeOS {

// ============================================================
// EGG::RuntimeOS::OSAlarm
// ============================================================

OSAlarm::~OSAlarm() {}

// @addr 0x80402990
void OSAlarm::init() {}

// @addr 0x80402ab0
void OSAlarm::start(s32 periodUs, s32 delayUs) {
    (void)periodUs; (void)delayUs;
}

// @addr 0x80402bd0
void OSAlarm::stop() {}

// @addr 0x80402cf0
void OSAlarm::reset(s32 periodUs, s32 delayUs) {
    (void)periodUs; (void)delayUs;
}

// @addr 0x80402e10
void OSAlarm::restart(s32 periodUs, s32 delayUs) {
    (void)periodUs; (void)delayUs;
}

// @addr 0x80402f30
void OSAlarm::cancel(s32 timeout, s32 flags) {
    (void)timeout; (void)flags;
}

// @addr 0x80402fc4
u32 OSAlarm::queryState(s32 timeout, s32 flags) {
    (void)timeout; (void)flags;
    return 0;
}

// @addr 0x804030f4
void OSAlarm::setHandler(Handler handler, s32 userData) {
    (void)handler; (void)userData;
}

// @addr 0x8040322c
s32 OSAlarm::setPeriod(s32 periodUs, s32 flags) {
    (void)periodUs; (void)flags;
    return 0;
}

// @addr 0x8040326c
u32 OSAlarm::getPeriod() const {
    return mPeriod;
}

// @addr 0x80403708
u32 OSAlarm::setRepeat(s32 count, s32 flags) {
    (void)count; (void)flags;
    return 0;
}

// @addr 0x80403828
u32 OSAlarm::getRepeatCount() const {
    return 0;
}

// @addr 0x80403944
u32 OSAlarm::getFireCount(s32 reset, s32 flags) {
    (void)reset; (void)flags;
    return 0;
}

// @addr 0x80403a6c
u32 OSAlarm::isRunning(s32 flags, s32 padding) {
    (void)flags; (void)padding;
    return 0;
}

// @addr 0x80403b88
void OSAlarm::setQueueNotify(u32 queue, s32 msg) {
    (void)queue; (void)msg;
}

// @addr 0x80403d74
u32 OSAlarm::getQueueState(s32 queue, u32 flags) {
    (void)queue; (void)flags;
    return 0;
}

// @addr 0x80403dc0
u32 OSAlarm::getQueueHandle(s32* outHandle) {
    (void)outHandle;
    return 0;
}

// ============================================================
// EGG::RuntimeOS::OSMutex
// ============================================================

OSMutex::~OSMutex() {}

// @addr 0x804043c0
void OSMutex::init(s32 initialCount, s32 maxCount) {
    (void)initialCount; (void)maxCount;
}

// @addr 0x8040475c
u32 OSMutex::lock(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x804047a8
u32 OSMutex::tryLock(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x804047f4
u32 OSMutex::unlock(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x80404968
u32 OSMutex::query(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// ============================================================
// EGG::RuntimeOS::OSMsgQueue
// ============================================================

OSMsgQueue::~OSMsgQueue() {}

// @addr 0x80405210
void OSMsgQueue::init(s32 capacity, s32 msgSize) {
    (void)capacity; (void)msgSize;
}

// @addr 0x80405850
u32 OSMsgQueue::send(s32 threadId, u32 msg) {
    (void)threadId; (void)msg;
    return 0;
}

// @addr 0x80405a30
u32 OSMsgQueue::receive(s32 threadId, u32 timeout) {
    (void)threadId; (void)timeout;
    return 0;
}

// @addr 0x80405cdc
u32 OSMsgQueue::peek(s32* outMsg, f32* outTimestamp) {
    (void)outMsg; (void)outTimestamp;
    return 0;
}

// @addr 0x80405fe0
s32 OSMsgQueue::waitMsg(s32 threadId, s32 timeout) {
    (void)threadId; (void)timeout;
    return 0;
}

// @addr 0x80406020
u32 OSMsgQueue::poll(s32 threadId, f32* outTimestamp) {
    (void)threadId; (void)outTimestamp;
    return 0;
}

// @addr 0x804062b4
u32 OSMsgQueue::flush(s32 threadId, f32* outTimestamp) {
    (void)threadId; (void)outTimestamp;
    return 0;
}

// @addr 0x80406394
u32 OSMsgQueue::configure(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x8040668c
u32 OSMsgQueue::sendWithTimestamp(s32 threadId, f32* timestamp, f32* outTs) {
    (void)threadId; (void)timestamp; (void)outTs;
    return 0;
}

// @addr 0x80406828
u32 OSMsgQueue::getCapacity(s32 threadId, u32 flags) {
    (void)threadId; (void)flags;
    return 0;
}

// @addr 0x80406900
u32 OSMsgQueue::getCount(s32* outCount) {
    (void)outCount;
    return 0;
}

// ============================================================
// EGG::RuntimeOS::ThreadManager
// ============================================================

ThreadManager::~ThreadManager() {}

// @addr 0x80410550
u32 ThreadManager::init(u32* config) {
    (void)config;
    return 0;
}

// @addr 0x80411ee0
s32 ThreadManager::createThread(s32 priority, s32 stackSize) {
    (void)priority; (void)stackSize;
    return 0;
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
    return 0;
}

// @addr 0x80412b6c
u32 ThreadManager::setThreadPriority(s32* threadId) {
    (void)threadId;
    return 0;
}

// @addr 0x80412d68
s32 ThreadManager::getDefaultPriority() {
    return 0;
}

// @addr 0x80412e08
u32 ThreadManager::setDefaultPriority(s32 priority) {
    (void)priority;
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
    return 0;
}

// @addr 0x8041393c
u32 ThreadManager::getThreadAffinity(s32 threadId, s32 core) {
    (void)threadId; (void)core;
    return 0;
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
    return 0;
}

// @addr 0x80414858
u32 ThreadManager::initTLS(u32* config) {
    (void)config;
    return 0;
}

// @addr 0x804149fc
u32 ThreadManager::allocateTLS(s32 size) {
    (void)size;
    return 0;
}

// @addr 0x80414e30
u32 ThreadManager::getTLSValue(u32* slot) {
    (void)slot;
    return 0;
}

// @addr 0x804155a0
u32 ThreadManager::getCurrentThreadId(s32 padding) {
    (void)padding;
    return 0;
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
    return 0;
}

// @addr 0x80416828
s32 ThreadManager::sleep(s32 ms) {
    (void)ms;
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
    return 0;
}

// @addr 0x804171b8
u32 ThreadManager::assignCore(u32 coreMask, u32 flags) {
    (void)coreMask; (void)flags;
    return 0;
}

// @addr 0x80417218
u32 ThreadManager::getCurrentCore(s32 padding) {
    (void)padding;
    return 0;
}

// @addr 0x80417230
u32 ThreadManager::getCoreCount(u32 padding) {
    (void)padding;
    return 0;
}

// @addr 0x8041732c
u32 ThreadManager::getCoreFrequency(u32 core) {
    (void)core;
    return 0;
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
    (void)outHandle;
    return 0;
}

// @addr 0x80419c78
u32 ThreadManager::waitThreadState(s32 threadId, u32* outState) {
    (void)threadId; (void)outState;
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
    (void)stats;
    return 0;
}

// @addr 0x8041a38c
s32 ThreadManager::terminateAll(u32 flags, u32 timeout) {
    (void)flags; (void)timeout;
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
// ============================================================

ExceptionManager::~ExceptionManager() {}

// @addr 0x8041b988
u32 ExceptionManager::init(u32* config) {
    (void)config;
    return 0;
}

// @addr 0x8041ba20
s32 ExceptionManager::shutdown() {
    return 0;
}

// @addr 0x8041bb70
u32 ExceptionManager::reset(u32 flags) {
    (void)flags;
    return 0;
}

// @addr 0x8041be38
s32 ExceptionManager::configure(s32 exceptionType, s32 mode) {
    (void)exceptionType; (void)mode;
    return 0;
}

// @addr 0x8041c410
s32 ExceptionManager::enableException(s32 exceptionType, u32 flags, s32 handler) {
    (void)exceptionType; (void)flags; (void)handler;
    return 0;
}

// @addr 0x8041c798
s32 ExceptionManager::registerHandler(s32 excType, s32 priority, s32 flags, u32 handler, s32 userData) {
    (void)excType; (void)priority; (void)flags; (void)handler; (void)userData;
    return 0;
}

// @addr 0x8041c8d0
s32 ExceptionManager::unregisterHandler(s32 excType, s32 priority, s32 flags, u32 handler, s32 userData) {
    (void)excType; (void)priority; (void)flags; (void)handler; (void)userData;
    return 0;
}

// @addr 0x8041c2b8
void ExceptionManager::setHandler(s32 excType) {
    (void)excType;
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
    return 0;
}

// @addr 0x8041cdec
s32 ExceptionManager::dispatchException(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041cf68
s32 ExceptionManager::recoverException(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041d048
u32 ExceptionManager::getLastException(s32 excType) {
    (void)excType;
    return 0;
}

// @addr 0x8041d1c0
s32 ExceptionManager::clearException(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041d200
u32 ExceptionManager::getExceptionCount(s32 excType) {
    (void)excType;
    return 0;
}

// @addr 0x8041d270
u32 ExceptionManager::getTotalExceptions(s32 excType) {
    (void)excType;
    return 0;
}

// @addr 0x8041d278
s32 ExceptionManager::checkPending(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041d288
u8 ExceptionManager::hasPending() const {
    return 0;
}

// @addr 0x8041d98c
s32 ExceptionManager::initCrashDump(s32 excType, s32 flags) {
    (void)excType; (void)flags;
    return 0;
}

// @addr 0x8041e270
u32 ExceptionManager::writeCrashDump(s32 excType) {
    (void)excType;
    return 0;
}

// @addr 0x8041e278
u32 ExceptionManager::getCrashDumpSize(s32 excType) {
    (void)excType;
    return 0;
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
    (void)excType; (void)handler;
    return 0;
}

// @addr 0x80422394
u32 ExceptionManager::getExceptionHandler(u32* outHandler) {
    (void)outHandler;
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
// ============================================================

StreamIO::~StreamIO() {}

// @addr 0x804071bc
u8 StreamIO::init(s32 mode, u8* buffer, u32 capacity) {
    (void)mode; (void)buffer; (void)capacity;
    return 0;
}

// @addr 0x80407238
u8 StreamIO::open(s32 mode, u8* buffer) {
    (void)mode; (void)buffer;
    return 0;
}

// @addr 0x80407e1c
u8 StreamIO::initFromFile(s32 mode, u8* path, u32 flags) {
    (void)mode; (void)path; (void)flags;
    return 0;
}

// @addr 0x80407ef8
u8 StreamIO::initFromMemory(s32 mode, u8* data, u32 size) {
    (void)mode; (void)data; (void)size;
    return 0;
}

// @addr 0x8040854c
u32 StreamIO::close(s32 mode, u32 flags) {
    (void)mode; (void)flags;
    return 0;
}

// @addr 0x8040870c
u32 StreamIO::flush(s32 mode, u32 flags) {
    (void)mode; (void)flags;
    return 0;
}

// @addr 0x804087a4
u32 StreamIO::seek(s32 offset) {
    (void)offset;
    return 0;
}

// @addr 0x80408808
u32 StreamIO::tell(s32 mode) {
    (void)mode;
    return 0;
}

// @addr 0x8040904c
u32 StreamIO::read(s32 count, s8* outBuffer) {
    (void)count; (void)outBuffer;
    return 0;
}

// @addr 0x8040929c
s32 StreamIO::readByte(s32 mode, s32 offset) {
    (void)mode; (void)offset;
    return 0;
}

// @addr 0x804092dc
u32 StreamIO::readU16(s32 mode, s32 offset) {
    (void)mode; (void)offset;
    return 0;
}

// @addr 0x8040962c
u32 StreamIO::readU32(s32 mode, u32 offset) {
    (void)mode; (void)offset;
    return 0;
}

// @addr 0x80409748
u32 StreamIO::readBytes(s32 mode, u32 offset, s32 dest, u32 count) {
    (void)mode; (void)offset; (void)dest; (void)count;
    return 0;
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
    return 0;
}

// @addr 0x8040c6ac
u32 StreamIO::setPosition(s8* field, s32 offset) {
    (void)field; (void)offset;
    return 0;
}

// @addr 0x8040cbbc
u32 StreamIO::getRemaining(s32 mode) {
    (void)mode;
    return 0;
}

// @addr 0x8040cc24
u32 StreamIO::getSize(u32* outSize) {
    (void)outSize;
    return 0;
}

// @addr 0x8040ccb0
s32 StreamIO::setSize(s32 mode, u32 newSize) {
    (void)mode; (void)newSize;
    return 0;
}

// @addr 0x8040cd0c
u32 StreamIO::resize(s32 mode, u32* newSize) {
    (void)mode; (void)newSize;
    return 0;
}

// @addr 0x8040d100
s32 StreamIO::skip(s32 count) {
    (void)count;
    return 0;
}

// @addr 0x8040d1b0
u32 StreamIO::alignPosition(u32* alignment) {
    (void)alignment;
    return 0;
}

} // namespace RuntimeOS
} // namespace EGG