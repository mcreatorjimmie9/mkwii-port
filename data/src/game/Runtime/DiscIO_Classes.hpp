#pragma once
// ============================================================================
// DiscIO_Classes.hpp — EGG Disc I/O Class Hierarchy
// Address range: 0x805c0000 - 0x805e0000 (396 functions)
//
// Hierarchy:
//   EGG::DiscIO::DVDFileInfo    — core DVD file handle and I/O operations
//   EGG::DiscIO::DVDRipper      — async streaming/ripping from DVD
//   EGG::DiscIO::DVDFileCache   — file read caching layer
//   EGG::DiscIO::DVDAsyncQueue  — async DVD read command queue
//   EGG::DiscIO::DvdArchive     — SAR archive filesystem (mount, lookup, read)
//
// Categorization: GENESIS Phase 8 (Runtime DiscIO Class Extraction)
// ============================================================================
#include "rk_types.h"

namespace EGG {
namespace DiscIO {

// Forward declarations
class DVDFileInfo;
class DVDRipper;
class DVDFileCache;
class DVDAsyncQueue;
class DvdArchive;

// ============================================================
// EGG::DiscIO::DVDFileInfo — Core DVD file handle
// ============================================================
// Manages a single open file on the DVD. Provides synchronous and
// asynchronous read operations, position tracking, and buffer control.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mFileHandle      — DVD file handle (OS-level)
//   0x08  mFileSize        — total file size in bytes
//   0x0C  mPosition        — current read position
//   0x10  mLength          — requested read length
//   0x14  mFlags           — I/O flags (cached, async, etc.)
//   0x18  mBuffer          — pointer to read buffer
//   0x1C  mBufferSize      — buffer capacity
//   0x20  mState           — file state (idle, reading, error)
//   0x24  mPriority        — DVD read priority
//   0x28  mErrorCode       — last error code
//   0x2C  mCallback        — completion callback
//   0x30  mCallbackArg     — callback user data
//   0x34  mSectorOffset    — DVD sector-aligned offset
//   0x38  mSectorCount     — number of sectors to read
//   0x3C  mBytesRemaining  — bytes left in current transfer
//   0x40  mIsOpen          — file open flag
//   0x44  _pad44[7]        — padding / reserved
//
// Maps functions: 0x805c0154 – 0x805c1a28
// ============================================================
class DVDFileInfo {
public:
    enum State {
        STATE_IDLE    = 0,
        STATE_READING = 1,
        STATE_DONE    = 2,
        STATE_ERROR   = 3,
        STATE_CANCELED = 4,
    };

    enum Flag {
        FLAG_ASYNC      = BIT(0),
        FLAG_CACHED     = BIT(1),
        FLAG_ALIGNED    = BIT(2),
        FLAG_PRIORITY   = BIT(3),
        FLAG_AUTO_CLOSE = BIT(4),
    };

    virtual ~DVDFileInfo();

    // --- Core file operations ---
    // @addr 0x805c0c10
    virtual void open();
    // @addr 0x805c0de8
    virtual void close(s32 handle);
    // @addr 0x805c13c8
    virtual void seek(s32 offset);

    // @addr 0x805c0154 — synchronous read
    u32 read(s32* buf, u32 offset, u32 length, s32 flags);
    // @addr 0x805c0e50 — set internal buffer
    void setBuffer(s32* buf, u32 size, s32 align);
    // @addr 0x805c0fd0 — initialize file info
    void init();
    // @addr 0x805c1180 — reset file info state
    void reset(s32* info);
    // @addr 0x805c1368 — flush pending writes
    void flush(s32* info);
    // @addr 0x805c1548 — cancel current operation
    void cancel(s32 id);
    // @addr 0x805c168c — set read priority
    void setPriority(s32 priority);
    // @addr 0x805c1738 — configure file options
    void configure();
    // @addr 0x805c17cc — finalize operation
    void finalize(s32 result);
    // @addr 0x805c19c8 — update internal state
    void updateState(s32 state);
    // @addr 0x805c1a28 — on operation callback
    void onCallback();
    // @addr 0x805c1b18 — endian conversion helper
    void convertEndian(s32 count, f32* data);

    // --- Accessors ---
    u32 getFileSize() const { return mFileSize; }
    u32 getPosition() const { return mPosition; }
    s32 getState() const    { return mState; }
    bool isOpen() const     { return mIsOpen != 0; }

    // --- Static ---
    // @addr 0x805c0488
    static void globalInit();

