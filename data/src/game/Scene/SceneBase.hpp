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

    // Scene type ID for the director
    virtual u32 getSceneId() const = 0;

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
};

} // namespace Scene