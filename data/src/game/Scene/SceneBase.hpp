#pragma once
// SceneBase.hpp - Base scene class for Mario Kart Wii
// Reconstructed from Scene module (0x805b0028 - 0x8077f014)

#include "rk_common.h"

namespace Scene {

// =============================================================================
// SceneBase — Abstract base class for all scene types
// Address range: 0x805b0028+ (ObjectDirector methods operate on this base)
//
// All scenes in MKWii (RaceScene, MenuScene, etc.) inherit from SceneBase.
// The SceneDirector manages transitions between active scenes.
// =============================================================================
class SceneBase {
public:
    enum SceneState {
        STATE_UNINITIALIZED = -1,
        STATE_LOADING = 0,
        STATE_READY = 1,
        STATE_ACTIVE = 2,
        STATE_TRANSITIONING = 3,
        STATE_SHUTDOWN = 4,
        STATE_DESTROYED = 5,
    };

    // Fade duration constants used by calcFade
    static const s16 FADE_DURATION_DEFAULT = 30; // ~0.5 seconds at 60fps

    SceneBase();
    virtual ~SceneBase();

    // Pure virtual interface
    virtual void init() = 0;
    virtual void calc() = 0;
    virtual void draw() = 0;

    // Virtual lifecycle — can be overridden by derived scenes
    virtual void load();
    virtual void unload();
    virtual void reset();

    // Fade control
    // Advances fade timers, computes alpha from timer, sets complete flags
    // @addr 0x805b0100
    virtual void calcFade();

    // Returns true if either fade timer is currently active
    // @addr 0x805b0140
    virtual bool isFading() const;

    // Sets the current fade alpha value (0 = fully transparent, 255 = opaque)
    // @addr 0x805b0160
    void setFadeColor(u8 alpha);

    // Gets the current fade alpha value
    // @addr 0x805b0170
    u8 getFadeAlpha() const;

    // Loading progress
    // Updates loading status and sub-status fields used by the loading screen
    // @addr 0x805b0180
    void setLoadProgress(u32 status, u32 subStatus);

    // Returns loading progress as a float percentage [0.0, 1.0]
    // Computed from m_loadStatus and m_loadSubStatus
    // @addr 0x805b0190
    f32 getLoadProgress() const;

    // Scene info
    // Sets the scene identifier used by SceneDirector for routing
    // @addr 0x805b01a0
    void setSceneId(u32 id);

    // Gets the scene identifier (virtual — override in derived scenes if needed)
    // Default implementation returns m_sceneId
    // @addr 0x805b01b0
    virtual u32 getSceneId() const;

    // Sets generic user data pointer (passed during scene creation)
    // @addr 0x805b01c0
    void setUserData(void* data);

    // Gets generic user data pointer
    // @addr 0x805b01d0
    void* getUserData() const;

    // State management
    SceneState getState() const { return m_state; }
    void setState(SceneState state) { m_state = state; }
    bool isActive() const { return m_state == STATE_ACTIVE; }

    // Transition support
    void beginTransition();
    void endTransition();
    bool isTransitioning() const { return m_isTransitioning; }

    // Frame counter
    u32 getFrameCount() const { return m_frameCount; }
    void incrementFrame() { m_frameCount++; }

protected:
    SceneState m_state;          // 0xC4
    bool m_isTransitioning;      // 0xD1
    u32 m_transitionFlags;       // 0xD2
    u32 m_loadStatus;            // 0xD5
    u32 m_loadSubStatus;         // 0xD6
    u8 m_alphaFade;               // 0xD7
    s16 m_fadeTimerA;            // 0xD8
    s16 m_fadeTimerB;            // 0xDA
    u32 m_fadeCompleteA;         // 0xDE
    u32 m_fadeCompleteB;         // 0xDF
    u32 m_frameCount;            // 0x100 area
    u32 m_sceneId;               // Scene identifier
    void* m_userData;            // Generic user data pointer

    // Fade configuration
    static const u8 FADE_ALPHA_OPAQUE = 0xFF;
    static const u8 FADE_ALPHA_TRANSPARENT = 0x00;
    s16 m_fadeDurationA;         // Duration for fade phase A (in frames)
    s16 m_fadeDurationB;         // Duration for fade phase B (in frames)
};

} // namespace Scene