    // --- Member data ---
    u32   mFileHandle;     // 0x04
    u32   mFileSize;       // 0x08
    u32   mPosition;       // 0x0C
    u32   mLength;         // 0x10
    u32   mFlags;          // 0x14
    void* mBuffer;         // 0x18
    u32   mBufferSize;     // 0x1C
    s32   mState;          // 0x20
    s32   mPriority;       // 0x24
    u32   mErrorCode;      // 0x28
    void (*mCallback)(void*); // 0x2C
    void* mCallbackArg;    // 0x30
    u32   mSectorOffset;   // 0x34
    u32   mSectorCount;    // 0x38
    u32   mBytesRemaining; // 0x3C
    u8    mIsOpen;         // 0x40
    u8    _pad41[3];       // 0x41
    u32   _pad44[7];       // 0x44
};

// ============================================================
// EGG::DiscIO::DVDRipper — Async DVD streaming/ripping
// ============================================================
// Reads large amounts of data from DVD in the background using
// a streaming buffer. Used for loading course data, textures, etc.
//
// Layout (~0xC0 bytes):
//   0x00  vtable
//   0x04  mState           — ripper state
//   0x08  mThreadPriority  — DVD thread priority
//   0x0C  mBufferSize      — total streaming buffer size
//   0x10  mReadOffset      — current DVD read offset
//   0x14  mReadLength      — total bytes to rip
//   0x18  mBytesRipped     — bytes transferred so far
//   0x1C  mTransferSize    — per-transfer chunk size
//   0x20  mBuffer          — streaming buffer pointer
//   0x24  mRingReadPos     — ring buffer read cursor
//   0x28  mRingWritePos    — ring buffer write cursor
//   0x2C  mRingUsed        — bytes in ring buffer
//   0x30  mIsRunning       — active flag
//   0x34  mIsSuspended     — suspended flag
//   0x38  mCallback        — completion callback
//   0x3C  mCallbackArg     — callback user data
//   0x40  mErrorCount      — consecutive error count
//   0x44  mRetryCount      — max retries
//   0x48  mFileHandle      — underlying DVD file
//   0x4C  _pad4C[20]       — reserved
//
// Maps functions: 0x805c1c68 – 0x805c34e4
// ============================================================
class DVDRipper {
public:
    enum State {
        STATE_IDLE      = 0,
        STATE_RIPPING   = 1,
        STATE_PAUSED    = 2,
        STATE_DONE      = 3,
        STATE_ERROR     = 4,
    };

    virtual ~DVDRipper();

    // --- Lifecycle ---
    // @addr 0x805c1c68 — set target file for ripping
    void setFile(u32 fileHandle);
    // @addr 0x805c1cc8 — configure rip parameters
    void configure(s32* srcInfo, s32* dstInfo);
    // @addr 0x805c1fd0 — begin ripping
    void start();
    // @addr 0x805c21c0 — stop ripping
    void stop();

    // --- Control ---
    // @addr 0x805c2248 — pause rip
    void pause(s32 reason);
    // @addr 0x805c2324 — resume rip
    void resume();
    // @addr 0x805c23c8 — cancel rip
    void cancel();
    // @addr 0x805c2d28 — tick / process one chunk
    void tick();

    // --- Status ---
    // @addr 0x805c1e30 — get current state
    s32 getState(s32 padding) const;
    // @addr 0x805c2388 — get progress (0.0 – 1.0)
    s32 getProgress(s32 padding) const;
    // @addr 0x805c2668 — get bytes remaining
    s32 getBytesRemaining(s32 padding) const;
    // @addr 0x805c3440 — get error status
    s32 getErrorStatus(s32 padding) const;
    // @addr 0x805c3480 — get buffer status flags
    u32 getBufferStatus() const;
    // @addr 0x805c34e4 — get bytes available to consume
    s32 getAvailable(s32 padding) const;

    // --- Buffer management ---
    // @addr 0x805c1e70 — allocate streaming buffer
    void allocBuffer(s32 size);
    // @addr 0x805c2474 — setup ring buffer pointers
    void setupRingBuffer(u32* readPtr, s32* writePtr);
    // @addr 0x805c26a8 — reset ring buffer
    void resetRingBuffer(s32* info);
    // @addr 0x805c2840 — advance ring buffer
    void advanceRingBuffer(s32* info);
    // @addr 0x805c2eb8 — flush ring buffer
    void flushRingBuffer(s32* info);
    // @addr 0x805c2fb4 — check if buffer is full
    void checkBufferFull();
    // @addr 0x805c30a8 — set transfer chunk size
    void setChunkSize(u32 size);
    // @addr 0x805c3104 — set retry parameters
    void setRetryParams(s32 maxRetries);
    // @addr 0x805c3184 — process DVD command result
    void onCommandResult(s32* cmdResult);
    // @addr 0x805c3224 — handle error
    void handleError(s32* errorInfo);

