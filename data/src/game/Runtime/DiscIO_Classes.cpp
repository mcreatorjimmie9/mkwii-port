// ============================================================================
// DiscIO_Classes.cpp — EGG Disc I/O Class Implementations
// Address range: 0x805c0000 - 0x805e0000
//
// Filled from decompiled sources:
//   - lib_egg/core/eggDvdFile.cpp   (DvdFile -> DVDFileInfo)
//   - lib_egg/core/eggDvdRipper.cpp (DvdRipper -> DVDRipper)
//   - lib_rvl/dvd/dvdMain.c         (low-level DVD driver, via shim layer)
//
// Categorization: GENESIS Phase 8 (Runtime DiscIO Class Extraction)
// ============================================================================
#include "DiscIO_Classes.hpp"
#include "shims/dvd.hpp"
#include <cstring>

// Local ROUND_UP macro (matches eggDvdRipper.cpp usage)
#ifndef ROUND_UP
#define ROUND_UP(val, align) (((val) + ((align) - 1)) & ~((align) - 1))
#endif

namespace EGG {
namespace DiscIO {

// ============================================================================
// Helper: bridge between our DVDFileInfo member fields and the shim's
// ::DVDFileInfo struct (extern "C" from dvd.hpp).
// ============================================================================

// DVD error result codes (from dvdMain.c / SDK)
enum DVDResult {
    DVD_RESULT_GOOD      =  0,
    DVD_RESULT_CANCELED  = -1,
    DVD_RESULT_FATAL     = -2,
    DVD_RESULT_COVER_OPEN = -3,
    DVD_RESULT_NO_DISK   = -4,
    DVD_RESULT_WRONG_DISK = -5,
};

// ============================================================
// DVDFileInfo
// ============================================================

// @addr 0x805c0488
// From eggDvdFile.cpp: DvdFile::initialize() — one-time subsystem setup.
// Calls the low-level DVDInit via shim layer.
void DVDFileInfo::globalInit() {
    DVDInit();
}

DVDFileInfo::~DVDFileInfo() {
    if (isOpen()) {
        close(mFileHandle);
    }
}

// @addr 0x805c0fd0
// From eggDvdFile.cpp: DvdFile::initiate() — zero all fields and
// initialize internal state for a fresh file handle.
void DVDFileInfo::init() {
    std::memset(this, 0, sizeof(DVDFileInfo));
    mState = STATE_IDLE;
    mPriority = 2; // default DVD priority
    mCallback = nullptr;
    mCallbackArg = nullptr;
}

// @addr 0x805c0c10
// From eggDvdFile.cpp: DvdFile::open(s32 entryNum) — open file by entry
// number using DVDFastOpen from the DVD shim layer.
void DVDFileInfo::open() {
    if (isOpen()) {
        return;
    }

    // Use the shim's ::DVDFileInfo to perform the low-level open.
    // On real hardware, DVDFastOpen resolves the entry to a disc sector.
    ::DVDFileInfo shimFi;
    if (DVDFastOpen(static_cast<s32>(mFileHandle), &shimFi)) {
        mIsOpen = 1;
        mState = STATE_IDLE;
        DVDGetCommandBlockStatus(&shimFi.cb); // drain pending status
    } else {
        mIsOpen = 0;
        mState = STATE_ERROR;
        mErrorCode = DVD_RESULT_FATAL;
    }
}

// @addr 0x805c0de8
// From eggDvdFile.cpp: DvdFile::close() — close the file and reset state.
void DVDFileInfo::close(s32 handle) {
    if (!isOpen()) {
        return;
    }

    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));
    DVDClose(&shimFi);

    (void)handle;
    mIsOpen = 0;
    mState = STATE_IDLE;
    mPosition = 0;
    mBytesRemaining = 0;
}

// @addr 0x805c0154 — synchronous read
// From eggDvdFile.cpp: DvdFile::readData() — read data from the DVD file
// at a given offset. Uses DVDReadPrio via the shim layer.
// Returns the number of bytes read, or 0 on failure.
u32 DVDFileInfo::read(s32* buf, u32 offset, u32 length, s32 flags) {
    if (!isOpen()) {
        return 0;
    }

    mBuffer = buf;
    mLength = length;
    mPosition = offset;
    mState = STATE_READING;
    mFlags = flags;

    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));

    s32 prio = (flags & FLAG_PRIORITY) ? mPriority : 2;
    s32 result = DVDReadPrio(&shimFi, buf, static_cast<s32>(length),
                             static_cast<s32>(offset), prio);

    if (result >= 0) {
        mBytesRemaining = 0;
        mPosition += result;
        mState = STATE_DONE;
        return static_cast<u32>(result);
    } else {
        mErrorCode = static_cast<u32>(result);
        mState = STATE_ERROR;
        return 0;
    }
}

// @addr 0x805c13c8
void DVDFileInfo::seek(s32 offset) {
    mPosition = static_cast<u32>(offset);
    mBytesRemaining = (mFileSize > mPosition) ? (mFileSize - mPosition) : 0;
}

// @addr 0x805c0e50
void DVDFileInfo::setBuffer(s32* buf, u32 size, s32 align) {
    (void)align;
    mBuffer = buf;
    mBufferSize = size;
}

