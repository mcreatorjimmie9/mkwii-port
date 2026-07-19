// LayoutLoader.cpp - MKW layout file loader implementation
// Address range: 0x8050b940 - 0x8050c5dc

#include "LayoutLoader.hpp"
#include "Layout.hpp"
#include "ui_stubs.h"

namespace UI {

LayoutLoader* LayoutLoader::sInstance = nullptr;
LayoutResource LayoutLoader::sCache[32] = {};
u32 LayoutLoader::sCacheCount = 0;

LayoutLoader::LayoutLoader()
    : mActiveLayout(nullptr)
    , mPendingLoads(0) {
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

} // namespace UI