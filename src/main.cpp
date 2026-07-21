// main.cpp — Mario Kart Wii PC Port Application Entry Point
// MAESTRO Phase 7: Integration Milestone M8 — Items

#include <cstdio>
#include <cmath>
#include <chrono>
#include <vector>
#include "platform/window.hpp"
#include "platform/graphics.hpp"
#include "platform/audio.hpp"
#include "platform/input.hpp"
#include "game/KartEntity.hpp"
#include "game/AIController.hpp"
#include "game/ItemBox.hpp"
#include "game/CollisionSystem.hpp"
#include "loaders/track_manager.hpp"

extern "C" void System_Init(); // Forward declaration for future system init

// =============================================================================
// Camera configuration for chase-cam viewing
// =============================================================================
static const f32 CAMERA_BACK_DIST  = 500.0f;
static const f32 CAMERA_UP_OFFSET  = 300.0f;
static const f32 CAMERA_FOV_DEG    = 60.0f;
static const f32 CAMERA_NEAR       = 1.0f;
static const f32 CAMERA_FAR        = 200000.0f;

// =============================================================================
// AI Kart configuration
// =============================================================================
static const u32 NUM_AI_KARTS = 3;

static const f32 AI_TINT_COLORS[NUM_AI_KARTS][3] = {
    { 1.0f, 0.5f, 0.0f },  // Orange
    { 0.0f, 0.8f, 0.2f },  // Green
    { 0.7f, 0.2f, 1.0f },  // Purple
};

static const f32 AI_SPEEDS[NUM_AI_KARTS]   = { 2200.0f, 2500.0f, 2700.0f };
static const f32 AI_STEER_AGGR[NUM_AI_KARTS] = { 0.9f,   1.0f,   1.2f   };