// @addr 0x805c1180
// Reset file info state — pattern from DvdFile::initiate() clearing fields.
void DVDFileInfo::reset(s32* info) {
    (void)info;
    mState = STATE_IDLE;
    mPosition = 0;
    mLength = 0;
    mBytesRemaining = 0;
    mErrorCode = 0;
    mFlags = 0;
    mSectorOffset = 0;
    mSectorCount = 0;
}

// @addr 0x805c1368
// Flush pending writes — DVD is read-only, so this is a no-op.
// From eggDvdFile.cpp: DvdFile::writeData() always returns -1.
void DVDFileInfo::flush(s32* info) {
    (void)info;
    // DVD is read-only media; nothing to flush.
}

// @addr 0x805c1548
void DVDFileInfo::cancel(s32 id) {
    (void)id;
    if (mState == STATE_READING) {
        ::DVDFileInfo shimFi;
        std::memset(&shimFi, 0, sizeof(shimFi));
        DVDCancel(&shimFi);
        mState = STATE_CANCELED;
    }
}

// @addr 0x805c168c
void DVDFileInfo::setPriority(s32 priority) {
    mPriority = priority;
    mFlags |= FLAG_PRIORITY;
}

// @addr 0x805c1738
void DVDFileInfo::configure() {
    // Compute sector-aligned offset and count for DVD reads.
    // DVD sector size is 2048 bytes.
    mSectorOffset = mPosition & ~0x7FFu;
    u32 endOffset = mPosition + mLength;
    mSectorCount = ((endOffset + 0x7FFu) >> 11) - (mSectorOffset >> 11);
    mBytesRemaining = mLength;
}

// @addr 0x805c17cc
// Finalize operation — update state based on the DVD result code.
// Mirrors the pattern in DvdFile::readData where result < 0 is an error.
void DVDFileInfo::finalize(s32 result) {
    if (result >= 0) {
        mPosition += static_cast<u32>(result);
        mBytesRemaining -= static_cast<u32>(result);
        if (mBytesRemaining == 0) {
            mState = STATE_DONE;
        } else {
            mState = STATE_READING;
        }
    } else {
        mErrorCode = static_cast<u32>(result);
        mState = STATE_ERROR;
    }
}

// @addr 0x805c19c8
void DVDFileInfo::updateState(s32 state) {
    mState = state;
}

// @addr 0x805c1a28
// On operation callback — mirrors DvdFile::doneProcess() which sends
// the result back via a message queue. Here we invoke the stored callback.
void DVDFileInfo::onCallback() {
    if (mCallback != nullptr) {
        mCallback(mCallbackArg);
    }
}

// @addr 0x805c1b18
// Endian conversion helper — byte-swap an array of f32 values
// (PPC big-endian to host little-endian or vice versa).
void DVDFileInfo::convertEndian(s32 count, f32* data) {
    if (count <= 0 || data == nullptr) {
        return;
    }
    for (s32 i = 0; i < count; i++) {
        u32* p = reinterpret_cast<u32*>(&data[i]);
        *p = ((*p >> 24) & 0xFFu) |
             ((*p >>  8) & 0xFF00u) |
             ((*p <<  8) & 0xFF0000u) |
             ((*p << 24) & 0xFF000000u);
    }
}

// ============================================================
// DVDRipper
// ============================================================

// Static state — from eggDvdRipper.cpp: DvdRipper::sCallback / sErrorRetry
static bool sRipperErrorRetry = true;

DVDRipper::~DVDRipper() {
    stop();
}

// @addr 0x805c1c68
// Set the target file for ripping — stores the DVD file handle.
void DVDRipper::setFile(u32 fileHandle) {
    mFileHandle = fileHandle;
    mState = STATE_IDLE;
    mBytesRipped = 0;
    mErrorCount = 0;
}

// @addr 0x805c1cc8
// Configure rip parameters from source/destination info blocks.
void DVDRipper::configure(s32* srcInfo, s32* dstInfo) {
    if (srcInfo != nullptr) {
        mReadOffset  = static_cast<u32>(srcInfo[0]);
        mReadLength  = static_cast<u32>(srcInfo[1]);
        mBufferSize  = static_cast<u32>(srcInfo[2]);
    }
    if (dstInfo != nullptr) {
        mBuffer = reinterpret_cast<void*>(dstInfo);
    }
    mBytesRipped = 0;
    mErrorCount = 0;
    mState = STATE_IDLE;
}

// @addr 0x805c1e30
s32 DVDRipper::getState(s32 padding) const {
    (void)padding;
    return mState;
}

// @addr 0x805c1e70
// Allocate a streaming buffer of the given size, aligned to 32 bytes.
void DVDRipper::allocBuffer(s32 size) {
    if (size <= 0) {
        return;
    }
    mBufferSize = static_cast<u32>(ROUND_UP(size, 32));
    mBuffer = new u8[mBufferSize];
    std::memset(mBuffer, 0, mBufferSize);
}