    // --- Static ---
    // @addr 0x805c3550
    static void globalShutdown();
    // @addr 0x805c35b0
    static void setGlobalPriority(s32 priority);
    // @addr 0x805c37d8
    static void globalReset(s32* info);

    // --- Member data ---
    s32   mState;          // 0x04
    s32   mThreadPriority; // 0x08
    u32   mBufferSize;     // 0x0C
    u32   mReadOffset;     // 0x10
    u32   mReadLength;     // 0x14
    u32   mBytesRipped;    // 0x18
    u32   mTransferSize;   // 0x1C
    void* mBuffer;         // 0x20
    u32   mRingReadPos;    // 0x24
    u32   mRingWritePos;   // 0x28
    u32   mRingUsed;       // 0x2C
    u32   mIsRunning;      // 0x30
    u32   mIsSuspended;    // 0x34
    void (*mCallback)(void*); // 0x38
    void* mCallbackArg;    // 0x3C
    u32   mErrorCount;     // 0x40
    u32   mRetryCount;     // 0x44
    u32   mFileHandle;     // 0x48
    u32   _pad4C[20];      // 0x4C
};

// ============================================================
// EGG::DiscIO::DVDFileCache — File read caching layer
// ============================================================
// Caches recently-read DVD sectors to reduce disc access.
// Uses a simple LRU or direct-mapped cache strategy.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mCacheBase       — base address of cache memory
//   0x08  mCacheSize       — total cache size in bytes
//   0x0C  mBlockSize       — cache block (sector) size
//   0x10  mBlockCount      — number of cache blocks
//   0x14  mHits            — cache hit count
//   0x18  mMisses          — cache miss count
//   0x1C  mIsInitialized   — cache ready flag
//   0x20  mIsEnabled       — cache enabled flag
//   0x24  mDirtyCount      — dirty block count
//   0x28  mEntries         — pointer to cache entry array
//   0x2C  mFreeList        — head of free block list
//   0x30  mLruHead         — head of LRU list
//   0x34  mActiveCount     — currently cached blocks
//   0x38  _pad38[18]       — reserved
//
// Maps functions: 0x805c3a40 – 0x805c6848
// ============================================================
class DVDFileCache {
public:
    virtual ~DVDFileCache();

    // --- Lifecycle ---
    // @addr 0x805c3c24
    static void globalInit();
    // @addr 0x805c3f20
    void init(s32 blockSize);
    // @addr 0x805c4138
    void reset(s32 flags);
    // @addr 0x805c82c8
    void shutdown();

    // --- Cache operations ---
    // @addr 0x805c3a40 — read through cache
    u32 read(s32* buf, u32 offset, u32 length, s32 flags);
    // @addr 0x805c41e0 — lookup cached block
    void lookup(s32* entry);
    // @addr 0x805c4638 — invalidate all entries
    void invalidateAll();
    // @addr 0x805c46c0 — invalidate range
    void invalidateRange(s32 startBlock);
    // @addr 0x805c4760 — flush dirty blocks
    void flushDirty();

    // --- Block management ---
    // @addr 0x805c4be4 — allocate cache block
    void allocBlock(s32 blockId);
    // @addr 0x805c4c88 — free cache block
    void freeBlock(s32* entry);
    // @addr 0x805c4d30 — evict LRU block
    void evictLRU();

    // --- Async read-through ---
    // @addr 0x805c5224 — submit async cache read
    void submitAsyncRead(s32* request);
    // @addr 0x805c5310 — process async result
    void processAsyncResult(s32* result);
    // @addr 0x805c5380 — cancel pending reads
    void cancelPendingReads(s32 id);
    // @addr 0x805c545c — check async status
    void checkAsyncStatus(u32* status, s32* result);

