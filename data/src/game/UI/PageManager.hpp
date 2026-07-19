#pragma once
// PageManager.hpp - Manages the page pool and page lifecycle
// Handles page creation, destruction, and reuse
// Address range: 0x8062559c - 0x80625ec0

#include "rk_common.h"

namespace UI {

class MenuPage;
class Layout;

// Page pool configuration
struct PagePoolConfig {
    u32 maxPages;
    u32 pageSize;
    u8 allowDynamicAlloc;
    u8 _pad[3];
};

// Page descriptor for pool tracking
struct PageDescriptor {
    u32 pageType;        // PageId
    u32 animGroupRef;    // Reference to animation group
    u32 layoutRef;       // Reference to layout resource
    u8 isActive;         // Whether this page slot is in use
    u8 isLoaded;         // Whether layout is loaded
    u8 _pad[2];
};

class PageManager {
public:
    PageManager();
    ~PageManager();

    // @addr 0x8062559c
    void* destroy(void* buffer, s32 shouldFree);

    // Page lifecycle
    // @addr 0x8062568c
    void addPage(MenuPage* page, s32 poolIndex);
    // @addr 0x8062573c
    void initAllPages();

    // @addr 0x80625828
    void setFocusIndex(s32 index);

    // @addr 0x80625834
    void updateAllPages();

    // Page lookup
    // @addr 0x806259d8
    u32 findPageByType(u8 pageType) const;

    // @addr 0x80625a4c
    u32 getSelectedPageRef() const;

    // @addr 0x80625ab4
    void updateActivePages();

    // @addr 0x80625aac
    void drawAllPages();

    // @addr 0x80625a6c
    void releaseAllPages();

    // Pool management
    void configurePool(const PagePoolConfig& config);
    u32 getActiveCount() const { return mActiveCount; }
    u32 getInactiveCount() const { return mInactiveCount; }

    // Page type checking
    // @addr 0x80625b6c
    bool isPageVisible(s32 pageIndex) const;

    // Layout data
    // @addr 0x80625be4
    void populateStandardPages(bool isWide);
    // @addr 0x80625ec0
    void populateOnlinePages(bool isWide);

private:
    static const u32 MAX_ACTIVE_PAGES = 11;
    static const u32 MAX_INACTIVE_PAGES = 11;
    static const u32 MAX_POOLS = 3;

    // Page pools (active and inactive)
    PageDescriptor mActivePages[MAX_ACTIVE_PAGES];  // 0x0E8
    PageDescriptor mInactivePages[MAX_INACTIVE_PAGES]; // 0x148
    u32 mActiveCount;                                  // 0x178
    u32 mInactiveCount;                                // 0x17C

    // Layout groups
    u32 mLayoutGroupA;      // 0x168 - primary layout group
    u32 mLayoutGroupB;      // 0x16C - secondary layout group
    u32 mLayoutGroupC;      // 0x170 - tertiary layout group

    // Shared layout reference
    u32* mSharedLayout;     // 0x190

    // Focus
    s32 mFocusIndex;        // 0x174
    u32 mTransitionFlags;   // 0x180
    u32 mDrawFlags;         // 0x184
    u32 mUpdateFlags;       // 0x188
    u32 mInitFlags;         // 0x18C

    // Page construction helpers
    MenuPage* createPageByType(u32 pageType, bool isWide);
    void destroyPage(MenuPage* page);

    // Sorting
    void sortPagesByDepth();
};

} // namespace UI