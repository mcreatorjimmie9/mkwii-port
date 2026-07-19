#pragma once
// ============================================================================
// ArchiveExt_Classes.hpp — EGG Extended Archive Class Hierarchy
// Address range: 0x804e0000 - 0x80500000 (525 functions)
//
// Hierarchy:
//   EGG::ArchiveExt::Decompressor  — LZ77/Yaz0 decompression engine
//   EGG::ArchiveExt::ArchiveScanner — archive directory tree traversal
//   EGG::ArchiveExt::ResourceLoader — base class for type-specific loaders
//     +-- EGG::ArchiveExt::TextureLoader — texture resource loading (.bti/.tpl)
//     +-- EGG::ArchiveExt::ModelLoader   — 3D model resource loading (.bmd/.bdl)
//     +-- EGG::ArchiveExt::SoundLoader   — sound resource loading (.brsar/.bwav)
//
// Categorization: GENESIS Phase 8 (Runtime ArchiveExt Class Extraction)
// ============================================================================
#include "rk_types.h"

namespace EGG {
namespace ArchiveExt {

// Forward declarations
class Decompressor;
class ArchiveScanner;
class ResourceLoader;
class TextureLoader;
class ModelLoader;
class SoundLoader;

// ============================================================
// EGG::ArchiveExt::Decompressor — LZ77/Yaz0 decompression engine
// ============================================================
// Handles decompression of BURST archive data. Supports both LZ77
// (used in .szs files) and Yaz0 compression algorithms. Provides
// synchronous, streaming, and asynchronous decompression modes.
//
// Layout (estimated 0x48 bytes):
//   0x00  vtable
//   0x04  mInput           — pointer to compressed input data
//   0x08  mOutput          — pointer to decompressed output buffer
//   0x0C  mInputSize       — compressed data size
//   0x10  mOutputSize      — decompressed data size / capacity
//   0x14  mPosition        — current read/write position
//   0x18  mMode            — compression mode (LZ77, Yaz0, None)
//   0x1C  mFlags           — decompression flags
//   0x20  mState           — decompressor state (idle, active, error)
//   0x24  mChunkSize       — processing chunk size
//   0x28  mDictSize        — LZ77 dictionary/window size
//   0x2C  mAlignment       — output alignment requirement
//   0x30  mChecksum        — data checksum
//   0x34  mChecksumMode    — checksum verification mode
//   0x38  mCallback        — async completion callback
//   0x3C  mCallbackArg     — callback user data
//   0x40  mIsFinalized     — finalization flag
//   0x44  _pad44[1]        — padding
//
// Maps functions: 0x804e0010 – 0x804e4a18
// ============================================================
class Decompressor {
public:
    enum Mode {
        MODE_NONE  = 0,
        MODE_LZ77  = 1,
        MODE_YAZ0  = 2,
    };

    enum State {
        STATE_IDLE    = 0,
        STATE_ACTIVE  = 1,
        STATE_DONE    = 2,
        STATE_ERROR   = 3,
    };

    enum Flag {
        FLAG_STREAMING    = BIT(0),
        FLAG_ASYNC        = BIT(1),
        FLAG_CRC_VERIFY   = BIT(2),
        FLAG_ALIGN_OUTPUT = BIT(3),
    };

    // @addr 0x804e0060 — constructor / reset
    Decompressor();
    virtual ~Decompressor();

    // --- Core decompression ---
    // @addr 0x804e0010 — get expanded size for input
    u32 getExpandedSize(u32 compressedSize);
    // @addr 0x804e00bc — decompress block (sync)
    s32 decompress(void* src, void* dst);
    // @addr 0x804e0470 — get current output size
    u32 getOutputSize();

    // --- Input/output configuration ---
    // @addr 0x804e013c — set input data pointer
    void setInput(void* data);
    // @addr 0x804e0224 — set output buffer pointer
    void setOutput(void* buffer);
    // @addr 0x804e02ec — clear internal state
    void clearState();
    // @addr 0x804e0348 — set decompression mode
    void setMode(s32 mode);
    // @addr 0x804e03e8 — set flags
    void setFlags(u32 flags);
    // @addr 0x804e042c — set chunk size
    void setChunkSize(u32 size);
    // @addr 0x804e05a0 — finalize decompression
    void finalize();

    // --- Chunk decompression ---
    // @addr 0x804e0608 — decompress a chunk
    s32 decompressChunk(void* src, void* dst);
    // @addr 0x804e068c — seek input position
    void seekInput(s32 position);
    // @addr 0x804e07e4 — set read size
    void setReadSize(u32 size);
    // @addr 0x804e0828 — advance input position
    void advanceInput(s32 bytes);
    // @addr 0x804e08e4 — flush output
    void flush();

    // --- Partial decompression ---
    // @addr 0x804e094c — decompress partial data
    s32 decompressPartial(void* src, void* dst);
    // @addr 0x804e09d0 — set output write position
    void setOutputPos(s32 pos);
    // @addr 0x804e0aa4 — reset output position
    void resetOutput();
    // @addr 0x804e0b0c — set output buffer size
    void setOutputSize(s32 size);
    // @addr 0x804e0c58 — set alignment
    void setAlignment(u32 align);
    // @addr 0x804e0c9c — write decompressed data to output
    void writeOutput(s32 size);

    // --- Block operations ---
    // @addr 0x804e0da4 — swap input/output buffers
    void swapBuffers();
    // @addr 0x804e0e0c — decode a single block
    s32 decodeBlock(void* src, void* dst);
    // @addr 0x804e0e90 — set block parameters
    void setBlockParams(s32 params);
    // @addr 0x804e0f64 — process a block
    void processBlock(s32 blockId);

    // --- LZ77 dictionary ---
    // @addr 0x804e10b0 — set dictionary size
    void setDictSize(u32 size);
    // @addr 0x804e10f4 — set sliding window
    void setWindow(s32 windowSize);

    // --- Yaz0 decompression ---
    // @addr 0x804e12ec — decompress using Yaz0 algorithm
    s32 decompressYaz0(void* src, void* dst);
    // @addr 0x804e1278 — initialize Yaz0 decoder
    void initYaz0();
    // @addr 0x804e1364 — Yaz0 step
    void yaz0Step(s32 state);
    // @addr 0x804e140c — Yaz0 decode
    void yaz0Decode(s32* ctx);
    // @addr 0x804e1534 — Yaz0 read
    void yaz0Read(s32 count);
    // @addr 0x804e168c — Yaz0 process
    void yaz0Process(s32* state);

    // --- LZ77 decompression ---
    // @addr 0x804e1d1c — initialize LZ77 decoder
    void initLZ77();
    // @addr 0x804e1f54 — LZ77 expand
    u32 lz77Expand(s32 size);
    // @addr 0x804e2018 — LZ77 set input
    void lz77SetInput(s32 input);
    // @addr 0x804e22d4 — LZ77 set output
    void lz77SetOutput(s32 output);
    // @addr 0x804e234c — LZ77 seek
    void lz77Seek(s32 position);
    // @addr 0x804e23ac — LZ77 copy (back-reference)
    void lz77Copy(s32 offset, s32 length);
    // @addr 0x804e2418 — LZ77 write byte
    void lz77Write(s32 byte);
    // @addr 0x804e2464 — LZ77 flush output
    void lz77Flush(s32 bytes);
    // @addr 0x804e2750 — LZ77 decode run
    void lz77Decode(s32 src, u32 length);
    // @addr 0x804e27e0 — LZ77 advance position
    void lz77Advance(s32 bytes);
    // @addr 0x804e2880 — LZ77 block decode
    void lz77Block(s32 blockId, u32 offset, u32 length);
    // @addr 0x804e28b0 — LZ77 segment decode
    void lz77Segment(s32 segmentId, u32 size);
    // @addr 0x804e28fc — LZ77 finish
    void lz77Finish();

    // --- Async decompression ---
    // @addr 0x804e2978 — start async decompress
    s32 decompressAsync(void* src, void* dst);
    // @addr 0x804e29e0 — set async state
    void setAsyncState(s32 state);
    // @addr 0x804e2a3c — set async callback
    void setAsyncCallback(s32* callback);
    // @addr 0x804e2bc8 — queue async decompress
    void queueDecompress(s32* request);
    // @addr 0x804e2e00 — process async queue
    void processQueue(s32* queue);
    // @addr 0x804e2fb0 — flush async queue
    void flushQueue(s32* queue);
    // @addr 0x804e3154 — cancel async operation
    void cancelAsync(s32* handle);
    // @addr 0x804e3260 — configure async params
    void configure(u32 flags, s32 priority, u32 stackSize);
    // @addr 0x804e32d0 — get async status
    void getStatus();