    // --- Queue management ---
    // @addr 0x805c55dc — enqueue read request
    s32 enqueueRequest(s32 padding, s32 requestId);
    // @addr 0x805c561c — dequeue next request
    static void dequeueNext();
    // @addr 0x805c5794 — process queue entry
    void processQueueEntry(s32 entry);
    // @addr 0x805c587c — advance queue
    void advanceQueue(s32* queue);
    // @addr 0x805c58ec — check queue status
    void checkQueueStatus(s32* status);
    // @addr 0x805c5964 — set queue priority
    void setQueuePriority(u32 priority);
    // @addr 0x805c5a14 — peek queue head
    void peekQueueHead(s32* entry);
    // @addr 0x805c5b3c — remove queue entry
    void removeQueueEntry(s32* entry);
    // @addr 0x805c5b94 — clear queue
    void clearQueue(s32* queue);

    // --- Status ---
    // @addr 0x805c5bf4 — set cache mode
    void setMode(u32 mode);
    // @addr 0x805c5c78 — get cache hit rate
    s32 getHitRate(s32 padding) const;
    // @addr 0x805c5cf4 — get cache status
    void getStatus();
    // @addr 0x805c5f6c — get cache info word
    u32 getInfoWord() const;
    // @addr 0x805c5fd0 — check if cache is ready
    s32 isReady(s32 padding) const;

    // --- Extended ops ---
    // @addr 0x805c603c — prepare for async
    void prepareAsync(s32* request);
    // @addr 0x805c60e0 — perform uncached read
    u32 readUncached(s32 handle, u32 offset, u32 length);
    // @addr 0x805c61f8 — handle cache miss
    void onCacheMiss(s32 blockId);
    // @addr 0x805c6328 — handle cache hit
    void onCacheHit(s32* entry);
    // @addr 0x805c6424 — update statistics
    void updateStats();
    // @addr 0x805c666c — set cache size
    void setCacheSize(s32 size);
    // @addr 0x805c6714 — compact cache
    void compact(s32* info);
    // @addr 0x805c6848 — dump cache stats
    void dumpStats();
    // @addr 0x805c6c3c — validate cache entry
    s32 validateEntry(s32 padding, s32 entryId);

    // --- Member data ---
    void* mCacheBase;      // 0x04
    u32   mCacheSize;      // 0x08
    u32   mBlockSize;      // 0x0C
    u32   mBlockCount;     // 0x10
    u32   mHits;           // 0x14
    u32   mMisses;         // 0x18
    u32   mIsInitialized;  // 0x1C
    u32   mIsEnabled;      // 0x20
    u32   mDirtyCount;     // 0x24
    void* mEntries;        // 0x28
    u32   mFreeList;       // 0x2C
    u32   mLruHead;        // 0x30
    u32   mActiveCount;    // 0x34
    u32   _pad38[18];      // 0x38
};

// ============================================================
// EGG::DiscIO::DVDAsyncQueue — Async DVD read command queue
// ============================================================
// Manages a queue of pending asynchronous DVD read commands.
// Commands are submitted by higher-level classes and processed
// by the DVD thread.
//
// Layout (~0x40 bytes):
//   0x00  vtable
//   0x04  mHead            — queue head index
//   0x08  mTail            — queue tail index
//   0x0C  mCapacity        — max queue depth
//   0x10  mPendingCount    — currently pending commands
//   0x14  mActiveCount     — in-flight commands
//   0x18  mIsProcessing    — processing flag
//   0x1C  mCancelAll       — cancel-all flag
//   0x20  mCommands        — pointer to command array
//   0x24  mFreeIndices     — stack of free slot indices
//   0x28  mFreeTop         — top of free index stack
//   0x2C  mCompletedCount  — total completed commands
//   0x30  mFailedCount     — total failed commands
//   0x34  _pad34[3]        — reserved
//
// Maps functions: 0x805c6c7c – 0x805c84c8
// ============================================================
class DVDAsyncQueue {
public:
    virtual ~DVDAsyncQueue();

    // --- Lifecycle ---
    // @addr 0x805c6c7c
    void init(s32 capacity);
    // @addr 0x805c6d10
    void reset(s32 flags);
    // @addr 0x805c6e7c
    void shutdown(s32 wait);

    // --- Queue operations ---
    // @addr 0x805c7200
    static void globalInit();
    // @addr 0x805c7280
    void process();
    // @addr 0x805c7b48
    void flush();
    // @addr 0x805c7bf8
    void cancelAll();
    // @addr 0x805c7f88
    void cancelCommand(s32 commandId);
    // @addr 0x805c7ae4
    u32 getStatus() const;
    // @addr 0x805c84c8
    u32 submitCommand(s32* cmd, u32 offset, u32 length, s32 flags);

