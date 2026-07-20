#pragma once
// MenuPage.hpp - Base class for all MKW menu pages
// Each screen (title, character select, course select, etc.) is a MenuPage
// Address range: 0x8050dca4 - 0x8060a194

#include "rk_common.h"
#include <EGG/math.h>

namespace UI {

class Layout;
class PaneWrapper;

} // namespace UI

namespace System { struct KPadRaceInputState; }

namespace UI {

// Page lifecycle states
enum PageState {
    PAGE_STATE_UNINITIALIZED = 0,
    PAGE_STATE_ENTERING = 1,
    PAGE_STATE_ACTIVE = 2,
    PAGE_STATE_EXITING = 3,
    PAGE_STATE_DESTROYED = 4,
};

// Page transition types
enum TransitionType {
    TRANSITION_NONE = -1,
    TRANSITION_FADE_IN = 0,
    TRANSITION_FADE_OUT = 1,
    TRANSITION_SLIDE_LEFT = 2,
    TRANSITION_SLIDE_RIGHT = 3,
    TRANSITION_SLIDE_UP = 4,
    TRANSITION_SLIDE_DOWN = 5,
};

// Known page IDs (scene IDs from the decompiled code)
enum PageId {
    PAGE_TITLE = 0x55,
    PAGE_TOP_MENU = 0x56,
    PAGE_SINGLE_SELECT = 0x57,
    PAGE_MULTI_SELECT = 0x58,
    PAGE_CHANNEL_SELECT = 0x59,
    PAGE_CHARACTER_SELECT = 0x5B,
    PAGE_KART_SELECT = 0x5C,
    PAGE_COURSE_SELECT = 0x5D,
    PAGE_GHOST_SELECT = 0x5E,
    PAGE_VS_SETUP = 0x5F,
    PAGE_BATTLE_SETUP = 0x60,
    PAGE_AWARDS = 0x61,
    PAGE_OPTIONS = 0x62,
    PAGE_CONTROLLER_SELECT = 0x63,
    PAGE_GHOST_REPLAY = 0x64,
    PAGE_COMPETITION_TOP = 0x65,
    PAGE_WIFI_LOBBY = 0x66,
    PAGE_WIFI_MATCHING = 0x67,
    PAGE_WIFI_TEAM_SELECT = 0x68,
    PAGE_WIFI_VOTE = 0x69,
    PAGE_WIFI_RESULT = 0x6A,
    PAGE_RACE_HUD = 0x6B,
    PAGE_LAP_COUNTER = 0x6C,
    PAGE_POSITION_DISPLAY = 0x6D,
    PAGE_ITEM_DISPLAY = 0x6E,
    PAGE_MAP_DISPLAY = 0x6F,
    PAGE_RANKING_DISPLAY = 0x70,
    PAGE_TIME_DISPLAY = 0x71,
    PAGE_COUNTDOWN = 0x72,
    PAGE_LAKITU = 0x73,
    PAEG_RACE_RESULT = 0x74,
    PAGE_FINAL_RESULT = 0x75,
    PAGE_STANDING = 0x76,
    PAGE_MENU_CHARACTER = 0x7F,
    PAGE_MENU_KART = 0x80,
    PAGE_TOURNAMENT = 0x82,
    PAGE_LICENSE_SETTINGS = 0x83,
    PAGE_GHOST_DATA = 0x84,
    PAGE_GHOST_LIST = 0x85,
    PAGE_DATA_MANAGEMENT = 0x87,
    PAGE_PAGE_SAVE = 0x98,
    PAGE_CONFIRM_DIALOG = 0x78,
    PAGE_MESSAGE_BOX = 0x79,
    PAGE_NETWORK_ERROR = 0xA3,
    PAGE_WIFI_ERROR = 0xA5,
};

class MenuPage {
    friend class SectionDirector;
    friend class UIManager;
    friend class PageManager;
public:
    MenuPage();
    virtual ~MenuPage();

    // --- Virtual lifecycle ---
    // @addr 0x8050dca4
    virtual void onLoad();      // Called when page is first loaded
    // @addr 0x8050d284
    virtual void onInit();      // Called each time page becomes active
    virtual void onActivate();
    virtual void onDeactivate();
    virtual void onUpdate(f32 dt);
    virtual void onDraw();
    virtual void onDestroy();

    // @addr 0x8050d39c
    virtual void onTransitionComplete(PageState state, void* param);

    // @addr 0x8050d4a4
    virtual void requestTransition(u32 nextPage, u32 param);