    // --- Streaming decompression ---
    // @addr 0x804e334c — decompress stream
    s32 decompressStream(void* src, void* dst);
    // @addr 0x804e33b4 — stream set input
    void streamSetInput(s32 input);
    // @addr 0x804e3410 — stream set output
    void streamSetOutput(s32* output);
    // @addr 0x804e35b4 — stream configure
    void streamConfigure(u32 flags, s32 mode, u32 bufferSize);
    // @addr 0x804e3654 — stream reset
    void streamReset();
    // @addr 0x804e36a0 — stream decompress step
    s32 streamDecompress(void* src, void* dst);
    // @addr 0x804e3714 — stream seek
    void streamSeek(s32 position);
    // @addr 0x804e37d8 — stream flush
    void streamFlush();
    // @addr 0x804e384c — stream close
    void streamClose();

    // --- File-based decompression ---
    // @addr 0x804e38d8 — decompress file
    s32 decompressFile(void* filePath, void* output);
    // @addr 0x804e3958 — set file path
    void setFilePath(s32 pathId);
    // @addr 0x804e3a5c — close file
    void closeFile();
    // @addr 0x804e3ab4 — read file chunk
    void readFileChunk(s32* buffer, u32 size);
    // @addr 0x804e3b48 — write file chunk (variant A)
    void writeFileChunkA(s32 fd, u32 offset, u32 size);
    // @addr 0x804e3b78 — write file chunk (variant B)
    void writeFileChunkB(s32 fd, u32 offset, u32 size);
    // @addr 0x804e3ba8 — write file chunk (variant C)
    void writeFileChunkC(s32 fd, u32 offset, u32 size);
    // @addr 0x804e3bfc — get file size
    s32 getFileSize(s32 pathId);
    // @addr 0x804e3c30 — read data from file
    s32 readData(s32 fd, s32 size);
    // @addr 0x804e3ca0 — write data to file
    s32 writeData(s32 fd, s32 size);

    // --- Path and hash utilities ---
    // @addr 0x804e3d54 — set archive path
    void setPath(s8* path);
    // @addr 0x804e3e70 — init file I/O subsystem
    void initFileIO();
    // @addr 0x804e3f90 — set hash table buffer
    void setHashTable(u8* table);
    // @addr 0x804e3fc4 — log path for debugging
    void logPath(s8* path);
    // @addr 0x804e43c8 — set archive path string
    void setArchivePath(s8* path);
    // @addr 0x804e44e8 — compute path hash
    u32 hashPath(s8* path);
    // @addr 0x804e4590 — get data checksum
    u32 getChecksum(s32 mode);
    // @addr 0x804e45a4 — set checksum mode
    void setChecksumMode(s32 mode);
    // @addr 0x804e45b8 — set hash table
    void setHashBuffer(u8* table);
    // @addr 0x804e45d0 — set hash seed
    void setHashSeed(s32 seed);
    // @addr 0x804e45fc — initialize hash
    void initHash(s32 algorithm);
    // @addr 0x804e4620 — compute hash value
    void computeHash(s32 data);
    // @addr 0x804e4670 — hash a data block
    void hashBlock(s32 blockId, u32 size, u8 flags, u8* out);
    // @addr 0x804e4a18 — finalize hash computation
    void finalizeHash();

    // --- Accessors ---
    Mode  getMode() const       { return (Mode)mMode; }
    State getState() const      { return (State)mState; }
    u32   getFlags() const      { return mFlags; }
    u32   getPosition() const   { return mPosition; }
    void* getInput() const      { return mInput; }
    void* getOutput() const     { return mOutput; }

    // --- Member data ---
    void* mInput;          // 0x04
    void* mOutput;         // 0x08
    u32   mInputSize;      // 0x0C
    u32   mOutputSize;     // 0x10
    u32   mPosition;       // 0x14
    s32   mMode;           // 0x18
    u32   mFlags;          // 0x1C
    u32   mState;          // 0x20
    u32   mChunkSize;      // 0x24
    u32   mDictSize;       // 0x28
    u32   mAlignment;      // 0x2C
    u32   mChecksum;       // 0x30
    s32   mChecksumMode;   // 0x34
    void* mCallback;       // 0x38
    void* mCallbackArg;    // 0x3C
    u32   mIsFinalized;    // 0x40
    u32   _pad44;          // 0x44
};

// ============================================================
// EGG::ArchiveExt::ArchiveScanner — Archive directory tree traversal
// ============================================================
// Traverses the directory tree within a BURST archive. Provides
// file/directory enumeration, path-based lookup, and iteration
// over archive entries. Used by the resource loading system to
// locate files by name within mounted archives.
//
// Layout (estimated 0x30 bytes):
//   0x00  vtable
//   0x04  mRootNode        — root directory node pointer
//   0x08  mCurrentNode     — current traversal node
//   0x0C  mEntryCount      — total entries in current directory
//   0x10  mCurrentIndex    — current entry index during iteration
//   0x14  mFlags           — scanner flags (recursive, etc.)
//   0x18  mSearchHash      — cached hash for last search
//   0x1C  mFoundEntry      — last found entry pointer
//   0x20  mStringTable     — pointer to FNT (file name table)
//   0x24  mFatTable        — pointer to FAT (file alloc table)
//   0x28  mFatEntryCount   — number of FAT entries
//   0x2C  _pad2C           — padding
//
// Maps functions: 0x804e4a18 – 0x804e6800
// ============================================================
class ArchiveScanner {
public:
    enum Flag {
        FLAG_RECURSIVE  = BIT(0),
        FLAG_DIRS_ONLY  = BIT(1),
        FLAG_FILES_ONLY = BIT(2),
        FLAG_SORTED     = BIT(3),
    };

    // @addr 0x804e4a18 — constructor / reset
    ArchiveScanner();
    virtual ~ArchiveScanner();

    // --- Core scanning ---
    // @addr 0x804e4a18 — reset scanner to root
    void reset();
    // @addr 0x804e4dbc — begin scan from directory
    void beginScan(s32 dirId, u32 flags, u8 filter, u32 maxEntries);
    // @addr 0x804e4df4 — end scan / cleanup
    void endScan();
    // @addr 0x804e4e28 — check if scan is active
    void checkActive();
    // @addr 0x804e4e64 — check if scan is complete
    void checkComplete();

    // --- Entry iteration ---
    // @addr 0x804e4e9c — advance to next entry
    void nextEntry(s32 dirId, u32 flags);
    // @addr 0x804e4ecc — step by N entries
    void skipEntries(s32 dirId, u32 count, u32 flags);
    // @addr 0x804e4ef8 — get current entry node
    void getCurrentNode(u32* outNode);
    // @addr 0x804e4fec — get entry at index
    void getEntryAt(u32* outEntry, u32 index);
    // @addr 0x804e529c — get entry data
    void getEntryData(u32* outData, u32 entryId);
    // @addr 0x804e53c4 — finalize iteration
    void finishIteration();
    // @addr 0x804e558c — get scan result
    void getResult(u32* outResult);
    // @addr 0x804e56e4 — set current directory
    void setCurrentDir(s32 dirId);

    // --- File/directory lookup ---
    // @addr 0x804e5950 — reset search cache
    void resetSearchCache();
    // @addr 0x804e5ccc — set search directory
    void setSearchDir(s32 dirId);
    // @addr 0x804e5d38 — set search filter
    void setSearchFilter(s32 filter);
    // @addr 0x804e5df4 — set search flags
    void setSearchFlags(s32 flags);
    // @addr 0x804e5e54 — set max results
    void setMaxResults(s32 max);
    // @addr 0x804e5ea4 — clear results
    void clearResults();
    // @addr 0x804e5ef4 — add search result
    void addResult(s32 entryId, s32 score);
    // @addr 0x804e5f40 — set result buffer
    void setResultBuffer(u32* buffer, s32 capacity);
    // @addr 0x804e5f8c — sort results
    void sortResults(s32 mode, s32 order);

    // --- Path resolution ---
    // @addr 0x804e5fec — find file by path (hash-based)
    u32 findFile(s32 dirId, s32 pathHash, u32 flags);
    // @addr 0x804e6058 — check if file exists
    bool fileExists(s32 dirId, s32 pathHash);
    // @addr 0x804e608c — find directory by path
    u32 findDir(s32 dirId);
    // @addr 0x804e60b4 — resolve path to entry ID
    u32 resolvePath(s32 pathId);
    // @addr 0x804e6174 — get entry ID by name hash
    u32 getEntryByHash(s32 nameHash);
    // @addr 0x804e6240 — enter subdirectory
    void enterDir(s32 dirId);
    // @addr 0x804e6254 — exit to parent directory
    void exitDir(s32 dirId);
    // @addr 0x804e6414 — set path component
    void setPathComponent(s32 component, s32 index, u32 hash);
    // @addr 0x804e6474 — clear path components
    void clearPathComponents();
    // @addr 0x804e64d4 — set path depth
    void setPathDepth(s32 depth, s32 maxDepth);
    // @addr 0x804e657c — get entry count
    u32 getEntryCount(u32 dirId);

