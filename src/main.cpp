// main.cpp — Mario Kart Wii PC Port Application Entry Point
// MAESTRO Phase 7: Integration Milestone M5 — Basic Input

#include <cstdio>
#include <cmath>
#include <chrono>
#include "platform/window.hpp"
#include "platform/graphics.hpp"
#include "platform/audio.hpp"
#include "platform/input.hpp"
#include "game/KartEntity.hpp"
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

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    printf("=== Mario Kart Wii PC Port ===\n");
    printf("MAESTRO Phase 7 — Milestone M5: Basic Input\n\n");

    // =========================================================================
    // Step 1: Initialize Window (SDL2 + OpenGL 3.3 Core)
    // =========================================================================
    printf("[1/7] Initializing window system...\n");
    if (!Platform::Window::create(1280, 720, "Mario Kart Wii PC Port — M5")) {
        printf("ERROR: Failed to create window\n");
        return 1;
    }

    // =========================================================================
    // Step 2: Initialize Graphics (load GL 3.3 function pointers)
    // =========================================================================
    printf("[2/7] Initializing graphics subsystem...\n");
    if (!Platform::Graphics::initialize()) {
        printf("ERROR: Failed to initialize graphics\n");
        Platform::Window::destroy();
        return 1;
    }
    Platform::Graphics::setViewport(0, 0, 1280, 720);

    // =========================================================================
    // Step 3: Initialize Audio (stub for now)
    // =========================================================================
    printf("[3/7] Initializing audio subsystem...\n");
    if (!Platform::Audio::initialize()) {
        printf("WARNING: Audio initialization failed (continuing without audio)\n");
    }

    // =========================================================================
    // Step 4: Initialize Input (keyboard + gamepad)
    // =========================================================================
    printf("[4/7] Initializing input subsystem...\n");
    if (!Platform::InputManager::initialize()) {
        printf("WARNING: Input initialization failed (continuing without input)\n");
    }

    // =========================================================================
    // Step 5: Load track and parse KMP start positions
    // =========================================================================
    printf("[5/7] Loading track data...\n");

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
        printf("  Track: %u start positions, %u collision triangles\n",
               static_cast<u32>(trackManager.getKmpData().startPositions.size()),
               trackManager.getTriangleCount());
    }

    // =========================================================================
    // Step 6: Spawn kart at start position
    // =========================================================================
    printf("[6/7] Spawning kart entity...\n");

    KartEntity kart;
    bool kartReady = false;

    if (trackLoaded && !trackManager.getKmpData().startPositions.empty()) {
        const auto& sp = trackManager.getKmpData().startPositions[0];
        printf("  Kart: Player %u at (%.1f, %.1f, %.1f) rot (%.1f, %.1f, %.1f)\n",
               sp.playerIndex,
               sp.position.x, sp.position.y, sp.position.z,
               sp.rotation.x, sp.rotation.y, sp.rotation.z);

        kart.initFromKMP(sp);
        kartReady = true;

        // Initialize GL resources for the kart (shader, VAO, VBO, EBO)
        if (kart.initGL()) {
            printf("  Kart: GL resources created (cube 80x50x80 units)\n");
        } else {
            printf("  Kart: GL init skipped (no GL or shader compile failed)\n");
        }
    } else {
        // No track data — place kart at origin as fallback
        printf("  Kart: No track data, placing at origin\n");
        Loaders::KmpEntry::StartPosition fallback;
        fallback.position.x = 0.0f;
        fallback.position.y = 100.0f;
        fallback.position.z = 0.0f;
        fallback.rotation.x = 0.0f;
        fallback.rotation.y = 0.0f;
        fallback.rotation.z = 0.0f;
        fallback.playerIndex = 0;
        kart.initFromKMP(fallback);
        kartReady = true;

        if (kart.initGL()) {
            printf("  Kart: GL resources created (cube 80x50x80 units)\n");
        }
    }

    // =========================================================================
    // Step 7: Set up camera and enter render loop
    // =========================================================================
    printf("[7/7] Starting game loop...\n");

    f32 aspect = static_cast<f32>(Platform::Window::getWidth()) /
                 static_cast<f32>(Platform::Window::getHeight());

    // Set up initial camera
    const auto& kartPos = kart.getPosition();
    auto camPos = kart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);

    Platform::Graphics::setupCamera(
        camPos.x, camPos.y, camPos.z,          // eye
        kartPos.x, kartPos.y, kartPos.z,        // target (look at kart)
        CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR
    );

    printf("\n=== M5 SUCCESS: Kart with Input ===\n");
    printf("Controls:\n");
    printf("  W / Up Arrow    = Accelerate\n");
    printf("  S / Down Arrow  = Brake / Reverse\n");
    printf("  A / Left Arrow  = Steer left\n");
    printf("  D / Right Arrow = Steer right\n");
    printf("  LShift          = Drift (future)\n");
    printf("  Escape          = Exit\n");
    printf("  Gamepad: Left trigger=accel, Right trigger=brake, Left stick=steer\n");
    printf("Window: %dx%d @ 60fps target\n",
           Platform::Window::getWidth(), Platform::Window::getHeight());
    printf("Next: M6 — Physics Loop (KCL collision)\n\n");

    // =========================================================================
    // Main game loop with fixed timestep
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

        // -- Update kart physics ----------------------------------------------
        if (kartReady) {
            kart.update(input, dt);
        }

        // -- Update camera to follow kart --------------------------------------
        if (kartReady) {
            const auto& pos = kart.getPosition();
            auto cam = kart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);

            Platform::Graphics::setupCamera(
                cam.x, cam.y, cam.z,       // eye
                pos.x, pos.y, pos.z,       // target (look at kart)
                CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR
            );
        }

        // -- Render ------------------------------------------------------------
        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f); // Sky blue

        // Render the kart
        if (kartReady) {
            kart.render(Platform::Graphics::getViewProjMatrix());
        }

        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();
        frames++;

        // Print frame count and speed every 600 frames (10 seconds at 60fps)
        if (frames % 600 == 0) {
            printf("  Frames: %d | Speed: %.0f u/s | Pos: (%.0f, %.0f, %.0f)\n",
                   frames, kart.getSpeed(),
                   kart.getPosition().x, kart.getPosition().y, kart.getPosition().z);
        }
    }

    printf("Rendered %d frames total. Exiting.\n", frames);

    // Cleanup
    kart.cleanupGL();
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