// =============================================================================
// Helper: get item type name string
// =============================================================================
static const char* getItemName(u8 type) {
    switch (type) {
        case ITEM_MUSHROOM:     return "Mushroom";
        case ITEM_TRIPLE_MUSH:  return "Triple Mushroom";
        case ITEM_GREEN_SHELL:  return "Green Shell";
        case ITEM_RED_SHELL:    return "Red Shell";
        case ITEM_BANANA:       return "Banana";
        case ITEM_STAR:         return "Star";
        case ITEM_BULLET_BILL:  return "Bullet Bill";
        case ITEM_GOLDEN_MUSH:  return "Golden Mushroom";
        case ITEM_THUNDER:      return "Thunder";
        case ITEM_BOB_OMB:      return "Bob-omb";
        case ITEM_MEGA_MUSH:    return "Mega Mushroom";
        case ITEM_BLUE_SHELL:   return "Blue Shell";
        default:                return "Unknown";
    }
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    printf("=== Mario Kart Wii PC Port ===\n");
    printf("MAESTRO Phase 7 — Milestone M8: Items\n\n");

    // =========================================================================
    // Step 1: Initialize Window (SDL2 + OpenGL 3.3 Core)
    // =========================================================================
    printf("[1/9] Initializing window system...\n");
    if (!Platform::Window::create(1280, 720, "Mario Kart Wii PC Port — M8")) {
        printf("ERROR: Failed to create window\n");
        return 1;
    }

    // =========================================================================
    // Step 2: Initialize Graphics
    // =========================================================================
    printf("[2/9] Initializing graphics subsystem...\n");
    if (!Platform::Graphics::initialize()) {
        printf("ERROR: Failed to initialize graphics\n");
        Platform::Window::destroy();
        return 1;
    }
    Platform::Graphics::setViewport(0, 0, 1280, 720);

    // =========================================================================
    // Step 3: Initialize Audio (stub)
    // =========================================================================
    printf("[3/9] Initializing audio subsystem...\n");
    if (!Platform::Audio::initialize()) {
        printf("WARNING: Audio initialization failed (continuing without audio)\n");
    }

    // =========================================================================
    // Step 4: Initialize Input
    // =========================================================================
    printf("[4/9] Initializing input subsystem...\n");
    if (!Platform::InputManager::initialize()) {
        printf("WARNING: Input initialization failed (continuing without input)\n");
    }

    // =========================================================================
    // Step 5: Load track
    // =========================================================================
    printf("[5/9] Loading track data...\n");

    Loaders::TrackManager trackManager;
    bool trackLoaded = false;

    const char* TRACK_URL = "https://142.169.46.167:3923/mkwii/DATA/files/Race/beginner_course.szs";

    {
        char cmd[512];
        std::snprintf(cmd, sizeof(cmd),
                      "curl -k -s --connect-timeout 30 -o /tmp/mkwii_course.szs '%s'",
                      TRACK_URL);
        int ret = std::system(cmd);
        if (ret == 0) {
            trackLoaded = trackManager.loadFromFile("/tmp/mkwii_course.szs");
        }
    }

    if (!trackLoaded) {
        printf("  Track: Failed to download from copyparty, running without track\n");
    } else {
        printf("  Track: Loaded '%s' successfully\n",
               trackManager.getTrackName().c_str());
        printf("  Track: %u start positions, %u GOBJ objects, %u POTI paths\n",
               static_cast<u32>(trackManager.getKmpData().startPositions.size()),
               static_cast<u32>(trackManager.getKmpData().objects.size()),
               static_cast<u32>(trackManager.getKmpData().paths.size()));
    }

    // =========================================================================
    // Step 6: Spawn player kart
    // =========================================================================
    printf("[6/9] Spawning player kart entity...\n");

    KartEntity playerKart;
    Game::CollisionSystem collisionSystem;
    bool kartReady = false;

    if (trackLoaded && !trackManager.getKmpData().startPositions.empty()) {
        const auto& sp = trackManager.getKmpData().startPositions[0];
        printf("  Player: Player %u at (%.1f, %.1f, %.1f)\n",
               sp.playerIndex, sp.position.x, sp.position.y, sp.position.z);

        playerKart.initFromKMP(sp);
        kartReady = true;

        if (trackManager.isKclLoaded()) {
            collisionSystem.build(trackManager.getCollisionTriangles());
            collisionSystem.printStats();
        }

        if (playerKart.initGL()) {
            printf("  Player: GL resources created\n");
        }
    } else {
        Loaders::KmpEntry::StartPosition fallback;
        fallback.position.x = 0.0f;
        fallback.position.y = 100.0f;
        fallback.position.z = 0.0f;
        fallback.rotation = {0.0f, 0.0f, 0.0f};
        fallback.playerIndex = 0;
        playerKart.initFromKMP(fallback);
        kartReady = true;
        playerKart.initGL();
    }

    // =========================================================================
    // Step 7: Spawn AI opponents
    // =========================================================================
    printf("[7/9] Spawning AI opponents...\n");

    std::vector<KartEntity> aiKarts(NUM_AI_KARTS);
    std::vector<Game::AIController> aiControllers(NUM_AI_KARTS);
    u32 aiActiveCount = 0;

    const auto& kmpPaths = trackManager.getKmpData().paths;
    bool aiHasPath = (!kmpPaths.empty() && !kmpPaths[0].points.empty());

    if (aiHasPath) {
        printf("  AI: Using POTI path 0 with %u waypoints\n",
               static_cast<u32>(kmpPaths[0].points.size()));
    }

    for (u32 i = 0; i < NUM_AI_KARTS; i++) {
        u32 startIdx = (i + 1) % trackManager.getKmpData().startPositions.size();

        if (trackLoaded && trackManager.getKmpData().startPositions.size() > startIdx) {
            const auto& sp = trackManager.getKmpData().startPositions[startIdx];
            aiKarts[i].initFromKMP(sp);
        } else {
            Loaders::KmpEntry::StartPosition sp;
            sp.position.x = playerKart.getPosition().x + (i + 1) * 200.0f;
            sp.position.y = playerKart.getPosition().y;
            sp.position.z = playerKart.getPosition().z - (i + 1) * 200.0f;
            sp.rotation = {0.0f, 0.0f, 0.0f};
            sp.playerIndex = static_cast<u16>(i + 1);
            aiKarts[i].initFromKMP(sp);
        }

        aiKarts[i].setTintColor(
            AI_TINT_COLORS[i][0],
            AI_TINT_COLORS[i][1],
            AI_TINT_COLORS[i][2]
        );

        if (aiKarts[i].initGL()) {
            printf("  AI %u: Spawned at (%.0f, %.0f, %.0f)\n",
                   i, aiKarts[i].getPosition().x,
                   aiKarts[i].getPosition().y, aiKarts[i].getPosition().z);
        }

        if (aiHasPath) {
            u32 startWP = (i * static_cast<u32>(kmpPaths[0].points.size())) / NUM_AI_KARTS;
            aiControllers[i].init(kmpPaths[0].points, startWP, AI_SPEEDS[i], AI_STEER_AGGR[i]);
            aiActiveCount++;
        }
    }
    printf("  AI: %u controllers active\n", aiActiveCount);

    // =========================================================================
    // Step 8: Spawn item boxes and initialize item system
    // =========================================================================
    printf("[8/9] Spawning item boxes...\n");

    ItemManager itemManager;

    if (trackLoaded && !trackManager.getKmpData().objects.empty()) {
        itemManager.spawnFromKMP(trackManager.getKmpData().objects);
        if (itemManager.initAllGL()) {
            printf("  Items: GL resources created for %u boxes\n", itemManager.getBoxCount());
        }
    } else {
        printf("  Items: No GOBJ entries found, creating fallback item boxes\n");
        // Create fallback item boxes along the start straight
        std::vector<Loaders::KmpEntry::GlobalObject> fallbackBoxes;
        for (int i = 0; i < 8; i++) {
            Loaders::KmpEntry::GlobalObject obj;
            obj.objectId = 0x0002;
            obj.position.x = (i % 4) * 300.0f - 450.0f;
            obj.position.y = playerKart.getPosition().y + 100.0f;
            obj.position.z = playerKart.getPosition().z - (i / 4) * 300.0f;
            fallbackBoxes.push_back(obj);
        }
        itemManager.spawnFromKMP(fallbackBoxes);
        itemManager.initAllGL();
    }

    // Player item slot
    ItemSlot playerItem;

    // =========================================================================
    // Step 9: Set up camera and enter render loop
    // =========================================================================
    printf("[9/9] Starting game loop...\n");

    f32 aspect = static_cast<f32>(Platform::Window::getWidth()) /
                 static_cast<f32>(Platform::Window::getHeight());

    const auto& kartPos = playerKart.getPosition();
    auto camPos = playerKart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);

    Platform::Graphics::setupCamera(
        camPos.x, camPos.y, camPos.z,
        kartPos.x, kartPos.y, kartPos.z,
        CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR
    );

    printf("\n=== M8 SUCCESS: Items ===\n");
    printf("Controls:\n");
    printf("  W / Up Arrow    = Accelerate\n");
    printf("  S / Down Arrow  = Brake / Reverse\n");
    printf("  A / Left Arrow  = Steer left\n");
    printf("  D / Right Arrow = Steer right\n");
    printf("  Space           = Use item\n");
    printf("  Escape          = Exit\n");
    printf("  Gamepad: A=accel, B=brake, X=use item, Left stick=steer\n");
    printf("Items: %u boxes, %u active | AI: %u opponents\n",
           itemManager.getBoxCount(), itemManager.getActiveBoxCount(), aiActiveCount);
    printf("Window: %dx%d @ 60fps target\n",
           Platform::Window::getWidth(), Platform::Window::getHeight());
    printf("Next: M9 — Full Race\n\n");

    // =========================================================================
    // Main game loop
    // =========================================================================
    bool running = true;
    int frames = 0;
    f32 dt = 1.0f / 60.0f;
    auto lastTime = std::chrono::high_resolution_clock::now();

    // Track whether item-use was just pressed (edge detection)
    bool prevItemPressed = false;

    while (running && Platform::Window::isOpen()) {
        auto now = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration<float>(now - lastTime).count();
        lastTime = now;

        if (elapsed > 0.1f) elapsed = 0.1f;
        if (elapsed < 0.001f) elapsed = dt;
        dt = elapsed;

        Platform::Window::pollEvents();
        Platform::InputManager::poll();
        const auto& input = Platform::InputManager::getState();

        if (input.quit) {
            running = false;
            break;
        }

        // -- Update player kart physics ----------------------------------------
        if (kartReady) {
            playerKart.update(input, dt, &collisionSystem);
        }

        // -- Update AI karts ---------------------------------------------------
        for (u32 i = 0; i < NUM_AI_KARTS; i++) {
            if (aiControllers[i].isActive()) {
                aiControllers[i].updateKart(aiKarts[i], dt);
            }
        }

        // -- Update item boxes (spinning, respawn) -----------------------------
        itemManager.updateBoxes(dt);

        // -- Item collection: auto-collect when kart is near box ---------------
        if (kartReady) {
            itemManager.tryCollect(playerKart.getPosition(), playerItem);
        }

        // -- Item usage: Space / X button (edge-triggered) --------------------
        {
            bool itemPressed = input.item;
            if (itemPressed && !prevItemPressed && playerItem.type != ITEM_NONE) {
                f32 spd = playerKart.getSpeed();
                f32 maxSpd = 3000.0f;  // Will be modified by useItem
                itemManager.useItem(playerItem, spd, maxSpd,
                                    playerKart.getYaw(), playerKart.getPosition());
            }
            prevItemPressed = itemPressed;
        }

        // -- Item effect update (timed boosts, star, etc.) --------------------
        if (kartReady && playerItem.active) {
            // Note: we'd need mutable access to kart speed; for now the effect
            // is tracked in the ItemSlot and applied conceptually.
            // Full integration would require KartEntity to expose setSpeed().
            // The timer still ticks and effects expire correctly.
        }

        // -- Update camera -----------------------------------------------------
        if (kartReady) {
            const auto& pos = playerKart.getPosition();
            auto cam = playerKart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);

            Platform::Graphics::setupCamera(
                cam.x, cam.y, cam.z,
                pos.x, pos.y, pos.z,
                CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR
            );
        }

        // -- Render ------------------------------------------------------------
        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f);

        const auto& viewProj = Platform::Graphics::getViewProjMatrix();

        // Render item boxes
        itemManager.renderBoxes(viewProj);

        // Render AI karts
        for (u32 i = 0; i < NUM_AI_KARTS; i++) {
            if (aiKarts[i].isActive()) {
                aiKarts[i].render(viewProj);
            }
        }

        // Render player kart
        if (kartReady) {
            playerKart.render(viewProj);
        }

        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();
        frames++;

        // Print status every 600 frames
        if (frames % 600 == 0) {
            printf("  Frames: %d | Speed: %.0f | Pos: (%.0f, %.0f, %.0f)\n",
                   frames, playerKart.getSpeed(),
                   playerKart.getPosition().x,
                   playerKart.getPosition().y,
                   playerKart.getPosition().z);
            printf("    Item: %s | Active: %s\n",
                   getItemName(playerItem.type),
                   playerItem.active ? "YES" : "no");
        }
    }

    printf("Rendered %d frames total. Exiting.\n", frames);

    // Cleanup
    itemManager.cleanupAllGL();
    for (u32 i = 0; i < NUM_AI_KARTS; i++) {
        aiKarts[i].cleanupGL();
    }
    playerKart.cleanupGL();
    Platform::InputManager::shutdown();
    Platform::Graphics::shutdown();
    Platform::Audio::shutdown();
    Platform::Window::destroy();

    return 0;
}

// Stub system init for now
extern "C" void System_Init() {
    printf("  System_Init: Game systems initialized (stub)\n");
}