    // --- Accessors ---
    u32   getCurrentIndex() const { return mCurrentIndex; }
    u32   getEntryCount() const   { return mEntryCount; }
    void* getCurrentNode() const  { return mCurrentNode; }
    bool  isActive() const        { return (mFlags & FLAG_RECURSIVE) != 0; }

    // --- Member data ---
    void* mRootNode;       // 0x04
    void* mCurrentNode;    // 0x08
    u32   mEntryCount;     // 0x0C
    u32   mCurrentIndex;   // 0x10
    u32   mFlags;          // 0x14
    u32   mSearchHash;     // 0x18
    void* mFoundEntry;     // 0x1C
    const char* mStringTable; // 0x20
    void* mFatTable;       // 0x24
    u32   mFatEntryCount;  // 0x28
    u32   _pad2C;          // 0x2C
};

// ============================================================
// EGG::ArchiveExt::ResourceLoader — Base class for resource loading
// ============================================================
// Abstract base class for type-specific resource loaders.
// Each subclass handles a specific resource type (textures, models,
// sounds) and provides virtual methods for loading, unloading,
// and querying resources from archives.
//
// Layout (estimated 0x2C bytes):
//   0x00  vtable
//   0x04  mArchive         — source archive pointer
//   0x08  mHeap            — heap for allocations
//   0x0C  mResourceCount   — number of loaded resources
//   0x10  mFlags           — loader flags
//   0x14  mLoadState       — current load state
//   0x18  mActiveResource  — currently active resource ID
//   0x1C  mErrorCount      — total load errors
//   0x20  mCache           — resource cache pointer
//   0x24  mCacheCapacity   — max cached resources
//   0x28  _pad28           — padding
//
// Maps functions: 0x804e6800 – 0x804f0000
// ============================================================
class ResourceLoader {
public:
    enum LoadState {
        LOAD_IDLE     = 0,
        LOAD_LOADING  = 1,
        LOAD_READY    = 2,
        LOAD_ERROR    = 3,
    };

    enum Flag {
        FLAG_ASYNC_LOAD    = BIT(0),
        FLAG_CACHE_RESULTS = BIT(1),
        FLAG_SHARE_DATA    = BIT(2),
        FLAG_DECOMPRESS    = BIT(3),
    };

    virtual ~ResourceLoader();

    // --- Pure virtual interface ---
    // @addr 0x804e787c — load resource by ID
    virtual s32 load(u32 resourceId) = 0;
    // @addr 0x804e78d0 — unload resource by ID
    virtual void unload(u32 resourceId) = 0;
    // @addr 0x804e79b8 — get loaded resource pointer
    virtual void* getResource(u32 resourceId) = 0;

    // --- Optional virtuals ---
    // @addr 0x804e7a60 — check if resource is loaded
    virtual bool isLoaded(u32 resourceId);
    // @addr 0x804e7ae0 — get resource size
    virtual u32 getResourceSize(u32 resourceId);
    // @addr 0x804e7b60 — get resource type name
    virtual const char* getTypeName() const;

    // --- Configuration ---
    // @addr 0x804e7be0 — set source archive
    void setArchive(void* archive);
    // @addr 0x804e7c60 — set allocation heap
    void setHeap(s32 heap);
    // @addr 0x804e7ce0 — set loader flags
    void setFlags(s32 flags);
    // @addr 0x804e7d8c — set cache capacity
    void setCacheCapacity(s32 capacity);
    // @addr 0x804e7dd0 — set decompression flag
    void setDecompress(s32 enable);
    // @addr 0x804e7e14 — set async mode
    void setAsyncMode(s32 enable);
    // @addr 0x804e7e58 — set share mode
    void setShareMode(s32 enable);
    // @addr 0x804e7e9c — set priority
    void setPriority(s32 priority);
    // @addr 0x804e7ee0 — set load callback
    void setLoadCallback(s32 callback);
    // @addr 0x804e7f24 — set error callback
    void setErrorCallback(s32 callback);
    // @addr 0x804e7f68 — set progress callback
    void setProgressCallback(s32 callback);
    // @addr 0x804e7fac — set buffer pool
    void setBufferPool(s32 pool);
    // @addr 0x804e7ff0 — configure loader options
    void configure(s32 option);
    // @addr 0x804e8034 — set thread affinity
    void setThreadAffinity(s32 affinity);
    // @addr 0x804e8078 — set memory budget
    void setMemoryBudget(s32 budget);
    // @addr 0x804e80bc — set timeout
    void setTimeout(s32 timeoutMs);
    // @addr 0x804e8100 — set retry count
    void setRetryCount(s32 count);
    // @addr 0x804e8144 — set log level
    void setLogLevel(s32 level);
    // @addr 0x804e8188 — set verbose mode
    void setVerbose(s32 enable);
    // @addr 0x804e81cc — set debug mode
    void setDebug(s32 enable);
    // @addr 0x804e8210 — set validate mode
    void setValidate(s32 enable);
    // @addr 0x804e8254 — set preload flag
    void setPreload(s32 enable);
    // @addr 0x804e8298 — set streaming flag
    void setStreaming(s32 enable);
    // @addr 0x804e82dc — set compression tolerance
    void setCompressionTolerance(s32 tolerance);
    // @addr 0x804e8320 — finalize configuration
    void finalizeConfig();

    // --- Batch operations ---
    // @addr 0x804e8384 — load multiple resources
    s32 loadBatch(s32* resourceIds, s32 count);
    // @addr 0x804e83ec — unload multiple resources
    s32 unloadBatch(s32* resourceIds, s32 count);
    // @addr 0x804e8458 — preload resource list
    void preloadBegin();
    // @addr 0x804e8494 — preload single entry
    void preloadEntry();
    // @addr 0x804e84d0 — preload set entry
    void preloadSetEntry(u32* entry);
    // @addr 0x804e850c — preload advance
    void preloadAdvance(u32* state);
    // @addr 0x804e8574 — preload finalize
    void preloadFinalize(u32* state);

    // --- Cache management ---
    // @addr 0x804e85d8 — get cache usage
    u32 getCacheUsage(s32 metric);
    // @addr 0x804e864c — get cache hit count
    u32 getCacheHits(s32 metric);
    // @addr 0x804e86d4 — invalidate cache entry
    void invalidateCacheEntry(u32* entry);
    // @addr 0x804e873c — flush entire cache
    void flushCache(u32* stats);
    // @addr 0x804e87a4 — reset cache stats
    void resetCacheStats();
    // @addr 0x804e87e0 — compact cache
    void compactCache();
    // @addr 0x804e8860 — resize cache
    void resizeCache();
    // @addr 0x804e88e0 — get cache info
    void getCacheInfo();
    // @addr 0x804e8924 — validate cache
    void validateCache();
    // @addr 0x804e8968 — clear cache errors
    void clearCacheErrors();
    // @addr 0x804e89e8 — set cache policy
    void setCachePolicy();
    // @addr 0x804e8a68 — get cache policy
    void getCachePolicy();
    // @addr 0x804e8ae8 — enable cache
    void enableCache();
    // @addr 0x804e8b68 — disable cache
    void disableCache();
    // @addr 0x804e8be8 — lock cache entry
    void lockCacheEntry();
    // @addr 0x804e8c68 — unlock cache entry
    void unlockCacheEntry();

    // --- Status queries ---
    // @addr 0x804e8f1c — get load progress
    s32 getLoadProgress(s32 resourceId, s32 metric);
    // @addr 0x804e8f8c — get load error
    void getLoadError();
    // @addr 0x804e9264 — get loader state
    void getLoaderState();
    // @addr 0x804e93d4 — get active resource count
    void getActiveCount();
    // @addr 0x804e9548 — get pending count
    void getPendingCount();
    // @addr 0x804e9884 — get total loaded size
    void getTotalSize();
    // @addr 0x804e9b3c — get error count
    void getErrorCount();
    // @addr 0x804e9dfc — get last error
    void getLastError();
    // @addr 0x804ea24c — get resource info
    void getResourceInfo();
    // @addr 0x804ea524 — check resource valid
    void isResourceValid();
    // @addr 0x804ea5b8 — get resource dependencies
    void getDependencies();
    // @addr 0x804ea870 — get dependency count
    void getDependencyCount();

    // --- Loading operations ---
    // @addr 0x804e7950 — load resource from archive
    s32 loadFromArchive(s32 archiveId, s32 resourceId);
    // @addr 0x804e7d24 — load resource to buffer
    s32 loadToBuffer(s32 resourceId, s32 bufferId);
    // @addr 0x804e982c — load with priority
    s32 loadWithPriority(s32 resourceId, s32 priority);
    // @addr 0x804ea1f4 — load async
    s32 loadAsync(s32 resourceId, s32 callback);
    // @addr 0x804ea560 — load sync
    s32 loadSync(s32 resourceId, s32 timeout);
    // @addr 0x804eac2c — load with decompression
    s32 loadWithDecompress(s32 resourceId, s32 flags);
    // @addr 0x804eac6c — load raw (no processing)
    s32 loadRaw(s32 resourceId, s32 bufferId);