// @addr 0x805c1fd0
// Begin ripping — transitions to RIPPING state and starts the first read.
// Modeled after DvdRipper::loadToMainRAM() which reads data in chunks
// using DVDRead with retry logic.
void DVDRipper::start() {
    if (mState == STATE_RIPPING) {
        return;
    }

    mBytesRipped = 0;
    mErrorCount = 0;
    mReadOffset = 0;
    mRingReadPos = 0;
    mRingWritePos = 0;
    mRingUsed = 0;
    mIsSuspended = 0;
    mIsRunning = 1;
    mState = STATE_RIPPING;
}

// @addr 0x805c21c0
void DVDRipper::stop() {
    mIsRunning = 0;
    if (mState == STATE_RIPPING || mState == STATE_PAUSED) {
        mState = STATE_DONE;
    }
}

// @addr 0x805c2248
void DVDRipper::pause(s32 reason) {
    (void)reason;
    if (mState == STATE_RIPPING) {
        mState = STATE_PAUSED;
        mIsSuspended = 1;
    }
}

// @addr 0x805c2324
void DVDRipper::resume() {
    if (mState == STATE_PAUSED) {
        mState = STATE_RIPPING;
        mIsSuspended = 0;
    }
}

// @addr 0x805c2388
// Get progress as a scaled integer (0–1000 represents 0.0–1.0).
// Pattern: bytesRipped / totalLength * 1000
s32 DVDRipper::getProgress(s32 padding) const {
    (void)padding;
    if (mReadLength == 0) {
        return 1000; // complete
    }
    return static_cast<s32>((static_cast<u64>(mBytesRipped) * 1000) / mReadLength);
}

// @addr 0x805c23c8
void DVDRipper::cancel() {
    mIsRunning = 0;
    mState = STATE_ERROR;
}

// @addr 0x805c2474
void DVDRipper::setupRingBuffer(u32* readPtr, s32* writePtr) {
    if (readPtr != nullptr) {
        mRingReadPos = *readPtr;
    }
    if (writePtr != nullptr) {
        mRingWritePos = static_cast<u32>(*writePtr);
    }
    mRingUsed = 0;
}

// @addr 0x805c2668
s32 DVDRipper::getBytesRemaining(s32 padding) const {
    (void)padding;
    s32 remaining = static_cast<s32>(mReadLength) - static_cast<s32>(mBytesRipped);
    return remaining > 0 ? remaining : 0;
}

// @addr 0x805c26a8
void DVDRipper::resetRingBuffer(s32* info) {
    (void)info;
    mRingReadPos = 0;
    mRingWritePos = 0;
    mRingUsed = 0;
}

// @addr 0x805c2840
void DVDRipper::advanceRingBuffer(s32* info) {
    (void)info;
    if (mRingUsed == 0) {
        return;
    }
    u32 chunkSize = mTransferSize > 0 ? mTransferSize : 32;
    if (chunkSize > mRingUsed) {
        chunkSize = mRingUsed;
    }
    mRingReadPos += chunkSize;
    mRingUsed -= chunkSize;
    if (mRingReadPos >= mBufferSize) {
        mRingReadPos -= mBufferSize;
    }
}

// @addr 0x805c2d28
// Tick / process one chunk of the rip.
// Core logic from eggDvdRipper.cpp: loadToMainRAM() pattern:
//   1. Compute chunk size (min of mTransferSize and remaining bytes)
//   2. Align to 32 bytes for DVD reads
//   3. Call DVDRead via shim
//   4. On success, advance ring buffer
//   5. On error, retry (if sRipperErrorRetry)
//   6. Check for completion
void DVDRipper::tick() {
    if (mState != STATE_RIPPING || !mIsRunning) {
        return;
    }

    u32 remaining = mReadLength - mBytesRipped;
    if (remaining == 0) {
        mState = STATE_DONE;
        mIsRunning = 0;
        if (mCallback != nullptr) {
            mCallback(mCallbackArg);
        }
        return;
    }

    // Don't overflow the ring buffer
    u32 ringFree = mBufferSize - mRingUsed;
    if (ringFree == 0) {
        return; // buffer full, wait for consumer
    }

    u32 chunkSize = mTransferSize > 0 ? mTransferSize : 0x8000;
    if (chunkSize > remaining) {
        chunkSize = remaining;
    }
    if (chunkSize > ringFree) {
        chunkSize = ringFree;
    }

    // Align chunk size to 32 bytes for DVD sector reads
    u32 alignedChunk = static_cast<u32>(ROUND_UP(chunkSize, 32));
    if (alignedChunk > remaining) {
        alignedChunk = remaining; // last chunk may not be aligned
    }

    // Write into ring buffer at write position
    u8* writeAddr = static_cast<u8*>(mBuffer) + mRingWritePos;
    // Handle wrap-around: if the chunk would go past the buffer end,
    // only write up to the end for simplicity
    if (mRingWritePos + alignedChunk > mBufferSize) {
        alignedChunk = mBufferSize - mRingWritePos;
    }

    // Perform the DVD read via the shim layer
    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));
    s32 result = DVDRead(&shimFi, writeAddr, static_cast<s32>(alignedChunk),
                         static_cast<s32>(mReadOffset + mBytesRipped));

    if (result >= 0) {
        u32 bytesRead = static_cast<u32>(result);
        mBytesRipped += bytesRead;
        mRingWritePos += bytesRead;
        mRingUsed += bytesRead;
        if (mRingWritePos >= mBufferSize) {
            mRingWritePos -= mBufferSize;
        }
        mErrorCount = 0;

        if (mBytesRipped >= mReadLength) {
            mState = STATE_DONE;
            mIsRunning = 0;
            if (mCallback != nullptr) {
                mCallback(mCallbackArg);
            }
        }
    } else {
        // Error path — mirrors eggDvdRipper.cpp retry pattern
        mErrorCount++;
        if (result == DVD_RESULT_CANCELED || !sRipperErrorRetry ||
            mErrorCount > mRetryCount) {
            mState = STATE_ERROR;
            mIsRunning = 0;
        }
        // Otherwise, tick() will retry on the next call
    }
}

