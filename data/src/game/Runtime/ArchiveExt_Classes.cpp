// ============================================================================
// ArchiveExt_Classes.cpp — EGG Extended Archive Class Implementations (Stubs)
// Address range: 0x804e0000 - 0x80500000
//
// Categorization: GENESIS Phase 8 (Runtime ArchiveExt Class Extraction)
// ============================================================================
#include "ArchiveExt_Classes.hpp"
#include <cstring>
#include <cmath>

namespace EGG {
namespace ArchiveExt {

// ============================================================
// Decompressor
// ============================================================

Decompressor::Decompressor()
    : mInput(nullptr), mOutput(nullptr), mInputSize(0), mOutputSize(0),
      mPosition(0), mMode(MODE_NONE), mFlags(0), mState(STATE_IDLE),
      mChunkSize(0), mDictSize(0), mAlignment(0), mChecksum(0),
      mChecksumMode(0), mCallback(nullptr), mCallbackArg(nullptr),
      mIsFinalized(0), _pad44(0) {}

Decompressor::~Decompressor() {}

// @addr 0x804e0010
u32 Decompressor::getExpandedSize(u32 compressedSize) {
    (void)compressedSize;
    return 0;
}

// @addr 0x804e00bc
s32 Decompressor::decompress(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e0470
u32 Decompressor::getOutputSize() {
    return 0;
}

// @addr 0x804e013c
void Decompressor::setInput(void* data) {
    (void)data;
}

// @addr 0x804e0224
void Decompressor::setOutput(void* buffer) {
    (void)buffer;
}

// @addr 0x804e02ec
void Decompressor::clearState() {}

// @addr 0x804e0348
void Decompressor::setMode(s32 mode) {
    (void)mode;
}

// @addr 0x804e03e8
void Decompressor::setFlags(u32 flags) {
    (void)flags;
}

// @addr 0x804e042c
void Decompressor::setChunkSize(u32 size) {
    (void)size;
}

// @addr 0x804e05a0
void Decompressor::finalize() {}

// @addr 0x804e0608
s32 Decompressor::decompressChunk(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e068c
void Decompressor::seekInput(s32 position) {
    (void)position;
}

// @addr 0x804e07e4
void Decompressor::setReadSize(u32 size) {
    (void)size;
}

// @addr 0x804e0828
void Decompressor::advanceInput(s32 bytes) {
    (void)bytes;
}

// @addr 0x804e08e4
void Decompressor::flush() {}

// @addr 0x804e094c
s32 Decompressor::decompressPartial(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e09d0
void Decompressor::setOutputPos(s32 pos) {
    (void)pos;
}

// @addr 0x804e0aa4
void Decompressor::resetOutput() {}

// @addr 0x804e0b0c
void Decompressor::setOutputSize(s32 size) {
    (void)size;
}

// @addr 0x804e0c58
void Decompressor::setAlignment(u32 align) {
    (void)align;
}

// @addr 0x804e0c9c
void Decompressor::writeOutput(s32 size) {
    (void)size;
}

// @addr 0x804e0da4
void Decompressor::swapBuffers() {}

// @addr 0x804e0e0c
s32 Decompressor::decodeBlock(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e0e90
void Decompressor::setBlockParams(s32 params) {
    (void)params;
}

// @addr 0x804e0f64
void Decompressor::processBlock(s32 blockId) {
    (void)blockId;
}

// @addr 0x804e10b0
void Decompressor::setDictSize(u32 size) {
    (void)size;
}

// @addr 0x804e10f4
void Decompressor::setWindow(s32 windowSize) {
    (void)windowSize;
}

// @addr 0x804e12ec
s32 Decompressor::decompressYaz0(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e1278
void Decompressor::initYaz0() {}

// @addr 0x804e1364
void Decompressor::yaz0Step(s32 state) {
    (void)state;
}

// @addr 0x804e140c
void Decompressor::yaz0Decode(s32* ctx) {
    (void)ctx;
}

// @addr 0x804e1534
void Decompressor::yaz0Read(s32 count) {
    (void)count;
}

// @addr 0x804e168c
void Decompressor::yaz0Process(s32* state) {
    (void)state;
}

// @addr 0x804e1d1c
void Decompressor::initLZ77() {}

// @addr 0x804e1f54
u32 Decompressor::lz77Expand(s32 size) {
    (void)size;
    return 0;
}

// @addr 0x804e2018
void Decompressor::lz77SetInput(s32 input) {
    (void)input;
}

// @addr 0x804e22d4
void Decompressor::lz77SetOutput(s32 output) {
    (void)output;
}

// @addr 0x804e234c
void Decompressor::lz77Seek(s32 position) {
    (void)position;
}

// @addr 0x804e23ac
void Decompressor::lz77Copy(s32 offset, s32 length) {
    (void)offset; (void)length;
}

// @addr 0x804e2418
void Decompressor::lz77Write(s32 byte) {
    (void)byte;
}

// @addr 0x804e2464
void Decompressor::lz77Flush(s32 bytes) {
    (void)bytes;
}

// @addr 0x804e2750
void Decompressor::lz77Decode(s32 src, u32 length) {
    (void)src; (void)length;
}

// @addr 0x804e27e0
void Decompressor::lz77Advance(s32 bytes) {
    (void)bytes;
}

// @addr 0x804e2880
void Decompressor::lz77Block(s32 blockId, u32 offset, u32 length) {
    (void)blockId; (void)offset; (void)length;
}

// @addr 0x804e28b0
void Decompressor::lz77Segment(s32 segmentId, u32 size) {
    (void)segmentId; (void)size;
}

// @addr 0x804e28fc
void Decompressor::lz77Finish() {}

// @addr 0x804e2978
s32 Decompressor::decompressAsync(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e29e0
void Decompressor::setAsyncState(s32 state) {
    (void)state;
}

// @addr 0x804e2a3c
void Decompressor::setAsyncCallback(s32* callback) {
    (void)callback;
}

// @addr 0x804e2bc8
void Decompressor::queueDecompress(s32* request) {
    (void)request;
}

// @addr 0x804e2e00
void Decompressor::processQueue(s32* queue) {
    (void)queue;
}

// @addr 0x804e2fb0
void Decompressor::flushQueue(s32* queue) {
    (void)queue;
}

// @addr 0x804e3154
void Decompressor::cancelAsync(s32* handle) {
    (void)handle;
}

// @addr 0x804e3260
void Decompressor::configure(u32 flags, s32 priority, u32 stackSize) {
    (void)flags; (void)priority; (void)stackSize;
}

// @addr 0x804e32d0
void Decompressor::getStatus() {}

// @addr 0x804e334c
s32 Decompressor::decompressStream(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e33b4
void Decompressor::streamSetInput(s32 input) {
    (void)input;
}

// @addr 0x804e3410
void Decompressor::streamSetOutput(s32* output) {
    (void)output;
}

// @addr 0x804e35b4
void Decompressor::streamConfigure(u32 flags, s32 mode, u32 bufferSize) {
    (void)flags; (void)mode; (void)bufferSize;
}

// @addr 0x804e3654
void Decompressor::streamReset() {}

// @addr 0x804e36a0
s32 Decompressor::streamDecompress(void* src, void* dst) {
    (void)src; (void)dst;
    return 0;
}

// @addr 0x804e3714
void Decompressor::streamSeek(s32 position) {
    (void)position;
}

// @addr 0x804e37d8
void Decompressor::streamFlush() {}

// @addr 0x804e384c
void Decompressor::streamClose() {}

// @addr 0x804e38d8
s32 Decompressor::decompressFile(void* filePath, void* output) {
    (void)filePath; (void)output;
    return 0;
}

// @addr 0x804e3958
void Decompressor::setFilePath(s32 pathId) {
    (void)pathId;
}

// @addr 0x804e3a5c
void Decompressor::closeFile() {}

// @addr 0x804e3ab4
void Decompressor::readFileChunk(s32* buffer, u32 size) {
    (void)buffer; (void)size;
}

// @addr 0x804e3b48
void Decompressor::writeFileChunkA(s32 fd, u32 offset, u32 size) {
    (void)fd; (void)offset; (void)size;
}

// @addr 0x804e3b78
void Decompressor::writeFileChunkB(s32 fd, u32 offset, u32 size) {
    (void)fd; (void)offset; (void)size;
}

// @addr 0x804e3ba8
void Decompressor::writeFileChunkC(s32 fd, u32 offset, u32 size) {
    (void)fd; (void)offset; (void)size;
}

// @addr 0x804e3bfc
s32 Decompressor::getFileSize(s32 pathId) {
    (void)pathId;
    return 0;
}

// @addr 0x804e3c30
s32 Decompressor::readData(s32 fd, s32 size) {
    (void)fd; (void)size;
    return 0;
}

// @addr 0x804e3ca0
s32 Decompressor::writeData(s32 fd, s32 size) {
    (void)fd; (void)size;
    return 0;
}

// @addr 0x804e3d54
void Decompressor::setPath(s8* path) {
    (void)path;
}

// @addr 0x804e3e70
void Decompressor::initFileIO() {}

// @addr 0x804e3f90
void Decompressor::setHashTable(u8* table) {
    (void)table;
}

// @addr 0x804e3fc4
void Decompressor::logPath(s8* path) {
    (void)path;
}

// @addr 0x804e43c8
void Decompressor::setArchivePath(s8* path) {
    (void)path;
}

// @addr 0x804e44e8
u32 Decompressor::hashPath(s8* path) {
    (void)path;
    return 0;
}

// @addr 0x804e4590
u32 Decompressor::getChecksum(s32 mode) {
    (void)mode;
    return 0;
}

// @addr 0x804e45a4
void Decompressor::setChecksumMode(s32 mode) {
    (void)mode;
}

// @addr 0x804e45b8
void Decompressor::setHashBuffer(u8* table) {
    (void)table;
}

// @addr 0x804e45d0
void Decompressor::setHashSeed(s32 seed) {
    (void)seed;
}

// @addr 0x804e45fc
void Decompressor::initHash(s32 algorithm) {
    (void)algorithm;
}

// @addr 0x804e4620
void Decompressor::computeHash(s32 data) {
    (void)data;
}

// @addr 0x804e4670
void Decompressor::hashBlock(s32 blockId, u32 size, u8 flags, u8* out) {
    (void)blockId; (void)size; (void)flags; (void)out;
}

// @addr 0x804e4a18
void Decompressor::finalizeHash() {}

// ============================================================
// ArchiveScanner
// ============================================================

ArchiveScanner::ArchiveScanner()
    : mRootNode(nullptr), mCurrentNode(nullptr), mEntryCount(0),
      mCurrentIndex(0), mFlags(0), mSearchHash(0), mFoundEntry(nullptr),
      mStringTable(nullptr), mFatTable(nullptr), mFatEntryCount(0),
      _pad2C(0) {}

ArchiveScanner::~ArchiveScanner() {}

// @addr 0x804e4a18
void ArchiveScanner::reset() {}

// @addr 0x804e4dbc
void ArchiveScanner::beginScan(s32 dirId, u32 flags, u8 filter, u32 maxEntries) {
    (void)dirId; (void)flags; (void)filter; (void)maxEntries;
}

// @addr 0x804e4df4
void ArchiveScanner::endScan() {}

// @addr 0x804e4e28
void ArchiveScanner::checkActive() {}

// @addr 0x804e4e64
void ArchiveScanner::checkComplete() {}

// @addr 0x804e4e9c
void ArchiveScanner::nextEntry(s32 dirId, u32 flags) {
    (void)dirId; (void)flags;
}

// @addr 0x804e4ecc
void ArchiveScanner::skipEntries(s32 dirId, u32 count, u32 flags) {
    (void)dirId; (void)count; (void)flags;
}

// @addr 0x804e4ef8
void ArchiveScanner::getCurrentNode(u32* outNode) {
    (void)outNode;
}

// @addr 0x804e4fec
void ArchiveScanner::getEntryAt(u32* outEntry, u32 index) {
    (void)outEntry; (void)index;
}

// @addr 0x804e529c
void ArchiveScanner::getEntryData(u32* outData, u32 entryId) {
    (void)outData; (void)entryId;
}

// @addr 0x804e53c4
void ArchiveScanner::finishIteration() {}

// @addr 0x804e558c
void ArchiveScanner::getResult(u32* outResult) {
    (void)outResult;
}

// @addr 0x804e56e4
void ArchiveScanner::setCurrentDir(s32 dirId) {
    (void)dirId;
}

// @addr 0x804e5950
void ArchiveScanner::resetSearchCache() {}

// @addr 0x804e5ccc
void ArchiveScanner::setSearchDir(s32 dirId) {
    (void)dirId;
}

// @addr 0x804e5d38
void ArchiveScanner::setSearchFilter(s32 filter) {
    (void)filter;
}

// @addr 0x804e5df4
void ArchiveScanner::setSearchFlags(s32 flags) {
    (void)flags;
}

// @addr 0x804e5e54
void ArchiveScanner::setMaxResults(s32 max) {
    (void)max;
}

// @addr 0x804e5ea4
void ArchiveScanner::clearResults() {}

// @addr 0x804e5ef4
void ArchiveScanner::addResult(s32 entryId, s32 score) {
    (void)entryId; (void)score;
}

// @addr 0x804e5f40
void ArchiveScanner::setResultBuffer(u32* buffer, s32 capacity) {
    (void)buffer; (void)capacity;
}

// @addr 0x804e5f8c
void ArchiveScanner::sortResults(s32 mode, s32 order) {
    (void)mode; (void)order;
}

// @addr 0x804e5fec
u32 ArchiveScanner::findFile(s32 dirId, s32 pathHash, u32 flags) {
    (void)dirId; (void)pathHash; (void)flags;
    return 0;
}

// @addr 0x804e6058
bool ArchiveScanner::fileExists(s32 dirId, s32 pathHash) {
    (void)dirId; (void)pathHash;
    return false;
}

// @addr 0x804e608c
u32 ArchiveScanner::findDir(s32 dirId) {
    (void)dirId;
    return 0;
}

// @addr 0x804e60b4
u32 ArchiveScanner::resolvePath(s32 pathId) {
    (void)pathId;
    return 0;
}

// @addr 0x804e6174
u32 ArchiveScanner::getEntryByHash(s32 nameHash) {
    (void)nameHash;
    return 0;
}

// @addr 0x804e6240
void ArchiveScanner::enterDir(s32 dirId) {
    (void)dirId;
}

// @addr 0x804e6254
void ArchiveScanner::exitDir(s32 dirId) {
    (void)dirId;
}

// @addr 0x804e6414
void ArchiveScanner::setPathComponent(s32 component, s32 index, u32 hash) {
    (void)component; (void)index; (void)hash;
}

// @addr 0x804e6474
void ArchiveScanner::clearPathComponents() {}

// @addr 0x804e64d4
void ArchiveScanner::setPathDepth(s32 depth, s32 maxDepth) {
    (void)depth; (void)maxDepth;
}

// @addr 0x804e657c
u32 ArchiveScanner::getEntryCount(u32 dirId) {
    (void)dirId;
    return 0;
}

// ============================================================
// ResourceLoader
// ============================================================

ResourceLoader::~ResourceLoader() {}

// @addr 0x804e787c
bool ResourceLoader::isLoaded(u32 resourceId) {
    (void)resourceId;
    return false;
}

// @addr 0x804e7ae0
u32 ResourceLoader::getResourceSize(u32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804e7b60
const char* ResourceLoader::getTypeName() const {
    return "Resource";
}

// @addr 0x804e7be0
void ResourceLoader::setArchive(void* archive) {
    (void)archive;
}

// @addr 0x804e7c60
void ResourceLoader::setHeap(s32 heap) {
    (void)heap;
}

// @addr 0x804e7ce0
void ResourceLoader::setFlags(s32 flags) {
    (void)flags;
}

// @addr 0x804e7d8c
void ResourceLoader::setCacheCapacity(s32 capacity) {
    (void)capacity;
}

// @addr 0x804e7dd0
void ResourceLoader::setDecompress(s32 enable) {
    (void)enable;
}

// @addr 0x804e7e14
void ResourceLoader::setAsyncMode(s32 enable) {
    (void)enable;
}

// @addr 0x804e7e58
void ResourceLoader::setShareMode(s32 enable) {
    (void)enable;
}

// @addr 0x804e7e9c
void ResourceLoader::setPriority(s32 priority) {
    (void)priority;
}

// @addr 0x804e7ee0
void ResourceLoader::setLoadCallback(s32 callback) {
    (void)callback;
}

// @addr 0x804e7f24
void ResourceLoader::setErrorCallback(s32 callback) {
    (void)callback;
}

// @addr 0x804e7f68
void ResourceLoader::setProgressCallback(s32 callback) {
    (void)callback;
}

// @addr 0x804e7fac
void ResourceLoader::setBufferPool(s32 pool) {
    (void)pool;
}

// @addr 0x804e7ff0
void ResourceLoader::configure(s32 option) {
    (void)option;
}

// @addr 0x804e8034
void ResourceLoader::setThreadAffinity(s32 affinity) {
    (void)affinity;
}

// @addr 0x804e8078
void ResourceLoader::setMemoryBudget(s32 budget) {
    (void)budget;
}

// @addr 0x804e80bc
void ResourceLoader::setTimeout(s32 timeoutMs) {
    (void)timeoutMs;
}

// @addr 0x804e8100
void ResourceLoader::setRetryCount(s32 count) {
    (void)count;
}

// @addr 0x804e8144
void ResourceLoader::setLogLevel(s32 level) {
    (void)level;
}

// @addr 0x804e8188
void ResourceLoader::setVerbose(s32 enable) {
    (void)enable;
}

// @addr 0x804e81cc
void ResourceLoader::setDebug(s32 enable) {
    (void)enable;
}

// @addr 0x804e8210
void ResourceLoader::setValidate(s32 enable) {
    (void)enable;
}

// @addr 0x804e8254
void ResourceLoader::setPreload(s32 enable) {
    (void)enable;
}

// @addr 0x804e8298
void ResourceLoader::setStreaming(s32 enable) {
    (void)enable;
}

// @addr 0x804e82dc
void ResourceLoader::setCompressionTolerance(s32 tolerance) {
    (void)tolerance;
}

// @addr 0x804e8320
void ResourceLoader::finalizeConfig() {}

// @addr 0x804e8384
s32 ResourceLoader::loadBatch(s32* resourceIds, s32 count) {
    (void)resourceIds; (void)count;
    return 0;
}

// @addr 0x804e83ec
s32 ResourceLoader::unloadBatch(s32* resourceIds, s32 count) {
    (void)resourceIds; (void)count;
    return 0;
}

// @addr 0x804e8458
void ResourceLoader::preloadBegin() {}

// @addr 0x804e8494
void ResourceLoader::preloadEntry() {}

// @addr 0x804e84d0
void ResourceLoader::preloadSetEntry(u32* entry) {
    (void)entry;
}

// @addr 0x804e850c
void ResourceLoader::preloadAdvance(u32* state) {
    (void)state;
}

// @addr 0x804e8574
void ResourceLoader::preloadFinalize(u32* state) {
    (void)state;
}

// @addr 0x804e85d8
u32 ResourceLoader::getCacheUsage(s32 metric) {
    (void)metric;
    return 0;
}

// @addr 0x804e864c
u32 ResourceLoader::getCacheHits(s32 metric) {
    (void)metric;
    return 0;
}

// @addr 0x804e86d4
void ResourceLoader::invalidateCacheEntry(u32* entry) {
    (void)entry;
}

// @addr 0x804e873c
void ResourceLoader::flushCache(u32* stats) {
    (void)stats;
}

// @addr 0x804e87a4
void ResourceLoader::resetCacheStats() {}

// @addr 0x804e87e0
void ResourceLoader::compactCache() {}

// @addr 0x804e8860
void ResourceLoader::resizeCache() {}

// @addr 0x804e88e0
void ResourceLoader::getCacheInfo() {}

// @addr 0x804e8924
void ResourceLoader::validateCache() {}

// @addr 0x804e8968
void ResourceLoader::clearCacheErrors() {}

// @addr 0x804e89e8
void ResourceLoader::setCachePolicy() {}

// @addr 0x804e8a68
void ResourceLoader::getCachePolicy() {}

// @addr 0x804e8ae8
void ResourceLoader::enableCache() {}

// @addr 0x804e8b68
void ResourceLoader::disableCache() {}

// @addr 0x804e8be8
void ResourceLoader::lockCacheEntry() {}

// @addr 0x804e8c68
void ResourceLoader::unlockCacheEntry() {}

// @addr 0x804e8f1c
s32 ResourceLoader::getLoadProgress(s32 resourceId, s32 metric) {
    (void)resourceId; (void)metric;
    return 0;
}

// @addr 0x804e8f8c
void ResourceLoader::getLoadError() {}

// @addr 0x804e9264
void ResourceLoader::getLoaderState() {}

// @addr 0x804e93d4
void ResourceLoader::getActiveCount() {}

// @addr 0x804e9548
void ResourceLoader::getPendingCount() {}

// @addr 0x804e9884
void ResourceLoader::getTotalSize() {}

// @addr 0x804e9b3c
void ResourceLoader::getErrorCount() {}

// @addr 0x804e9dfc
void ResourceLoader::getLastError() {}

// @addr 0x804ea24c
void ResourceLoader::getResourceInfo() {}

// @addr 0x804ea524
void ResourceLoader::isResourceValid() {}

// @addr 0x804ea5b8
void ResourceLoader::getDependencies() {}

// @addr 0x804ea870
void ResourceLoader::getDependencyCount() {}

// @addr 0x804e7950
s32 ResourceLoader::loadFromArchive(s32 archiveId, s32 resourceId) {
    (void)archiveId; (void)resourceId;
    return 0;
}

// @addr 0x804e7d24
s32 ResourceLoader::loadToBuffer(s32 resourceId, s32 bufferId) {
    (void)resourceId; (void)bufferId;
    return 0;
}

// @addr 0x804e982c
s32 ResourceLoader::loadWithPriority(s32 resourceId, s32 priority) {
    (void)resourceId; (void)priority;
    return 0;
}

// @addr 0x804ea1f4
s32 ResourceLoader::loadAsync(s32 resourceId, s32 callback) {
    (void)resourceId; (void)callback;
    return 0;
}

// @addr 0x804ea560
s32 ResourceLoader::loadSync(s32 resourceId, s32 timeout) {
    (void)resourceId; (void)timeout;
    return 0;
}

// @addr 0x804eac2c
s32 ResourceLoader::loadWithDecompress(s32 resourceId, s32 flags) {
    (void)resourceId; (void)flags;
    return 0;
}

// @addr 0x804eac6c
s32 ResourceLoader::loadRaw(s32 resourceId, s32 bufferId) {
    (void)resourceId; (void)bufferId;
    return 0;
}

// @addr 0x804eacc8
u32 ResourceLoader::getResourceCount(s32 filter) {
    (void)filter;
    return 0;
}

// @addr 0x804ead50
u32 ResourceLoader::getResourceId(s32 index) {
    (void)index;
    return 0;
}

// @addr 0x804eb158
void ResourceLoader::getResourceName() {}

// @addr 0x804eb194
s32 ResourceLoader::findResource(s32 nameHash, s32 flags) {
    (void)nameHash; (void)flags;
    return 0;
}

// @addr 0x804eb1ec
u32 ResourceLoader::getResourceType(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804eb260
void ResourceLoader::enumerateResources() {}

// @addr 0x804eb2c0
s32 ResourceLoader::getNextResource(s32 currentId, s32 filter) {
    (void)currentId; (void)filter;
    return 0;
}

// @addr 0x804eb31c
s32 ResourceLoader::resetEnumeration(s32 filter, s32 sortMode) {
    (void)filter; (void)sortMode;
    return 0;
}

// @addr 0x804eb37c
u32 ResourceLoader::getResourceFlags(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804eb3fc
void ResourceLoader::setResourceFlags() {}

// @addr 0x804eb6b4
void ResourceLoader::checkResourceFlags() {}

// @addr 0x804eb9cc
void ResourceLoader::lockResource() {}

// @addr 0x804ebca0
void ResourceLoader::unlockResource(u32* resourceId) {
    (void)resourceId;
}

// @addr 0x804ebcfc
u32 ResourceLoader::getLockCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804ebd70
void ResourceLoader::getRefCount() {}

// @addr 0x804ec318
s32 ResourceLoader::loadWithTransform(s32 resourceId, s32 transform) {
    (void)resourceId; (void)transform;
    return 0;
}

// @addr 0x804ec370
void ResourceLoader::loadWithCallbacks() {}

// @addr 0x804eca44
u32 ResourceLoader::getLoadTime(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804ecacc
u32 ResourceLoader::getDecompressTime(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804ecb40
void ResourceLoader::beginProfile() {}

// @addr 0x804ec688
void ResourceLoader::endProfile() {}

// @addr 0x804ecf10
s32 ResourceLoader::loadWithDeps(s32 resourceId, s32 depFlags) {
    (void)resourceId; (void)depFlags;
    return 0;
}

// @addr 0x804ecf68
u32 ResourceLoader::getDependencies(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804eced4
void ResourceLoader::resolveDependencies() {}

// @addr 0x804ecfdc
void ResourceLoader::checkDependencies() {}

// @addr 0x804ed03c
s32 ResourceLoader::loadStream(s32 resourceId, s32 streamId) {
    (void)resourceId; (void)streamId;
    return 0;
}

// @addr 0x804ed09c
u32 ResourceLoader::getStreamPosition(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804ed11c
void ResourceLoader::cancelLoad() {}

// @addr 0x804ed4d8
u32 ResourceLoader::getCancelStatus(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804ed560
u32 ResourceLoader::getLoadState(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804ed5d4
void ResourceLoader::waitForLoad() {}

// @addr 0x804ed968
void ResourceLoader::pollLoadStatus() {}

// @addr 0x804ed9a4
s32 ResourceLoader::loadMapped(s32 resourceId, s32 mapFlags) {
    (void)resourceId; (void)mapFlags;
    return 0;
}

// @addr 0x804ed9fc
u32 ResourceLoader::getMappedPointer(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804edad0
s32 ResourceLoader::unmapResource(s32 resourceId, s32 mapFlags) {
    (void)resourceId; (void)mapFlags;
    return 0;
}

// @addr 0x804edb30
u32 ResourceLoader::getPhysicalAddress(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804eda70
void ResourceLoader::beginUnloadAll() {}

// @addr 0x804edbb0
void ResourceLoader::unloadAll() {}

// @addr 0x804ede88
void ResourceLoader::destroy() {}

// @addr 0x804ee174
void ResourceLoader::reset() {}

// @addr 0x804ee42c
void ResourceLoader::shutdown() {}

// @addr 0x804ee6e0
void ResourceLoader::garbageCollect() {}

// @addr 0x804eea14
void ResourceLoader::defragment() {}

// @addr 0x804eea50
s32 ResourceLoader::compactMemory(s32 flags, s32 threshold) {
    (void)flags; (void)threshold;
    return 0;
}

// @addr 0x804eeaa8
void ResourceLoader::getMemoryStats() {}

// @addr 0x804eed5c
void ResourceLoader::getMemoryUsage() {}

// @addr 0x804ef010
void ResourceLoader::getPeakMemory() {}

// @addr 0x804ef2e0
void ResourceLoader::setMemoryLimit() {}

// ============================================================
// TextureLoader
// ============================================================

TextureLoader::TextureLoader()
    : mFormat(0), mWidth(0), mHeight(0), mMipCount(0),
      mPaletteFormat(0), mPaletteCount(0), mWrapS(0), mWrapT(0),
      mMagFilter(0), mMinFilter(0), mLodBias(0.0f), mMinLod(0.0f),
      mMaxLod(0.0f), mEdgeLOD(0) {
    for (int i = 0; i < 3; i++) {
        _pad64[i] = 0;
    }
}

TextureLoader::~TextureLoader() {}

// @addr 0x804f0000
s32 TextureLoader::load(u32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f0000
void TextureLoader::unload(u32 resourceId) {
    (void)resourceId;
}

// @addr 0x804f0000
void* TextureLoader::getResource(u32 resourceId) {
    (void)resourceId;
    return nullptr;
}

// @addr 0x804f0000
s32 TextureLoader::loadBTI(s32 archiveId, s32 resourceId) {
    (void)archiveId; (void)resourceId;
    return 0;
}

// @addr 0x804f0000
s32 TextureLoader::loadTPL(s32 archiveId, s32 resourceId) {
    (void)archiveId; (void)resourceId;
    return 0;
}

// @addr 0x804f0000
s32 TextureLoader::loadRawPixels(s32 archiveId, s32 resourceId) {
    (void)archiveId; (void)resourceId;
    return 0;
}

// @addr 0x804f0000
u32 TextureLoader::getFormat(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f0000
void TextureLoader::getDimensions(s32 resourceId, u32* width, u32* height) {
    (void)resourceId;
    if (width) *width = 0;
    if (height) *height = 0;
}

// @addr 0x804f0000
u32 TextureLoader::getMipCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f0000
u32 TextureLoader::getImageDataSize(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f0000
void TextureLoader::setWrapMode(s32 resourceId, u32 wrapS, u32 wrapT) {
    (void)resourceId; (void)wrapS; (void)wrapT;
}

// @addr 0x804f0000
void TextureLoader::setFilterMode(s32 resourceId, u32 magFilter, u32 minFilter) {
    (void)resourceId; (void)magFilter; (void)minFilter;
}

// @addr 0x804f0000
void TextureLoader::setLOD(s32 resourceId, f32 lodBias, f32 minLod, f32 maxLod) {
    (void)resourceId; (void)lodBias; (void)minLod; (void)maxLod;
}

// @addr 0x804f0000
void TextureLoader::setBorderColor(s32 resourceId, u32 color) {
    (void)resourceId; (void)color;
}

// @addr 0x804f0000
void TextureLoader::generateMipmaps(s32 resourceId) {
    (void)resourceId;
}

// @addr 0x804f0000
void* TextureLoader::getMipLevel(s32 resourceId, u32 level) {
    (void)resourceId; (void)level;
    return nullptr;
}

// @addr 0x804f0000
u32 TextureLoader::getMipSize(s32 resourceId, u32 level) {
    (void)resourceId; (void)level;
    return 0;
}

// @addr 0x804f0000
void* TextureLoader::getPalette(s32 resourceId, u32 paletteIndex) {
    (void)resourceId; (void)paletteIndex;
    return nullptr;
}

// @addr 0x804f0000
u32 TextureLoader::getPaletteFormat(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f0000
u32 TextureLoader::getPaletteCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f0000
void TextureLoader::uploadToGX(s32 resourceId) {
    (void)resourceId;
}

// @addr 0x804f0000
void TextureLoader::invalidateCache(s32 resourceId) {
    (void)resourceId;
}

// ============================================================
// ModelLoader
// ============================================================

ModelLoader::ModelLoader()
    : mMeshCount(0), mMaterialCount(0), mBoneCount(0),
      mShapeCount(0), mVertexCount(0), mFaceCount(0),
      mJointCount(0), mEnvelopeCount(0), mTexCoordCount(0),
      mMatrixCount(0), mBoundingRadius(0.0f), mFlags(0) {
    for (int i = 0; i < 3; i++) {
        mBBoxMin[i] = 0.0f;
        mBBoxMax[i] = 0.0f;
    }
    _pad74[0] = 0;
    _pad74[1] = 0;
}

ModelLoader::~ModelLoader() {}

// @addr 0x804f3000
s32 ModelLoader::load(u32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f3000
void ModelLoader::unload(u32 resourceId) {
    (void)resourceId;
}

// @addr 0x804f3000
void* ModelLoader::getResource(u32 resourceId) {
    (void)resourceId;
    return nullptr;
}

// @addr 0x804f3000
s32 ModelLoader::loadBRRES(s32 archiveId, s32 resourceId) {
    (void)archiveId; (void)resourceId;
    return 0;
}

// @addr 0x804f3280
void ModelLoader::loadBMD(u32 resourceId, s32 flags) {
    (void)resourceId; (void)flags;
}

// @addr 0x804f590
void ModelLoader::loadBDL(u32 resourceId, s32 flags) {
    (void)resourceId; (void)flags;
}

// @addr 0x804f3000
u32 ModelLoader::getMeshCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f3000
void* ModelLoader::getMesh(s32 resourceId, u32 meshIndex) {
    (void)resourceId; (void)meshIndex;
    return nullptr;
}

// @addr 0x804f3000
u32 ModelLoader::getVertexCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f3000
u32 ModelLoader::getFaceCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f3000
u32 ModelLoader::getMaterialCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f3000
void* ModelLoader::getMaterial(s32 resourceId, u32 materialIndex) {
    (void)resourceId; (void)materialIndex;
    return nullptr;
}

// @addr 0x804f3000
const char* ModelLoader::getMaterialName(s32 resourceId, u32 materialIndex) {
    (void)resourceId; (void)materialIndex;
    return nullptr;
}

// @addr 0x804f3000
u32 ModelLoader::getBoneCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f3000
u32 ModelLoader::getJointCount(s32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f3000
void ModelLoader::getBoneHierarchy(s32 resourceId) {
    (void)resourceId;
}

// @addr 0x804f3000
f32 ModelLoader::getBoundingRadius(s32 resourceId) {
    (void)resourceId;
    return 0.0f;
}

// @addr 0x804f3000
void ModelLoader::getBoundingBox(s32 resourceId, f32* min, f32* max) {
    (void)resourceId;
    if (min) { min[0] = 0.0f; min[1] = 0.0f; min[2] = 0.0f; }
    if (max) { max[0] = 0.0f; max[1] = 0.0f; max[2] = 0.0f; }
}

// @addr 0x804f3000
void ModelLoader::compileDisplayLists(s32 resourceId) {
    (void)resourceId;
}

// @addr 0x804f3000
void* ModelLoader::getDisplayList(s32 resourceId, u32 lodLevel) {
    (void)resourceId; (void)lodLevel;
    return nullptr;
}

// ============================================================
// SoundLoader
// ============================================================

SoundLoader::SoundLoader()
    : mSampleRate(0), mChannelCount(0), mBitsPerSample(0),
      mLoopStart(0), mLoopEnd(0), mSampleCount(0), mLoopFlag(0),
      mEncoding(0), mGain(1.0f), mPan(0.0f), mPitch(1.0f),
      mPriority(0), mSoundGroup(0), mSoundInfo(nullptr),
      mWaveData(nullptr), mWaveSize(0), _pad6C(0) {}

SoundLoader::~SoundLoader() {}

// @addr 0x804f6000
s32 SoundLoader::load(u32 resourceId) {
    (void)resourceId;
    return 0;
}

// @addr 0x804f6000
void SoundLoader::unload(u32 resourceId) {
    (void)resourceId;
}

// @addr 0x804f6000
void* SoundLoader::getResource(u32 resourceId) {
    (void)resourceId;
    return nullptr;
}

// @addr 0x804f4774
u32 SoundLoader::loadBRSAR(s32 archiveId) {
    (void)archiveId;
    return 0;
}

// @addr 0x804f4c44
u32 SoundLoader::loadBRSAREntry(s32 entryId) {
    (void)entryId;
    return 0;
}

// @addr 0x804f4ce4
u32 SoundLoader::loadBRSARCollection(s32 collectionId) {
    (void)collectionId;
    return 0;
}

// @addr 0x804f4dfc
u32 SoundLoader::loadBRSARBank(s32 bankId) {
    (void)bankId;
    return 0;
}

// @addr 0x804f4e54
u32 SoundLoader::loadBRSARSequence(s32 seqId) {
    (void)seqId;
    return 0;
}

// @addr 0x804f50e4
u32 SoundLoader::loadBRSARWave(s32 waveId) {
    (void)waveId;
    return 0;
}

// @addr 0x804f526c
u32 SoundLoader::loadBRSARGroup(s32 groupId) {
    (void)groupId;
    return 0;
}

// @addr 0x804f53a0
u32 SoundLoader::loadPlayer(u32 playerId) {
    (void)playerId;
    return 0;
}

// @addr 0x804f5638
s32 SoundLoader::getWaveInfo(s32 waveId, s32 infoType) {
    (void)waveId; (void)infoType;
    return 0;
}

// @addr 0x804f56e0
s32 SoundLoader::getSampleRate(s32 waveId, s32 channel) {
    (void)waveId; (void)channel;
    return 0;
}

// @addr 0x804f5788
s32 SoundLoader::getChannelCount(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f5830
s32 SoundLoader::getBitsPerSample(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f58d8
s32 SoundLoader::getSampleCount(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f5980
s32 SoundLoader::getLoopStart(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f5a28
s32 SoundLoader::getLoopEnd(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f5ad0
s32 SoundLoader::getEncoding(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f5b78
s32 SoundLoader::getLoopFlag(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f5c20
s32 SoundLoader::getWaveDataPtr(s32 waveId, s32 unused) {
    (void)waveId; (void)unused;
    return 0;
}

// @addr 0x804f5ca8
u32 SoundLoader::getSoundCount() {
    return 0;
}

// @addr 0x804f5cec
s32 SoundLoader::getPlayerCount() {
    return 0;
}

// @addr 0x804f5d1c
s32 SoundLoader::getGroupInfo(s32 groupId, s32 infoType) {
    (void)groupId; (void)infoType;
    return 0;
}

// @addr 0x804f5da4
u32 SoundLoader::getSequenceCount() {
    return 0;
}

// @addr 0x804f5de8
s32 SoundLoader::getBankCount() {
    return 0;
}

// @addr 0x804f5e18
s32 SoundLoader::getCollectionCount(s32 unused, s32 type) {
    (void)unused; (void)type;
    return 0;
}

// @addr 0x804f5ec0
s32 SoundLoader::getWaveCount(s32 unused, s32 type) {
    (void)unused; (void)type;
    return 0;
}

// @addr 0x804f5f68
s32 SoundLoader::getGroupCount(s32 unused, s32 type) {
    (void)unused; (void)type;
    return 0;
}

// @addr 0x804f6010
s32 SoundLoader::getSoundType(s32 soundId, s32 type) {
    (void)soundId; (void)type;
    return 0;
}

// @addr 0x804f60b8
s32 SoundLoader::getSoundFlags(s32 soundId, s32 type) {
    (void)soundId; (void)type;
    return 0;
}

// @addr 0x804f6160
s32 SoundLoader::getSoundName(s32 soundId, s32 type) {
    (void)soundId; (void)type;
    return 0;
}

// @addr 0x804f61e8
u32 SoundLoader::getArchiveData() {
    return 0;
}

// @addr 0x804f622c
s32 SoundLoader::getArchiveSize() {
    return 0;
}

// @addr 0x804f625c
s32 SoundLoader::findSoundByHash(s32 hash, s32 type) {
    (void)hash; (void)type;
    return 0;
}

// @addr 0x804f6304
s32 SoundLoader::findWaveByHash(s32 hash, s32 type) {
    (void)hash; (void)type;
    return 0;
}

// @addr 0x804f63ac
s32 SoundLoader::findSequenceByHash(s32 hash, s32 type) {
    (void)hash; (void)type;
    return 0;
}

// @addr 0x804f6470
s32 SoundLoader::findBankByHash(s32 hash, s32 type) {
    (void)hash; (void)type;
    return 0;
}

// @addr 0x804f6534
s32 SoundLoader::findGroupByHash(s32 hash, s32 type) {
    (void)hash; (void)type;
    return 0;
}

// @addr 0x804f65dc
s32 SoundLoader::findCollectionByHash(s32 hash, s32 type) {
    (void)hash; (void)type;
    return 0;
}

// @addr 0x804f6684
s32 SoundLoader::findPlayerByHash(s32 hash, s32 type) {
    (void)hash; (void)type;
    return 0;
}

// @addr 0x804f671c
s32 SoundLoader::resolveSoundRef(s32 refId, s32 type) {
    (void)refId; (void)type;
    return 0;
}

// @addr 0x804f67ac
s32 SoundLoader::getRefData(s32 refId, s32 type) {
    (void)refId; (void)type;
    return 0;
}

// @addr 0x804f683c
s32 SoundLoader::getRefInfo(s32 refId, s32 type) {
    (void)refId; (void)type;
    return 0;
}

// @addr 0x804f68cc
s32 SoundLoader::getRefCount(s32 refId, s32 type) {
    (void)refId; (void)type;
    return 0;
}

// @addr 0x804f695c
s32 SoundLoader::getRefString(s32 refId, s32 type) {
    (void)refId; (void)type;
    return 0;
}

// @addr 0x804f69ec
s32 SoundLoader::getRefEntry(s32 refId, s32 type) {
    (void)refId; (void)type;
    return 0;
}

// @addr 0x804f6aac
s32 SoundLoader::getEntryOffset(s32 entryId, s32 type) {
    (void)entryId; (void)type;
    return 0;
}

// @addr 0x804f6b6c
s32 SoundLoader::getEntrySize(s32 entryId, s32 type) {
    (void)entryId; (void)type;
    return 0;
}

// @addr 0x804f6bfc
s32 SoundLoader::getEntryData(s32 entryId, s32 type) {
    (void)entryId; (void)type;
    return 0;
}

// @addr 0x804f6c8c
s32 SoundLoader::getEntryHeader(s32 entryId, s32 type) {
    (void)entryId; (void)type;
    return 0;
}

// @addr 0x804f6d1c
s32 SoundLoader::getEntryName(s32 entryId, s32 type) {
    (void)entryId; (void)type;
    return 0;
}

// @addr 0x804f6df0
s32 SoundLoader::setSoundProperty(s32 soundId, s32 propId) {
    (void)soundId; (void)propId;
    return 0;
}

// @addr 0x804f6eb8
s32 SoundLoader::setWaveProperty(s32 waveId, s32 propId) {
    (void)waveId; (void)propId;
    return 0;
}

// @addr 0x804f6f48
s32 SoundLoader::getSoundProperty(s32 soundId, s32 propId) {
    (void)soundId; (void)propId;
    return 0;
}

// --- Low-level property setters (void(s32, u32, u32) pattern) ---

// @addr 0x804f6fc0
void SoundLoader::setProperty_00(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f6ff0
void SoundLoader::setProperty_01(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7020
void SoundLoader::setProperty_02(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7050
void SoundLoader::setProperty_03(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7080
void SoundLoader::setProperty_04(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f70b0
void SoundLoader::setProperty_05(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f70e0
void SoundLoader::setProperty_06(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7110
void SoundLoader::setProperty_07(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7140
void SoundLoader::setProperty_08(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7170
void SoundLoader::setProperty_09(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f71a0
void SoundLoader::setProperty_0A(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f71d0
void SoundLoader::setProperty_0B(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7200
void SoundLoader::setProperty_0C(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7230
void SoundLoader::setProperty_0D(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7260
void SoundLoader::setProperty_0E(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7290
void SoundLoader::setProperty_0F(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f72c0
void SoundLoader::setProperty_10(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f72f0
void SoundLoader::setProperty_11(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7320
void SoundLoader::setProperty_12(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7350
void SoundLoader::setProperty_13(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7380
void SoundLoader::setProperty_14(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f73b0
void SoundLoader::setProperty_15(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f73e0
void SoundLoader::setProperty_16(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7410
void SoundLoader::setProperty_17(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7440
void SoundLoader::setProperty_18(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7470
void SoundLoader::setProperty_19(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f74a0
void SoundLoader::setProperty_1A(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f74d0
void SoundLoader::setProperty_1B(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7500
void SoundLoader::setProperty_1C(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7530
void SoundLoader::setProperty_1D(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7560
void SoundLoader::setProperty_1E(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7590
void SoundLoader::setProperty_1F(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f75c0
void SoundLoader::setProperty_20(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f75f0
void SoundLoader::setProperty_21(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7620
void SoundLoader::setProperty_22(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7650
void SoundLoader::setProperty_23(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7680
void SoundLoader::setProperty_24(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f76b0
void SoundLoader::setProperty_25(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f76e0
void SoundLoader::setProperty_26(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7710
void SoundLoader::setProperty_27(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7740
void SoundLoader::setProperty_28(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7770
void SoundLoader::setProperty_29(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f77a0
void SoundLoader::setProperty_2A(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f77d0
void SoundLoader::setProperty_2B(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7800
void SoundLoader::setProperty_2C(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7830
void SoundLoader::setProperty_2D(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7860
void SoundLoader::setProperty_2E(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7890
void SoundLoader::setProperty_2F(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f78c0
void SoundLoader::setProperty_30(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f78f0
void SoundLoader::setProperty_31(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7920
void SoundLoader::setProperty_32(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7950
void SoundLoader::setProperty_33(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7980
void SoundLoader::setProperty_34(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f79b0
void SoundLoader::setProperty_35(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f79e0
void SoundLoader::setProperty_36(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7a10
void SoundLoader::setProperty_37(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7a40
void SoundLoader::setProperty_38(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7a70
void SoundLoader::setProperty_39(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7aa0
void SoundLoader::setProperty_3A(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7ad0
void SoundLoader::setProperty_3B(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7b00
void SoundLoader::setProperty_3C(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7b30
void SoundLoader::setProperty_3D(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7b60
void SoundLoader::setProperty_3E(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7b90
void SoundLoader::setProperty_3F(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7bc0
void SoundLoader::setProperty_40(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7bf0
void SoundLoader::setProperty_41(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}
// @addr 0x804f7c20
void SoundLoader::setProperty_42(s32 id, u32 field, u32 value) {
    (void)id; (void)field; (void)value;
}

// @addr 0x804f7c50
u32 SoundLoader::getField(s32 id, s32 field) {
    (void)id; (void)field;
    return 0;
}

// @addr 0x804f7d6c
u32 SoundLoader::getFieldDirect(u32 field) {
    (void)field;
    return 0;
}

// @addr 0x804f7fb0
s32 SoundLoader::getFieldSigned(s32 id, s32 field) {
    (void)id; (void)field;
    return 0;
}

// @addr 0x804f7e7c
void SoundLoader::resetSoundSystem() {}

// @addr 0x804f7eb4
void SoundLoader::initSoundTables() {}

// @addr 0x804f7f2c
void SoundLoader::buildSoundIndex() {}

// @addr 0x804f8030
void SoundLoader::buildHashTable(u32* table) {
    (void)table;
}

// @addr 0x804f81c4
void SoundLoader::parseSoundHeader(s32 offset) {
    (void)offset;
}

// @addr 0x804f8288
void SoundLoader::parseSoundEntry(s32* entry) {
    (void)entry;
}

// @addr 0x804f83a4
void SoundLoader::validateSoundData() {}

// @addr 0x804f86c8
void SoundLoader::parseWaveData(u32* waveInfo) {
    (void)waveInfo;
}

// @addr 0x804f8714
void SoundLoader::parseWaveEntry(s32* entry) {
    (void)entry;
}

// @addr 0x804f8a44
void SoundLoader::readSoundFile(u32* fileInfo) {
    (void)fileInfo;
}

// @addr 0x804f8a98
void SoundLoader::readSoundEntry(s32* entry) {
    (void)entry;
}

// @addr 0x804f8c44
void SoundLoader::writeSoundData(s32 fileId, s32 entryId, u32 flags) {
    (void)fileId; (void)entryId; (void)flags;
}

// @addr 0x804f8cd0
void SoundLoader::writeSoundHeader(s32 fileId, s32 entryId, u32 flags) {
    (void)fileId; (void)entryId; (void)flags;
}

// @addr 0x804f8d34
void SoundLoader::writeSoundFooter(s32 fileId, s32 entryId, u32 flags) {
    (void)fileId; (void)entryId; (void)flags;
}

// @addr 0x804f8d78
void SoundLoader::closeSoundFile(s32 fileId) {
    (void)fileId;
}

// @addr 0x804f8e14
void SoundLoader::setSoundFilePos(u32 position) {
    (void)position;
}

// @addr 0x804f8e7c
void SoundLoader::getSoundFilePos(u32 position) {
    (void)position;
}

// @addr 0x804f8eec
void SoundLoader::seekSoundStream(s32 offset) {
    (void)offset;
}

// @addr 0x804f8ef4
void SoundLoader::tellSoundStream(s32 offset) {
    (void)offset;
}

// @addr 0x804f8efc
void SoundLoader::readSoundStream(s32* buffer) {
    (void)buffer;
}

// @addr 0x804f9010
void SoundLoader::writeSoundStream(u32* buffer, s32 size) {
    (void)buffer; (void)size;
}

// @addr 0x804f90cc
void SoundLoader::flushSoundStream() {}

// @addr 0x804f9328
void SoundLoader::resetSoundStream() {}

// @addr 0x804f9284
s32 SoundLoader::processSoundEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804f976c
s32 SoundLoader::processWaveEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804f93f0
void SoundLoader::setProcessParam(s32 param, u32 value) {
    (void)param; (void)value;
}

// @addr 0x804f93f8
void SoundLoader::setProcessFlag(s32 param, u32 value) {
    (void)param; (void)value;
}

// @addr 0x804f9400
void SoundLoader::setProcessMode(s32 param, u32 value) {
    (void)param; (void)value;
}

// @addr 0x804f946c
void SoundLoader::setSampleConvert(s32 converter, s8 inputFmt, s8 outputFmt) {
    (void)converter; (void)inputFmt; (void)outputFmt;
}

// @addr 0x804f94f0
void SoundLoader::processSampleData(s32 samples) {
    (void)samples;
}

// @addr 0x804f9558
void SoundLoader::convertSamples(s32* input, u32 count) {
    (void)input; (void)count;
}

// @addr 0x804f95e0
void SoundLoader::resampleAudio(s32* input, u32 newRate) {
    (void)input; (void)newRate;
}

// @addr 0x804f9678
void SoundLoader::finalizeProcessing() {}

// @addr 0x804f97d4
void SoundLoader::resetProcessor() {}

// @addr 0x804f9a00
void SoundLoader::addSoundRef(s32 refId) {
    (void)refId;
}

// @addr 0x804f9bec
void SoundLoader::removeSoundRef(s32 refId) {
    (void)refId;
}

// @addr 0x804f9e74
void SoundLoader::clearSoundRefs() {}

// @addr 0x804f9f10
void SoundLoader::setRefData(s32 refId, u32 data) {
    (void)refId; (void)data;
}

// @addr 0x804fa1cc
void SoundLoader::loadCollection(s32 collectionId, s32 flags) {
    (void)collectionId; (void)flags;
}

// @addr 0x804fa3b4
void SoundLoader::unloadCollection(s32 collectionId, u32 flags) {
    (void)collectionId; (void)flags;
}

// @addr 0x804fa54c
void SoundLoader::enumerateCollections() {}

// @addr 0x804fa69c
s32 SoundLoader::loadCollectionEntry(s32 collectionId, s32 entryId) {
    (void)collectionId; (void)entryId;
    return 0;
}

// @addr 0x804fa82c
u32 SoundLoader::getCollectionData(u32* outData) {
    (void)outData;
    return 0;
}

// @addr 0x804fa768
void SoundLoader::setCollectionParam(s32 collectionId, u32 param, u32 value) {
    (void)collectionId; (void)param; (void)value;
}

// @addr 0x804fa7d0
void SoundLoader::getCollectionInfo() {}

// @addr 0x804fa8a4
void SoundLoader::validateCollection() {}

// @addr 0x804faa24
void SoundLoader::addCollectionEntry(s32 collectionId, u32 entryId) {
    (void)collectionId; (void)entryId;
}

// @addr 0x804faa2c
void SoundLoader::removeCollectionEntry(s32 collectionId, u32 entryId) {
    (void)collectionId; (void)entryId;
}

// @addr 0x804faaa8
void SoundLoader::getCollectionEntryCount() {}

// @addr 0x804fab48
void SoundLoader::setCollectionEntryData(s32 entryId, u32 data) {
    (void)entryId; (void)data;
}

// @addr 0x804fabc0
void SoundLoader::getCollectionEntryData() {}

// @addr 0x804fac98
void SoundLoader::updateCollection(s32 collectionId, u32 entryId, s32 operation) {
    (void)collectionId; (void)entryId; (void)operation;
}

// @addr 0x804fad48
void SoundLoader::finalizeCollection() {}

// @addr 0x804fae3c
s32 SoundLoader::processCollectionEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804fbbcc
s32 SoundLoader::processBankEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804fb070
void SoundLoader::initBank(s32 bankId) {
    (void)bankId;
}

// @addr 0x804fb21c
void SoundLoader::finalizeBank(s32 bankId) {
    (void)bankId;
}

// @addr 0x804fb3d0
void SoundLoader::enumerateBanks() {}

// @addr 0x804fb4d0
void SoundLoader::setBankParam(s32 bankId, s32 param) {
    (void)bankId; (void)param;
}

// @addr 0x804fb530
void SoundLoader::getBankParam(s32 bankId, s32 param) {
    (void)bankId; (void)param;
}

// @addr 0x804fb688
void SoundLoader::setBankData(s32 bankId, u32 data) {
    (void)bankId; (void)data;
}

// @addr 0x804fb77c
void SoundLoader::getBankInfo(s32 bankId, s32 infoType) {
    (void)bankId; (void)infoType;
}

// @addr 0x804fb964
void SoundLoader::processBankData(s32 bankId, u32 offset) {
    (void)bankId; (void)offset;
}

// @addr 0x804fbb3c
void SoundLoader::writeBankData(s32 bankId, u32 offset, u32 value) {
    (void)bankId; (void)offset; (void)value;
}

// @addr 0x804fbb88
void SoundLoader::flushBankData() {}

// @addr 0x804fbc34
void SoundLoader::closeBank(s32 bankId) {
    (void)bankId;
}

// @addr 0x804fbca0
void SoundLoader::getBankEntry(s32* outEntry) {
    (void)outEntry;
}

// @addr 0x804fbe4c
void SoundLoader::loadBankSound(s32 soundId) {
    (void)soundId;
}

// @addr 0x804fbf60
void SoundLoader::parseBankHeader(s32* header) {
    (void)header;
}

// @addr 0x804fc0c8
void SoundLoader::parseBankEntry(s32* entry) {
    (void)entry;
}

// @addr 0x804fc2ec
void SoundLoader::initSoundArchive() {}

// @addr 0x804fc52c
s32 SoundLoader::processArchiveEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804fc608
void SoundLoader::loadSoundArchive(s32 archiveId) {
    (void)archiveId;
}

// @addr 0x804fc8d0
void SoundLoader::unloadSoundArchive(s32 archiveId) {
    (void)archiveId;
}

// @addr 0x804fca34
void SoundLoader::validateSoundArchive(s32 archiveId) {
    (void)archiveId;
}

// @addr 0x804fca6c
void SoundLoader::getSoundArchiveInfo(s32* outInfo) {
    (void)outInfo;
}

// @addr 0x804fd15c
u32 SoundLoader::getSoundArchiveSize(s32 archiveId) {
    (void)archiveId;
    return 0;
}

// @addr 0x804fd2d4
s32 SoundLoader::parseArchiveEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804fd78c
s32 SoundLoader::resolveArchiveRef(s32 refId, s32 flags) {
    (void)refId; (void)flags;
    return 0;
}

// @addr 0x804fd7e4
s32 SoundLoader::getArchiveString(s32 offset, s32 maxLen) {
    (void)offset; (void)maxLen;
    return 0;
}

// @addr 0x804fe260
s32 SoundLoader::readArchiveData(s32 offset, s32 size) {
    (void)offset; (void)size;
    return 0;
}

// @addr 0x804fe540
s32 SoundLoader::writeArchiveData(s32 offset, s32 size) {
    (void)offset; (void)size;
    return 0;
}

// @addr 0x804fe7d4
bool SoundLoader::isArchiveValid(s32 archiveId) {
    (void)archiveId;
    return false;
}

// @addr 0x804fe86c
s32 SoundLoader::getArchiveEntryCount(s32 archiveId, s32 type) {
    (void)archiveId; (void)type;
    return 0;
}

// @addr 0x804fd1e0
void SoundLoader::finalizeLoad(s32 resourceId, u32 offset, u32 size) {
    (void)resourceId; (void)offset; (void)size;
}

// @addr 0x804fd210
void SoundLoader::prepareLoad(s32 resourceId, u32 offset, u32 size) {
    (void)resourceId; (void)offset; (void)size;
}

// @addr 0x804fd240
void SoundLoader::beginLoad(s32 resourceId, u32 size) {
    (void)resourceId; (void)size;
}

// @addr 0x804fd298
void SoundLoader::endLoad() {}

// @addr 0x804fd32c
void SoundLoader::setLoadOffset(u32 offset) {
    (void)offset;
}

// @addr 0x804fd3cc
void SoundLoader::setLoadSize(s32 size) {
    (void)size;
}

// @addr 0x804fd404
void SoundLoader::setLoadFlags(s32 flags) {
    (void)flags;
}

// @addr 0x804fd4b4
void SoundLoader::setLoadPriority(s32 priority) {
    (void)priority;
}

// @addr 0x804fd4ec
void SoundLoader::setLoadCallback(s32 callback) {
    (void)callback;
}

// @addr 0x804fd59c
void SoundLoader::setLoadData(s32 dataPtr) {
    (void)dataPtr;
}

// @addr 0x804fd5d4
void SoundLoader::configureLoad(u32 flags, s32 priority, s32 align) {
    (void)flags; (void)priority; (void)align;
}

// @addr 0x804fd708
void SoundLoader::beginLoadBatch() {}

// @addr 0x804fd86c
void SoundLoader::endLoadBatch(s32 result) {
    (void)result;
}

// @addr 0x804fda64
void SoundLoader::cancelLoadBatch(s32 batchId) {
    (void)batchId;
}

// @addr 0x804fdae4
void SoundLoader::getLoadBatchInfo(s32 batchId) {
    (void)batchId;
}

// @addr 0x804fdb94
void SoundLoader::setLoadBatchParam(s32 batchId) {
    (void)batchId;
}

// @addr 0x804fdbe0
void SoundLoader::processLoadBatch(s32 batchId) {
    (void)batchId;
}

// @addr 0x804fdc90
void SoundLoader::finalizeLoadBatch(s32 batchId) {
    (void)batchId;
}

// @addr 0x804fdcc8
void SoundLoader::getLoadBatchStats(s32* outStats) {
    (void)outStats;
}

// @addr 0x804fde30
void SoundLoader::resetLoadBatch() {}

// @addr 0x804fe214
void SoundLoader::initSoundIO() {}

// @addr 0x804fe2d4
void SoundLoader::openSoundIO(s32 mode) {
    (void)mode;
}

// @addr 0x804fe398
void SoundLoader::closeSoundIO(s32 mode) {
    (void)mode;
}

// @addr 0x804fe504
void SoundLoader::resetSoundIO() {}

// @addr 0x804fe598
void SoundLoader::setSoundIOSize(u32 size) {
    (void)size;
}

// @addr 0x804fe638
void SoundLoader::readSoundIO(s32 offset) {
    (void)offset;
}

// @addr 0x804fe674
void SoundLoader::writeSoundIO(s32 offset) {
    (void)offset;
}

// @addr 0x804fe724
void SoundLoader::seekSoundIO(s32 offset) {
    (void)offset;
}

// @addr 0x804fe808
void SoundLoader::flushSoundIO() {}

// @addr 0x804fe8e4
void SoundLoader::tellSoundIO(s32 offset) {
    (void)offset;
}

// @addr 0x804fe9f8
void SoundLoader::getSoundIOStatus(s32 status) {
    (void)status;
}

// @addr 0x804feac4
void SoundLoader::checkSoundIOComplete() {}

// @addr 0x804feb1c
void SoundLoader::waitForSoundIO(s32 timeout) {
    (void)timeout;
}

// @addr 0x804fec4c
void SoundLoader::cancelSoundIO(s32 handle) {
    (void)handle;
}

// @addr 0x804fed2c
void SoundLoader::resetSoundIOState() {}

// @addr 0x804fed90
s32 SoundLoader::processSoundIOEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804fee08
void SoundLoader::beginSoundIOTransfer(s32 handle) {
    (void)handle;
}

// @addr 0x804fee90
void SoundLoader::endSoundIOTransfer(s32 handle) {
    (void)handle;
}

// @addr 0x804feefc
void SoundLoader::advanceSoundIO(s32 bytes) {
    (void)bytes;
}

// @addr 0x804ff06c
void SoundLoader::getSoundIOBuffer(u32* outBuffer) {
    (void)outBuffer;
}

// @addr 0x804ff084
u32 SoundLoader::getSoundIOSize(u32* outSize) {
    (void)outSize;
    return 0;
}

// @addr 0x804ff0e4
void SoundLoader::setSoundIOParams(s32 handle, u32 offset, u32 size) {
    (void)handle; (void)offset; (void)size;
}

// @addr 0x804ff0f0
void SoundLoader::configureSoundIO(s32 mode, s32 param) {
    (void)mode; (void)param;
}

// @addr 0x804ff154
void SoundLoader::initSoundIOTransfer(s32* transfer, s32 mode, s32 size) {
    (void)transfer; (void)mode; (void)size;
}

// @addr 0x804ff1e0
void SoundLoader::setSoundIOPath(s32* transfer, s32 mode, s8* path) {
    (void)transfer; (void)mode; (void)path;
}

// @addr 0x804ff2d0
void SoundLoader::closeSoundIOTransfer(s32 handle) {
    (void)handle;
}

// @addr 0x804ff394
void SoundLoader::resetSoundIOTransfer() {}

// @addr 0x804ff43c
void SoundLoader::getSoundIOTransferInfo(s32* outInfo) {
    (void)outInfo;
}

// @addr 0x804ff4a0
s32 SoundLoader::readSoundIOEntry(s32* entry, s32 size) {
    (void)entry; (void)size;
    return 0;
}

// @addr 0x804ff4b0
s32 SoundLoader::writeSoundIOEntry(s32* entry, s32 size) {
    (void)entry; (void)size;
    return 0;
}

// @addr 0x804ff4c0
void SoundLoader::finalizeSoundIORead() {}

// @addr 0x804ff4c4
void SoundLoader::readSoundIOData(u32* buffer) {
    (void)buffer;
}

// @addr 0x804ff52c
u32 SoundLoader::getSoundIODataSize(s32* entry) {
    (void)entry;
    return 0;
}

// @addr 0x804ff59c
void SoundLoader::resetSoundIOData() {}

// @addr 0x804ff718
void SoundLoader::flushSoundIOData() {}

// @addr 0x804ff7a0
void SoundLoader::setSoundIOCallback(s32 callback) {
    (void)callback;
}

// @addr 0x804ff7d4
void SoundLoader::getSoundIOCallback() {}

// @addr 0x804ff864
void SoundLoader::checkSoundIOReady() {}

// @addr 0x804ffa5c
void SoundLoader::getSoundIOStats(s32* outStats) {
    (void)outStats;
}

// @addr 0x804ffaec
void SoundLoader::resetSoundIOStats() {}

// @addr 0x804ffc20
s32 SoundLoader::finalizeSoundIO(s32 handle, s32 result) {
    (void)handle; (void)result;
    return 0;
}

// @addr 0x804ffc7c
void SoundLoader::setSoundIOError(s32 error) {
    (void)error;
}

// @addr 0x804ffc84
void SoundLoader::getSoundIOError(s32* outError) {
    (void)outError;
}

// @addr 0x804ffbe0
s32 SoundLoader::closeSoundIOEntry(s32 entryId, s32 flags) {
    (void)entryId; (void)flags;
    return 0;
}

// @addr 0x804ffcc4
void SoundLoader::getSoundIOEntryInfo(s32* outInfo) {
    (void)outInfo;
}

// @addr 0x804ffe14
void SoundLoader::convertAudioData(f64 gain, s32 format, f32* samples) {
    (void)gain; (void)format; (void)samples;
}

// @addr 0x804ffee8
void SoundLoader::setConvertParams(s32 format, u32 flags) {
    (void)format; (void)flags;
}

// @addr 0x804ffef8
void SoundLoader::convertBlock(s32 blockId, u32 offset, u32 size) {
    (void)blockId; (void)offset; (void)size;
}

// @addr 0x804fff04
void SoundLoader::finalizeConversion() {}

} // namespace ArchiveExt
} // namespace EGG