    // --- Lookup and enumeration ---
    // @addr 0x804eacc8 — get resource count
    u32 getResourceCount(s32 filter);
    // @addr 0x804ead50 — get resource ID by index
    u32 getResourceId(s32 index);
    // @addr 0x804eb158 — get resource name
    void getResourceName();
    // @addr 0x804eb194 — find resource by name
    s32 findResource(s32 nameHash, s32 flags);
    // @addr 0x804eb1ec — get resource type
    u32 getResourceType(s32 resourceId);
    // @addr 0x804eb260 — enumerate resources
    void enumerateResources();
    // @addr 0x804eb2c0 — get next resource in enumeration
    s32 getNextResource(s32 currentId, s32 filter);
    // @addr 0x804eb31c — reset enumeration
    s32 resetEnumeration(s32 filter, s32 sortMode);
    // @addr 0x804eb37c — get resource flags
    u32 getResourceFlags(s32 resourceId);
    // @addr 0x804eb3fc — set resource flags
    void setResourceFlags();
    // @addr 0x804eb6b4 — check resource flags
    void checkResourceFlags();
    // @addr 0x804eb9cc — lock resource
    void lockResource();
    // @addr 0x804ebca0 — unlock resource
    void unlockResource(u32* resourceId);
    // @addr 0x804ebcfc — get lock count
    u32 getLockCount(s32 resourceId);
    // @addr 0x804ebd70 — get reference count
    void getRefCount();

    // --- Advanced loading ---
    // @addr 0x804ec318 — load with transform
    s32 loadWithTransform(s32 resourceId, s32 transform);
    // @addr 0x804ec370 — load with callback chain
    void loadWithCallbacks();
    // @addr 0x804eca44 — get load time
    u32 getLoadTime(s32 resourceId);
    // @addr 0x804ecacc — get decompress time
    u32 getDecompressTime(s32 resourceId);
    // @addr 0x804ecb40 — begin profiling
    void beginProfile();
    // @addr 0x804ec688 — end profiling
    void endProfile();
    // @addr 0x804ecf10 — load with dependency tracking
    s32 loadWithDeps(s32 resourceId, s32 depFlags);
    // @addr 0x804ecf68 — get dependency list
    u32 getDependencies(s32 resourceId);
    // @addr 0x804eced4 — resolve dependencies
    void resolveDependencies();
    // @addr 0x804ecfdc — check dependencies met
    void checkDependencies();
    // @addr 0x804ed03c — load with streaming
    s32 loadStream(s32 resourceId, s32 streamId);
    // @addr 0x804ed09c — get stream position
    u32 getStreamPosition(s32 resourceId);
    // @addr 0x804ed11c — cancel load
    void cancelLoad();
    // @addr 0x804ed4d8 — get cancel status
    u32 getCancelStatus(s32 resourceId);
    // @addr 0x804ed560 — get load state
    u32 getLoadState(s32 resourceId);
    // @addr 0x804ed5d4 — wait for load
    void waitForLoad();
    // @addr 0x804ed968 — poll load status
    void pollLoadStatus();
    // @addr 0x804ed9a4 — load with memory mapping
    s32 loadMapped(s32 resourceId, s32 mapFlags);
    // @addr 0x804ed9fc — get mapped pointer
    u32 getMappedPointer(s32 resourceId);
    // @addr 0x804edad0 — unmap resource
    s32 unmapResource(s32 resourceId, s32 mapFlags);
    // @addr 0x804edb30 — get physical address
    u32 getPhysicalAddress(s32 resourceId);

    // --- Finalization ---
    // @addr 0x804eda70 — begin unload all
    void beginUnloadAll();
    // @addr 0x804edbb0 — unload all resources
    void unloadAll();
    // @addr 0x804ede88 — destroy loader
    void destroy();
    // @addr 0x804ee174 — reset loader
    void reset();
    // @addr 0x804ee42c — shutdown loader
    void shutdown();
    // @addr 0x804ee6e0 — garbage collect
    void garbageCollect();
    // @addr 0x804eea14 — defragment
    void defragment();
    // @addr 0x804eea50 — compact memory
    s32 compactMemory(s32 flags, s32 threshold);
    // @addr 0x804eeaa8 — get memory stats
    void getMemoryStats();
    // @addr 0x804eed5c — get memory usage
    void getMemoryUsage();
    // @addr 0x804ef010 — get peak memory
    void getPeakMemory();
    // @addr 0x804ef2e0 — set memory limit
    void setMemoryLimit();

    // --- Member data ---
    void* mArchive;        // 0x04
    void* mHeap;           // 0x08
    u32   mResourceCount;  // 0x0C
    u32   mFlags;          // 0x10
    u32   mLoadState;      // 0x14
    u32   mActiveResource; // 0x18
    u32   mErrorCount;     // 0x1C
    void* mCache;          // 0x20
    u32   mCacheCapacity;  // 0x24
    u32   _pad28;          // 0x28
};

// ============================================================
// EGG::ArchiveExt::TextureLoader — Texture resource loading
// ============================================================
// Loads and manages texture resources (.bti, .tpl) from archives.
// Handles format conversion, mipmap generation, and GPU upload
// preparation.
//
// Layout (extends ResourceLoader at 0x00–0x2B):
//   0x2C  mFormat          — texture format (RGBA8, RGB5A3, etc.)
//   0x30  mWidth           — texture width in pixels
//   0x34  mHeight          — texture height in pixels
//   0x38  mMipCount        — number of mip levels
//   0x3C  mPaletteFormat   — palette format (for indexed textures)
//   0x40  mPaletteCount    — number of palettes
//   0x44  mWrapS           — horizontal wrap mode
//   0x48  mWrapT           — vertical wrap mode
//   0x4C  mMagFilter       — magnification filter
//   0x50  mMinFilter       — minification filter
//   0x54  mLodBias         — level-of-detail bias
//   0x58  mMinLod          — minimum LOD
//   0x5C  mMaxLod          — maximum LOD
//   0x60  mEdgeLOD         — edge LOD enable
//   0x64  _pad64[3]        — padding
//
// Maps functions: 0x804f0000 – 0x804f3000
// ============================================================
class TextureLoader : public ResourceLoader {
public:
    enum TextureFormat {
        FMT_RGBA8    = 0,
        FMT_RGB5A3   = 1,
        FMT_RGB565   = 2,
        FMT_I4       = 3,
        FMT_I8       = 4,
        FMT_IA4      = 5,
        FMT_IA8      = 6,
        FMT_CI4      = 7,
        FMT_CI8      = 8,
        FMT_CI14X2   = 9,
        FMT_CMPR     = 10,
    };

    // @addr 0x804f0000 — constructor
    TextureLoader();
    virtual ~TextureLoader();

    // --- ResourceLoader interface ---
    // @addr 0x804f0000 — load texture by ID
    s32 load(u32 resourceId) override;
    // @addr 0x804f0000 — unload texture
    void unload(u32 resourceId) override;
    // @addr 0x804f0000 — get texture data pointer
    void* getResource(u32 resourceId) override;

    // --- Texture-specific loading ---
    // @addr 0x804f0000 — load BTI texture
    s32 loadBTI(s32 archiveId, s32 resourceId);
    // @addr 0x804f0000 — load TPL texture
    s32 loadTPL(s32 archiveId, s32 resourceId);
    // @addr 0x804f0000 — load raw pixel data
    s32 loadRawPixels(s32 archiveId, s32 resourceId);

    // --- Format queries ---
    // @addr 0x804f0000 — get texture format
    u32 getFormat(s32 resourceId);
    // @addr 0x804f0000 — get texture dimensions
    void getDimensions(s32 resourceId, u32* width, u32* height);
    // @addr 0x804f0000 — get mipmap count
    u32 getMipCount(s32 resourceId);
    // @addr 0x804f0000 — get image data size
    u32 getImageDataSize(s32 resourceId);

    // --- Texture configuration ---
    // @addr 0x804f0000 — set wrap mode
    void setWrapMode(s32 resourceId, u32 wrapS, u32 wrapT);
    // @addr 0x804f0000 — set filter mode
    void setFilterMode(s32 resourceId, u32 magFilter, u32 minFilter);
    // @addr 0x804f0000 — set LOD parameters
    void setLOD(s32 resourceId, f32 lodBias, f32 minLod, f32 maxLod);
    // @addr 0x804f0000 — set border color
    void setBorderColor(s32 resourceId, u32 color);

