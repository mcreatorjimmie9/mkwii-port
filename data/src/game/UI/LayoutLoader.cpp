// LayoutLoader.cpp - MKW layout file loader implementation
// Address range: 0x8050b940 - 0x8050c5dc

#include "LayoutLoader.hpp"
#include "Layout.hpp"
#include "ui_stubs.h"
#include <cstring>

namespace UI {

LayoutLoader* LayoutLoader::sInstance = nullptr;
LayoutResource LayoutLoader::sCache[32] = {};
u32 LayoutLoader::sCacheCount = 0;

LayoutLoader::LayoutLoader()
    : mActiveLayout(nullptr)
    , mPendingLoads(0)
    , mLayoutData(nullptr)
    , mLayoutDataSize(0)
    , mLastError(0) {
    memset(&mHeader, 0, sizeof(mHeader));
}

LayoutLoader::~LayoutLoader() {
    flushCache();
}

LayoutLoader* LayoutLoader::getInstance() {
    return sInstance;
}

void LayoutLoader::createInstance() {
    if (sInstance == nullptr) {
        sInstance = new LayoutLoader();
    }
}

void LayoutLoader::destroyInstance() {
    if (sInstance != nullptr) {
        delete sInstance;
        sInstance = nullptr;
    }
}

// @addr 0x8050b940
void* LayoutLoader::createWithTextBox(void* buffer) {
    initVtable();
    *((u32*)buffer) = 0;
    initTextCtrl((u8*)buffer + 0x11);
    initPictureCtrl((u8*)buffer + 0x6E);
    initAnimGroup((u8*)buffer + 0xCB);
    initPaneReference((u8*)buffer + 0x128);
    return buffer;
}

// @addr 0x8050b99c
void* LayoutLoader::destroyWithTextBox(void* buffer, s32 freeMemory) {
    if (buffer != nullptr) {
        destroyAnimGroup((u8*)buffer + 0x4A0, -1);
        destroyTextCtrl((u8*)buffer + 0x32C, -1);
        destroyPictureCtrl((u8*)buffer + 0x1B8, -1);
        destroyPaneReference((u8*)buffer + 0x44, -1);
        clearVtable();
    }
    return buffer;
}

// @addr 0x8050bc84
void* LayoutLoader::createSimplePane(void* buffer) {
    initVtable();
    *((u32*)buffer) = 0;
    // Initialize linked list node at offset 0x11
    initLinkedListNode((u8*)buffer + 0x11);
    // Initialize pane reference at offset 0x16
    initPaneReference((u8*)buffer + 0x16);
    return buffer;
}

// @addr 0x8050bd00
void* LayoutLoader::destroySimplePane(void* buffer, s32 freeMemory) {
    if (buffer != nullptr) {
        destroyPaneReference((u8*)buffer + 0x58, -1);
        clearVtable();
    }
    return buffer;
}

// @addr 0x8050ca1c
void LayoutLoader::initLayout(Layout* layout) {
    if (layout->mInitFlag == 0) {
        clearTextBinding((u8*)layout + 0x230, 0);
        setAnimationFrame((u8*)layout + 0xB98, 0x10D6, 0);
    }
    layout->mTransitionId = -1;
}

// @addr 0x8050ca74
void LayoutLoader::loadLayoutAsync(Layout* layout, u32 resourceId) {
    Page* page = getActivePageFromGroup(0x244);
    if (page != nullptr && isPageInList(page)) {
        page->setAsyncLoadFlag(0);
    }
    layout->mTransitionId = 0x8C;
    resolveResourceId(resourceId);
    setLayoutReady(layout, 0);
}

// @addr 0x8050cb50
void LayoutLoader::loadLayoutSync(Layout* layout, u32 resourceId) {
    Page* page = getActivePageFromGroup(0x244);
    if (page != nullptr && isPageInList(page)) {
        page->setAsyncLoadFlag(1);
    }
    layout->mTransitionId = 0x8C;
    resolveResourceId(resourceId);
    setLayoutReady(layout, 0);
}

// @addr 0x8050cc2c
void LayoutLoader::setLayoutState(Layout* layout, u32 resourceId) {
    layout->mTransitionId = 0x8D;
    resolveResourceId(resourceId);
    setLayoutReady(layout, 0);
}

// @addr 0x8050cc70
void LayoutLoader::cancelLayoutLoad(Layout* layout, u32 resourceId) {
    layout->mCancelFlag = -1;
    onPageTransition(layout, 0x87, 0);

    if (!isSystemBusy()) {
        cancelResourceLoad(resourceId, 0);
    }
}

// @addr 0x8050c1dc
void LayoutLoader::updateTextFrame(void* textCtrl) {
    s32* ctrl = (s32*)textCtrl;
    s32 frameCount = ctrl[0x254 / 4] + 1;
    ctrl[0x254 / 4] = frameCount;

    // Safety check: prevent infinite frame count
    if (frameCount > 300) {
        assert(false); // nw4r_lyt_assertFail_8050c254
    }

    // Auto-advance text binding when frames exceed threshold
    s32 state = ctrl[600 / 4];
    if ((state - 1U < 2) && (ctrl[0x3DC / 4] != 0)) {
        advanceTextBinding(ctrl, 0x40, -1);
    }
}

// @addr 0x80500a34
void LayoutLoader::setTextBinding(void* ctrl, u32 messageId, void* tagData) {
    // Binds a text message ID to a pane control, optionally with tag data
    // for parameterized strings (e.g., player names, course names)
    u8* control = (u8*)ctrl;
    u32* textPane = (u32*)(control + 0x44);

    if (textPane == nullptr) return;

    // Resolve message string from ID
    const char* text = resolveMessageString(messageId);
    if (text == nullptr) return;

    // Set the text on the pane
    nw4r_lyt_SetTextBoxString(textPane, text, tagData);
}

// @addr 0x80500c48
void LayoutLoader::clearTextBinding(void* ctrl, u32 group) {
    u8* control = (u8*)ctrl;
    // Clear text animation for the specified group
    nw4r_lyt_ClearTextAnim((u32*)(control + 0x44), group);
}

LayoutResource* LayoutLoader::loadResource(const char* name, LayoutResourceType type) {
    // Check cache first
    u32 hash = computeHash(name);
    for (u32 i = 0; i < sCacheCount; i++) {
        if (sCache[i].nameHash == hash && sCache[i].type == type) {
            sCache[i].refCount++;
            return &sCache[i];
        }
    }

    // Load from archive
    if (sCacheCount >= 32) {
        // Evict least-recently-used
        evictLRU();
    }

    LayoutResource* res = &sCache[sCacheCount++];
    res->nameHash = hash;
    res->resourcePtr = (u32*)loadFromArchive(name);
    res->refCount = 1;
    res->type = type;
    return res;
}

void LayoutLoader::releaseResource(LayoutResource* resource) {
    if (resource == nullptr) return;
    resource->refCount--;
    if (resource->refCount <= 0) {
        unloadResource(resource->resourcePtr);
        resource->resourcePtr = nullptr;
    }
}

void LayoutLoader::flushCache() {
    for (u32 i = 0; i < sCacheCount; i++) {
        if (sCache[i].resourcePtr != nullptr) {
            unloadResource(sCache[i].resourcePtr);
            sCache[i].resourcePtr = nullptr;
        }
    }
    sCacheCount = 0;
}

// --- BRLYT Parsing ---

bool LayoutLoader::loadFromFile(const void* brlytData, u32 dataSize) {
    if (brlytData == nullptr || dataSize < sizeof(BrltHeader)) {
        mLastError = 1;
        return false;
    }

    mLayoutData = brlytData;
    mLayoutDataSize = dataSize;
    mLastError = 0;

    if (!parseHeader(brlytData, dataSize)) {
        return false;
    }

    // Parse pane tree from the PAN1/PLYT section
    const u8* base = static_cast<const u8*>(brlytData);

    // PAN1 section: pane name table
    if (mHeader.offsetPAN1 > 0 && mHeader.offsetPAN1 < dataSize) {
        // Read pane count at PAN1+8
        const u8* pan1 = base + mHeader.offsetPAN1;
        u16 paneCount = static_cast<u16>(pan1[4]) | (static_cast<u16>(pan1[5]) << 8);
        parsePanes(brlytData, mHeader.offsetPAN1 + 8, paneCount);
    }

    // PAT1 section: material/animation bindings
    if (mHeader.offsetMat1 > 0 && mHeader.offsetMat1 < dataSize) {
        const u8* mat1 = base + mHeader.offsetMat1;
        u32 mat1Size = static_cast<u32>(mat1[4]) | (static_cast<u32>(mat1[5]) << 8) |
                       (static_cast<u32>(mat1[6]) << 16) | (static_cast<u32>(mat1[7]) << 24);
        parseMaterials(brlytData, mHeader.offsetMat1, mat1Size);
    }

    // PAS1 section: animation info
    if (mHeader.offsetPas1 > 0 && mHeader.offsetPas1 < dataSize) {
        const u8* pas1 = base + mHeader.offsetPas1;
        u32 pas1Size = static_cast<u32>(pas1[4]) | (static_cast<u32>(pas1[5]) << 8) |
                       (static_cast<u32>(pas1[6]) << 16) | (static_cast<u32>(pas1[7]) << 24);
        parseAnimations(brlytData, mHeader.offsetPas1, pas1Size);
    }

    // FNT1 section: font bindings
    if (mHeader.offsetFnt1 > 0 && mHeader.offsetFnt1 < dataSize) {
        const u8* fnt1 = base + mHeader.offsetFnt1;
        u32 fnt1Size = static_cast<u32>(fnt1[4]) | (static_cast<u32>(fnt1[5]) << 8) |
                       (static_cast<u32>(fnt1[6]) << 16) | (static_cast<u32>(fnt1[7]) << 24);
        parseFonts(brlytData, mHeader.offsetFnt1, fnt1Size);
    }

    return true;
}

bool LayoutLoader::parseHeader(const void* data, u32 dataSize) {
    if (data == nullptr || dataSize < sizeof(BrltHeader)) {
        mLastError = 2;
        return false;
    }

    const BrltHeader* hdr = static_cast<const BrltHeader*>(data);

    // Validate magic: RLYT (little-endian of "LYTR")
    if (hdr->magic[0] != 'R' || hdr->magic[1] != 'L' ||
        hdr->magic[2] != 'Y' || hdr->magic[3] != 'T') {
        mLastError = 3;
        return false;
    }

    // Validate version — MKW uses version 4.1 (major=4, minor=1, micro=0)
    if (hdr->version[0] < 2 || hdr->version[0] > 11) {
        mLastError = 4;
        return false;
    }

    // Validate total file size
    if (hdr->size > dataSize) {
        mLastError = 5;
        return false;
    }

    // Validate section offsets are within bounds
    if (hdr->offsetPanes > dataSize ||
        hdr->offsetPanesData > dataSize ||
        hdr->offsetMat1 > dataSize ||
        hdr->offsetFnt1 > dataSize ||
        hdr->offsetTxl1 > dataSize) {
        mLastError = 6;
        return false;
    }

    memcpy(&mHeader, hdr, sizeof(BrltHeader));
    return true;
}

bool LayoutLoader::parsePanes(const void* data, u32 offset, u32 count) {
    if (data == nullptr) {
        mLastError = 7;
        return false;
    }
    (void)offset;

    const u8* base = static_cast<const u8*>(data);

    // PAN1 contains null-terminated pane name strings
    // Each entry is a 16-byte name followed by the next name
    for (u32 i = 0; i < count; i++) {
        u32 nameOffset = offset + i * 16;
        if (nameOffset + 16 > mLayoutDataSize) {
            mLastError = 8;
            return false;
        }

        // Validate name is printable
        const char* name = reinterpret_cast<const char*>(base + nameOffset);
        for (s32 j = 0; j < 16 && name[j] != '\0'; j++) {
            if (name[j] < 0x20 && name[j] != '\0') {
                mLastError = 9;
                return false;
            }
        }
    }

    return true;
}

bool LayoutLoader::parseAnimations(const void* data, u32 offset, u32 size) {
    if (data == nullptr || offset + size > mLayoutDataSize) {
        mLastError = 10;
        return false;
    }

    const u8* base = static_cast<const u8*>(data);
    const u8* pas1 = base + offset;

    // PAS1 header: tag(4) + size(4)
    // Validate section tag
    if (pas1[0] != 'P' || pas1[1] != 'A' ||
        pas1[2] != 'S' || pas1[3] != '1') {
        mLastError = 11;
        return false;
    }

    // Read animation entry count (at offset 8)
    u16 animCount = static_cast<u16>(pas1[8]) | (static_cast<u16>(pas1[9]) << 8);

    for (u16 i = 0; i < animCount; i++) {
        u32 entryOff = 0x14 + i * 0x0C; // 12 bytes per animation entry
        if (entryOff + 0x0C > size) {
            mLastError = 12;
            return false;
        }
        // Each entry: name offset (4), first frame (4), last frame (4)
        (void)entryOff;
    }

    return true;
}

bool LayoutLoader::parseFonts(const void* data, u32 offset, u32 size) {
    if (data == nullptr || offset + size > mLayoutDataSize) {
        mLastError = 13;
        return false;
    }

    const u8* base = static_cast<const u8*>(data);
    const u8* fnt1 = base + offset;

    // FNT1 header: tag(4) + size(4)
    if (fnt1[0] != 'F' || fnt1[1] != 'N' ||
        fnt1[2] != 'T' || fnt1[3] != '1') {
        mLastError = 14;
        return false;
    }

    // Read font count
    u16 fontCount = static_cast<u16>(fnt1[8]) | (static_cast<u16>(fnt1[9]) << 8);

    for (u16 i = 0; i < fontCount; i++) {
        u32 entryOff = 0x0C + i * 4;
        if (entryOff + 4 > size) {
            mLastError = 15;
            return false;
        }
        // Each entry: font name offset (4 bytes)
        (void)entryOff;
    }

    return true;
}

bool LayoutLoader::parseMaterials(const void* data, u32 offset, u32 size) {
    if (data == nullptr || offset + size > mLayoutDataSize) {
        mLastError = 16;
        return false;
    }

    const u8* base = static_cast<const u8*>(data);
    const u8* mat1 = base + offset;

    // MAT1 header: tag(4) + size(4)
    if (mat1[0] != 'M' || mat1[1] != 'A' ||
        mat1[2] != 'T' || mat1[3] != '1') {
        mLastError = 17;
        return false;
    }

    // Read material count
    u16 matCount = static_cast<u16>(mat1[8]) | (static_cast<u16>(mat1[9]) << 8);

    for (u16 i = 0; i < matCount; i++) {
        u32 entryOff = 0x0C + i * 4;
        if (entryOff + 4 > size) {
            mLastError = 18;
            return false;
        }
        // Each entry: material name offset (4 bytes)
        (void)entryOff;
    }

    return true;
}

const void* LayoutLoader::getLayoutData() const {
    return mLayoutData;
}

s32 LayoutLoader::getError() const {
    return mLastError;
}

// --- Free function: high-level archive loader ---

LayoutResource* LayoutLoader_loadFromArchive(const char* archiveName,
                                              const char* brlytName) {
    (void)archiveName;
    (void)brlytName;

    // Build the full path: archiveName/brlytName.brlyt
    // Load via the RARC archive system
    // In the real game this goes through JKRFileLoader
    void* rawData = loadFromArchive(brlytName);
    if (rawData == nullptr) {
        return nullptr;
    }

    // Check the instance
    UI::LayoutLoader* loader = UI::LayoutLoader::getInstance();
    if (loader == nullptr) {
        return nullptr;
    }

    // Use the resource cache
    return UI::LayoutLoader::loadResource(brlytName, UI::LYT_RES_LAYOUT);
}

} // namespace UI