// @addr 0x805c2eb8
void DVDRipper::flushRingBuffer(s32* info) {
    (void)info;
    mRingReadPos = mRingWritePos;
    mRingUsed = 0;
}

// @addr 0x805c2fb4
void DVDRipper::checkBufferFull() {
    if (mRingUsed >= mBufferSize) {
        pause(0); // buffer full, pause until consumer drains
    }
}

// @addr 0x805c30a8
void DVDRipper::setChunkSize(u32 size) {
    mTransferSize = size;
}

// @addr 0x805c3104
void DVDRipper::setRetryParams(s32 maxRetries) {
    mRetryCount = static_cast<u32>(maxRetries);
    sRipperErrorRetry = (maxRetries > 0);
}

// @addr 0x805c3184
void DVDRipper::onCommandResult(s32* cmdResult) {
    if (cmdResult == nullptr) return;
    s32 result = *cmdResult;
    if (result >= 0) {
        u32 bytesRead = static_cast<u32>(result);
        mBytesRipped += bytesRead;
        mRingWritePos += bytesRead;
        mRingUsed += bytesRead;
        if (mRingWritePos >= mBufferSize) {
            mRingWritePos -= mBufferSize;
        }
        mErrorCount = 0;
        if (mBytesRipped >= mReadLength) {
            mState = STATE_DONE;
            mIsRunning = 0;
        }
    } else {
        mErrorCount++;
        if (mErrorCount > mRetryCount) {
            mState = STATE_ERROR;
            mIsRunning = 0;
        }
    }
}

// @addr 0x805c3224
void DVDRipper::handleError(s32* errorInfo) {
    (void)errorInfo;
    mErrorCount++;
    if (mErrorCount > mRetryCount) {
        mState = STATE_ERROR;
        mIsRunning = 0;
    }
}

// @addr 0x805c3440
s32 DVDRipper::getErrorStatus(s32 padding) const {
    (void)padding;
    return static_cast<s32>(mErrorCount);
}

// @addr 0x805c3480
u32 DVDRipper::getBufferStatus() const {
    u32 status = 0;
    if (mIsRunning)  status |= BIT(0);
    if (mIsSuspended) status |= BIT(1);
    if (mRingUsed == 0)  status |= BIT(2);  // empty
    if (mRingUsed >= mBufferSize) status |= BIT(3);  // full
    return status;
}

// @addr 0x805c34e4
s32 DVDRipper::getAvailable(s32 padding) const {
    (void)padding;
    return static_cast<s32>(mRingUsed);
}

// @addr 0x805c3550
void DVDRipper::globalShutdown() {
    DVDCancelAll();
    sRipperErrorRetry = true;
}

// @addr 0x805c35b0
void DVDRipper::setGlobalPriority(s32 priority) {
    (void)priority;
    // Would set the global DVD thread priority on real hardware.
}

// @addr 0x805c37d8
void DVDRipper::globalReset(s32* info) {
    (void)info;
    sRipperErrorRetry = true;
}

// ============================================================
// DVDFileCache
// ============================================================

DVDFileCache::~DVDFileCache() {
    shutdown();
}

// @addr 0x805c3c24
void DVDFileCache::globalInit() {
    // Initialize the global DVD cache subsystem.
}

// @addr 0x805c3a40 — read through cache
// Attempts to satisfy a read from cache; falls back to uncached DVD read.
u32 DVDFileCache::read(s32* buf, u32 offset, u32 length, s32 flags) {
    if (!mIsInitialized || !mIsEnabled) {
        // Cache not available — read directly
        return readUncached(static_cast<s32>(mBlockCount), offset, length);
    }

    // Simple direct-mapped cache: compute block index
    u32 blockSize = mBlockSize > 0 ? mBlockSize : 2048;
    u32 blockIndex = offset / blockSize;
    u32 blockOffset = offset % blockSize;

    // Check if block is cached (simple lookup)
    // For now, miss every time and read uncached
    mMisses++;

    // Fall back to uncached read
    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));
    s32 result = DVDRead(&shimFi, buf, static_cast<s32>(length),
                         static_cast<s32>(offset));

    (void)flags;
    return result > 0 ? static_cast<u32>(result) : 0;
}

// @addr 0x805c3f20
void DVDFileCache::init(s32 blockSize) {
    mBlockSize = static_cast<u32>(blockSize > 0 ? blockSize : 2048);
    mIsEnabled = 1;
    mIsInitialized = 1;
    mHits = 0;
    mMisses = 0;
    mDirtyCount = 0;
    mActiveCount = 0;
    mFreeList = 0xFFFFFFFF;
    mLruHead = 0xFFFFFFFF;
}