    // --- Mipmap operations ---
    // @addr 0x804f0000 — generate mipmaps
    void generateMipmaps(s32 resourceId);
    // @addr 0x804f0000 — get mipmap level pointer
    void* getMipLevel(s32 resourceId, u32 level);
    // @addr 0x804f0000 — get mipmap size
    u32 getMipSize(s32 resourceId, u32 level);

    // --- Palette operations ---
    // @addr 0x804f0000 — get palette data
    void* getPalette(s32 resourceId, u32 paletteIndex);
    // @addr 0x804f0000 — get palette format
    u32 getPaletteFormat(s32 resourceId);
    // @addr 0x804f0000 — get palette count
    u32 getPaletteCount(s32 resourceId);

    // --- GPU upload ---
    // @addr 0x804f0000 — upload to GX
    void uploadToGX(s32 resourceId);
    // @addr 0x804f0000 — invalidate GPU cache
    void invalidateCache(s32 resourceId);

    // --- Member data ---
    u32   mFormat;        // 0x2C
    u32   mWidth;         // 0x30
    u32   mHeight;        // 0x34
    u32   mMipCount;      // 0x38
    u32   mPaletteFormat; // 0x3C
    u32   mPaletteCount;  // 0x40
    u32   mWrapS;         // 0x44
    u32   mWrapT;         // 0x48
    u32   mMagFilter;     // 0x4C
    u32   mMinFilter;     // 0x50
    f32   mLodBias;       // 0x54
    f32   mMinLod;        // 0x58
    f32   mMaxLod;        // 0x5C
    u32   mEdgeLOD;       // 0x60
    u32   _pad64[3];      // 0x64
};

// ============================================================
// EGG::ArchiveExt::ModelLoader — 3D model resource loading
// ============================================================
// Loads and manages 3D model resources (.bmd, .bdl, .brres)
// from archives. Handles mesh data, material bindings, bone
// hierarchies, and display list compilation.
//
// Layout (extends ResourceLoader at 0x00–0x2B):
//   0x2C  mMeshCount       — number of meshes
//   0x30  mMaterialCount   — number of materials
//   0x34  mBoneCount       — number of bones
//   0x38  mShapeCount      — number of shapes/polygons
//   0x3C  mVertexCount     — total vertex count
//   0x40  mFaceCount       — total face/triangle count
//   0x44  mJointCount      — number of joints
//   0x48  mEnvelopeCount   — number of envelopes
//   0x4C  mTexCoordCount   — number of tex coord arrays
//   0x50  mMatrixCount     — number of matrix entries
//   0x54  mBoundingRadius  — bounding sphere radius
//   0x58  mBBoxMin[3]      — bounding box minimum
//   0x64  mBBoxMax[3]      — bounding box maximum
//   0x70  mFlags           — model-specific flags
//   0x74  _pad74[2]        — padding
//
// Maps functions: 0x804f3000 – 0x804f6000
// ============================================================
class ModelLoader : public ResourceLoader {
public:
    // @addr 0x804f3000 — constructor
    ModelLoader();
    virtual ~ModelLoader();

    // --- ResourceLoader interface ---
    // @addr 0x804f3000 — load model by ID
    s32 load(u32 resourceId) override;
    // @addr 0x804f3000 — unload model
    void unload(u32 resourceId) override;
    // @addr 0x804f3000 — get model data pointer
    void* getResource(u32 resourceId) override;

    // --- Model-specific loading ---
    // @addr 0x804f3280 — load BMD model
    void loadBMD(u32 resourceId, s32 flags);
    // @addr 0x804f590 — load BDL model
    void loadBDL(u32 resourceId, s32 flags);
    // @addr 0x804f3000 — load BRRES model
    s32 loadBRRES(s32 archiveId, s32 resourceId);

    // --- Mesh queries ---
    // @addr 0x804f3000 — get mesh count
    u32 getMeshCount(s32 resourceId);
    // @addr 0x804f3000 — get mesh data
    void* getMesh(s32 resourceId, u32 meshIndex);
    // @addr 0x804f3000 — get vertex count
    u32 getVertexCount(s32 resourceId);
    // @addr 0x804f3000 — get face count
    u32 getFaceCount(s32 resourceId);

    // --- Material queries ---
    // @addr 0x804f3000 — get material count
    u32 getMaterialCount(s32 resourceId);
    // @addr 0x804f3000 — get material data
    void* getMaterial(s32 resourceId, u32 materialIndex);
    // @addr 0x804f3000 — get material name
    const char* getMaterialName(s32 resourceId, u32 materialIndex);

    // --- Bone/joint queries ---
    // @addr 0x804f3000 — get bone count
    u32 getBoneCount(s32 resourceId);
    // @addr 0x804f3000 — get joint count
    u32 getJointCount(s32 resourceId);
    // @addr 0x804f3000 — get bone hierarchy
    void getBoneHierarchy(s32 resourceId);

    // --- Bounding volume ---
    // @addr 0x804f3000 — get bounding sphere
    f32 getBoundingRadius(s32 resourceId);
    // @addr 0x804f3000 — get bounding box
    void getBoundingBox(s32 resourceId, f32* min, f32* max);

    // --- Display list ---
    // @addr 0x804f3000 — compile display lists
    void compileDisplayLists(s32 resourceId);
    // @addr 0x804f3000 — get display list
    void* getDisplayList(s32 resourceId, u32 lodLevel);

    // --- Member data ---
    u32   mMeshCount;     // 0x2C
    u32   mMaterialCount; // 0x30
    u32   mBoneCount;     // 0x34
    u32   mShapeCount;    // 0x38
    u32   mVertexCount;   // 0x3C
    u32   mFaceCount;     // 0x40
    u32   mJointCount;    // 0x44
    u32   mEnvelopeCount; // 0x48
    u32   mTexCoordCount; // 0x4C
    u32   mMatrixCount;   // 0x50
    f32   mBoundingRadius;// 0x54
    f32   mBBoxMin[3];    // 0x58
    f32   mBBoxMax[3];    // 0x64
    u32   mFlags;         // 0x70
    u32   _pad74[2];      // 0x74
};

// ============================================================
// EGG::ArchiveExt::SoundLoader — Sound resource loading
// ============================================================
// Loads and manages sound resources (.brsar, .bwav) from archives.
// Handles wave data parsing, sample rate conversion, and audio
// buffer preparation for the DSP.
//
// Layout (extends ResourceLoader at 0x00–0x2B):
//   0x2C  mSampleRate      — sample rate in Hz
//   0x30  mChannelCount    — number of audio channels
//   0x34  mBitsPerSample   — bit depth (8, 16)
//   0x38  mLoopStart       — loop start sample
//   0x3C  mLoopEnd         — loop end sample
//   0x40  mSampleCount     — total sample count
//   0x44  mLoopFlag        — loop enable flag
//   0x48  mEncoding        — encoding type (PCM, ADPCM)
//   0x4C  mGain            — volume/gain
//   0x50  mPan             — stereo pan (-1.0 to 1.0)
//   0x54  mPitch           — pitch multiplier
//   0x58  mPriority        — playback priority
//   0x5C  mSoundGroup      — sound group/category
//   0x60  mSoundInfo       — pointer to sound info structure
//   0x64  mWaveData        — pointer to wave data buffer
//   0x68  mWaveSize        — wave data size in bytes
//   0x6C  _pad6C           — padding
//
// Maps functions: 0x804f6000 – 0x80500000
// ============================================================
class SoundLoader : public ResourceLoader {
public:
    enum Encoding {
        ENC_PCM   = 0,
        ENC_ADPCM = 1,
    };

    // @addr 0x804f6000 — constructor
    SoundLoader();
    virtual ~SoundLoader();

    // --- ResourceLoader interface ---
    // @addr 0x804f6000 — load sound by ID
    s32 load(u32 resourceId) override;
    // @addr 0x804f6000 — unload sound
    void unload(u32 resourceId) override;
    // @addr 0x804f6000 — get sound data pointer
    void* getResource(u32 resourceId) override;

    // --- Sound-specific loading ---
    // @addr 0x804f4774 — load BRSAR sound
    u32 loadBRSAR(s32 archiveId);
    // @addr 0x804f4c44 — load BRSAR entry
    u32 loadBRSAREntry(s32 entryId);
    // @addr 0x804f4ce4 — load BRSAR collection
    u32 loadBRSARCollection(s32 collectionId);
    // @addr 0x804f4dfc — load BRSAR bank
    u32 loadBRSARBank(s32 bankId);
    // @addr 0x804f4e54 — load BRSAR sequence
    u32 loadBRSARSequence(s32 seqId);
    // @addr 0x804f50e4 — load BRSAR wave
    u32 loadBRSARWave(s32 waveId);
    // @addr 0x804f526c — load BRSAR group
    u32 loadBRSARGroup(s32 groupId);
    // @addr 0x804f53a0 — load sound player
    u32 loadPlayer(u32 playerId);

