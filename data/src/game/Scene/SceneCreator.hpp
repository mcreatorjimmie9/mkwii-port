#pragma once
// SceneCreator.hpp — Scene Factory and Registration System
// Address range: 0x8060A194 - 0x8060E000 (Gap 1 — scene management)
//
// SceneCreator implements the EGG-style factory pattern for scene instantiation.
// Each scene type (Title, Menu, Race, etc.) registers a creation function that
// the factory invokes when SceneMgr requests a scene change. The factory also
// handles scene destruction and parameter passing via SceneArgs.
//
// The real MKWii uses a function pointer table indexed by SceneId to dispatch
// creation. Registration happens during static initialization or app startup.

#include "rk_common.h"

namespace Scene {

class SceneBase;

// =============================================================================
// SceneId — Enumeration of all scene types in Mario Kart Wii
//
// Each value corresponds to an index into the SceneCreator factory table.
// The values are derived from DOL symbol analysis of scene-switch branches.
// =============================================================================
enum SceneId {
    SCENE_NONE         = -1,
    SCENE_TITLE        = 0,   // Title screen / logo
    SCENE_MENU_TOP     = 1,   // Main menu (single player / multiplayer / options)
    SCENE_MENU_GRANDPRIX = 2, // Grand Prix mode selection
    SCENE_MENU_VS      = 3,   // VS mode setup
    SCENE_MENU_BATTLE  = 4,   // Battle mode setup
    SCENE_MENU_GHOST   = 5,   // Ghost race / time trial
    SCENE_MENU_CHANNEL = 6,   // Nintendo WFC channel
    SCENE_CARYARD      = 7,   // Character + kart selection
    SCENE_COURSE_SELECT = 8,  // Course selection wheel
    SCENE_RACE         = 9,   // Active race gameplay
    SCENE_RACE_RESULT  = 10,  // Post-race results screen
    SCENE_REPLAY       = 11,  // Replay theater
    SCENE_AWARD        = 12,  // Trophy / award ceremony
    SCENE_STAFF        = 13,  // Staff credits roll
    SCENE_MOVIE        = 14,  // Cutscene / movie playback
    SCENE_ONLINE       = 15,  // Online lobby / matchmaking
    SCENE_TOURNAMENT   = 16,  // Tournament mode
    SCENE_MISSION      = 17,  // Mission mode
    SCENE_COUNT        = 18,  // Total number of scene types
};

// =============================================================================
// SceneArgs — Parameter block passed when creating/switching scenes
//
// Provides context to the new scene: which course, what mode, player
// count, etc. The scene factory interprets these based on the target
// SceneId. Fields are generic (u32) to allow type-punning.
//
// Layout matches the scene argument struct found at 0x8060A800 area.
// =============================================================================
struct SceneArgs {
    u32 sceneId;           // 0x00 — Target scene ID
    u32 courseId;          // 0x04 — Course index (for race/caryard)
    u32 mode;              // 0x08 — Game mode (GP, VS, Battle, etc.)
    u32 playerCount;       // 0x0C — Number of local players (1-4)
    u32 lapCount;          // 0x10 — Number of laps (3 for 150cc, etc.)
    u32 characterIds[4];   // 0x14 — Selected character per player
    u32 kartIds[4];        // 0x24 — Selected kart per player
    u32 ghostId;           // 0x34 — Ghost data index (time trial)
    u32 replayId;          // 0x38 — Replay save slot
    u32 flags;             // 0x3C — Bitfield flags
    u32 reserved[8];       // 0x40 — Reserved for future use

