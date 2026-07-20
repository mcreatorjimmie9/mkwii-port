// ============================================================================
// FileLoader.hpp — EGG::FileLoader async file I/O from archives
// Address range: 0x80174000 - 0x80178000 (DOL)
// Corresponding ELF range: ~0x805C8E30 - 0x805D0E30
//
// Asynchronous file loading system that reads files from the game's
// ARC (Archive) containers. MKW uses a request-queue model:
//   1. Game code submits a file load request (file name + priority)
//   2. FileLoader processes requests from highest priority down
//   3. Loaded data is placed in a heap-allocated buffer
//   4. Callback notifies the requester when load completes
//
// This runs on the DVD thread, preventing disc access from blocking
// the main rendering loop. The system also handles SZS decompression
// transparently — if a file ends in .szs, it's decompressed after read.
//
// GENESIS Phase 28 — EGG Framework Expansion
// ============================================================================
#pragma once

#include "rk_common.h"

namespace EGG {

// File load request priority (lower number = higher priority)
enum FileLoadPriority {
    FILE_PRIORITY_CRITICAL = 0,  // Must load immediately (HUD, course data)
    FILE_PRIORITY_HIGH     = 1,  // Course objects, textures
    FILE_PRIORITY_NORMAL   = 2,  // Sound effects, character models
    FILE_PRIORITY_LOW      = 3,  // Background music, cutscenes
    FILE_PRIORITY_IDLE     = 4,  // Prefetch, non-urgent
};

// File load status
enum FileLoadStatus {
    FILE_STATUS_IDLE       = 0,
    FILE_STATUS_QUEUED     = 1,
    FILE_STATUS_READING    = 2,
    FILE_STATUS_DECOMPRESSING = 3,
    FILE_STATUS_COMPLETE   = 4,
    FILE_STATUS_ERROR      = 5,
    FILE_STATUS_CANCELLED  = 6,
};

// Callback function for load completion
typedef void (*FileLoadCallback)(void* userData, void* buffer,
                                  u32 fileSize, FileLoadStatus status);

// Forward declarations
class FileLoader;

// File load request descriptor
struct FileLoadRequest {
    char fileName[64];         // File path within the archive
    void* outputBuffer;         // Destination buffer (heap-allocated)
    u32 bufferSize;             // Size of the allocated buffer
    u32 fileSize;              // Actual file size after load
    FileLoadPriority priority;  // Load priority
    FileLoadStatus status;      // Current load status
    FileLoadCallback callback;  // Completion callback
    void* userData;             // User data passed to callback
    u32 compressedSize;         // Compressed size (for .szs files)
    bool isCompressed;          // True if file needs decompression
    s32 requestId;              // Request tracking ID
};

// FileLoader — manages async file I/O requests
class FileLoader {
public:
    /* EGG_FileLoader_ctor @ 0x80174100 */
    FileLoader();
    /* EGG_FileLoader_dtor @ 0x80174140 */
    ~FileLoader();

    // Initialize the file loader with a heap for buffer allocation
    /* EGG_FileLoader_init @ 0x80174180 */
    void init(u32 heapSize);

    // Submit a file load request
    /* EGG_FileLoader_load @ 0x80174200 */
    s32 load(const char* fileName, FileLoadPriority priority,
             FileLoadCallback callback, void* userData);

    // Cancel a pending request by ID
    /* EGG_FileLoader_cancel @ 0x80174280 */
    bool cancel(s32 requestId);

    // Process the request queue — call from DVD thread
    /* EGG_FileLoader_processQueue @ 0x80174300 */
    void processQueue();

    // Get request status
    /* EGG_FileLoader_getStatus @ 0x80174380 */
    FileLoadStatus getStatus(s32 requestId) const;

    // Get loaded file data pointer
    void* getData(s32 requestId) const;

    // Get loaded file size
    u32 getFileSize(s32 requestId) const;

    // Check if any requests are pending
    bool hasPendingRequests() const { return mPendingCount > 0; }

    // Get number of completed (ready-to-retrieve) requests
    s32 getCompletedCount() const { return mCompletedCount; }

    // Flush all pending requests (process immediately)
    /* EGG_FileLoader_flush @ 0x80174400 */
    void flush();

    // Extended file operations
    /* EGG_FileLoader_open @ 0x80174780 */
    bool open(const char* path);
    /* EGG_FileLoader_read @ 0x80174800 */
    s32 read(void* buf, u32 size);
    /* EGG_FileLoader_seek @ 0x80174880 */
    bool seek(s32 offset);
    /* EGG_FileLoader_tell @ 0x80174900 */
    u32 tell() const;
    /* EGG_FileLoader_close @ 0x80174980 */
    void close();
    /* EGG_FileLoader_getSize @ 0x801749C0 */
    u32 getSize() const;

    // Convenience methods
    /* EGG_FileLoader_loadToMemory @ 0x80174A00 */
    void* loadToMemory(const char* fileName);
    /* EGG_FileLoader_asyncLoad @ 0x80174A80 */
    s32 asyncLoad(const char* fileName, void* buffer, u32 bufSize,
                 FileLoadCallback callback, void* userData);
    /* EGG_FileLoader_getProgress @ 0x80174B00 */
    f32 getProgress() const;
    /* EGG_FileLoader_isLoaded @ 0x80174B40 */
    bool isLoaded(s32 requestId) const;
    /* EGG_FileLoader_getPendingCount @ 0x80174B80 */
    s32 getPendingCount() const;
    /* EGG_FileLoader_cancelAll @ 0x80174BC0 */
    void cancelAll();
    /* EGG_FileLoader_getHeapFree @ 0x80174C00 */
    u32 getHeapFree() const;
    /* EGG_FileLoader_getHeapUsed @ 0x80174C40 */
    u32 getHeapUsed() const;
    /* EGG_FileLoader_reset @ 0x80174C80 */
    void reset();

    // Singleton access
    static FileLoader* getInstance() { return spInstance; }
    static void createInstance();
    static void destroyInstance();

private:
    static const s32 MAX_REQUESTS = 64;

    FileLoadRequest mRequests[MAX_REQUESTS];
    s32 mPendingCount;
    s32 mCompletedCount;
    s32 mNextRequestId;
    bool mbInitialized;
    void* mpHeap;                // Heap for buffer allocation
    u32 mHeapSize;
    u32 mHeapUsed;

    static FileLoader* spInstance;

    // Internal: find an empty request slot
    s32 findFreeSlot() const;

    // Internal: sort queue by priority
    void sortQueueByPriority();

    // Internal: read a file from the archive
    bool readFile(const char* fileName, void** outBuffer, u32* outSize);

    // Internal: decompress SZS data
    bool decompressSZS(const void* compressed, u32 compressedSize,
                       void* decompressed, u32 decompressedSize);
};

} // namespace EGG

// @addr 0x80174D00
bool FileLoader_isLoaded(EGG::FileLoader* loader, s32 requestId);