// @addr 0x805c4138
void DVDFileCache::reset(s32 flags) {
    (void)flags;
    mHits = 0;
    mMisses = 0;
    mDirtyCount = 0;
    mActiveCount = 0;
    mFreeList = 0xFFFFFFFF;
    mLruHead = 0xFFFFFFFF;
}

// @addr 0x805c41e0
void DVDFileCache::lookup(s32* entry) {
    (void)entry;
    // Cache lookup — placeholder
}

// @addr 0x805c4638
void DVDFileCache::invalidateAll() {
    mHits = 0;
    mMisses = 0;
    mDirtyCount = 0;
    mActiveCount = 0;
    mFreeList = 0xFFFFFFFF;
    mLruHead = 0xFFFFFFFF;
}

// @addr 0x805c46c0
void DVDFileCache::invalidateRange(s32 startBlock) {
    (void)startBlock;
    mActiveCount = 0;
}

// @addr 0x805c4760
void DVDFileCache::flushDirty() {
    mDirtyCount = 0;
}

// @addr 0x805c4be4
void DVDFileCache::allocBlock(s32 blockId) {
    (void)blockId;
    mActiveCount++;
}

// @addr 0x805c4c88
void DVDFileCache::freeBlock(s32* entry) {
    (void)entry;
    if (mActiveCount > 0) {
        mActiveCount--;
    }
}

// @addr 0x805c4d30
void DVDFileCache::evictLRU() {
    if (mActiveCount > 0) {
        mActiveCount--;
    }
}

// @addr 0x805c5224
void DVDFileCache::submitAsyncRead(s32* request) {
    (void)request;
    // Async cache read submission
}

// @addr 0x805c5310
void DVDFileCache::processAsyncResult(s32* result) {
    (void)result;
    // Process completed async cache read
}

// @addr 0x805c5380
void DVDFileCache::cancelPendingReads(s32 id) {
    (void)id;
}

// @addr 0x805c545c
void DVDFileCache::checkAsyncStatus(u32* status, s32* result) {
    if (status) *status = 0;
    if (result) *result = 0;
}

// @addr 0x805c55dc
s32 DVDFileCache::enqueueRequest(s32 padding, s32 requestId) {
    (void)padding;
    (void)requestId;
    return 0;
}

// @addr 0x805c561c
void DVDFileCache::dequeueNext() {}

// @addr 0x805c5794
void DVDFileCache::processQueueEntry(s32 entry) {
    (void)entry;
}

// @addr 0x805c587c
void DVDFileCache::advanceQueue(s32* queue) {
    (void)queue;
}

// @addr 0x805c58ec
void DVDFileCache::checkQueueStatus(s32* status) {
    if (status) *status = 0;
}

// @addr 0x805c5964
void DVDFileCache::setQueuePriority(u32 priority) {
    (void)priority;
}

// @addr 0x805c5a14
void DVDFileCache::peekQueueHead(s32* entry) {
    if (entry) *entry = -1;
}

// @addr 0x805c5b3c
void DVDFileCache::removeQueueEntry(s32* entry) {
    (void)entry;
}

// @addr 0x805c5b94
void DVDFileCache::clearQueue(s32* queue) {
    (void)queue;
}

// @addr 0x805c5bf4
void DVDFileCache::setMode(u32 mode) {
    mIsEnabled = (mode != 0) ? 1 : 0;
}

// @addr 0x805c5c78
s32 DVDFileCache::getHitRate(s32 padding) const {
    (void)padding;
    u32 total = mHits + mMisses;
    if (total == 0) return 0;
    return static_cast<s32>((static_cast<u64>(mHits) * 1000) / total);
}

// @addr 0x805c5cf4
void DVDFileCache::getStatus() {}

// @addr 0x805c5f6c
u32 DVDFileCache::getInfoWord() const {
    return (mIsEnabled << 0) | (mIsInitialized << 1) |
           (mActiveCount << 16);
}

// @addr 0x805c5fd0
s32 DVDFileCache::isReady(s32 padding) const {
    (void)padding;
    return mIsInitialized ? 1 : 0;
}

// @addr 0x805c603c
void DVDFileCache::prepareAsync(s32* request) {
    (void)request;
}

// @addr 0x805c60e0
u32 DVDFileCache::readUncached(s32 handle, u32 offset, u32 length) {
    (void)handle;
    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));
    s32 result = DVDRead(&shimFi, nullptr, static_cast<s32>(length),
                         static_cast<s32>(offset));
    return result > 0 ? static_cast<u32>(result) : 0;
}

// @addr 0x805c61f8
void DVDFileCache::onCacheMiss(s32 blockId) {
    (void)blockId;
    mMisses++;
}

// @addr 0x805c6328
void DVDFileCache::onCacheHit(s32* entry) {
    (void)entry;
    mHits++;
}

// @addr 0x805c6424
void DVDFileCache::updateStats() {}

// @addr 0x805c666c
void DVDFileCache::setCacheSize(s32 size) {
    if (size > 0) {
        mCacheSize = static_cast<u32>(size);
        mBlockCount = mCacheSize / (mBlockSize > 0 ? mBlockSize : 2048);
    }
}

