// main.cpp — Mario Kart Wii PC Port Application Entry Point
// MAESTRO Phase 7: Integration Milestone M7 — AI Opponent

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
static const u32 NUM_AI_KARTS = 3;  // Number of AI opponents

// Color palette for AI karts (RGB tint): orange, green, purple
static const f32 AI_TINT_COLORS[NUM_AI_KARTS][3] = {
    { 1.0f, 0.5f, 0.0f },  // Orange
    { 0.0f, 0.8f, 0.2f },  // Green
    { 0.7f, 0.2f, 1.0f },  // Purple
};

// AI personality parameters (speed variation, steer aggressiveness)
static const f32 AI_SPEEDS[NUM_AI_KARTS]   = { 2200.0f, 2500.0f, 2700.0f };
static const f32 AI_STEER_AGGR[NUM_AI_KARTS] = { 0.9f,   1.0f,   1.2f   };

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    printf("=== Mario Kart Wii PC Port ===\n");
    printf("MAESTRO Phase 7 — Milestone M7: AI Opponent\n\n");

    // =========================================================================
    // Step 1: Initialize Window (SDL2 + OpenGL 3.3 Core)
    // =========================================================================
    printf("[1/8] Initializing window system...\n");
    if (!Platform::Window::create(1280, 720, "Mario Kart Wii PC Port — M7")) {
        printf("ERROR: Failed to create window\n");
        return 1;
    }

    // =========================================================================
    // Step 2: Initialize Graphics (load GL 3.3 function pointers)
    // =========================================================================
    printf("[2/8] Initializing graphics subsystem...\n");
    if (!Platform::Graphics::initialize()) {
        printf("ERROR: Failed to initialize graphics\n");
        Platform::Window::destroy();
        return 1;
    }
    Platform::Graphics::setViewport(0, 0, 1280, 720);

    // =========================================================================
    // Step 3: Initialize Audio (stub for now)
    // =========================================================================
    printf("[3/8] Initializing audio subsystem...\n");
    if (!Platform::Audio::initialize()) {
        printf("WARNING: Audio initialization failed (continuing without audio)\n");
    }

    // =========================================================================
    // Step 4: Initialize Input (keyboard + gamepad)
    // =========================================================================
    printf("[4/8] Initializing input subsystem...\n");
    if (!Platform::InputManager::initialize()) {
        printf("WARNING: Input initialization failed (continuing without input)\n");
    }

    // =========================================================================
    // Step 5: Load track and parse KMP data
    // =========================================================================
    printf("[5/8] Loading track data...\n");

    Loaders::TrackManager trackManager;
    bool trackLoaded = false;

    // Try to load from copyparty URL
    const char* TRACK_URL = "https://142.169.46.167:3923/mkwii/DATA/files/Race/beginner_course.szs";

    // Download via curl
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
        printf("  Track: %u start positions, %u collision triangles, %u paths\n",
               static_cast<u32>(trackManager.getKmpData().startPositions.size()),
               trackManager.getTriangleCount(),
               static_cast<u32>(trackManager.getKmpData().paths.size()));
    }

    // =========================================================================
    // Step 6: Spawn player kart at start position
    // =========================================================================
    printf("[6/8] Spawning player kart entity...\n");

    KartEntity playerKart;
    Game::CollisionSystem collisionSystem;
    bool kartReady = false;

    if (trackLoaded && !trackManager.getKmpData().startPositions.empty()) {
        const auto& sp = trackManager.getKmpData().startPositions[0];
        printf("  Player: Player %u at (%.1f, %.1f, %.1f) rot (%.1f, %.1f, %.1f)\n",
               sp.playerIndex,
               sp.position.x, sp.position.y, sp.position.z,
               sp.rotation.x, sp.rotation.y, sp.rotation.z);

        playerKart.initFromKMP(sp);
        kartReady = true;

        // Build collision system from KCL data
        if (trackManager.isKclLoaded()) {
            collisionSystem.build(trackManager.getCollisionTriangles());
            collisionSystem.printStats();
        }

        // Initialize GL resources for the player kart
        if (playerKart.initGL()) {
            printf("  Player: GL resources created (cube 80x50x80 units)\n");
        }
    } else {
        // No track data — place kart at origin as fallback
        printf("  Player: No track data, placing at origin\n");
        Loaders::KmpEntry::StartPosition fallback;
        fallback.position.x = 0.0f;
        fallback.position.y = 100.0f;
        fallback.position.z = 0.0f;
        fallback.rotation.x = 0.0f;
        fallback.rotation.y = 0.0f;
        fallback.rotation.z = 0.0f;
        fallback.playerIndex = 0;
        playerKart.initFromKMP(fallback);
        kartReady = true;

        if (playerKart.initGL()) {
            printf("  Player: GL resources created\n");
        }
    }

    // =========================================================================
    // Step 7: Spawn AI opponents
    // =========================================================================
    printf("[7/8] Spawning AI opponents...\n");

    std::vector<KartEntity> aiKarts(NUM_AI_KARTS);
    std::vector<Game::AIController> aiControllers(NUM_AI_KARTS);
    u32 aiActiveCount = 0;

    // Use the first KMP POTI path (if available) as the AI race line
    const auto& kmpPaths = trackManager.getKmpData().paths;
    bool aiHasPath = (!kmpPaths.empty() && !kmpPaths[0].points.empty());

    if (aiHasPath) {
        printf("  AI: Using POTI path 0 with %u waypoints as race line\n",
               static_cast<u32>(kmpPaths[0].points.size()));
    } else {
        printf("  AI: No POTI paths found — AI karts will not move\n");
    }

    for (u32 i = 0; i < NUM_AI_KARTS; i++) {
        // Place AI kart at a different start position if available
        u32 startIdx = (i + 1) % trackManager.getKmpData().startPositions.size();

        if (trackLoaded && trackManager.getKmpData().startPositions.size() > startIdx) {
            const auto& sp = trackManager.getKmpData().startPositions[startIdx];
            aiKarts[i].initFromKMP(sp);
        } else {
            // Fallback: place near player with offset
            Loaders::KmpEntry::StartPosition sp;
            sp.position.x = playerKart.getPosition().x + (i + 1) * 200.0f;
            sp.position.y = playerKart.getPosition().y;
            sp.position.z = playerKart.getPosition().z - (i + 1) * 200.0f;
            sp.rotation.x = 0.0f;
            sp.rotation.y = 0.0f;
            sp.rotation.z = 0.0f;
            sp.playerIndex = static_cast<u16>(i + 1);
            aiKarts[i].initFromKMP(sp);
        }

        // Set tint color to distinguish from player
        aiKarts[i].setTintColor(
            AI_TINT_COLORS[i][0],
            AI_TINT_COLORS[i][1],
            AI_TINT_COLORS[i][2]
        );

        // Initialize GL resources
        if (aiKarts[i].initGL()) {
            printf("  AI %u: Spawned at (%.0f, %.0f, %.0f), tint=(%.1f,%.1f,%.1f)\n",
                   i,
                   aiKarts[i].getPosition().x,
                   aiKarts[i].getPosition().y,
                   aiKarts[i].getPosition().z,
                   AI_TINT_COLORS[i][0],
                   AI_TINT_COLORS[i][1],
                   AI_TINT_COLORS[i][2]);
        }

        // Initialize AI controller with path (if available)
        if (aiHasPath) {
            // Spread AI starting waypoints around the path to avoid bunching
            u32 startWaypoint = (i * static_cast<u32>(kmpPaths[0].points.size()))
                                / NUM_AI_KARTS;

            aiControllers[i].init(
                kmpPaths[0].points,
                startWaypoint,
                AI_SPEEDS[i],
                AI_STEER_AGGR[i]
            );

            aiActiveCount++;
        }
    }

    printf("  AI: %u of %u controllers active\n", aiActiveCount, NUM_AI_KARTS);

    // =========================================================================
    // Step 8: Set up camera and enter render loop
    // =========================================================================
    printf("[8/8] Starting game loop...\n");

    f32 aspect = static_cast<f32>(Platform::Window::getWidth()) /
                 static_cast<f32>(Platform::Window::getHeight());

    // Set up initial camera
    const auto& kartPos = playerKart.getPosition();
    auto camPos = playerKart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);

    Platform::Graphics::setupCamera(
        camPos.x, camPos.y, camPos.z,          // eye
        kartPos.x, kartPos.y, kartPos.z,        // target (look at kart)
        CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR
    );

    printf("\n=== M7 SUCCESS: AI Opponents ===\n");
    printf("Controls:\n");
    printf("  W / Up Arrow    = Accelerate\n");
    printf("  S / Down Arrow  = Brake / Reverse\n");
    printf("  A / Left Arrow  = Steer left\n");
    printf("  D / Right Arrow = Steer right\n");
    printf("  LShift          = Drift (future)\n");
    printf("  Escape          = Exit\n");
    printf("  Gamepad: Left trigger=accel, Right trigger=brake, Left stick=steer\n");
    printf("AI: %u opponents (orange, green, purple)\n", aiActiveCount);
    printf("Window: %dx%d @ 60fps target\n",
           Platform::Window::getWidth(), Platform::Window::getHeight());
    printf("Next: M8 — Items\n\n");

    // =========================================================================
    // Main game loop with variable timestep
    // =========================================================================
    bool running = true;
    int frames = 0;
    f32 dt = 1.0f / 60.0f;  // Target 60 FPS

    // Timer for frame timing
    auto lastTime = std::chrono::high_resolution_clock::now();

    while (running && Platform::Window::isOpen()) {
        // -- Frame timing ------------------------------------------------------
        auto now = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration<float>(now - lastTime).count();
        lastTime = now;

        // Clamp dt to avoid spiral of death
        if (elapsed > 0.1f) elapsed = 0.1f;
        if (elapsed < 0.001f) elapsed = dt;
        dt = elapsed;

        // -- Poll events -------------------------------------------------------
        Platform::Window::pollEvents();

        // -- Poll input --------------------------------------------------------
        Platform::InputManager::poll();
        const auto& input = Platform::InputManager::getState();

        // -- Check quit --------------------------------------------------------
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

        // -- Update camera to follow player kart --------------------------------
        if (kartReady) {
            const auto& pos = playerKart.getPosition();
            auto cam = playerKart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);

            Platform::Graphics::setupCamera(
                cam.x, cam.y, cam.z,       // eye
                pos.x, pos.y, pos.z,       // target (look at kart)
                CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR
            );
        }

        // -- Render ------------------------------------------------------------
        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f); // Sky blue

        const auto& viewProj = Platform::Graphics::getViewProjMatrix();

        // Render AI karts first (so player renders on top)
        for (u32 i = 0; i < NUM_AI_KARTS; i++) {
            if (aiKarts[i].isActive()) {
                aiKarts[i].render(viewProj);
            }
        }

        // Render the player kart
        if (kartReady) {
            playerKart.render(viewProj);
        }

        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();
        frames++;

        // Print frame count and speed every 600 frames (10 seconds at 60fps)
        if (frames % 600 == 0) {
            printf("  Frames: %d | Player speed: %.0f u/s | Pos: (%.0f, %.0f, %.0f)\n",
                   frames, playerKart.getSpeed(),
                   playerKart.getPosition().x,
                   playerKart.getPosition().y,
                   playerKart.getPosition().z);
            // Also print AI positions
            for (u32 i = 0; i < NUM_AI_KARTS; i++) {
                if (aiControllers[i].isActive()) {
                    printf("    AI %u: speed=%.0f wp=%u pos=(%.0f,%.0f,%.0f)\n",
                           i, aiKarts[i].getSpeed(),
                           aiControllers[i].getCurrentWaypoint(),
                           aiKarts[i].getPosition().x,
                           aiKarts[i].getPosition().y,
                           aiKarts[i].getPosition().z);
                }
            }
        }
    }

    printf("Rendered %d frames total. Exiting.\n", frames);

    // Cleanup
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