    // --- Member data ---
    u32   mHead;           // 0x04
    u32   mTail;           // 0x08
    u32   mCapacity;       // 0x0C
    u32   mPendingCount;   // 0x10
    u32   mActiveCount;    // 0x14
    u32   mIsProcessing;   // 0x18
    u32   mCancelAll;      // 0x1C
    void* mCommands;       // 0x20
    u32   mFreeIndices[4]; // 0x24
    u32   mFreeTop;        // 0x34
    u32   mCompletedCount; // 0x38
    u32   mFailedCount;    // 0x3C
};

// ============================================================
// EGG::DiscIO::DvdArchive — SAR archive filesystem
// ============================================================
// Handles mounting and reading from SAR (archive) files on DVD.
// Provides directory traversal, file lookup by name/path, and
// decompression support.
//
// Layout (~0x200 bytes):
//   0x00  vtable
//   0x04  mIsMounted       — mount status
//   0x08  mArchiveHandle   — DVD file handle for archive
//   0x0C  mEntryCount      — number of file entries
//   0x10  mStringPoolSize  — string pool size
//   0x14  mEntries         — pointer to file entry table
//   0x18  mStringPool      — pointer to filename strings
//   0x1C  mFstOffset       — FST offset in archive
//   0x20  mDataOffset      — data section offset
//   0x24  mFileSize        — total archive file size
//   0x28  mMountPriority    — mount thread priority
//   0x2C  mCurrentDir      — current directory index
//   0x30  mSearchCache     — last found entry cache
//   0x34  mCallback        — mount completion callback
//   0x38  mCallbackArg     — callback argument
//   0x3C  mIsCompressed    — archive compression flag
//   0x40  mCompressionType — compression algorithm ID
//   0x44  _pad44[110]      — reserved
//
// Maps functions: 0x805c8720 – 0x805d0f58
// ============================================================
class DvdArchive {
public:
    enum MountState {
        MOUNT_IDLE     = 0,
        MOUNT_LOADING  = 1,
        MOUNT_READY    = 2,
        MOUNT_ERROR    = 3,
    };

    virtual ~DvdArchive();

    // --- Lifecycle ---
    // @addr 0x805c8720
    void mount(s32 archiveId);
    // @addr 0x805c8a18
    void unmount(s32 flags);
    // @addr 0x805c8ae8
    void remount(s32 archiveId);
    // @addr 0x805c8dcc
    void waitForMount(s32 timeout);
    // @addr 0x805c8f38
    static void globalInit();

    // --- File lookup ---
    // @addr 0x805c9264
    void findFile(const char* path);
    // @addr 0x805c9400
    void findDir(const char* path);
    // @addr 0x805c978c
    void openEntry(s32 entryIndex);
    // @addr 0x805c9894
    void closeEntry(s32 handle);
    // @addr 0x805c9bd8
    void readEntry(s32 entryIndex);
    // @addr 0x805c9cb0
    void getFileSize(u32 entryIndex);
    // @addr 0x805c9cf4
    void getFileName(s32 entryIndex);
    // @addr 0x805c9e34
    void getFileOffset(s32 entryIndex);
    // @addr 0x805c9f0c
    void isDirectory(s32 entryIndex);

    // --- Directory traversal ---
    // @addr 0x805c9fc8
    void rewindDir();
    // @addr 0x805ca420
    void readDir(s32 dirIndex);
    // @addr 0x805ca4f0
    void openDir(s32 dirIndex);
    // @addr 0x805ca5f0
    void closeDir(s32* dirState);
    // @addr 0x805ca694
    void changeDir();
    // @addr 0x805ca90c
    void getDirEntryCount(s32 dirIndex);
    // @addr 0x805ca9a8
    void getDirName(s32 dirIndex);
    // @addr 0x805caa40
    void getDirChildCount(s32 dirIndex);
    // @addr 0x805cac00
    void enumerateFiles();
    // @addr 0x805cae94
    void sortEntries(s32 sortMode);
    // @addr 0x805caf38
    void buildIndex();
    // @addr 0x805cafc0
    void validateIndex(s32 index);

    // --- FST operations ---
    // @addr 0x805cb070
    void parseFST();
    // @addr 0x805cb39c
    void loadFST();
    // @addr 0x805cb4e4
    void resolvePath();
    // @addr 0x805cb57c
    void getFSTEntry();
    // @addr 0x805cb824
    void walkFST();
    // @addr 0x805cb9c8
    static void dumpFST();
    // @addr 0x805cbabc
    void getFSTString();
    // @addr 0x805cbfa8
    void getFSTOffset();