    // --- Wave data queries ---
    // @addr 0x804f5638 — get wave info
    s32 getWaveInfo(s32 waveId, s32 infoType);
    // @addr 0x804f56e0 — get sample rate
    s32 getSampleRate(s32 waveId, s32 channel);
    // @addr 0x804f5788 — get channel count
    s32 getChannelCount(s32 waveId, s32 unused);
    // @addr 0x804f5830 — get bits per sample
    s32 getBitsPerSample(s32 waveId, s32 unused);
    // @addr 0x804f58d8 — get sample count
    s32 getSampleCount(s32 waveId, s32 unused);
    // @addr 0x804f5980 — get loop start
    s32 getLoopStart(s32 waveId, s32 unused);
    // @addr 0x804f5a28 — get loop end
    s32 getLoopEnd(s32 waveId, s32 unused);
    // @addr 0x804f5ad0 — get encoding
    s32 getEncoding(s32 waveId, s32 unused);
    // @addr 0x804f5b78 — get loop flag
    s32 getLoopFlag(s32 waveId, s32 unused);
    // @addr 0x804f5c20 — get wave data pointer
    s32 getWaveDataPtr(s32 waveId, s32 unused);

    // --- Sound system queries ---
    // @addr 0x804f5ca8 — get total sound count
    u32 getSoundCount();
    // @addr 0x804f5cec — get player count
    s32 getPlayerCount();
    // @addr 0x804f5d1c — get sound group info
    s32 getGroupInfo(s32 groupId, s32 infoType);
    // @addr 0x804f5da4 — get sequence count
    u32 getSequenceCount();
    // @addr 0x804f5de8 — get bank count
    s32 getBankCount();
    // @addr 0x804f5e18 — get collection count
    s32 getCollectionCount(s32 unused, s32 type);
    // @addr 0x804f5ec0 — get wave count
    s32 getWaveCount(s32 unused, s32 type);
    // @addr 0x804f5f68 — get group count
    s32 getGroupCount(s32 unused, s32 type);
    // @addr 0x804f6010 — get sound type
    s32 getSoundType(s32 soundId, s32 type);
    // @addr 0x804f60b8 — get sound flags
    s32 getSoundFlags(s32 soundId, s32 type);
    // @addr 0x804f6160 — get sound name
    s32 getSoundName(s32 soundId, s32 type);
    // @addr 0x804f61e8 — get archive data
    u32 getArchiveData();
    // @addr 0x804f622c — get archive size
    s32 getArchiveSize();
    // @addr 0x804f625c — find sound by hash
    s32 findSoundByHash(s32 hash, s32 type);
    // @addr 0x804f6304 — find wave by hash
    s32 findWaveByHash(s32 hash, s32 type);
    // @addr 0x804f63ac — find sequence by hash
    s32 findSequenceByHash(s32 hash, s32 type);
    // @addr 0x804f6470 — find bank by hash
    s32 findBankByHash(s32 hash, s32 type);
    // @addr 0x804f6534 — find group by hash
    s32 findGroupByHash(s32 hash, s32 type);
    // @addr 0x804f65dc — find collection by hash
    s32 findCollectionByHash(s32 hash, s32 type);
    // @addr 0x804f6684 — find player by hash
    s32 findPlayerByHash(s32 hash, s32 type);
    // @addr 0x804f671c — resolve sound reference
    s32 resolveSoundRef(s32 refId, s32 type);
    // @addr 0x804f67ac — get ref data
    s32 getRefData(s32 refId, s32 type);
    // @addr 0x804f683c — get ref info
    s32 getRefInfo(s32 refId, s32 type);
    // @addr 0x804f68cc — get ref count
    s32 getRefCount(s32 refId, s32 type);
    // @addr 0x804f695c — get ref string
    s32 getRefString(s32 refId, s32 type);
    // @addr 0x804f69ec — get ref entry
    s32 getRefEntry(s32 refId, s32 type);
    // @addr 0x804f6aac — get entry offset
    s32 getEntryOffset(s32 entryId, s32 type);
    // @addr 0x804f6b6c — get entry size
    s32 getEntrySize(s32 entryId, s32 type);
    // @addr 0x804f6bfc — get entry data
    s32 getEntryData(s32 entryId, s32 type);
    // @addr 0x804f6c8c — get entry header
    s32 getEntryHeader(s32 entryId, s32 type);
    // @addr 0x804f6d1c — get entry name
    s32 getEntryName(s32 entryId, s32 type);

    // --- Sound property setters (void(s32, u32, u32) pattern) ---
    // @addr 0x804f6df0 — set sound property
    s32 setSoundProperty(s32 soundId, s32 propId);
    // @addr 0x804f6eb8 — set wave property
    s32 setWaveProperty(s32 waveId, s32 propId);

    // --- Sound property accessors (void(s32, u32, u32) pattern) ---
    // @addr 0x804f6f48 — get sound property
    s32 getSoundProperty(s32 soundId, s32 propId);

    // --- Low-level property setters ---
    // @addr 0x804f6fc0
    void setProperty_00(s32 id, u32 field, u32 value);
    // @addr 0x804f6ff0
    void setProperty_01(s32 id, u32 field, u32 value);
    // @addr 0x804f7020
    void setProperty_02(s32 id, u32 field, u32 value);
    // @addr 0x804f7050
    void setProperty_03(s32 id, u32 field, u32 value);
    // @addr 0x804f7080
    void setProperty_04(s32 id, u32 field, u32 value);
    // @addr 0x804f70b0
    void setProperty_05(s32 id, u32 field, u32 value);
    // @addr 0x804f70e0
    void setProperty_06(s32 id, u32 field, u32 value);
    // @addr 0x804f7110
    void setProperty_07(s32 id, u32 field, u32 value);
    // @addr 0x804f7140
    void setProperty_08(s32 id, u32 field, u32 value);
    // @addr 0x804f7170
    void setProperty_09(s32 id, u32 field, u32 value);
    // @addr 0x804f71a0
    void setProperty_0A(s32 id, u32 field, u32 value);
    // @addr 0x804f71d0
    void setProperty_0B(s32 id, u32 field, u32 value);
    // @addr 0x804f7200
    void setProperty_0C(s32 id, u32 field, u32 value);
    // @addr 0x804f7230
    void setProperty_0D(s32 id, u32 field, u32 value);
    // @addr 0x804f7260
    void setProperty_0E(s32 id, u32 field, u32 value);
    // @addr 0x804f7290
    void setProperty_0F(s32 id, u32 field, u32 value);
    // @addr 0x804f72c0
    void setProperty_10(s32 id, u32 field, u32 value);
    // @addr 0x804f72f0
    void setProperty_11(s32 id, u32 field, u32 value);
    // @addr 0x804f7320
    void setProperty_12(s32 id, u32 field, u32 value);
    // @addr 0x804f7350
    void setProperty_13(s32 id, u32 field, u32 value);
    // @addr 0x804f7380
    void setProperty_14(s32 id, u32 field, u32 value);
    // @addr 0x804f73b0
    void setProperty_15(s32 id, u32 field, u32 value);
    // @addr 0x804f73e0
    void setProperty_16(s32 id, u32 field, u32 value);
    // @addr 0x804f7410
    void setProperty_17(s32 id, u32 field, u32 value);
    // @addr 0x804f7440
    void setProperty_18(s32 id, u32 field, u32 value);
    // @addr 0x804f7470
    void setProperty_19(s32 id, u32 field, u32 value);
    // @addr 0x804f74a0
    void setProperty_1A(s32 id, u32 field, u32 value);
    // @addr 0x804f74d0
    void setProperty_1B(s32 id, u32 field, u32 value);
    // @addr 0x804f7500
    void setProperty_1C(s32 id, u32 field, u32 value);
    // @addr 0x804f7530
    void setProperty_1D(s32 id, u32 field, u32 value);
    // @addr 0x804f7560
    void setProperty_1E(s32 id, u32 field, u32 value);
    // @addr 0x804f7590
    void setProperty_1F(s32 id, u32 field, u32 value);
    // @addr 0x804f75c0
    void setProperty_20(s32 id, u32 field, u32 value);
    // @addr 0x804f75f0
    void setProperty_21(s32 id, u32 field, u32 value);
    // @addr 0x804f7620
    void setProperty_22(s32 id, u32 field, u32 value);
    // @addr 0x804f7650
    void setProperty_23(s32 id, u32 field, u32 value);
    // @addr 0x804f7680
    void setProperty_24(s32 id, u32 field, u32 value);
    // @addr 0x804f76b0
    void setProperty_25(s32 id, u32 field, u32 value);
    // @addr 0x804f76e0
    void setProperty_26(s32 id, u32 field, u32 value);
    // @addr 0x804f7710
    void setProperty_27(s32 id, u32 field, u32 value);
    // @addr 0x804f7740
    void setProperty_28(s32 id, u32 field, u32 value);
    // @addr 0x804f7770
    void setProperty_29(s32 id, u32 field, u32 value);
    // @addr 0x804f77a0
    void setProperty_2A(s32 id, u32 field, u32 value);
    // @addr 0x804f77d0
    void setProperty_2B(s32 id, u32 field, u32 value);
    // @addr 0x804f7800
    void setProperty_2C(s32 id, u32 field, u32 value);
    // @addr 0x804f7830
    void setProperty_2D(s32 id, u32 field, u32 value);
    // @addr 0x804f7860
    void setProperty_2E(s32 id, u32 field, u32 value);
    // @addr 0x804f7890
    void setProperty_2F(s32 id, u32 field, u32 value);
    // @addr 0x804f78c0
    void setProperty_30(s32 id, u32 field, u32 value);
    // @addr 0x804f78f0
    void setProperty_31(s32 id, u32 field, u32 value);
    // @addr 0x804f7920
    void setProperty_32(s32 id, u32 field, u32 value);
    // @addr 0x804f7950
    void setProperty_33(s32 id, u32 field, u32 value);
    // @addr 0x804f7980
    void setProperty_34(s32 id, u32 field, u32 value);
    // @addr 0x804f79b0
    void setProperty_35(s32 id, u32 field, u32 value);
    // @addr 0x804f79e0
    void setProperty_36(s32 id, u32 field, u32 value);
    // @addr 0x804f7a10
    void setProperty_37(s32 id, u32 field, u32 value);
    // @addr 0x804f7a40
    void setProperty_38(s32 id, u32 field, u32 value);
    // @addr 0x804f7a70
    void setProperty_39(s32 id, u32 field, u32 value);
    // @addr 0x804f7aa0
    void setProperty_3A(s32 id, u32 field, u32 value);
    // @addr 0x804f7ad0
    void setProperty_3B(s32 id, u32 field, u32 value);
    // @addr 0x804f7b00
    void setProperty_3C(s32 id, u32 field, u32 value);
    // @addr 0x804f7b30
    void setProperty_3D(s32 id, u32 field, u32 value);
    // @addr 0x804f7b60
    void setProperty_3E(s32 id, u32 field, u32 value);
    // @addr 0x804f7b90
    void setProperty_3F(s32 id, u32 field, u32 value);
    // @addr 0x804f7bc0
    void setProperty_40(s32 id, u32 field, u32 value);
    // @addr 0x804f7bf0
    void setProperty_41(s32 id, u32 field, u32 value);
    // @addr 0x804f7c20
    void setProperty_42(s32 id, u32 field, u32 value);

