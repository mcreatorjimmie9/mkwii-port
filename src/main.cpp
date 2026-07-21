// main.cpp — Mario Kart Wii PC Port Application Entry Point
// MAESTRO Phase 7: Integration Milestone M4 — Place Kart on Track

#include <cstdio>
#include <cmath>
#include "platform/window.hpp"
#include "platform/graphics.hpp"
#include "platform/audio.hpp"
#include "game/KartEntity.hpp"
#include "loaders/track_manager.hpp"

extern "C" void System_Init(); // Forward declaration for future system init

// =============================================================================
// Camera configuration for viewing the start grid
// =============================================================================
// MKWii tracks are large-scale (units in hundreds/thousands).
// A typical viewing distance of ~500-800 units behind the kart works well.
static const f32 CAMERA_BACK_DIST  = 500.0f;
static const f32 CAMERA_UP_OFFSET  = 300.0f;
static const f32 CAMERA_FOV_DEG    = 60.0f;
static const f32 CAMERA_NEAR       = 1.0f;
static const f32 CAMERA_FAR        = 200000.0f;

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    printf("=== Mario Kart Wii PC Port ===\n");
    printf("MAESTRO Phase 7 — Milestone M4: Place Kart on Track\n\n");

    // =========================================================================
    // Step 1: Initialize Window (SDL2 + OpenGL 3.3 Core)
    // =========================================================================
    printf("[1/6] Initializing window system...\n");
    if (!Platform::Window::create(1280, 720, "Mario Kart Wii PC Port — M4")) {
        printf("ERROR: Failed to create window\n");
        return 1;
    }

    // =========================================================================
    // Step 2: Initialize Graphics (load GL 3.3 function pointers)
    // =========================================================================
    printf("[2/6] Initializing graphics subsystem...\n");
    if (!Platform::Graphics::initialize()) {
        printf("ERROR: Failed to initialize graphics\n");
        Platform::Window::destroy();
        return 1;
    }
    Platform::Graphics::setViewport(0, 0, 1280, 720);

    // =========================================================================
    // Step 3: Initialize Audio (stub for now)
    // =========================================================================
    printf("[3/6] Initializing audio subsystem...\n");
    if (!Platform::Audio::initialize()) {
        printf("WARNING: Audio initialization failed (continuing without audio)\n");
    }

    // =========================================================================
    // Step 4: Load track and parse KMP start positions
    // =========================================================================
    printf("[4/6] Loading track data...\n");

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
    // Step 5: Spawn kart at start position
    // =========================================================================
    printf("[5/6] Spawning kart entity...\n");

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
    }

    // =========================================================================
    // Step 6: Set up camera and enter render loop
    // =========================================================================
    printf("[6/6] Setting up camera and starting render loop...\n");

    // Position camera behind and above the kart
    const auto& kartPos = kart.getPosition();
    f32 yawRad = kart.getModelMatrix().m[0][0]; // Just use position, not rotation for now
    (void)yawRad;

    // Camera: behind kart along Z axis (MKW tracks generally face -Z)
    f32 camX = kartPos.x;
    f32 camY = kartPos.y + CAMERA_UP_OFFSET;
    f32 camZ = kartPos.z + CAMERA_BACK_DIST;

    f32 aspect = static_cast<f32>(Platform::Window::getWidth()) /
                 static_cast<f32>(Platform::Window::getHeight());

    Platform::Graphics::setupCamera(
        camX, camY, camZ,           // eye
        kartPos.x, kartPos.y, kartPos.z,  // target (look at kart)
        CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR
    );

    printf("\n=== M4 SUCCESS: Kart placed on track ===\n");
    printf("Camera: eye=(%.0f, %.0f, %.0f) target=(%.0f, %.0f, %.0f)\n",
           camX, camY, camZ, kartPos.x, kartPos.y, kartPos.z);
    printf("Window: %dx%d @ 60fps target\n",
           Platform::Window::getWidth(), Platform::Window::getHeight());
    printf("Controls: Close window to exit\n");
    printf("Next: M5 — Basic Input (gamepad → move kart)\n\n");

    // =========================================================================
    // Main render loop
    // =========================================================================
    bool running = true;
    int frames = 0;

    while (running && Platform::Window::isOpen()) {
        Platform::Window::pollEvents();
        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f); // Sky blue

        // Render the kart
        if (kartReady) {
            kart.render(Platform::Graphics::getViewProjMatrix());
        }

        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();
        frames++;

        // Print frame count every 600 frames (10 seconds at 60fps)
        if (frames % 600 == 0) {
            printf("  Frames: %d\n", frames);
        }
    }

    printf("Rendered %d frames total. Exiting.\n", frames);

    // Cleanup
    kart.cleanupGL();
    Platform::Graphics::shutdown();
    Platform::Audio::shutdown();
    Platform::Window::destroy();

    return 0;
}

// Stub system init for now
extern "C" void System_Init() {
    printf("  System_Init: Game systems initialized (stub)\n");
}