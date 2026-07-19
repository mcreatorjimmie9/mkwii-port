// UIManager.cpp - Top-level UI manager implementation

#include "UIManager.hpp"
#include "MenuPage.hpp"
#include "Layout.hpp"
#include "AnimationController.hpp"

namespace UI {

UIManager* UIManager::sInstance = nullptr;

UIManager::UIManager()
    : mPageStackDepth(0)
    , mActivePage(nullptr)
    , mFlags(UI_FLAG_INPUT_ENABLED)
    , mActiveLayout(nullptr)
    , mAnimController(nullptr)
    , mFrameTimer(0.0f)
    , mFrameCount(0) {
    memset(mPageStack, 0, sizeof(mPageStack));
    memset(&mGlobalState, 0, sizeof(mGlobalState));
}

UIManager::~UIManager() {
    shutdown();
}

UIManager* UIManager::getInstance() {
    return sInstance;
}

void UIManager::createInstance() {
    if (sInstance == nullptr) {
        sInstance = new UIManager();
        sInstance->initSystems();
    }
}

void UIManager::destroyInstance() {
    if (sInstance != nullptr) {
        delete sInstance;
        sInstance = nullptr;
    }
}

void UIManager::initSystems() {
    mAnimController = new AnimationController();

    // Initialize global state defaults
    mGlobalState.playerCount = 1;
    mGlobalState.localPlayerCount = 1;
}

void UIManager::shutdown() {
    // Pop all pages
    while (mPageStackDepth > 0) {
        popPage(0, 0);
    }

    if (mAnimController != nullptr) {
        delete mAnimController;
        mAnimController = nullptr;
    }
}

void UIManager::update() {
    // Read input state
    updateInput();

    // Update frame timer
    mFrameTimer += mGlobalState.deltaTime;
    mGlobalState.globalTime = mFrameTimer;
    mFrameCount++;

    // Update active page and animations
    updatePages(mGlobalState.deltaTime);

    // Process any pending transitions
    processTransition(mGlobalState.deltaTime);
}

void UIManager::draw() {
    drawPages();
}

void UIManager::updateInput() {
    // Read controller input for all active players
    // Buttons are ORed together for UI navigation

    // Read held, pressed, released states from KPad system
    mGlobalState.heldButtons = readHeldButtons();
    mGlobalState.pressedButtons = readPressedButtons();
    mGlobalState.releasedButtons = readReleasedButtons();
}

void UIManager::updatePages(f32 dt) {
    // Update from top of stack down
    for (s32 i = mPageStackDepth - 1; i >= 0; i--) {
        MenuPage* page = mPageStack[i];
        if (page != nullptr && page->isActive()) {
            page->onUpdate(dt);
        }
    }
}

void UIManager::drawPages() {
    // Draw from bottom of stack up
    for (s32 i = 0; i < mPageStackDepth; i++) {
        MenuPage* page = mPageStack[i];
        if (page != nullptr) {
            page->onDraw();
        }
    }
}

// @addr 0x8071e50c
void UIManager::pushPage(MenuPage* page, s32 transitionId) {
    if (mPageStackDepth >= MAX_PAGE_STACK) {
        return;
    }

    page->mPrevPageId = mGlobalState.sceneId;
    page->onLoad();
    page->onInit();
    page->onActivate();

    mPageStack[mPageStackDepth++] = page;
    mActivePage = page;

    // Handle transition
    page->mTransition = (transitionId == -1) ? TRANSITION_NONE : TRANSITION_FADE_IN;
    mGlobalState.prevSceneId = mGlobalState.sceneId;
    mGlobalState.sceneId = page->getPageId();

    if (transitionId == -1) {
        // No transition animation - just show
        hidePane(page, 0xCE, 0);
        hidePane(page, 0xD4, 0);
        hidePane(page, 0xE1, 0);
        hidePane(page, 0xEE, 0);
        hidePane(page, 0xFD, 0);
    } else {
        // Animate page entrance
        hidePane(page, 0x10C, 1);
        hidePane(page, 0x112, 1);
        hidePane(page, 0x11F, 1);
        hidePane(page, 0x12C, 1);
        hidePane(page, 0x13B, 1);
        showPicturePage(page, mGlobalState.sceneId);
    }
}

// @addr 0x8071dde4
void UIManager::popPage(u32 param, u32 playerMask) {
    if (mPageStackDepth <= 0) {
        return;
    }

    MenuPage* top = mPageStack[--mPageStackDepth];
    top->onDeactivate();
    top->onDestroy();

    // Update active page
    mActivePage = (mPageStackDepth > 0) ? mPageStack[mPageStackDepth - 1] : nullptr;

    s32 targetScene = top->mPrevPageId;
    if (targetScene == -100) {
        // Special: return to title screen
        return;
    }
    if (targetScene == -1) {
        return;
    }

    // Store target scene for the section director
    getSceneDirector()->mTargetScene = targetScene;

    // Check for special scene routing
    s32 routedScene = routeSpecialScene(mGlobalState.sceneId);
    if (routedScene == 0) {
        routedScene = routeGhostScene(mGlobalState.sceneId);
        if (routedScene == 0) {
            routedScene = routeTournamentScene(mGlobalState.sceneId);
        }
    }

    if (routedScene != 0) {
        getSceneDirector()->mTargetScene = targetScene;
        // Handle online/VIP scene routing
        handleSceneRoute(param, playerMask);
    } else {
        getSceneDirector()->mTargetScene = targetScene;
    }

    // Notify system of the scene change
    notifySceneChange(param, playerMask);

    // Trigger callback if available
    if (getGlobalState().callbackSystem != nullptr) {
        getGlobalState().callbackSystem->onSceneComplete(playerMask);
    }
}

void UIManager::replacePage(MenuPage* page, s32 transitionId) {
    if (mPageStackDepth > 0) {
        MenuPage* old = mPageStack[mPageStackDepth - 1];
        old->onDeactivate();
        old->onDestroy();
        mPageStack[mPageStackDepth - 1] = page;
    } else {
        pushPage(page, transitionId);
        return;
    }

    page->onLoad();
    page->onInit();
    page->onActivate();
    mActivePage = page;
}

void UIManager::setInputEnabled(bool enabled) {
    if (enabled) {
        mFlags = (u32)(mFlags | UI_FLAG_INPUT_ENABLED);
    } else {
        mFlags = (u32)(mFlags & ~UI_FLAG_INPUT_ENABLED);
    }
}

void UIManager::processTransition(f32 dt) {
    if (!(mFlags & UI_FLAG_TRANSITIONING)) return;

    // Update transition animations
    if (mActivePage != nullptr) {
        if (mActivePage->mTransition == TRANSITION_FADE_IN) {
            // Progress fade in
            f32 alpha = getTransitionProgress(dt);
            if (alpha >= 1.0f) {
                mActivePage->mTransition = TRANSITION_NONE;
                mFlags &= ~UI_FLAG_TRANSITIONING;
                mActivePage->onTransitionComplete(PAGE_STATE_ACTIVE, nullptr);
            }
        }
    }
}

// @addr 0x8050a7b8
void UIManager::handleOverlayInput() {
    s32 isOnline = checkOnlineStatus();
    if (isOnline == 0) {
        // Not online - reset overlay and go back
        resetOverlayNavigation();
        playSound(0x3F, 1);
        setSoundVolume(0, 0xFF);
        return;
    }

    // Online mode - configure overlay page
    Page* page = getActivePageFromGroup(0x228);
    if (page != nullptr && isPageInList(page)) {
        page->setOverlayActive(1);
    }

    page = getActivePageFromGroup(0x140);
    if (page != nullptr && isPageInList(page)) {
        page->setPageVisible(true);
        sendPageMessage(page, 0x0FAB, 0);
        sendPageMessage(page, 0x0FAC, 0, 1, this + 0x16);
        sendPageMessage(page, 0x0FAD, 0, -1, 0);
        page->setUpdateFlag(1);
        onButtonAction(this, 0x4E, 0);
    }
}

// @addr 0x8050a9bc
void UIManager::resetOverlayInput() {
    Page* page = getActivePageFromGroup(0x228);
    if (page != nullptr && isPageInList(page)) {
        page->setOverlayActive(0);
    }
}

// @addr 0x8071e06c
void UIManager::onSceneChange(MenuPage* page, s32 sceneId, s32 param) {
    if (sceneId == -100) {
        return;
    }

    mSceneChangeTarget = sceneId;

    // Find the pane for the scene name display
    PaneWrapper* namePane = findPaneByIndex(page + 0x24, 0);
    if (namePane != nullptr && isPaneVisible(namePane)) {
        u32 msgId = getSceneNameMessageId(sceneId);
        setTextBinding(namePane, msgId, 0);

        // If multiple HUD instances, set up names for each
        if (mHUDInstanceCount > 1) {
            setMultiHUDNames(this + 0x6F8, sceneId);
        }
    }
}

MenuPage* UIManager::getTopPage() const {
    if (mPageStackDepth > 0) {
        return mPageStack[mPageStackDepth - 1];
    }
    return nullptr;
}

} // namespace UI