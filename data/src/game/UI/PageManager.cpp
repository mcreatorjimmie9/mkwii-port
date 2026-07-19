// PageManager.cpp - Page pool and lifecycle manager implementation
// Address range: 0x8062559c - 0x80625ec0

#include "PageManager.hpp"
#include "MenuPage.hpp"
#include "Layout.hpp"
#include "ui_stubs.h"

namespace UI {

PageManager::PageManager()
    : mActiveCount(0)
    , mInactiveCount(0)
    , mLayoutGroupA(0)
    , mLayoutGroupB(0)
    , mLayoutGroupC(0)
    , mSharedLayout(0)
    , mFocusIndex(0)
    , mTransitionFlags(0)
    , mDrawFlags(0)
    , mUpdateFlags(0)
    , mInitFlags(1) {
    memset(mActivePages, 0, sizeof(mActivePages));
    memset(mInactivePages, 0, sizeof(mInactivePages));
}

PageManager::~PageManager() {
    releaseAllPages();
}

// @addr 0x8062559c
void* PageManager::destroy(void* buffer, s32 shouldFree) {
    if (buffer == nullptr) return nullptr;

    PageManager* mgr = (PageManager*)buffer;

    // Release all layout groups
    u32 groupA = mgr->mLayoutGroupA;
    mgr->mTransitionFlags = 0;
    if (groupA != 0) {
        releaseLayoutGroup(groupA);
    }

    u32 groupB = mgr->mLayoutGroupB;
    mgr->mLayoutGroupA = 0;
    if (groupB != 0) {
        releaseLayoutGroup(groupB);
    }

    u32 groupC = mgr->mLayoutGroupC;
    mgr->mLayoutGroupB = 0;
    if (groupC != 0) {
        releaseLayoutGroup(groupC);
    }
    mgr->mLayoutGroupC = 0;

    // Validate no layout still bound
    if (mgr->mSharedLayout != 0) {
        assert(false); // Page should not have bound layout at destroy
    }
    mgr->mSharedLayout = 0;

    if (shouldFree > 0) {
        free(buffer);
    }
    return buffer;
}

// @addr 0x8062568c
void PageManager::addPage(MenuPage* page, s32 poolIndex) {
    s32 isInactive = findPageByType(page->getPageId());
    if (isInactive == 0) {
        // Add to inactive pool
        u32 pageRef = getAnimGroupRef(page);
        mInactivePages[mInactiveCount].animGroupRef = pageRef;
        mInactiveCount++;
    } else {
        // Add to active pool
        u32 pageRef = getAnimGroupRef(page);
        mActivePages[mActiveCount].animGroupRef = pageRef;
        mActiveCount++;
    }
}

// @addr 0x8062573c
void PageManager::initAllPages() {
    // Initialize all layout groups
    initLayoutGroup(mLayoutGroupA);
    initLayoutGroup(mLayoutGroupB);
    initLayoutGroup(mLayoutGroupC);

    // Clear shared layout
    if (mSharedLayout != nullptr) *mSharedLayout = 0;

    // Determine which page population to use
    s32 isOnline = getOnlineMode();
    if (isOnline == 0) {
        populateStandardPages(isWideScreen());
    } else {
        populateOnlinePages(isWideScreen());
    }

    // Reset state flags
    mFocusIndex = 0;
    mTransitionFlags = 0;
    mDrawFlags = 0;
    mUpdateFlags = 0;
    mInitFlags = 1;

    // Configure draw order
    configureDrawOrder(this, this + 0x38);
}

// @addr 0x80625828
void PageManager::setFocusIndex(s32 index) {
    setLayoutGroupFrameCount(mLayoutGroupA, index);
}

// @addr 0x80625834
void PageManager::updateAllPages() {
    if (mInactiveCount <= 0) return;

    f32 minDepth = getMaxDrawDistance();

    // Update all inactive pages
    for (u32 i = 0; i < mInactiveCount; i++) {
        updatePageDrawOrder(mInactivePages[i].animGroupRef);
    }

    // Update all active pages
    for (u32 i = 0; i < mActiveCount; i++) {
        updatePageDrawOrder(mActivePages[i].animGroupRef);
    }

    // Sort pages by depth
    sortPagesByDepth();

    // Calculate depth spacing for inactive pages
    if (mInactivePages[0].animGroupRef != 0) {
        f32 baseDepth = getPageDepth(mInactivePages[0].animGroupRef);
        for (u32 i = 1; i < mInactiveCount; i++) {
            f32 delta = baseDepth - getPageDepth(mInactivePages[i].animGroupRef);
            if (delta < minDepth) {
                delta = minDepth;
            }
            setPageDepth(mInactivePages[i].animGroupRef, delta);
        }
    }

    // Trigger draw callback
    triggerDrawCallback(mLayoutGroupA);

    // Process transition timer
    if (mSharedLayout != nullptr) {
        f32 timer = (f32)mSharedLayout[1] - getGlobalTime();
        mSharedLayout[1] = (u32)timer;

        u32 timerState = *mSharedLayout;
        if (timerState == 1) {
            mSharedLayout[1] = (u32)getGlobalTime();
            onTimerUpdate();
        } else if (timerState == 2) {
            timer -= getGlobalTime();
            mSharedLayout[1] = (u32)timer;
            if (timer < minDepth) {
                mSharedLayout[1] = (u32)minDepth;
                *mSharedLayout = 0;
            }
            onTimerUpdate(timer);
        }
    }

    mUpdateFlags++;
}

// @addr 0x806259d8
u32 PageManager::findPageByType(u8 pageType) const {
    for (u32 i = 0; i < mInactiveCount; i++) {
        u32 ref = mInactivePages[i].animGroupRef;
        u8 type = getPageTypeFromRef(ref);
        if (pageType == (type & 0xFF)) {
            return ref;
        }
    }
    return 0;
}

// @addr 0x80625a4c
u32 PageManager::getSelectedPageRef() const {
    return mInactivePages[0].layoutRef;
}

// @addr 0x80625a6c
void PageManager::releaseAllPages() {
    releaseLayoutGroup(mLayoutGroupA);
    releaseLayoutGroup(mLayoutGroupB);
    releaseLayoutGroup(mLayoutGroupC);
}

// @addr 0x80625aac
void PageManager::drawAllPages() {
    configureDrawOrder(this, this + 0xBC);
}

// @addr 0x80625ab4
void PageManager::updateActivePages() {
    for (u32 i = 0; i < mInactiveCount; i++) {
        updatePage(mInactivePages[i].animGroupRef);
    }
    for (u32 i = 0; i < mActiveCount; i++) {
        updatePage(mActivePages[i].animGroupRef);
    }
}

// @addr 0x80625b6c
bool PageManager::isPageVisible(s32 pageIndex) const {
    if (mInactivePages[0].layoutRef == 0) return false;

    u32 ref = mInactivePages[0].animGroupRef;
    u8 type = getPageTypeFromRef(ref);
    u8 currentChar = getCurrentCharacter();

    // Check if page character matches current character
    if (getCharacterForType(type) == currentChar) {
        return true;
    }
    return false;
}

// @addr 0x80625be4
void PageManager::populateStandardPages(bool isWide) {
    // Determine row count from game data
    s32 gameRow = getGameDataRow();
    s32 rowCount = gameRow - getLeaderboardRow();
    if (rowCount < 0) rowCount = 0;
    if (rowCount >= 0x0D) rowCount = 0x0C;

    // Standard page layout table (13 rows x 3 columns)
    static const s32 stdLayout[13][3] = {
        {  0,  1,  2 },
        {  3,  4,  5 },
        {  6,  7,  8 },
        {  9, 10, 11 },
        { 12, 13, 14 },
        { 15, 16, 17 },
        { 18, 19, 20 },
        { 21, 22, 23 },
        { 24, 25, 26 },
        { 27, 28, 29 },
        { 30, 31, 32 },
        { 33, 34, 35 },
        { 36, 37, 38 },
    };

    s32 topCount    = stdLayout[rowCount][0];
    s32 middleCount = stdLayout[rowCount][1];
    s32 bottomCount = stdLayout[rowCount][2];

    // Populate top row (primary controls)
    if (topCount > 0) {
        for (s32 i = 0; i < topCount; i++) {
            MenuPage* page = createPageByType(
                isWide ? PAGE_TYPE_NARROW : PAGE_TYPE_WIDE, -1);
            if (page != nullptr) {
                page->setParentGroup(mLayoutGroupA);
                addLayoutGroupChild(mLayoutGroupA, page);
            }
        }
        setLayoutGroupFrameCount(mLayoutGroupA, 1);
        finalizeLayoutGroup(mLayoutGroupA);
    }

    // Populate middle row (secondary controls)
    if (middleCount > 0) {
        for (s32 i = 0; i < middleCount; i++) {
            s32 type = isWide ? 0 : 2;
            MenuPage* page = createPageByType(type, -1);
            if (page != nullptr) {
                page->setParentGroup(mLayoutGroupB);
                addLayoutGroupChild(mLayoutGroupB, page);
            }
        }
        setLayoutGroupFrameCount(mLayoutGroupB, topCount + 1);
        finalizeLayoutGroup(mLayoutGroupB);
    }

    // Populate bottom row (tertiary controls)
    if (bottomCount > 0) {
        for (s32 i = 0; i < bottomCount; i++) {
            s32 type = isWide ? 0 : 2;
            MenuPage* page = createPageByType(type, -1);
            if (page != nullptr) {
                page->setParentGroup(mLayoutGroupC);
                addLayoutGroupChild(mLayoutGroupC, page);
            }
        }
        setLayoutGroupFrameCount(mLayoutGroupC, topCount + middleCount + 1);
        finalizeLayoutGroup(mLayoutGroupC);
    }
}

// @addr 0x80625ec0
void PageManager::populateOnlinePages(bool isWide) {
    s32 onlineMode = getOnlineMode();
    s32 rowCount = 0;
    getOnlinePageLayout(onlineMode, &rowCount);

    // Extended layout tables for different online modes
    // (5 modes x 6 entries x 6 data)
    static const s32 onlineLayouts[5][6][6] = {
        /* mode 0 */ { /* filled at runtime */ },
        /* mode 1 */ { /* filled at runtime */ },
        /* mode 2 */ { /* filled at runtime */ },
        /* mode 3 */ { /* filled at runtime */ },
        /* mode 4 */ { /* filled at runtime */ },
    };

    s32 topCount    = 0;
    s32 middleCount = 0;
    s32 bottomCount = 0;

    if (onlineMode == 0) {
        topCount    = 0;
        middleCount = 0;
        bottomCount = 0;
        // ... etc
    }
    // (Additional modes handled similarly)

    // Populate pages based on mode and counts
    // (Same pattern as populateStandardPages but with online-specific types)
}

void PageManager::configurePool(const PagePoolConfig& config) {
    // Pool is statically sized in MKW
}

void PageManager::sortPagesByDepth() {
    // Simple insertion sort by depth (Z-order)
    for (u32 i = 1; i < mActiveCount; i++) {
        PageDescriptor temp = mActivePages[i];
        s32 j = i - 1;
        while (j >= 0 && getPageDepth(mActivePages[j].animGroupRef) >
                           getPageDepth(temp.animGroupRef)) {
            mActivePages[j + 1] = mActivePages[j];
            j--;
        }
        mActivePages[j + 1] = temp;
    }
}

} // namespace UI