    SceneArgs()
        : sceneId(SCENE_NONE)
        , courseId(0)
        , mode(0)
        , playerCount(1)
        , lapCount(3)
        , ghostId(0)
        , replayId(0)
        , flags(0) {
        for (u32 i = 0; i < 4; i++) {
            characterIds[i] = 0;
            kartIds[i] = 0;
        }
        for (u32 i = 0; i < 8; i++) {
            reserved[i] = 0;
        }
    }
};

// =============================================================================
// CreateFunc — Function pointer signature for scene factory functions
//
// Each registered scene type provides a function matching this signature.
// The factory invokes it with the SceneArgs, and the function returns
// a heap-allocated SceneBase* (caller takes ownership).
// =============================================================================
typedef SceneBase* (*CreateFunc)(const SceneArgs& args);

// =============================================================================
// DestroyFunc — Function pointer signature for scene destruction
//
// Some scene types need custom destruction logic beyond operator delete.
// If null, SceneCreator uses standard delete.
// =============================================================================
typedef void (*DestroyFunc)(SceneBase* scene);

// =============================================================================
// SceneCreator — Factory for scene instantiation and destruction
//
// Manages a fixed-size table of (CreateFunc, DestroyFunc) pairs indexed
// by SceneId. Scenes register themselves at startup; SceneMgr queries
// the factory when performing scene transitions.
//
// The real factory lives at a global pointer, initialized early in main().
// @addr 0x8060A194 — SceneCreator::createScene
// @addr 0x8060A280 — SceneCreator::destroyScene
// @addr 0x8060A320 — SceneCreator::registerCreator
// @addr 0x8060A3B0 — SceneCreator::unregisterCreator
// @addr 0x8060A440 — SceneCreator::isRegistered
// @addr 0x8060A4A0 — SceneCreator::getRegisteredCount
// =============================================================================
class SceneCreator {
public:
    static const u32 MAX_SCENES = 32;  // Max registered scene types

    SceneCreator();
    ~SceneCreator();

    // --- Factory operations ---

    /// Create a scene instance by ID using the registered factory function.
    /// @param id    Scene type to create
    /// @param args  Parameters to pass to the scene
    /// @return New scene instance, or nullptr if unregistered
    /// @addr 0x8060A194
    SceneBase* createScene(SceneId id, const SceneArgs& args);

    /// Destroy a scene instance, using custom destroy func if registered.
    /// @param scene  Scene to destroy
    /// @addr 0x8060A280
    void destroyScene(SceneBase* scene);

    /// Register a factory function for a given scene ID.
    /// @param id      Scene type
    /// @param create  Factory function
    /// @param destroy Optional custom destructor (null = use delete)
    /// @addr 0x8060A320
    void registerCreator(SceneId id, CreateFunc create, DestroyFunc destroy = nullptr);

    /// Unregister a scene type, clearing its factory entry.
    /// @addr 0x8060A3B0
    void unregisterCreator(SceneId id);

    /// Check if a scene type has a registered factory.
    /// @addr 0x8060A440
    bool isRegistered(SceneId id) const;

    /// Get the number of registered scene types.
    /// @addr 0x8060A4A0
    u32 getRegisteredCount() const;

    /// Get the creation function for a scene type (null if unregistered).
    CreateFunc getCreateFunc(SceneId id) const;

    /// Get the destruction function for a scene type (null if default).
    DestroyFunc getDestroyFunc(SceneId id) const;

    // --- Global singleton ---

    static SceneCreator* getInstance();

    /// Initialize the global factory (called once at startup).
    /// @addr 0x8060A500
    static void initGlobal();

    /// Shutdown the global factory (called at app exit).
    /// @addr 0x8060A560
    static void shutdownGlobal();

    // --- Validation ---

    /// Validate that all required scene types are registered.
    /// @addr 0x8060A5C0
    bool validateRegistrations() const;

    /// Dump registered scene types (debug).
    void dumpRegistrations() const;

private:
    struct Entry {
        CreateFunc  createFunc;
        DestroyFunc destroyFunc;
        bool        registered;
        SceneId     id;
        u8          padding[3];
    };

    Entry m_entries[MAX_SCENES];  // 0x00 — Factory table
    u32  m_registeredCount;       // Count of registered entries

    static SceneCreator* s_instance;
};

} // namespace Scene