// @addr 0x805c6714
void DVDFileCache::compact(s32* info) {
    (void)info;
}

// @addr 0x805c6848
void DVDFileCache::dumpStats() {}

// @addr 0x805c6c3c
s32 DVDFileCache::validateEntry(s32 padding, s32 entryId) {
    (void)padding;
    (void)entryId;
    return 0;
}

// @addr 0x805c82c8
void DVDFileCache::shutdown() {
    mIsEnabled = 0;
    mIsInitialized = 0;
    mCacheBase = nullptr;
    mEntries = nullptr;
    mHits = 0;
    mMisses = 0;
    mDirtyCount = 0;
    mActiveCount = 0;
}

// ============================================================
// DVDAsyncQueue
// ============================================================

DVDAsyncQueue::~DVDAsyncQueue() {
    shutdown(0);
}

// @addr 0x805c6c7c
void DVDAsyncQueue::init(s32 capacity) {
    mHead = 0;
    mTail = 0;
    mCapacity = static_cast<u32>(capacity);
    mPendingCount = 0;
    mActiveCount = 0;
    mIsProcessing = 0;
    mCancelAll = 0;
    mCompletedCount = 0;
    mFailedCount = 0;
    mFreeTop = 0;
    for (u32 i = 0; i < 4; i++) {
        mFreeIndices[i] = 0;
    }
}

// @addr 0x805c6d10
void DVDAsyncQueue::reset(s32 flags) {
    (void)flags;
    mHead = 0;
    mTail = 0;
    mPendingCount = 0;
    mActiveCount = 0;
    mIsProcessing = 0;
    mCancelAll = 0;
    mFreeTop = 0;
}

// @addr 0x805c6e7c
void DVDAsyncQueue::shutdown(s32 wait) {
    (void)wait;
    cancelAll();
    mCommands = nullptr;
    mCapacity = 0;
    mPendingCount = 0;
    mActiveCount = 0;
}

// @addr 0x805c7200
void DVDAsyncQueue::globalInit() {}

// @addr 0x805c7280
// Process the next pending command in the queue.
// Submits the DVD read and advances the head pointer.
void DVDAsyncQueue::process() {
    if (mIsProcessing || mPendingCount == 0) {
        return;
    }

    mIsProcessing = 1;
    // Submit the command at the head to the DVD shim
    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));

    // Simulate completion (shim fires callback immediately)
    mHead = (mHead + 1) % mCapacity;
    mPendingCount--;
    mActiveCount++;
    mIsProcessing = 0;
}

// @addr 0x805c7b48
void DVDAsyncQueue::flush() {
    while (mPendingCount > 0) {
        process();
    }
}

// @addr 0x805c7bf8
void DVDAsyncQueue::cancelAll() {
    mCancelAll = 1;
    mPendingCount = 0;
    mActiveCount = 0;
    mHead = mTail;
    DVDCancelAll();
    mCancelAll = 0;
}

// @addr 0x805c7f88
void DVDAsyncQueue::cancelCommand(s32 commandId) {
    (void)commandId;
    if (mPendingCount > 0) {
        mPendingCount--;
    }
}

// @addr 0x805c7ae4
u32 DVDAsyncQueue::getStatus() const {
    u32 status = 0;
    if (mIsProcessing) status |= BIT(0);
    if (mCancelAll)    status |= BIT(1);
    if (mPendingCount > 0) status |= BIT(2);
    return status;
}

// @addr 0x805c84c8
// Submit a new async read command to the queue.
u32 DVDAsyncQueue::submitCommand(s32* cmd, u32 offset, u32 length, s32 flags) {
    (void)cmd;
    (void)offset;
    (void)length;
    (void)flags;

    if (mPendingCount >= mCapacity) {
        return 0xFFFFFFFF; // queue full
    }

    mTail = (mTail + 1) % mCapacity;
    mPendingCount++;
    return mTail;
}

// ============================================================
// DvdArchive
// ============================================================

DvdArchive::~DvdArchive() {
    unmount(0);
}

// @addr 0x805c8720
// Mount an archive — uses DVDConvertPathToEntrynum and DVDFastOpen
// from the shim layer to open the archive file on disc.
void DvdArchive::mount(s32 archiveId) {
    if (mIsMounted) {
        return;
    }

    mArchiveHandle = static_cast<u32>(archiveId);
    mIsMounted = MOUNT_LOADING;

    // Attempt to open the archive via DVD shim
    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));
    if (DVDFastOpen(archiveId, &shimFi)) {
        mIsMounted = MOUNT_READY;
    } else {
        mIsMounted = MOUNT_ERROR;
    }
}

// @addr 0x805c8a18
void DvdArchive::unmount(s32 flags) {
    (void)flags;
    if (!mIsMounted) {
        return;
    }

    // Close the archive file handle via DVD shim
    ::DVDFileInfo shimFi;
    std::memset(&shimFi, 0, sizeof(shimFi));
    DVDClose(&shimFi);

    mIsMounted = MOUNT_IDLE;
    mEntries = nullptr;
    mStringPool = nullptr;
    mEntryCount = 0;
    mStringPoolSize = 0;
    mSearchCache = 0;
}