    // --- Layout management ---
    Layout* getLayout() { return mLayout; }
    void setLayout(Layout* layout) { mLayout = layout; }

    // @addr 0x8050cfac
    virtual void setupLayoutGroups();

    // --- Cursor / selection ---
    virtual void onCursorMove(s32 direction);
    virtual void onConfirm();
    virtual void onCancel();
    virtual void onBack();

    // --- Menu item management ---
    void addItem(u16 itemId, const char* text, u16 xPos, u16 yPos);
    void removeItem(u16 itemId);
    void selectItem(u16 index);
    s32 getSelectedItem() const;
    void handleInput(const System::KPadRaceInputState& input);
    void animateSelection(f32 dt);
    void scrollToItem(u16 index);
    u32 getItemCount() const;
    MenuPage* getSubPage() const;
    bool hasSubPage() const;

    // --- Extended menu item helpers ---
    void clearItems();
    void setCursorVisible(bool visible);
    bool isCursorVisible() const;
    void lockCursor(bool locked);
    void setNavigationTargetDirect(u32 pageId, u16 param);
    u32 getNavigationTarget() const;
    u16 getNavParam() const;
    void setTransitionId(s32 id);
    s32 getTransitionId() const;
    // Menu items for list-based pages
    static const u16 MAX_MENU_ITEMS = 64;
    struct MenuItem {
        u16 itemId;
        u16 xPos;
        u16 yPos;
        u32 textMsgId;    // message ID for text binding
        bool active;
    };

    void setItemText(u16 itemId, u32 textMsgId);
    const MenuItem* getItem(u16 index) const;
    void setPrevPageId(u32 prevPageId);
    u32 getPrevPageId() const;

    // --- State queries ---
    PageState getPageState() const { return mState; }
    u32 getPageIdRaw() const { return mPageId; }
    u32 getPageId() const { return mPageId; }
    bool isActive() const { return mState == PAGE_STATE_ACTIVE; }

    // @addr 0x8060a194
    void setNavigationTarget(MenuPage* page, u16 param);

    // Additional accessors for director/manager
    s16 getLayoutType() const { return (s16)mPageId; }
    u32 getGhostDataId() const { return 0; }
    u32 getReplayDataId() const { return 0; }
    s32 getPaneIndex() const { return 0; }
    void setParentGroup(u32 group) { (void)group; }

protected:
    u32 mVtable;               // 0x000
    u32 mPageId;               // 0x004 - PageId for this page
    u32 mPrevPageId;           // 0x008
    PageState mState;          // 0x00C
    TransitionType mTransition;// 0x010
    u32 mSubTag;             // sub-tag for display info
    u8 mInitFlag;              // 0x014 - whether onLoad has been called
    u8 _15;
    u16 mTransitionParam;      // 0x016

    // Layout and pane references
    Layout* mLayout;           // 0x018
    u32 mLayoutCtrl;           // 0x1C - animation frame control
    u32 mWindowPane;           // 0x44 - window/background pane
    u32 mTextGroup0;           // 0x0BC - primary text content
    u32 mTextGroup1;           // 0x230 - secondary text content
    u32 mTextGroup2;           // 0x484 - tertiary text content
    u32 mAnimGroup;            // 0x6D8 - animation group
    u32 mChildLayout;          // 0x934 - embedded child layout
    u32 mSubPageLayout;        // 0xB98 - sub-page overlay layout
    u32 mOverlayLayout;        // 0xD0C - overlay layout (message boxes, etc.)

    u32 mTransitionId;         // 0xF30 - current transition message ID
    s32 mSelectedIndex;        // 0xFCC - current cursor selection
    u32 mNavigationTarget;     // 0xFA8 - target page for navigation
    u16 mNavParam;             // 0xFAC - navigation parameter
    u8 mIsVisible;             // 0xFAE
    u8 _FAF;

    // Navigation
    u32 mNavigationList[12]; // navigation entry table
    static const s32 sPageTypeTable[12];
    static const u32 sPageIdTable[12];

    // Cursor-related (for character/kart/course select)
    u32 mCursorX;              // 0xFB0
    u32 mCursorY;              // 0xFB4
    u8 mCursorAnimating;       // 0xFB8
    u8 mCursorLocked;          // 0xFB9
    u16 _FBA;

    MenuItem mItems[MAX_MENU_ITEMS];
    u32 mItemCount;
    f32 mSelectionAnimProgress;  // 0..1 for cursor lerp
    f32 mSelectionTargetY;       // Target Y position for cursor

    static const u32 MAX_LAYERS = 5;
};

} // namespace UI