    // --- Low-level archive I/O ---
    // @addr 0x805cc0e0
    void readArchiveData();
    // @addr 0x805cc4c4
    void setFastLoad(u32 mode);
    // @addr 0x805cc558
    s32 getMountError(s32 padding, s32 handle);
    // @addr 0x805cc5c4
    s32 checkMounted(s32 padding, s32 handle);
    // @addr 0x805cc60c
    void getMountInfo(u32* info);
    // @addr 0x805cc758
    void onMountComplete();
    // @addr 0x805cc7e8
    void decompressBlock(u32* src, u16 compType, u32* dst);
    // @addr 0x805cc944
    s32 readCompressed(s32 padding, s32 entryId);
    // @addr 0x805cc984
    void resetSearchCache();
    // @addr 0x805cca84
    u32 getEntryCount() const;
    // @addr 0x805ccb04
    void freeArchive();

    // --- String pool ---
    // @addr 0x805ccca0
    static void initStringPool();
    // @addr 0x805ccdcc
    void getString(f64 offset, s32* buf, s32 maxLen, u32 flags);
    // @addr 0x805ccf54
    void getStringRaw(f64 offset, s32* buf, u32* outLen);
    // @addr 0x805ccfa4
    void finalizeStringPool();
    // @addr 0x805ccf94
    s32 findStringEntry(s32 padding, u32 hash);

    // --- Advanced lookup ---
    // @addr 0x805cd048
    void lookupByHash(s32 hash);
    // @addr 0x805cd090
    void lookupByPath(s32 mode, s32 pathLen, u32* outEntry);
    // @addr 0x805cd0f8
    void lookupByName(s32 mode, s32 nameLen, u32* outEntry);
    // @addr 0x805cd150
    void lookupCached(s32 hash);
    // @addr 0x805cd190
    void addCacheEntry(s32 entryId);
    // @addr 0x805cd228
    void invalidateCache(s32* cache);
    // @addr 0x805cd26c
    void clearCache();
    // @addr 0x805cd388
    s32 resolveEntry(s32 padding, s32 entryId);
    // @addr 0x805cd3c8
    void linkEntry(u32* parent, void* child);
    // @addr 0x805cd510
    s32 getEntryParent(s32 padding, s32 entryId);
    // @addr 0x805cd550
    void setEntryParent(u32* entry, void* parent);
    // @addr 0x805cd674
    u32 getArchiveSize() const;
    // @addr 0x805cd708
    void setArchiveBase(s32 baseOffset);
    // @addr 0x805cd7ac
    void getArchiveBase(s32 archiveId);
    // @addr 0x805cd850
    void readDataRange(s32 offset, s32 length);

    // --- Resource loading ---
    // @addr 0x805cea38
    u32 loadResource(s32 resourceId);
    // @addr 0x805cef44
    f64 decompressSZS(f64 srcAddr, s32 compSize);
    // @addr 0x805cf790
    s32 loadFile(s32 padding, s32 entryIndex);
    // @addr 0x805cfa40
    s32 loadFileAsync(s32 padding, s32 entryIndex);
    // @addr 0x805cfbb8
    s32 loadFileToBuffer(s32 padding, s32 entryIndex);
    // @addr 0x805cfe9c
    u32 getLoadProgress(s32 resourceId);

    // --- Extended file ops ---
    // @addr 0x805d0798
    s32 getFileType(s32 padding, s32 entryId);
    // @addr 0x805d08e4
    s32 getFileFlags(s32 padding, s32 entryId);
    // @addr 0x805d0f48
    u32 getFileInfo(s32 entryId, s32 infoType);
    // @addr 0x805d0f58
    u32 readFileInfo(s32 entryId, s32 infoType, void* outBuf);

    // --- Member data ---
    u32   mIsMounted;      // 0x04
    u32   mArchiveHandle;  // 0x08
    u32   mEntryCount;     // 0x0C
    u32   mStringPoolSize; // 0x10
    void* mEntries;        // 0x14
    const char* mStringPool; // 0x18
    u32   mFstOffset;      // 0x1C
    u32   mDataOffset;     // 0x20
    u32   mFileSize;       // 0x24
    s32   mMountPriority;  // 0x28
    u32   mCurrentDir;     // 0x2C
    u32   mSearchCache;    // 0x30
    void (*mCallback)(void*); // 0x34
    void* mCallbackArg;    // 0x38
    u32   mIsCompressed;   // 0x3C
    u32   mCompressionType;// 0x40
    u32   _pad44[110];     // 0x44
};

} // namespace DiscIO
} // namespace EGG