// @addr 0x805c8ae8
void DvdArchive::remount(s32 archiveId) {
    unmount(0);
    mount(archiveId);
}

// @addr 0x805c8dcc
void DvdArchive::waitForMount(s32 timeout) {
    (void)timeout;
    // Synchronous mount on PC — already complete after mount() call
}

// @addr 0x805c8f38
void DvdArchive::globalInit() {
    DVDInit();
}

// @addr 0x805c9264
void DvdArchive::findFile(const char* path) {
    (void)path;
    // Would search the FST entries for a matching filename
    mSearchCache = 0;
}

// @addr 0x805c9400
void DvdArchive::findDir(const char* path) {
    (void)path;
    mSearchCache = 0;
}

// @addr 0x805c978c
void DvdArchive::openEntry(s32 entryIndex) {
    (void)entryIndex;
    // Would open the specific FST entry for reading
}

// @addr 0x805c9894
void DvdArchive::closeEntry(s32 handle) {
    (void)handle;
}

// @addr 0x805c9bd8
void DvdArchive::readEntry(s32 entryIndex) {
    (void)entryIndex;
}

// @addr 0x805c9cb0
void DvdArchive::getFileSize(u32 entryIndex) {
    (void)entryIndex;
}

// @addr 0x805c9cf4
void DvdArchive::getFileName(s32 entryIndex) {
    (void)entryIndex;
}

// @addr 0x805c9e34
void DvdArchive::getFileOffset(s32 entryIndex) {
    (void)entryIndex;
}

// @addr 0x805c9f0c
void DvdArchive::isDirectory(s32 entryIndex) {
    (void)entryIndex;
}

// @addr 0x805c9fc8
void DvdArchive::rewindDir() {
    mCurrentDir = 0;
}

// @addr 0x805ca420
void DvdArchive::readDir(s32 dirIndex) {
    (void)dirIndex;
}

// @addr 0x805ca4f0
void DvdArchive::openDir(s32 dirIndex) {
    (void)dirIndex;
    mCurrentDir = static_cast<u32>(dirIndex);
}

// @addr 0x805ca5f0
void DvdArchive::closeDir(s32* dirState) {
    (void)dirState;
    mCurrentDir = 0;
}

// @addr 0x805ca694
void DvdArchive::changeDir() {}

// @addr 0x805ca90c
void DvdArchive::getDirEntryCount(s32 dirIndex) {
    (void)dirIndex;
}

// @addr 0x805ca9a8
void DvdArchive::getDirName(s32 dirIndex) {
    (void)dirIndex;
}

// @addr 0x805caa40
void DvdArchive::getDirChildCount(s32 dirIndex) {
    (void)dirIndex;
}

// @addr 0x805cac00
void DvdArchive::enumerateFiles() {}

// @addr 0x805cae94
void DvdArchive::sortEntries(s32 sortMode) {
    (void)sortMode;
}

// @addr 0x805caf38
void DvdArchive::buildIndex() {}

// @addr 0x805cafc0
void DvdArchive::validateIndex(s32 index) {
    (void)index;
}

// @addr 0x805cb070
void DvdArchive::parseFST() {}

// @addr 0x805cb39c
void DvdArchive::loadFST() {}

// @addr 0x805cb4e4
void DvdArchive::resolvePath() {}

// @addr 0x805cb57c
void DvdArchive::getFSTEntry() {}

// @addr 0x805cb824
void DvdArchive::walkFST() {}

// @addr 0x805cb9c8
void DvdArchive::dumpFST() {}

// @addr 0x805cbabc
void DvdArchive::getFSTString() {}

// @addr 0x805cbfa8
void DvdArchive::getFSTOffset() {}

// @addr 0x805cc0e0
void DvdArchive::readArchiveData() {}

// @addr 0x805cc4c4
void DvdArchive::setFastLoad(u32 mode) {
    (void)mode;
}

// @addr 0x805cc558
s32 DvdArchive::getMountError(s32 padding, s32 handle) {
    (void)padding;
    (void)handle;
    return (mIsMounted == MOUNT_ERROR) ? -1 : 0;
}

// @addr 0x805cc5c4
s32 DvdArchive::checkMounted(s32 padding, s32 handle) {
    (void)padding;
    (void)handle;
    return (mIsMounted == MOUNT_READY) ? 1 : 0;
}

// @addr 0x805cc60c
void DvdArchive::getMountInfo(u32* info) {
    if (info) {
        info[0] = mIsMounted;
        info[1] = mEntryCount;
        info[2] = mFileSize;
    }
}

// @addr 0x805cc758
void DvdArchive::onMountComplete() {
    if (mCallback != nullptr) {
        mCallback(mCallbackArg);
    }
}

// @addr 0x805cc7e8
void DvdArchive::decompressBlock(u32* src, u16 compType, u32* dst) {
    (void)src;
    (void)compType;
    (void)dst;
    // Decompression would be implemented per compression type (SZS, YAZ0, etc.)
}

// @addr 0x805cc944
s32 DvdArchive::readCompressed(s32 padding, s32 entryId) {
    (void)padding;
    (void)entryId;
    return -1; // not implemented
}

// @addr 0x805cc984
void DvdArchive::resetSearchCache() {
    mSearchCache = 0;
}