    // --- Single-field property setters (void(s32, u32) pattern) ---
    // @addr 0x804f7c50
    u32 getField(s32 id, s32 field);
    // @addr 0x804f7d6c
    u32 getFieldDirect(u32 field);
    // @addr 0x804f7fb0
    s32 getFieldSigned(s32 id, s32 field);

    // --- Advanced sound loading ---
    // @addr 0x804f7e7c
    void resetSoundSystem();
    // @addr 0x804f7eb4
    void initSoundTables();
    // @addr 0x804f7f2c
    void buildSoundIndex();
    // @addr 0x804f8030
    void buildHashTable(u32* table);
    // @addr 0x804f81c4
    void parseSoundHeader(s32 offset);
    // @addr 0x804f8288
    void parseSoundEntry(s32* entry);
    // @addr 0x804f83a4
    void validateSoundData();
    // @addr 0x804f86c8
    void parseWaveData(u32* waveInfo);
    // @addr 0x804f8714
    void parseWaveEntry(s32* entry);

    // --- Sound file I/O ---
    // @addr 0x804f8a44
    void readSoundFile(u32* fileInfo);
    // @addr 0x804f8a98
    void readSoundEntry(s32* entry);
    // @addr 0x804f8c44
    void writeSoundData(s32 fileId, s32 entryId, u32 flags);
    // @addr 0x804f8cd0
    void writeSoundHeader(s32 fileId, s32 entryId, u32 flags);
    // @addr 0x804f8d34
    void writeSoundFooter(s32 fileId, s32 entryId, u32 flags);
    // @addr 0x804f8d78
    void closeSoundFile(s32 fileId);
    // @addr 0x804f8e14
    void setSoundFilePos(u32 position);
    // @addr 0x804f8e7c
    void getSoundFilePos(u32 position);
    // @addr 0x804f8eec
    void seekSoundStream(s32 offset);
    // @addr 0x804f8ef4
    void tellSoundStream(s32 offset);
    // @addr 0x804f8efc
    void readSoundStream(s32* buffer);
    // @addr 0x804f9010
    void writeSoundStream(u32* buffer, s32 size);
    // @addr 0x804f90cc
    void flushSoundStream();
    // @addr 0x804f9328
    void resetSoundStream();

    // --- Sound processing ---
    // @addr 0x804f9284 — process sound entry
    s32 processSoundEntry(s32 entryId, s32 flags);
    // @addr 0x804f976c — process wave entry
    s32 processWaveEntry(s32 entryId, s32 flags);
    // @addr 0x804f93f0
    void setProcessParam(s32 param, u32 value);
    // @addr 0x804f93f8
    void setProcessFlag(s32 param, u32 value);
    // @addr 0x804f9400
    void setProcessMode(s32 param, u32 value);
    // @addr 0x804f946c
    void setSampleConvert(s32 converter, s8 inputFmt, s8 outputFmt);
    // @addr 0x804f94f0
    void processSampleData(s32 samples);
    // @addr 0x804f9558
    void convertSamples(s32* input, u32 count);
    // @addr 0x804f95e0
    void resampleAudio(s32* input, u32 newRate);
    // @addr 0x804f9678
    void finalizeProcessing();
    // @addr 0x804f97d4
    void resetProcessor();

    // --- Sound reference management ---
    // @addr 0x804f9a00
    void addSoundRef(s32 refId);
    // @addr 0x804f9bec
    void removeSoundRef(s32 refId);
    // @addr 0x804f9e74
    void clearSoundRefs();
    // @addr 0x804f9f10
    void setRefData(s32 refId, u32 data);

    // --- Collection/bank management ---
    // @addr 0x804fa1cc
    void loadCollection(s32 collectionId, s32 flags);
    // @addr 0x804fa3b4
    void unloadCollection(s32 collectionId, u32 flags);
    // @addr 0x804fa54c
    void enumerateCollections();
    // @addr 0x804fa69c — load collection entry
    s32 loadCollectionEntry(s32 collectionId, s32 entryId);
    // @addr 0x804fa82c — get collection data
    u32 getCollectionData(u32* outData);
    // @addr 0x804fa768
    void setCollectionParam(s32 collectionId, u32 param, u32 value);
    // @addr 0x804fa7d0
    void getCollectionInfo();
    // @addr 0x804fa8a4
    void validateCollection();
    // @addr 0x804faa24
    void addCollectionEntry(s32 collectionId, u32 entryId);
    // @addr 0x804faa2c
    void removeCollectionEntry(s32 collectionId, u32 entryId);
    // @addr 0x804faaa8
    void getCollectionEntryCount();
    // @addr 0x804fab48
    void setCollectionEntryData(s32 entryId, u32 data);
    // @addr 0x804fabc0
    void getCollectionEntryData();
    // @addr 0x804fac98
    void updateCollection(s32 collectionId, u32 entryId, s32 operation);
    // @addr 0x804fad48
    void finalizeCollection();
    // @addr 0x804fae3c — process collection entry
    s32 processCollectionEntry(s32 entryId, s32 flags);

    // --- Extended sound operations ---
    // @addr 0x804fbbcc — process bank entry
    s32 processBankEntry(s32 entryId, s32 flags);
    // @addr 0x804fb070
    void initBank(s32 bankId);
    // @addr 0x804fb21c
    void finalizeBank(s32 bankId);
    // @addr 0x804fb3d0
    void enumerateBanks();
    // @addr 0x804fb4d0
    void setBankParam(s32 bankId, s32 param);
    // @addr 0x804fb530
    void getBankParam(s32 bankId, s32 param);
    // @addr 0x804fb688
    void setBankData(s32 bankId, u32 data);
    // @addr 0x804fb77c
    void getBankInfo(s32 bankId, s32 infoType);
    // @addr 0x804fb964
    void processBankData(s32 bankId, u32 offset);
    // @addr 0x804fbb3c
    void writeBankData(s32 bankId, u32 offset, u32 value);
    // @addr 0x804fbb88
    void flushBankData();
    // @addr 0x804fbc34
    void closeBank(s32 bankId);
    // @addr 0x804fbca0
    void getBankEntry(s32* outEntry);
    // @addr 0x804fbe4c
    void loadBankSound(s32 soundId);
    // @addr 0x804fbf60
    void parseBankHeader(s32* header);
    // @addr 0x804fc0c8
    void parseBankEntry(s32* entry);

