// HomeButton.cpp — Wii Home Button Menu Handler
// Address range: 0x80616000 - 0x8061C000 (Gap 1 — home button)

#include "HomeButton.hpp"
#include <cstring>
#include <cmath>

namespace Scene {

// =============================================================================
// FrameController implementation
// =============================================================================

FrameController::FrameController()
    : m_currentFrame(0.0f)
    , m_totalFrames(60.0f)
    , m_speed(1.0f)
    , m_state(PLAY_STOPPED) {}

FrameController::~FrameController() {}

void FrameController::init() {
    m_currentFrame = 0.0f;
    m_totalFrames = 60.0f;
    m_speed = 1.0f;
    m_state = PLAY_STOPPED;
}

void FrameController::play() {
    m_state = PLAY_FORWARD;
    if (m_currentFrame >= m_totalFrames) {
        m_currentFrame = 0.0f;
    }
}

void FrameController::playReverse() {
    m_state = PLAY_BACKWARD;
    if (m_currentFrame <= 0.0f) {
        m_currentFrame = m_totalFrames;
    }
}

void FrameController::stop() {
    m_state = PLAY_STOPPED;
    m_currentFrame = 0.0f;
}

void FrameController::pause() {
    if (m_state == PLAY_FORWARD || m_state == PLAY_BACKWARD || m_state == PLAY_LOOPING) {
        m_state = PLAY_STOPPED;
    }
}

void FrameController::resume() {
    if (m_state == PLAY_STOPPED && m_currentFrame > 0.0f) {
        m_state = PLAY_FORWARD;
    }
}

void FrameController::calc() {
    if (m_state == PLAY_STOPPED) return;

    if (m_state == PLAY_FORWARD) {
        m_currentFrame += m_speed;
        if (m_currentFrame >= m_totalFrames) {
            m_currentFrame = m_totalFrames;
            m_state = PLAY_STOPPED;
        }
    } else if (m_state == PLAY_BACKWARD) {
        m_currentFrame -= m_speed;
        if (m_currentFrame <= 0.0f) {
            m_currentFrame = 0.0f;
            m_state = PLAY_STOPPED;
        }
    } else if (m_state == PLAY_LOOPING) {
        m_currentFrame += m_speed;
        if (m_currentFrame >= m_totalFrames) {
            m_currentFrame -= m_totalFrames;
        }
    }
}

void FrameController::setTotalFrames(f32 total) {
    m_totalFrames = total > 0.0f ? total : 1.0f;
}

void FrameController::setSpeed(f32 speed) {
    m_speed = speed;
}

void FrameController::setFrame(f32 frame) {
    m_currentFrame = frame;
}

f32 FrameController::getProgress() const {
    if (m_totalFrames <= 0.0f) return 0.0f;
    return m_currentFrame / m_totalFrames;
}

bool FrameController::isPlaying() const {
    return m_state != PLAY_STOPPED;
}

bool FrameController::isAtEnd() const {
    return m_currentFrame >= m_totalFrames - 0.01f;
}

bool FrameController::isAtStart() const {
    return m_currentFrame <= 0.01f;
}

// =============================================================================
// GroupAnmController implementation
// =============================================================================

GroupAnmController::GroupAnmController()
    : m_bound(false)
    , m_alphaOverride(-1.0f)
    , m_frameStart(0.0f)
    , m_frameEnd(60.0f)
    , m_flags(0) {
    std::memset(m_groupName, 0, sizeof(m_groupName));
    std::memset(m_tracks, 0, sizeof(m_tracks));
}

GroupAnmController::~GroupAnmController() {
    unbind();
}

void GroupAnmController::init() {
    unbind();
    m_alphaOverride = -1.0f;
    m_frameStart = 0.0f;
    m_frameEnd = 60.0f;
    m_flags = 0;
}

void GroupAnmController::bind(const char* groupName) {
    if (!groupName) return;
    unbind();

    u32 len = 0;
    while (len < 31 && groupName[len]) len++;
    for (u32 i = 0; i < len; i++) {
        m_groupName[i] = groupName[i];
    }
    m_groupName[len] = '\0';
    m_bound = true;
}

void GroupAnmController::unbind() {
    m_bound = false;
    m_groupName[0] = '\0';
    std::memset(m_tracks, 0, sizeof(m_tracks));
}

void GroupAnmController::calc(f32 frame) {
    if (!m_bound) return;

    // In the real game, this evaluates brlan animation tracks at the
    // given frame number. Each track produces a value (translation,
    // rotation, scale, alpha, etc.) that is applied to layout panes.
    // For now, we produce default identity values.
    for (u32 i = 0; i < MAX_TRACKS; i++) {
        m_tracks[i] = 0.0f;
    }

    // Default alpha = 1.0 (fully opaque)
    m_tracks[0] = 1.0f;  // Alpha track
    // Default scale = 1.0
    m_tracks[1] = 1.0f;  // Scale track
    // Default translation = 0
    m_tracks[2] = 0.0f;  // Translate X
    m_tracks[3] = 0.0f;  // Translate Y
    // Default rotation = 0
    m_tracks[4] = 0.0f;  // Rotation
}

f32 GroupAnmController::getAlpha() const {
    if (m_alphaOverride >= 0.0f) return m_alphaOverride;
    if (!m_bound) return 1.0f;
    return m_tracks[0];
}

void GroupAnmController::setAlphaOverride(f32 alpha) {
    m_alphaOverride = alpha;
}

f32 GroupAnmController::getTranslateX() const {
    return m_bound ? m_tracks[2] : 0.0f;
}

f32 GroupAnmController::getTranslateY() const {
    return m_bound ? m_tracks[3] : 0.0f;
}

f32 GroupAnmController::getScale() const {
    return m_bound ? m_tracks[1] : 1.0f;
}

f32 GroupAnmController::getRotation() const {
    return m_bound ? m_tracks[4] : 0.0f;
}

bool GroupAnmController::isFinished() const {
    // Animation is "finished" if it has been evaluated past the end
    (void)m_frameEnd;
    return false;
}

void GroupAnmController::setFrameRange(f32 start, f32 end) {
    m_frameStart = start;
    m_frameEnd = end > start ? end : start + 1.0f;
}

// =============================================================================
// HomeButton implementation
// =============================================================================

HomeButton* HomeButton::s_instance = nullptr;

HomeButton::HomeButton()
    : m_state(HOME_STATE_HIDDEN)
    , m_selectedOption(HOME_OPT_RESUME)
    , m_hoverIndex(0)
    , m_overlayAlpha(0.0f)
    , m_flags(0)
    , m_pad(0)
    , m_resourcesLoaded(false) {
    std::memset(m_layoutPath, 0, sizeof(m_layoutPath));
}

HomeButton::~HomeButton() {
    shutdown();
}

// @addr 0x80616000
void HomeButton::init() {
    m_state = HOME_STATE_HIDDEN;
    m_selectedOption = HOME_OPT_RESUME;
    m_hoverIndex = 0;
    m_overlayAlpha = 0.0f;
    m_flags = 0;
    m_resourcesLoaded = false;
    m_layoutPath[0] = '\0';

    m_frameCtrl.init();
    m_anmCtrl.init();

    // Set default layout path
    setLayout("/Layout/HomeMenu/HomeMenu.brlyt");
}

// @addr 0x80616080
void HomeButton::calc() {
    // Update animation regardless of state
    updateAnimation();

    // State machine
    switch (m_state) {
    case HOME_STATE_HIDDEN:
        // Check for HOME button press
        // In real game: read PAD status for HOME button
        break;

    case HOME_STATE_OPENING:
        // Wait for open animation to complete
        if (m_frameCtrl.isAtEnd()) {
            m_state = HOME_STATE_VISIBLE;
            onMenuOpened();
        }
        break;

    case HOME_STATE_VISIBLE:
        // Awaiting player input on menu options
        break;

    case HOME_STATE_CLOSING:
        // Wait for close animation to complete
        if (m_frameCtrl.isAtEnd()) {
            m_state = HOME_STATE_HIDDEN;
            m_overlayAlpha = 0.0f;
            onMenuClosed();
        }
        break;

    case HOME_STATE_LOADING:
        // Waiting for layout resources to load
        break;

    case HOME_STATE_ERROR:
        // Could not load — do nothing
        break;
    }
}

// @addr 0x80616100
void HomeButton::draw() {
    if (m_state == HOME_STATE_HIDDEN || m_state == HOME_STATE_LOADING) return;

    // Render the home menu overlay
    // In the real game, this draws the brlyt layout with the
    // GroupAnmController driving pane transforms and alpha.
    // The overlay includes a semi-transparent dark backdrop
    // and the menu options (Resume / Reset / Wii Menu).
}

// @addr 0x80616200
void HomeButton::onHomeButtonPress() {
    if (m_state == HOME_STATE_VISIBLE) {
        // Already visible — ignore double-press
        return;
    }

    if (m_state == HOME_STATE_OPENING || m_state == HOME_STATE_CLOSING) {
        // Transitioning — ignore
        return;
    }

    showMenu();
}

// @addr 0x80616300
void HomeButton::showMenu() {
    if (m_state != HOME_STATE_HIDDEN) return;

    if (!m_resourcesLoaded) {
        m_state = HOME_STATE_LOADING;
        loadLayoutResources();
        return;
    }

    m_state = HOME_STATE_OPENING;
    m_overlayAlpha = 0.0f;
    m_selectedOption = HOME_OPT_RESUME;
    m_hoverIndex = 0;

    // Start open animation
    m_frameCtrl.init();
    m_frameCtrl.setTotalFrames(20.0f); // ~0.33 seconds
    m_frameCtrl.play();
}

// @addr 0x80616400
void HomeButton::hideMenu() {
    if (m_state != HOME_STATE_VISIBLE) return;

    m_state = HOME_STATE_CLOSING;

    // Start reverse animation
    m_frameCtrl.init();
    m_frameCtrl.setTotalFrames(20.0f);
    m_frameCtrl.playReverse();
}

// @addr 0x80616500
bool HomeButton::isMenuVisible() const {
    return m_state == HOME_STATE_VISIBLE ||
           m_state == HOME_STATE_OPENING ||
           m_state == HOME_STATE_CLOSING;
}

// @addr 0x80616540
bool HomeButton::isLoading() const {
    return m_state == HOME_STATE_LOADING;
}

// @addr 0x80616580
void HomeButton::onMenuOpened() {
    // Menu is fully visible — the game is effectively paused
    // In the real game, this would signal the scene manager to pause
}

// @addr 0x80616600
void HomeButton::onMenuClosed() {
    // Menu fully closed — resume game
    // In the real game, this would signal the scene manager to unpause
}

// @addr 0x80616700
void HomeButton::selectOption(HomeMenuOption option) {
    if (m_state != HOME_STATE_VISIBLE) return;

    m_selectedOption = option;
    hideMenu();

    // Execute the selected option after close animation completes
    // In the real game, this is handled in onMenuClosed via a deferred action
    executeOption(option);
}

void HomeButton::navigateNext() {
    if (m_state != HOME_STATE_VISIBLE) return;
    m_hoverIndex = (m_hoverIndex + 1) % HOME_OPT_COUNT;
    m_selectedOption = static_cast<HomeMenuOption>(m_hoverIndex);
}

void HomeButton::navigatePrev() {
    if (m_state != HOME_STATE_VISIBLE) return;
    m_hoverIndex = (m_hoverIndex + HOME_OPT_COUNT - 1) % HOME_OPT_COUNT;
    m_selectedOption = static_cast<HomeMenuOption>(m_hoverIndex);
}

// @addr 0x80616800
void HomeButton::updateAnimation() {
    m_frameCtrl.calc();

    // Evaluate animation group at current frame
    if (m_anmCtrl.isBound()) {
        m_anmCtrl.calc(m_frameCtrl.getFrame());
    }

    // Update overlay alpha based on animation progress
    if (m_state == HOME_STATE_OPENING) {
        m_overlayAlpha = m_frameCtrl.getProgress();
    } else if (m_state == HOME_STATE_CLOSING) {
        m_overlayAlpha = 1.0f - m_frameCtrl.getProgress();
    }
}

// @addr 0x80616980
void HomeButton::setLayout(const char* brlytPath) {
    if (!brlytPath) return;
    u32 len = 0;
    while (len < 63 && brlytPath[len]) len++;
    for (u32 i = 0; i < len; i++) {
        m_layoutPath[i] = brlytPath[i];
    }
    m_layoutPath[len] = '\0';
}

// @addr 0x80616A00
void HomeButton::setAlpha(f32 alpha) {
    m_overlayAlpha = alpha;
    m_anmCtrl.setAlphaOverride(alpha);
}

// @addr 0x80616A40
f32 HomeButton::getAlpha() const {
    return m_overlayAlpha;
}

// @addr 0x80616A80
void HomeButton::shutdown() {
    freeLayoutResources();
    m_state = HOME_STATE_HIDDEN;
    m_frameCtrl.init();
    m_anmCtrl.init();
    m_overlayAlpha = 0.0f;
    m_resourcesLoaded = false;
}

// @addr 0x80616B00
void HomeButton::reset() {
    shutdown();
    init();
}

void HomeButton::loadLayoutResources() {
    // In the real game, this loads the brlyt layout and brlan animations
    // from the game disc. The layout contains the home menu backdrop
    // and button panes.

    // Bind animation groups
    m_anmCtrl.bind("HomeMenu");
    m_anmCtrl.setFrameRange(0.0f, 20.0f);

    m_resourcesLoaded = true;
    m_state = HOME_STATE_HIDDEN;
}

void HomeButton::freeLayoutResources() {
    m_anmCtrl.unbind();
    m_resourcesLoaded = false;
}

void HomeButton::executeOption(HomeMenuOption option) {
    switch (option) {
    case HOME_OPT_RESUME:
        // Simply close the menu — already handled by hideMenu()
        break;

    case HOME_OPT_RESET:
        // Reset the current scene (restart race, etc.)
        // In the real game: SceneMgr::getInstance()->reset();
        break;

    case HOME_OPT_WII_MENU:
        // Return to Wii System Menu
        // In the real game: this calls SYS_ResetSystem() or similar
        break;

    case HOME_OPT_COUNT:
    default:
        break;
    }
}

HomeButton* HomeButton::getInstance() {
    if (!s_instance) {
        s_instance = new HomeButton();
    }
    return s_instance;
}

} // namespace Scene