// @addr 0x805cca84
u32 DvdArchive::getEntryCount() const {
    return mEntryCount;
}

// @addr 0x805ccb04
void DvdArchive::freeArchive() {
    if (mEntries != nullptr) {
        mEntries = nullptr;
    }
    mStringPool = nullptr;
    mEntryCount = 0;
    mStringPoolSize = 0;
    mIsMounted = MOUNT_IDLE;
}

// @addr 0x805ccca0
void DvdArchive::initStringPool() {}

// @addr 0x805ccdcc
void DvdArchive::getString(f64 offset, s32* buf, s32 maxLen, u32 flags) {
    (void)offset;
    (void)flags;
    if (buf && maxLen > 0) {
        buf[0] = 0;
    }
}

// @addr 0x805ccf54
void DvdArchive::getStringRaw(f64 offset, s32* buf, u32* outLen) {
    (void)offset;
    if (buf) buf[0] = 0;
    if (outLen) *outLen = 0;
}

// @addr 0x805ccfa4
void DvdArchive::finalizeStringPool() {}

// @addr 0x805ccf94
s32 DvdArchive::findStringEntry(s32 padding, u32 hash) {
    (void)padding;
    (void)hash;
    return -1;
}

// @addr 0x805cd048
void DvdArchive::lookupByHash(s32 hash) {
    (void)hash;
    mSearchCache = 0;
}

// @addr 0x805cd090
void DvdArchive::lookupByPath(s32 mode, s32 pathLen, u32* outEntry) {
    (void)mode;
    (void)pathLen;
    if (outEntry) *outEntry = 0;
}

// @addr 0x805cd0f8
void DvdArchive::lookupByName(s32 mode, s32 nameLen, u32* outEntry) {
    (void)mode;
    (void)nameLen;
    if (outEntry) *outEntry = 0;
}

// @addr 0x805cd150
void DvdArchive::lookupCached(s32 hash) {
    (void)hash;
}

// @addr 0x805cd190
void DvdArchive::addCacheEntry(s32 entryId) {
    (void)entryId;
    mSearchCache = static_cast<u32>(entryId);
}

// @addr 0x805cd228
void DvdArchive::invalidateCache(s32* cache) {
    (void)cache;
    mSearchCache = 0;
}

// @addr 0x805cd26c
void DvdArchive::clearCache() {
    mSearchCache = 0;
}

// @addr 0x805cd388
s32 DvdArchive::resolveEntry(s32 padding, s32 entryId) {
    (void)padding;
    (void)entryId;
    return 0;
}

// @addr 0x805cd3c8
void DvdArchive::linkEntry(u32* parent, void* child) {
    (void)parent;
    (void)child;
}

// @addr 0x805cd510
s32 DvdArchive::getEntryParent(s32 padding, s32 entryId) {
    (void)padding;
    (void)entryId;
    return 0;
}

// @addr 0x805cd550
void DvdArchive::setEntryParent(u32* entry, void* parent) {
    (void)entry;
    (void)parent;
}

// @addr 0x805cd674
u32 DvdArchive::getArchiveSize() const {
    return mFileSize;
}

// @addr 0x805cd708
void DvdArchive::setArchiveBase(s32 baseOffset) {
    (void)baseOffset;
}

// @addr 0x805cd7ac
void DvdArchive::getArchiveBase(s32 archiveId) {
    (void)archiveId;
}

// @addr 0x805cd850
void DvdArchive::readDataRange(s32 offset, s32 length) {
    (void)offset;
    (void)length;
    // Would perform a DVD read at the given archive data offset
}

// @addr 0x805cea38
u32 DvdArchive::loadResource(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x805cef44
f64 DvdArchive::decompressSZS(f64 srcAddr, s32 compSize) {
    (void)srcAddr;
    (void)compSize;
    return 0.0;
}

// @addr 0x805cf790
s32 DvdArchive::loadFile(s32 padding, s32 entryIndex) {
    (void)padding;
    (void)entryIndex;
    return -1;
}

// @addr 0x805cfa40
s32 DvdArchive::loadFileAsync(s32 padding, s32 entryIndex) {
    (void)padding;
    (void)entryIndex;
    return -1;
}

// @addr 0x805cfbb8
s32 DvdArchive::loadFileToBuffer(s32 padding, s32 entryIndex) {
    (void)padding;
    (void)entryIndex;
    return -1;
}

// @addr 0x805cfe9c
u32 DvdArchive::getLoadProgress(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x805d0798
s32 DvdArchive::getFileType(s32 padding, s32 entryId) {
    (void)padding;
    (void)entryId;
    return 0;
}

// @addr 0x805d08e4
s32 DvdArchive::getFileFlags(s32 padding, s32 entryId) {
    (void)padding;
    (void)entryId;
    return 0;
}

// @addr 0x805d0f48
u32 DvdArchive::getFileInfo(s32 entryId, s32 infoType) {
    (void)entryId;
    (void)infoType;
    return 0;
}

// @addr 0x805d0f58
u32 DvdArchive::readFileInfo(s32 entryId, s32 infoType, void* outBuf) {
    (void)entryId;
    (void)infoType;
    (void)outBuf;
    return 0;
}

} // namespace DiscIO
} // namespace EGG