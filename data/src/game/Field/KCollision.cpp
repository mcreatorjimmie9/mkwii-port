#include "KCollision.hpp"
#include <decomp.h>
#include <cmath>
#include <cstring>
#include <algorithm>

namespace Field {

// ============================================================================
// Construction / Destruction
// ============================================================================

KCollision::KCollision()
    : mRawData(nullptr)
    , mRawDataSize(0)
    , mNumPrisms(0)
    , mNumVertices(0)
    , mNumNormals(0)
    , mVertices(nullptr)
    , mNormals(nullptr)
    , mPrisms(nullptr)
    , mNumBlocks(0)
    , mBlockOffsets(nullptr)
    , mBlockDataCopy(nullptr)
    , mBlockDataSize(0)
    , mCollectedCount(0)
    , mPrismCacheCount(0)
    , mCachedRadius(0.0f)
    , mCachedTypeMask(0)
    , mQueryRadius(0.0f)
    , mQueryTypeMask(0)
    , mPrismThickness(0.0f)
    , mAreaXWidthMask(0)
    , mAreaYWidthMask(0)
    , mAreaZWidthMask(0)
    , mBlockWidthShift(0)
    , mAreaXBlocksShift(0)
    , mAreaXYBlocksShift(0)
    , mSphereRadius(0.0f)
    , mOwnsData(false) {
    for (int i = 0; i < 3; i++) {
        mBboxMin[i] = 0.0f;
        mBboxMax[i] = 0.0f;
    }
}

KCollision::~KCollision() {
    if (mOwnsData) {
        delete[] mVertices;
        delete[] mNormals;
        delete[] mPrisms;
        delete[] mBlockOffsets;
        delete[] mBlockDataCopy;
    }
}

void KCollision::init() {
    if (mOwnsData) {
        delete[] mVertices;
        delete[] mNormals;
        delete[] mPrisms;
        delete[] mBlockOffsets;
        delete[] mBlockDataCopy;
    }
    mRawData = nullptr;
    mRawDataSize = 0;
    mNumPrisms = 0;
    mNumVertices = 0;
    mNumNormals = 0;
    mVertices = nullptr;
    mNormals = nullptr;
    mPrisms = nullptr;
    mNumBlocks = 0;
    mBlockOffsets = nullptr;
    mBlockDataCopy = nullptr;
    mBlockDataSize = 0;
    mCollectedCount = 0;
    mPrismCacheCount = 0;
    mCachedRadius = 0.0f;
    mCachedTypeMask = 0;
    mQueryRadius = 0.0f;
    mQueryTypeMask = 0;
    mPrismThickness = 0.0f;
    mAreaMinPos.setZero();
    mAreaXWidthMask = 0;
    mAreaYWidthMask = 0;
    mAreaZWidthMask = 0;
    mBlockWidthShift = 0;
    mAreaXBlocksShift = 0;
    mAreaXYBlocksShift = 0;
    mSphereRadius = 0.0f;
    mOwnsData = false;
    mBlockDataSize = 0;
    mCollectedCount = 0;
    for (int i = 0; i < 3; i++) {
        mBboxMin[i] = 0.0f;
        mBboxMax[i] = 0.0f;
    }
}

// ============================================================================
// KCL Binary Loading — Real Nintendo KCL Format
//
// KCL files are big-endian. The format stores:
//   1. Header (0x3C bytes): offsets + spatial parameters
//   2. Position data: groups of 3 vertices (36 bytes/entry)
//   3. Normal data: individual normals (12 bytes/entry)
//   4. Prism data: collision prisms (16 bytes/entry)
//   5. Block data: octree spatial index (variable-length blocks)
// ============================================================================

bool KCollision::loadKCL(const u8* data, u32 size) {
    if (!data || size < sizeof(KCLFileHeader)) return false;

    // Store raw data pointer
    mRawData = data;
    mRawDataSize = size;

    // ---- Parse header (big-endian, 0x3C bytes) ----
    u32 posOffset   = readBE32(data + 0x00);
    u32 nrmOffset   = readBE32(data + 0x04);
    u32 prismOffset = readBE32(data + 0x08);
    u32 blockOffset = readBE32(data + 0x0C);
    mPrismThickness = readBE32f(data + 0x10);

    mAreaMinPos.x = readBE32f(data + 0x14);
    mAreaMinPos.y = readBE32f(data + 0x18);
    mAreaMinPos.z = readBE32f(data + 0x1C);

    mAreaXWidthMask    = readBE32(data + 0x20);
    mAreaYWidthMask    = readBE32(data + 0x24);
    mAreaZWidthMask    = readBE32(data + 0x28);
    mBlockWidthShift   = readBE32(data + 0x2C);
    mAreaXBlocksShift  = readBE32(data + 0x30);
    mAreaXYBlocksShift = readBE32(data + 0x34);
    mSphereRadius      = readBE32f(data + 0x38);

    // Validate offsets
    if (posOffset >= size || nrmOffset >= size ||
        prismOffset >= size || blockOffset >= size) {
        return false;
    }

    // Validate ordering: pos < nrm < prism < block (typical but not required)
    // Compute section sizes
    u32 posSize   = (nrmOffset > posOffset) ? (nrmOffset - posOffset) : (blockOffset - posOffset);
    u32 nrmSize   = (prismOffset > nrmOffset) ? (prismOffset - nrmOffset) : 0;
    u32 prismSize = blockOffset - prismOffset;
    u32 blockSize = size - blockOffset;

    if (posSize == 0 || prismSize == 0 || blockSize == 0) return false;

    // Number of position groups: each group = 3 vertices = 36 bytes
    u32 numPosGroups = posSize / 36;
    // Number of normals: each = 12 bytes
    mNumNormals = nrmSize / 12;
    // Number of prisms: each = 16 bytes
    mNumPrisms = prismSize / 16;

    if (numPosGroups == 0 || mNumPrisms == 0) return false;

    // Sanity checks
    if (numPosGroups > 1000000 || mNumNormals > 1000000 || mNumPrisms > 1000000) {
        return false;
    }

    // ---- Convert position data (big-endian f32 groups → native EGG::Vector3f) ----
    // Each position group has 3 vertices (36 bytes). Expand into flat vertex array.
    mNumVertices = numPosGroups * 3;
    mVertices = new EGG::Vector3f[mNumVertices];
    for (u32 i = 0; i < numPosGroups; i++) {
        for (u32 v = 0; v < 3; v++) {
            const u8* vp = data + posOffset + i * 36 + v * 12;
            f32 x = readBE32f(vp + 0);
            f32 y = readBE32f(vp + 4);
            f32 z = readBE32f(vp + 8);
            mVertices[i * 3 + v] = EGG::Vector3f(x, y, z);
        }
    }

    // ---- Convert normals ----
    if (mNumNormals > 0) {
        mNormals = new EGG::Vector3f[mNumNormals];
        for (u32 i = 0; i < mNumNormals; i++) {
            const u8* np = data + nrmOffset + i * 12;
            f32 nx = readBE32f(np + 0);
            f32 ny = readBE32f(np + 4);
            f32 nz = readBE32f(np + 8);
            mNormals[i] = EGG::Vector3f(nx, ny, nz);
        }
    } else {
        mNormals = nullptr;
    }

    // ---- Convert prisms to expanded triangle entries ----
    mPrisms = new KCLTri[mNumPrisms];
    for (u32 i = 0; i < mNumPrisms; i++) {
        const u8* pp = data + prismOffset + i * 16;
        // f32 height = readBE32f(pp + 0x00); // Not needed for basic queries
        u16 posI  = readBE16(pp + 0x04);
        u16 fnrmI = readBE16(pp + 0x06);
        // Edge normals not needed for ray/sphere tests
        u16 attr  = readBE16(pp + 0x0E);

        mPrisms[i].vertexIndices[0] = posI * 3 + 0;
        mPrisms[i].vertexIndices[1] = posI * 3 + 1;
        mPrisms[i].vertexIndices[2] = posI * 3 + 2;
        mPrisms[i].normalIndex = fnrmI;
        mPrisms[i].attribute = static_cast<u32>(attr);
    }

    // ---- Parse block data (recursive binary octree) ----
    // The block data is a hierarchical octree: each node contains 8 child
    // pointers (4 bytes each = 32 bytes per internal node). If bit 31 of a
    // child pointer is set, it's a leaf node pointing to a u16 prism list.
    // Otherwise it's an offset to a sub-block (another 8-child node).
    // This matches the original RKGndCol::searchBlock algorithm.
    mBlockDataSize = blockSize;
    parseBlockData(data + blockOffset, blockSize);

    // ---- Compute bounding box from vertices ----
    if (mNumVertices > 0) {
        mBboxMin[0] = mBboxMin[1] = mBboxMin[2] = 1e30f;
        mBboxMax[0] = mBboxMax[1] = mBboxMax[2] = -1e30f;
        for (u32 i = 0; i < mNumVertices; i++) {
            mBboxMin[0] = std::min(mBboxMin[0], mVertices[i].x);
            mBboxMin[1] = std::min(mBboxMin[1], mVertices[i].y);
            mBboxMin[2] = std::min(mBboxMin[2], mVertices[i].z);
            mBboxMax[0] = std::max(mBboxMax[0], mVertices[i].x);
            mBboxMax[1] = std::max(mBboxMax[1], mVertices[i].y);
            mBboxMax[2] = std::max(mBboxMax[2], mVertices[i].z);
        }
    }

    mOwnsData = true;
    return true;
}

// ============================================================================
// Block Data Parsing — Recursive Binary Octree
//
// The KCL block data is a hierarchical octree, NOT a flat array of blocks.
// Each internal node has 8 children, each a 4-byte offset:
//   - Bit 31 set → leaf node: offset & 0x7FFFFFFF points to a u16 prism list
//     (u16 count, followed by count × u16 prism indices, terminated by u16=0)
//   - Bit 31 clear → sub-block: offset points to another 8-child node
//
// searchBlock() walks the tree from the root, using integer bit-shift
// arithmetic to select the correct child at each level. This matches
// the original RKGndCol::searchBlock exactly.
// ============================================================================

void KCollision::parseBlockData(const u8* blockData, u32 blockSize) {
    if (!blockData || blockSize < 32) {
        mNumBlocks = 0;
        mBlockOffsets = nullptr;
        mBlockDataCopy = nullptr;
        mBlockDataSize = 0;
        return;
    }

    // Copy block data (since we need to keep it around)
    // (Old data already freed by caller or init())
    delete[] mBlockDataCopy;
    mBlockDataCopy = new u8[blockSize];
    memcpy(mBlockDataCopy, blockData, blockSize);

    // Also build a legacy flat offset table for the fallback lookupBlock()
    // This is needed by collectPrismsRay() which uses flat iteration
    u32 maxLinear = mAreaXWidthMask |
                    (mAreaYWidthMask << mAreaXBlocksShift) |
                    (mAreaZWidthMask << mAreaXYBlocksShift);
    mNumBlocks = maxLinear + 1;

    if (mNumBlocks > 1000000) {
        mNumBlocks = 0;
        delete[] mBlockOffsets;
        mBlockOffsets = nullptr;
        return;
    }

    delete[] mBlockOffsets;
    mBlockOffsets = new u32[mNumBlocks];

    // Walk the block data sequentially to build the flat offset table.
    // Each entry is: u16 count, count × u16 prism indices.
    // This legacy table maps linear block index → byte offset into mBlockDataCopy.
    u32 offset = 0;
    for (u32 b = 0; b < mNumBlocks && offset < blockSize; b++) {
        mBlockOffsets[b] = offset;
        u16 count = readBE16(mBlockDataCopy + offset);
        offset += 2;
        offset += static_cast<u32>(count) * 2;
    }
    // Remaining blocks that weren't reached by the walk get blockSize sentinel
    for (u32 b = 0; b < mNumBlocks; b++) {
        if (mBlockOffsets[b] == 0 && b > 0) {
            mBlockOffsets[b] = blockSize;
        }
    }
}

// ============================================================================
// searchBlock — Recursive octree block lookup (matches RKGndCol::searchBlock)
//
// Uses integer bit-shift to traverse the binary octree from root to leaf.
// The algorithm:
//   1. Compute initial index from world position
//   2. Read 4-byte child pointer at block_data + index
//   3. If bit 31 set → leaf: return pointer to prism list
//   4. If bit 31 clear → sub-block: advance pointer, reduce shift, repeat
// ============================================================================

const u16* KCollision::searchBlock(const EGG::Vector3f& pos) const {
    if (!mBlockDataCopy || mBlockDataSize < 32) return nullptr;

    // Check if position is within the area bounds using width masks
    // Original: if ((x & area_x_width_mask) != 0) return 0;
    // This checks if the coordinate (relative to area_min) has bits set
    // beyond the width mask — meaning it's outside the octree bounds.
    s32 rx = static_cast<s32>(pos.x - mAreaMinPos.x);
    if ((rx & static_cast<s32>(mAreaXWidthMask)) != 0) return nullptr;
    s32 ry = static_cast<s32>(pos.y - mAreaMinPos.y);
    if ((ry & static_cast<s32>(mAreaYWidthMask)) != 0) return nullptr;
    s32 rz = static_cast<s32>(pos.z - mAreaMinPos.z);
    if ((rz & static_cast<s32>(mAreaZWidthMask)) != 0) return nullptr;

    u32 shift = mBlockWidthShift;
    const u8* curBlock = mBlockDataCopy;
    s32 offset;

    // Compute initial index into the root node's 8 children
    // Each child is 4 bytes. Index = 4 * (z_child << xy_shift | y_child << x_shift | x_child)
    u32 index = 4 * (
        (static_cast<u32>(rz) >> shift) << mAreaXYBlocksShift |
        (static_cast<u32>(ry) >> shift) << mAreaXBlocksShift |
        (static_cast<u32>(rx) >> shift)
    );

    // Walk down the octree until we hit a leaf (bit 31 set)
    while (true) {
        if (index + 4 > mBlockDataSize) return nullptr;
        // Read 4-byte child pointer (big-endian)
        offset = static_cast<s32>(readBE32(curBlock + index));
        if ((offset & 0x80000000) != 0) break;  // Leaf node
        if (shift == 0) return nullptr;          // Can't subdivide further
        shift--;
        curBlock += offset;
        // Compute index in the sub-block: 4 * (z_bit | y_bit*2 | x_bit*4)
        // (In the sub-block, children are ordered by single bit of each coord)
        index = 4 * (
            ((static_cast<u32>(rz) >> shift) & 1) * 4 |
            ((static_cast<u32>(ry) >> shift) & 1) * 2 |
            ((static_cast<u32>(rx) >> shift) & 1) * 1
        );
    }

    // Leaf node: offset & 0x7FFFFFFF is the byte offset to the prism list
    u32 prismListOff = static_cast<u32>(offset) & 0x7FFFFFFF;
    if (prismListOff + 2 > mBlockDataSize) return nullptr;
    return reinterpret_cast<const u16*>(curBlock + prismListOff);
}

// ============================================================================
// searchMultiBlock — Search multiple octree blocks for sphere queries
// Matches original RKGndCol::searchMultiBlock algorithm.
// ============================================================================

void KCollision::searchMultiBlock(const EGG::Vector3f& pos, f32 radius,
                                   ConstPrismListVisitor visitor) const {
    if (!mBlockDataCopy || mBlockDataSize < 32) return;

    s32 xmin = static_cast<s32>((pos.x - radius) - mAreaMinPos.x);
    s32 ymin = static_cast<s32>((pos.y - radius) - mAreaMinPos.y);
    s32 zmin = static_cast<s32>((pos.z - radius) - mAreaMinPos.z);
    if (xmin < 0) xmin = 0;
    if (ymin < 0) ymin = 0;
    if (zmin < 0) zmin = 0;

    s32 xmax = static_cast<s32>((pos.x + radius) - mAreaMinPos.x);
    s32 ymax = static_cast<s32>((pos.y + radius) - mAreaMinPos.y);
    s32 zmax = static_cast<s32>((pos.z + radius) - mAreaMinPos.z);
    if (xmax > static_cast<s32>(~mAreaXWidthMask)) xmax = static_cast<s32>(~mAreaXWidthMask);
    if (ymax > static_cast<s32>(~mAreaYWidthMask)) ymax = static_cast<s32>(~mAreaYWidthMask);
    if (zmax > static_cast<s32>(~mAreaZWidthMask)) zmax = static_cast<s32>(~mAreaZWidthMask);

    if (xmin >= xmax || ymin >= ymax || zmin >= zmax) return;

    u32 xminBlock = static_cast<u32>(xmin) >> mBlockWidthShift;
    u32 xmaxBlock = static_cast<u32>(xmax) >> mBlockWidthShift;
    u32 yminBlock = static_cast<u32>(ymin) >> mBlockWidthShift;
    u32 ymaxBlock = static_cast<u32>(ymax) >> mBlockWidthShift;
    u32 zminBlock = static_cast<u32>(zmin) >> mBlockWidthShift;
    u32 zmaxBlock = static_cast<u32>(zmax) >> mBlockWidthShift;

    // Pre-shift for sub-block edge tests (mimics original's << (0x1f - shift))
    xmin = xmin << (31 - mBlockWidthShift);
    ymin = ymin << (31 - mBlockWidthShift);
    zmin = zmin << (31 - mBlockWidthShift);
    xmax = xmax << (31 - mBlockWidthShift);
    ymax = ymax << (31 - mBlockWidthShift);
    zmax = zmax << (31 - mBlockWidthShift);

    for (u32 x = xminBlock; x <= xmaxBlock; x++) {
        for (u32 y = yminBlock; y <= ymaxBlock; y++) {
            for (u32 z = zminBlock; z <= zmaxBlock; z++) {
                u32 index = 4 * (z << mAreaXYBlocksShift |
                                 y << mAreaXBlocksShift |
                                 x);
                searchMultiBlockRecursiveAll(mBlockDataCopy, index, visitor,
                    (x == xminBlock) ? xmin : 0,
                    (y == yminBlock) ? ymin : 0,
                    (z == zminBlock) ? zmin : 0,
                    (x == xmaxBlock) ? xmax : -1,
                    (y == ymaxBlock) ? ymax : -1,
                    (z == zmaxBlock) ? zmax : -1);
            }
        }
    }
}

// ============================================================================
// searchMultiBlockRecursive — Visit all prisms in subtree (full containment)
// When the query sphere fully contains a block, we can skip edge checks
// and visit all leaves in the subtree.
// ============================================================================

void KCollision::searchMultiBlockRecursive(const u8* prismArrayBase, u32 index,
                                            ConstPrismListVisitor visitor) const {
    if (index + 4 > mBlockDataSize) return;
    u32 nextBlock = readBE32(prismArrayBase + index);
    if ((nextBlock & 0x80000000) != 0) {
        // Leaf: invoke visitor on the prism list
        u16* list = reinterpret_cast<u16*>(const_cast<u8*>(prismArrayBase) + (nextBlock & 0x7FFFFFFF));
        (this->*visitor)(list);
    } else {
        // Internal node: recurse into all 8 children
        const u8* curBlock = prismArrayBase + nextBlock;
        for (u32 i = 0; i < 8; i++) {
            searchMultiBlockRecursive(curBlock, 4 * i, visitor);
        }
    }
}

// ============================================================================
// searchMultiBlockRecursiveAll — Visit prisms with edge clipping
// When the query sphere partially overlaps blocks, we need to check
// which children are actually within the query range.
// ============================================================================

void KCollision::searchMultiBlockRecursiveAll(const u8* prismArrayBase, u32 index,
                                               ConstPrismListVisitor visitor,
                                               s32 xmin, s32 ymin, s32 zmin,
                                               s32 xmax, s32 ymax, s32 zmax) const {
    if (index + 4 > mBlockDataSize) return;

    // Full containment fast path
    if (((xmin | ymin | zmin) == 0) && ((xmax & ymax & zmax) == 0xFFFFFFFF)) {
        searchMultiBlockRecursive(prismArrayBase, index, visitor);
        return;
    }

    // Partial overlap: check if this node is relevant at all
    // If any edge constraint excludes everything, skip
    if (xmin == -1 || ymin == -1 || zmin == -1 ||
        xmax == 0 || ymax == 0 || zmax == 0) return;

    u32 nextBlock = readBE32(prismArrayBase + index);
    if ((nextBlock & 0x80000000) != 0) {
        // Leaf node — visit it
        u16* list = reinterpret_cast<u16*>(const_cast<u8*>(prismArrayBase) + (nextBlock & 0x7FFFFFFF));
        (this->*visitor)(list);
        return;
    }

    // Internal node — recurse into children with refined edges
    const u8* curBlock = prismArrayBase + nextBlock;
    s32 nxmin = xmin << 1; s32 nymin = ymin << 1; s32 nzmin = zmin << 1;
    s32 nxmax = xmax << 1; s32 nymax = ymax << 1; s32 nzmax = zmax << 1;

    // For each child (indexed by 3-bit octree coordinate):
    // Bit 2 = Z, Bit 1 = Y, Bit 0 = X
    for (u32 i = 0; i < 8; i++) {
        s32 cx = (i & 1) ? nxmax : nxmin;
        s32 cy = (i & 2) ? nymax : nymin;
        s32 cz = (i & 4) ? nzmax : nzmin;
        searchMultiBlockRecursiveAll(curBlock, 4 * i, visitor,
                                       (i & 1) ? nxmin : (nxmin < 0 ? -1 : nxmin),
                                       (i & 2) ? nymin : (nymin < 0 ? -1 : nymin),
                                       (i & 4) ? nzmin : (nzmin < 0 ? -1 : nzmin),
                                       (i & 1) ? cx : (nxmax > 0 ? nxmax : 0),
                                       (i & 2) ? cy : (nymax > 0 ? nymax : 0),
                                       (i & 4) ? cz : (nzmax > 0 ? nzmax : 0));
    }
}

// ============================================================================
// collectPrismList — Visitor callback: add prisms from a leaf's u16 list
// into the collected prism buffer.
// ============================================================================

void KCollision::collectPrismList(u16* prismArray) const {
    if (!prismArray || mCollectedCount >= MAX_COLLECTED_PRISMS) return;
    u16 count = prismArray[0];
    prismArray++; // skip count
    for (u16 i = 0; i < count && mCollectedCount < MAX_COLLECTED_PRISMS; i++) {
        u32 idx = prismArray[i];
        if (idx < mNumPrisms) {
            mCollectedPrisms[mCollectedCount++] = idx;
        }
    }
}

// ============================================================================
// Legacy Block lookup — Flat offset table (fallback for collectPrismsRay)
// ============================================================================

const u16* KCollision::lookupBlock(f32 x, f32 y, f32 z, u16* outCount) const {
    if (!mBlockOffsets || !mBlockDataCopy || mNumBlocks == 0) {
        *outCount = 0;
        return nullptr;
    }

    // Use integer bit-shift to match original game behavior
    s32 rx = static_cast<s32>(x - mAreaMinPos.x);
    s32 ry = static_cast<s32>(y - mAreaMinPos.y);
    s32 rz = static_cast<s32>(z - mAreaMinPos.z);

    u32 bx = (rx >= 0) ? static_cast<u32>(rx) >> mBlockWidthShift : 0;
    u32 by = (ry >= 0) ? static_cast<u32>(ry) >> mBlockWidthShift : 0;
    u32 bz = (rz >= 0) ? static_cast<u32>(rz) >> mBlockWidthShift : 0;

    bx &= mAreaXWidthMask;
    by &= mAreaYWidthMask;
    bz &= mAreaZWidthMask;

    u32 linear = bx | (by << mAreaXBlocksShift) | (bz << mAreaXYBlocksShift);

    if (linear >= mNumBlocks) {
        *outCount = 0;
        return nullptr;
    }

    u32 blockOff = mBlockOffsets[linear];
    if (blockOff >= mBlockDataSize) {
        *outCount = 0;
        return nullptr;
    }

    const u16* data = reinterpret_cast<const u16*>(mBlockDataCopy + blockOff);
    *outCount = data[0];
    return data + 1;
}

// ============================================================================
// Vertex/Triangle/Normals Access
// ============================================================================

void KCollision::getVertex(u32 vertIdx, EGG::Vector3f& out) const {
    if (vertIdx < mNumVertices) {
        out = mVertices[vertIdx];
    } else {
        out.setZero();
    }
}

void KCollision::getTriangleNormal(u32 triIdx, f32* outNormal) {
    if (triIdx >= mNumPrisms || !mNormals) {
        outNormal[0] = 0.0f;
        outNormal[1] = 0.0f;
        outNormal[2] = 1.0f;
        return;
    }
    u16 nIdx = mPrisms[triIdx].normalIndex;
    if (nIdx < mNumNormals) {
        outNormal[0] = mNormals[nIdx].x;
        outNormal[1] = mNormals[nIdx].y;
        outNormal[2] = mNormals[nIdx].z;
    } else {
        // Compute from cross product of triangle edges
        u16 v0 = mPrisms[triIdx].vertexIndices[0];
        u16 v1 = mPrisms[triIdx].vertexIndices[1];
        u16 v2 = mPrisms[triIdx].vertexIndices[2];
        if (v0 < mNumVertices && v1 < mNumVertices && v2 < mNumVertices) {
            EGG::Vector3f e1 = mVertices[v1] - mVertices[v0];
            EGG::Vector3f e2 = mVertices[v2] - mVertices[v0];
            EGG::Vector3f n = EGG::TVector3<f32>::cross(e1, e2);
            f32 len = std::sqrt(n.squaredLength());
            if (len > 0.0001f) {
                n = n * (1.0f / len);
                outNormal[0] = n.x;
                outNormal[1] = n.y;
                outNormal[2] = n.z;
                return;
            }
        }
        outNormal[0] = 0.0f;
        outNormal[1] = 1.0f;
        outNormal[2] = 0.0f;
    }
}

u32 KCollision::getTriangleAttribute(u32 triIdx) {
    if (triIdx >= mNumPrisms) return 0;
    return mPrisms[triIdx].attribute;
}

// ============================================================================
// AABB Overlap
// ============================================================================

bool KCollision::aabbOverlap(const f32* aMin, const f32* aMax,
                              const f32* bMin, const f32* bMax) {
    return (aMin[0] <= bMax[0] && aMax[0] >= bMin[0]) &&
           (aMin[1] <= bMax[1] && aMax[1] >= bMin[1]) &&
           (aMin[2] <= bMax[2] && aMax[2] >= bMin[2]);
}

// ============================================================================
// Octree Traversal — collect candidate prism indices for a sphere query
// Uses the recursive octree (searchBlock / searchMultiBlock) matching
// the original RKGndCol algorithm.
// ============================================================================

void KCollision::collectPrisms(f32 x, f32 y, f32 z, f32 radius,
                                u32* prismBuf, u32* prismCount,
                                u32 maxPrisms) const {
    *prismCount = 0;

    if (!mPrisms || mNumPrisms == 0) return;

    if (!mBlockDataCopy || mBlockDataSize < 32) {
        // No octree — fall back to scanning all prisms
        u32 count = std::min(mNumPrisms, maxPrisms);
        for (u32 i = 0; i < count; i++) {
            prismBuf[i] = i;
        }
        *prismCount = count;
        return;
    }

    EGG::Vector3f pos(x, y, z);
    mCollectedCount = 0;

    // Clamp radius to sphere_radius from header (like original)
    f32 searchRadius = radius;
    if (mSphereRadius > 0.0f && searchRadius > mSphereRadius) {
        searchRadius = mSphereRadius;
    }

    if (searchRadius > 0.0f) {
        // Multi-block search for non-zero radius
        searchMultiBlock(pos, searchRadius, &KCollision::collectPrismList);
    } else {
        // Single block search for point queries
        const u16* list = searchBlock(pos);
        if (list) {
            // Need to make a mutable copy for collectPrismList
            // (collectPrismList takes u16* not const u16*)
            u16 count = list[0];
            for (u16 i = 0; i < count && *prismCount < maxPrisms; i++) {
                u32 idx = list[1 + i];
                if (idx < mNumPrisms) {
                    prismBuf[(*prismCount)++] = idx;
                }
            }
            return;
        }
    }

    // Copy from collected buffer to output
    u32 count = std::min(mCollectedCount, maxPrisms);
    for (u32 i = 0; i < count; i++) {
        prismBuf[i] = mCollectedPrisms[i];
    }
    *prismCount = count;
}

// ============================================================================
// Octree Traversal — collect candidate prism indices for a ray query
//
// Builds an AABB along the ray and checks all blocks that overlap with it.
// ============================================================================

void KCollision::collectPrismsRay(const f32* origin, const f32* dir, f32 maxDist,
                                   u32* prismBuf, u32* prismCount,
                                   u32 maxPrisms) const {
    *prismCount = 0;

    if (!mPrisms || mNumPrisms == 0) return;

    if (!mBlockDataCopy || mBlockDataSize < 32 || !mBlockOffsets || mNumBlocks == 0) {
        // No octree — scan all prisms
        u32 count = std::min(mNumPrisms, maxPrisms);
        for (u32 i = 0; i < count; i++) {
            prismBuf[i] = i;
        }
        *prismCount = count;
        return;
    }

    // Build a large AABB along the ray
    f32 qmin[3], qmax[3];
    for (int i = 0; i < 3; i++) {
        f32 end = origin[i] + dir[i] * maxDist;
        qmin[i] = std::min(origin[i], end) - 1.0f;
        qmax[i] = std::max(origin[i], end) + 1.0f;
    }

    // Use integer bit-shift for block index computation (matching original)
    s32 rxmin = static_cast<s32>(qmin[0] - mAreaMinPos.x);
    s32 rymin = static_cast<s32>(qmin[1] - mAreaMinPos.y);
    s32 rzmin = static_cast<s32>(qmin[2] - mAreaMinPos.z);
    s32 rxmax = static_cast<s32>(qmax[0] - mAreaMinPos.x);
    s32 rymax = static_cast<s32>(qmax[1] - mAreaMinPos.y);
    s32 rzmax = static_cast<s32>(qmax[2] - mAreaMinPos.z);

    u32 minBx = (rxmin >= 0) ? static_cast<u32>(rxmin) >> mBlockWidthShift : 0;
    u32 minBy = (rymin >= 0) ? static_cast<u32>(rymin) >> mBlockWidthShift : 0;
    u32 minBz = (rzmin >= 0) ? static_cast<u32>(rzmin) >> mBlockWidthShift : 0;
    u32 maxBx = (rxmax >= 0) ? static_cast<u32>(rxmax) >> mBlockWidthShift : 0;
    u32 maxBy = (rymax >= 0) ? static_cast<u32>(rymax) >> mBlockWidthShift : 0;
    u32 maxBz = (rzmax >= 0) ? static_cast<u32>(rzmax) >> mBlockWidthShift : 0;

    // Clamp to valid range
    minBx = std::min(minBx, mAreaXWidthMask);
    minBy = std::min(minBy, mAreaYWidthMask);
    minBz = std::min(minBz, mAreaZWidthMask);
    maxBx = std::min(maxBx, mAreaXWidthMask);
    maxBy = std::min(maxBy, mAreaYWidthMask);
    maxBz = std::min(maxBz, mAreaZWidthMask);

    // Iterate over all blocks in range using legacy flat offset table
    for (u32 bz = minBz; bz <= maxBz && *prismCount < maxPrisms; bz++) {
        for (u32 by = minBy; by <= maxBy && *prismCount < maxPrisms; by++) {
            for (u32 bx = minBx; bx <= maxBx && *prismCount < maxPrisms; bx++) {
                u32 linear = bx | (by << mAreaXBlocksShift) | (bz << mAreaXYBlocksShift);
                if (linear >= mNumBlocks) continue;

                u32 blockOff = mBlockOffsets[linear];
                if (blockOff >= mBlockDataSize) continue;

                const u16* data = reinterpret_cast<const u16*>(mBlockDataCopy + blockOff);
                u16 count = data[0];

                for (u16 i = 0; i < count && *prismCount < maxPrisms; i++) {
                    u32 prismIdx = data[1 + i];
                    if (prismIdx < mNumPrisms) {
                        prismBuf[*prismCount] = prismIdx;
                        (*prismCount)++;
                    }
                }
            }
        }
    }
}

// ============================================================================
// Closest Point on Triangle
// ============================================================================

void KCollision::closestPointOnTriangle(const EGG::Vector3f& p,
                                         const EGG::Vector3f& a,
                                         const EGG::Vector3f& b,
                                         const EGG::Vector3f& c,
                                         EGG::Vector3f& closest) const {
    EGG::Vector3f ab = b - a;
    EGG::Vector3f ac = c - a;
    EGG::Vector3f ap = p - a;

    f32 d1 = ab.dot(ap);
    f32 d2 = ac.dot(ap);
    if (d1 <= 0.0f && d2 <= 0.0f) {
        closest = a;
        return;
    }

    EGG::Vector3f bp = p - b;
    f32 d3 = ab.dot(bp);
    f32 d4 = ac.dot(bp);
    if (d3 >= 0.0f && d4 <= d3) {
        closest = b;
        return;
    }

    f32 vc = d1 * d4 - d3 * d2;
    if (vc <= 0.0f && d1 >= 0.0f && d3 <= 0.0f) {
        f32 v = d1 / (d1 - d3);
        closest = a + ab * v;
        return;
    }

    EGG::Vector3f cp = p - c;
    f32 d5 = ab.dot(cp);
    f32 d6 = ac.dot(cp);
    if (d6 >= 0.0f && d5 <= d6) {
        closest = c;
        return;
    }

    f32 vb = d5 * d2 - d1 * d6;
    if (vb <= 0.0f && d2 >= 0.0f && d6 <= 0.0f) {
        f32 w = d2 / (d2 - d6);
        closest = a + ac * w;
        return;
    }

    f32 va = d3 * d6 - d5 * d4;
    if (va <= 0.0f && (d4 - d3) >= 0.0f && (d5 - d6) >= 0.0f) {
        f32 w = (d4 - d3) / ((d4 - d3) + (d5 - d6));
        closest = b + (c - b) * w;
        return;
    }

    f32 denom = 1.0f / (va + vb + vc);
    f32 v = vb * denom;
    f32 w = vc * denom;
    closest = a + ab * v + ac * w;
}

// ============================================================================
// Point-Triangle Signed Distance
// ============================================================================

f32 KCollision::pointTriangleDist(const EGG::Vector3f& p,
                                   const EGG::Vector3f& n,
                                   const EGG::Vector3f& a) const {
    return (p - a).dot(n);
}

// ============================================================================
// Sphere-Triangle Test
// ============================================================================

bool KCollision::testSphereTriangle(f32 cx, f32 cy, f32 cz, f32 radius,
                                     u32 prismIdx, f32* outDist,
                                     EGG::Vector3f* outNormal) const {
    if (prismIdx >= mNumPrisms) return false;

    const KCLTri& tri = mPrisms[prismIdx];

    if (tri.vertexIndices[0] >= mNumVertices) return false;
    if (tri.vertexIndices[1] >= mNumVertices) return false;
    if (tri.vertexIndices[2] >= mNumVertices) return false;

    EGG::Vector3f a = mVertices[tri.vertexIndices[0]];
    EGG::Vector3f b = mVertices[tri.vertexIndices[1]];
    EGG::Vector3f c = mVertices[tri.vertexIndices[2]];

    EGG::Vector3f center(cx, cy, cz);

    // Get triangle normal
    EGG::Vector3f triNormal;
    if (tri.normalIndex < mNumNormals && mNormals) {
        triNormal = mNormals[tri.normalIndex];
    } else {
        EGG::Vector3f e1 = b - a;
        EGG::Vector3f e2 = c - a;
        triNormal = EGG::TVector3<f32>::cross(e1, e2);
        f32 len = std::sqrt(triNormal.squaredLength());
        if (len > 0.0001f) {
            triNormal = triNormal * (1.0f / len);
        } else {
            return false;
        }
    }

    // Find closest point on triangle to sphere center
    EGG::Vector3f closest;
    closestPointOnTriangle(center, a, b, c, closest);

    EGG::Vector3f diff = center - closest;
    f32 distSq = diff.squaredLength();

    if (distSq > radius * radius) return false;

    f32 dist = std::sqrt(distSq);
    if (dist < 0.0001f) {
        *outNormal = triNormal;
        *outDist = -radius;
    } else {
        *outNormal = diff * (1.0f / dist);
        *outDist = dist - radius;
    }

    return true;
}

// ============================================================================
// Ray-Triangle Test (Möller–Trumbore)
//
// Fast, robust ray-triangle intersection test.
// Returns true if ray intersects the triangle, with hit parameter t.
// ============================================================================

bool KCollision::testRayTriangle(const f32* origin, const f32* dir,
                                  u32 prismIdx, f32* outT, f32* outU, f32* outV) const {
    if (prismIdx >= mNumPrisms) return false;

    const KCLTri& tri = mPrisms[prismIdx];
    if (tri.vertexIndices[0] >= mNumVertices) return false;
    if (tri.vertexIndices[1] >= mNumVertices) return false;
    if (tri.vertexIndices[2] >= mNumVertices) return false;

    const EGG::Vector3f& v0 = mVertices[tri.vertexIndices[0]];
    const EGG::Vector3f& v1 = mVertices[tri.vertexIndices[1]];
    const EGG::Vector3f& v2 = mVertices[tri.vertexIndices[2]];

    EGG::Vector3f o(origin[0], origin[1], origin[2]);
    EGG::Vector3f d(dir[0], dir[1], dir[2]);

    EGG::Vector3f e1 = v1 - v0;
    EGG::Vector3f e2 = v2 - v0;
    EGG::Vector3f h = EGG::TVector3<f32>::cross(d, e2);
    f32 a = e1.dot(h);

    if (a > -0.00001f && a < 0.00001f) return false; // parallel

    f32 f = 1.0f / a;
    EGG::Vector3f s = o - v0;
    f32 u = f * s.dot(h);
    if (u < 0.0f || u > 1.0f) return false;

    EGG::Vector3f q = EGG::TVector3<f32>::cross(s, e1);
    f32 v = f * d.dot(q);
    if (v < 0.0f || u + v > 1.0f) return false;

    f32 t = f * e2.dot(q);
    if (t < 0.0f) return false;

    *outT = t;
    *outU = u;
    *outV = v;
    return true;
}

// ============================================================================
// Sphere Collision — Public
// ============================================================================

bool KCollision::checkSphereCollision(f32 x, f32 y, f32 z, f32 radius,
                                       SphereColResult* result) {
    if (!isLoaded() || !result) return false;

    result->hit = false;
    result->dist = 999999.0f;
    result->attribute = 0;
    result->triIdx = 0xFFFFFFFF;
    result->normal.setZero();

    // Collect candidate prisms from octree
    static const u32 MAX_CANDIDATES = 256;
    u32 prismBuf[MAX_CANDIDATES];
    u32 prismCount = 0;
    collectPrisms(x, y, z, radius, prismBuf, &prismCount, MAX_CANDIDATES);

    // Test each candidate
    for (u32 i = 0; i < prismCount; i++) {
        f32 dist;
        EGG::Vector3f normal;
        if (testSphereTriangle(x, y, z, radius, prismBuf[i], &dist, &normal)) {
            if (dist < result->dist) {
                result->dist = dist;
                result->normal = normal;
                result->attribute = mPrisms[prismBuf[i]].attribute;
                result->triIdx = prismBuf[i];
                result->hit = true;
            }
        }
    }

    return result->hit;
}

// ============================================================================
// Ray Collision — Public
//
// Casts a ray and returns the closest intersection with a collision prism.
// Uses octree spatial index for fast candidate collection.
// ============================================================================

bool KCollision::checkRayCollision(f32* origin, f32* dir, f32 maxDist,
                                    RayColResult* result) {
    if (!isLoaded() || !result) return false;

    result->hit = false;
    result->t = maxDist;
    result->attribute = 0;

    // Collect candidate prisms from octree (along ray AABB)
    static const u32 MAX_CANDIDATES = 512;
    u32 prismBuf[MAX_CANDIDATES];
    u32 prismCount = 0;
    collectPrismsRay(origin, dir, maxDist, prismBuf, &prismCount, MAX_CANDIDATES);

    for (u32 i = 0; i < prismCount; i++) {
        f32 t, u, v;
        if (testRayTriangle(origin, dir, prismBuf[i], &t, &u, &v)) {
            if (t < result->t && t >= 0.0f) {
                result->t = t;
                result->pos = EGG::Vector3f(
                    origin[0] + dir[0] * t,
                    origin[1] + dir[1] * t,
                    origin[2] + dir[2] * t
                );
                getTriangleNormal(prismBuf[i], (f32*)&result->normal);
                result->attribute = mPrisms[prismBuf[i]].attribute;
                result->hit = true;
            }
        }
    }

    return result->hit;
}

// ============================================================================
// Capsule Collision — Public
// ============================================================================

bool KCollision::checkCapsuleCollision(f32* p1, f32* p2, f32 radius,
                                        CapsuleColResult* result) {
    if (!isLoaded() || !result) return false;

    result->hit = false;
    result->dist = 999999.0f;
    result->attribute = 0;

    EGG::Vector3f segA(p1[0], p1[1], p1[2]);
    EGG::Vector3f segB(p2[0], p2[1], p2[2]);
    EGG::Vector3f segDir = segB - segA;
    f32 segLen = std::sqrt(segDir.squaredLength());
    if (segLen < 0.0001f) {
        // Degenerate capsule → sphere
        SphereColResult sRes;
        bool hit = checkSphereCollision(p1[0], p1[1], p1[2], radius, &sRes);
        if (hit) {
            result->dist = sRes.dist;
            result->normal = sRes.normal;
            result->contact = segA;
            result->attribute = sRes.attribute;
            result->hit = true;
        }
        return hit;
    }
    segDir = segDir * (1.0f / segLen);

    // Build AABB around capsule midpoint
    EGG::Vector3f mid = (segA + segB) * 0.5f;
    f32 halfLen = segLen * 0.5f + radius;

    static const u32 MAX_CANDIDATES = 256;
    u32 prismBuf[MAX_CANDIDATES];
    u32 prismCount = 0;
    collectPrisms(mid.x, mid.y, mid.z, halfLen, prismBuf, &prismCount, MAX_CANDIDATES);

    for (u32 i = 0; i < prismCount; i++) {
        u32 tIdx = prismBuf[i];

        const s32 SAMPLES = 4;
        for (s32 s = 0; s <= SAMPLES; s++) {
            f32 t = f32(s) / f32(SAMPLES);
            EGG::Vector3f samplePt = segA + (segB - segA) * t;

            f32 dist;
            EGG::Vector3f normal;
            if (testSphereTriangle(samplePt.x, samplePt.y, samplePt.z,
                                   radius, tIdx, &dist, &normal)) {
                if (dist < result->dist) {
                    result->dist = dist;
                    result->normal = normal;
                    result->contact = samplePt + normal * (-dist);
                    result->attribute = mPrisms[tIdx].attribute;
                    result->hit = true;
                }
            }
        }
    }

    return result->hit;
}

// ============================================================================
// Floor Detection
//
// Casts a ray downward from (x, y, z) and finds the highest floor triangle.
// Uses KCL_TYPE_FLOOR bitmask to filter for drivable surface types.
// ============================================================================

bool KCollision::getFloor(f32 x, f32 y, f32 z, f32* outY, f32* outNormal) {
    if (!isLoaded()) return false;

    // Search for floor triangles below the given point
    f32 origin[3] = { x, y, z };
    f32 dir[3] = { 0.0f, -1.0f, 0.0f };
    f32 maxDist = 2000.0f;

    RayColResult result;
    if (checkRayCollision(origin, dir, maxDist, &result)) {
        // Check if the hit triangle is a floor type using correct bitmask
        u32 typeBit = KCL_ATTRIBUTE_TYPE_BIT(result.attribute);
        if (typeBit & KCL_TYPE_FLOOR) {
            if (outY) *outY = result.pos.y;
            if (outNormal) {
                outNormal[0] = result.normal.x;
                outNormal[1] = result.normal.y;
                outNormal[2] = result.normal.z;
            }
            return true;
        }
    }

    return false;
}

// ============================================================================
// Cached Sphere Collision — lookupSphereCached
//
// Matches RKGndCol::lookupSphereCached: caches the block lookup result
// and reuses it if the new query position falls within the cached sphere.
// This avoids redundant octree traversals for small movements between frames.
// ============================================================================

void KCollision::lookupSphereCached(const EGG::Vector3f& pos, const EGG::Vector3f& prevPos,
                                     u32 typeMask, f32 radius) {
    // Clamp radius to sphere_radius (like original)
    f32 searchRadius = radius;
    if (mSphereRadius > 0.0f && searchRadius > mSphereRadius) {
        searchRadius = mSphereRadius;
    }

    // Cache miss check: if current position + radius doesn't fit within
    // the cached sphere (cachedPos, cachedRadius), do a fresh lookup.
    // Original: isSphereContainedInOther(pos, radius, cachedPos, cachedRadius)
    bool cacheMiss = true;
    if (mPrismCacheCount > 0) {
        EGG::Vector3f diff = pos - mCachedPos;
        f32 dist = std::sqrt(diff.squaredLength());
        // Cache hit if pos + radius fits within cachedPos + cachedRadius
        cacheMiss = (dist + searchRadius) > (mCachedRadius + 0.01f);
    }

    if (cacheMiss) {
        // Fresh lookup
        mPrismCacheCount = 0;
        mCollectedCount = 0;
        if (mBlockDataCopy && mBlockDataSize >= 32) {
            searchMultiBlock(pos, searchRadius, &KCollision::collectPrismList);
            // Copy collected prisms to cache
            u32 count = std::min(mCollectedCount, PRISM_CACHE_SIZE);
            for (u32 i = 0; i < count; i++) {
                mPrismCache[i] = mCollectedPrisms[i];
            }
            mPrismCacheCount = count;
        }
        // Update cache metadata
        mCachedPos = pos;
        mCachedRadius = searchRadius;
    }
    // else: cache hit — reuse mPrismCache

    // Set up current query state
    mQueryPos = pos;
    mQueryPrevPos = prevPos;
    mQueryMovement = pos - prevPos;
    mQueryRadius = searchRadius;
    mQueryTypeMask = typeMask;
}

// ============================================================================
// Cached Sphere Collision — checkSphereCachedCollision
//
// Iterates through the cached prism list and tests each against the sphere.
// Matches RKGndCol::checkSphereCollision after a lookup.
// Applies movement-aware filtering: only counts collisions where the
// movement vector has an acute angle with the prism face normal (like
// RKGndCol::checkSphereMovement).
// ============================================================================

bool KCollision::checkSphereCachedCollision(f32* distOut, EGG::Vector3f* fnrmOut,
                                            u32* attributeOut) {
    if (mPrismCacheCount == 0 || !isLoaded()) return false;

    f32 bestDist = 999999.0f;
    EGG::Vector3f bestNormal;
    bestNormal.setZero();
    u32 bestAttr = 0;
    bool anyHit = false;

    for (u32 i = 0; i < mPrismCacheCount; i++) {
        u32 prismIdx = mPrismCache[i];
        if (prismIdx >= mNumPrisms) continue;

        // Type mask filter
        u32 attr = mPrisms[prismIdx].attribute;
        if ((KCL_ATTRIBUTE_TYPE_BIT(attr) & mQueryTypeMask) == 0) continue;

        // Sphere-triangle test
        f32 dist;
        EGG::Vector3f normal;
        if (!testSphereTriangle(mQueryPos.x, mQueryPos.y, mQueryPos.z,
                                 mQueryRadius, prismIdx, &dist, &normal)) {
            continue;
        }

        // Movement-aware filtering (matching RKGndCol::checkSphereMovement):
        // Only count collision if movement has a component toward the surface.
        // This prevents spurious collisions when moving away from a surface.
        if (std::isfinite(mQueryPrevPos.y)) {
            f32 moveDotNormal = mQueryMovement.dot(normal);
            if (moveDotNormal > 0.0f) continue; // Moving away from surface
        }

        if (dist < bestDist) {
            bestDist = dist;
            bestNormal = normal;
            bestAttr = attr;
            anyHit = true;
        }
    }

    if (anyHit) {
        if (distOut) *distOut = bestDist;
        if (fnrmOut) *fnrmOut = bestNormal;
        if (attributeOut) *attributeOut = bestAttr;
    }

    return anyHit;
}

// ============================================================================
// Narrow-scope local check
//
// Matches RKGndCol::narrowScopeLocal: collects prisms around pos within
// radius, stores them in the prism cache, and marks them for collision checking.
// ============================================================================

void KCollision::narrowScopeLocal(const EGG::Vector3f& pos, f32 radius, u32 typeMask) {
    mPrismCacheCount = 0;
    mCollectedCount = 0;
    mCachedPos = pos;
    mCachedRadius = radius;
    mCachedTypeMask = typeMask;

    if (!mBlockDataCopy || mBlockDataSize < 32) return;

    f32 searchRadius = radius;
    if (mSphereRadius > 0.0f && searchRadius > mSphereRadius) {
        searchRadius = mSphereRadius;
    }

    searchMultiBlock(pos, searchRadius, &KCollision::collectPrismList);

    u32 count = std::min(mCollectedCount, PRISM_CACHE_SIZE);
    for (u32 i = 0; i < count; i++) {
        mPrismCache[i] = mCollectedPrisms[i];
    }
    mPrismCacheCount = count;
}

} // namespace Field