    // --- Archive-level sound ops ---
    // @addr 0x804fc2ec
    void initSoundArchive();
    // @addr 0x804fc52c — process archive entry
    s32 processArchiveEntry(s32 entryId, s32 flags);
    // @addr 0x804fc608
    void loadSoundArchive(s32 archiveId);
    // @addr 0x804fc8d0
    void unloadSoundArchive(s32 archiveId);
    // @addr 0x804fca34
    void validateSoundArchive(s32 archiveId);
    // @addr 0x804fca6c
    void getSoundArchiveInfo(s32* outInfo);
    // @addr 0x804fd15c
    u32 getSoundArchiveSize(s32 archiveId);
    // @addr 0x804fd2d4 — parse archive entry
    s32 parseArchiveEntry(s32 entryId, s32 flags);
    // @addr 0x804fd78c — resolve archive reference
    s32 resolveArchiveRef(s32 refId, s32 flags);
    // @addr 0x804fd7e4 — get archive string
    s32 getArchiveString(s32 offset, s32 maxLen);
    // @addr 0x804fe260 — read archive data
    s32 readArchiveData(s32 offset, s32 size);
    // @addr 0x804fe540 — write archive data
    s32 writeArchiveData(s32 offset, s32 size);
    // @addr 0x804fe7d4 — validate archive
    bool isArchiveValid(s32 archiveId);
    // @addr 0x804fe86c — get archive entry count
    s32 getArchiveEntryCount(s32 archiveId, s32 type);

    // --- Sound data finalization ---
    // @addr 0x804fd1e0
    void finalizeLoad(s32 resourceId, u32 offset, u32 size);
    // @addr 0x804fd210
    void prepareLoad(s32 resourceId, u32 offset, u32 size);
    // @addr 0x804fd240
    void beginLoad(s32 resourceId, u32 size);
    // @addr 0x804fd298
    void endLoad();
    // @addr 0x804fd32c
    void setLoadOffset(u32 offset);
    // @addr 0x804fd3cc
    void setLoadSize(s32 size);
    // @addr 0x804fd404
    void setLoadFlags(s32 flags);
    // @addr 0x804fd4b4
    void setLoadPriority(s32 priority);
    // @addr 0x804fd4ec
    void setLoadCallback(s32 callback);
    // @addr 0x804fd59c
    void setLoadData(s32 dataPtr);
    // @addr 0x804fd5d4
    void configureLoad(u32 flags, s32 priority, s32 align);
    // @addr 0x804fd708
    void beginLoadBatch();
    // @addr 0x804fd86c
    void endLoadBatch(s32 result);
    // @addr 0x804fda64
    void cancelLoadBatch(s32 batchId);
    // @addr 0x804fdae4
    void getLoadBatchInfo(s32 batchId);
    // @addr 0x804fdb94
    void setLoadBatchParam(s32 batchId);
    // @addr 0x804fdbe0
    void processLoadBatch(s32 batchId);
    // @addr 0x804fdc90
    void finalizeLoadBatch(s32 batchId);
    // @addr 0x804fdcc8
    void getLoadBatchStats(s32* outStats);
    // @addr 0x804fde30
    void resetLoadBatch();

    // --- Sound data I/O ---
    // @addr 0x804fe214
    void initSoundIO();
    // @addr 0x804fe2d4
    void openSoundIO(s32 mode);
    // @addr 0x804fe398
    void closeSoundIO(s32 mode);
    // @addr 0x804fe504
    void resetSoundIO();
    // @addr 0x804fe598
    void setSoundIOSize(u32 size);
    // @addr 0x804fe638
    void readSoundIO(s32 offset);
    // @addr 0x804fe674
    void writeSoundIO(s32 offset);
    // @addr 0x804fe724
    void seekSoundIO(s32 offset);
    // @addr 0x804fe808
    void flushSoundIO();
    // @addr 0x804fe8e4
    void tellSoundIO(s32 offset);
    // @addr 0x804fe9f8
    void getSoundIOStatus(s32 status);
    // @addr 0x804feac4
    void checkSoundIOComplete();
    // @addr 0x804feb1c
    void waitForSoundIO(s32 timeout);
    // @addr 0x804fec4c
    void cancelSoundIO(s32 handle);
    // @addr 0x804fed2c
    void resetSoundIOState();
    // @addr 0x804fed90 — process sound I/O entry
    s32 processSoundIOEntry(s32 entryId, s32 flags);
    // @addr 0x804fee08
    void beginSoundIOTransfer(s32 handle);
    // @addr 0x804fee90
    void endSoundIOTransfer(s32 handle);
    // @addr 0x804feefc
    void advanceSoundIO(s32 bytes);
    // @addr 0x804ff06c
    void getSoundIOBuffer(u32* outBuffer);
    // @addr 0x804ff084
    u32 getSoundIOSize(u32* outSize);
    // @addr 0x804ff0e4
    void setSoundIOParams(s32 handle, u32 offset, u32 size);
    // @addr 0x804ff0f0
    void configureSoundIO(s32 mode, s32 param);
    // @addr 0x804ff154
    void initSoundIOTransfer(s32* transfer, s32 mode, s32 size);
    // @addr 0x804ff1e0
    void setSoundIOPath(s32* transfer, s32 mode, s8* path);
    // @addr 0x804ff2d0
    void closeSoundIOTransfer(s32 handle);
    // @addr 0x804ff394
    void resetSoundIOTransfer();
    // @addr 0x804ff43c
    void getSoundIOTransferInfo(s32* outInfo);
    // @addr 0x804ff4a0
    s32 readSoundIOEntry(s32* entry, s32 size);
    // @addr 0x804ff4b0
    s32 writeSoundIOEntry(s32* entry, s32 size);
    // @addr 0x804ff4c0
    void finalizeSoundIORead();
    // @addr 0x804ff4c4
    void readSoundIOData(u32* buffer);
    // @addr 0x804ff52c
    u32 getSoundIODataSize(s32* entry);
    // @addr 0x804ff59c
    void resetSoundIOData();
    // @addr 0x804ff718
    void flushSoundIOData();
    // @addr 0x804ff7a0
    void setSoundIOCallback(s32 callback);
    // @addr 0x804ff7d4
    void getSoundIOCallback();
    // @addr 0x804ff864
    void checkSoundIOReady();
    // @addr 0x804ffa5c
    void getSoundIOStats(s32* outStats);
    // @addr 0x804ffaec
    void resetSoundIOStats();
    // @addr 0x804ffc20 — finalize sound I/O
    s32 finalizeSoundIO(s32 handle, s32 result);
    // @addr 0x804ffc7c
    void setSoundIOError(s32 error);
    // @addr 0x804ffc84
    void getSoundIOError(s32* outError);
    // @addr 0x804ffbe0 — close sound I/O entry
    s32 closeSoundIOEntry(s32 entryId, s32 flags);
    // @addr 0x804ffcc4
    void getSoundIOEntryInfo(s32* outInfo);

    // --- Audio data conversion ---
    // @addr 0x804ffe14
    void convertAudioData(f64 gain, s32 format, f32* samples);
    // @addr 0x804ffee8
    void setConvertParams(s32 format, u32 flags);
    // @addr 0x804ffef8
    void convertBlock(s32 blockId, u32 offset, u32 size);
    // @addr 0x804fff04
    void finalizeConversion();

    // --- Accessors ---
    u32   getSampleRate() const   { return mSampleRate; }
    u32   getChannelCount() const { return mChannelCount; }
    u32   getBitsPerSample() const{ return mBitsPerSample; }
    u32   getLoopStart() const    { return mLoopStart; }
    u32   getLoopEnd() const      { return mLoopEnd; }
    u32   getSampleCount() const  { return mSampleCount; }
    bool  isLooping() const       { return mLoopFlag != 0; }

    // --- Member data ---
    u32   mSampleRate;     // 0x2C
    u32   mChannelCount;   // 0x30
    u32   mBitsPerSample;  // 0x34
    u32   mLoopStart;      // 0x38
    u32   mLoopEnd;        // 0x3C
    u32   mSampleCount;    // 0x40
    u32   mLoopFlag;       // 0x44
    u32   mEncoding;       // 0x48
    f32   mGain;           // 0x4C
    f32   mPan;            // 0x50
    f32   mPitch;          // 0x54
    u32   mPriority;       // 0x58
    u32   mSoundGroup;     // 0x5C
    void* mSoundInfo;      // 0x60
    void* mWaveData;       // 0x64
    u32   mWaveSize;       // 0x68
    u32   _pad6C;          // 0x6C
};

} // namespace ArchiveExt
} // namespace EGG