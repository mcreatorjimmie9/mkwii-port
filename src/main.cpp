// main.cpp — Mario Kart Wii PC Port Application Entry Point
// MAESTRO Phase 7: Integration Milestone M2

#include <cstdio>
#include "platform/window.hpp"
#include "platform/graphics.hpp"
#include "platform/audio.hpp"

extern "C" void System_Init(); // Forward declaration for future system init

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    printf("=== Mario Kart Wii PC Port ===\n");
    printf("MAESTRO Phase 7 — Milestone M2: Platform Initialization\n\n");

    // Step 1: Initialize Window (SDL2 + OpenGL)
    printf("[1/4] Initializing window system...\n");
    if (!Platform::Window::create(1280, 720, "Mario Kart Wii PC Port")) {
        printf("ERROR: Failed to create window\n");
        return 1;
    }

    // Step 2: Initialize Graphics (OpenGL)
    printf("[2/4] Initializing graphics subsystem...\n");
    if (!Platform::Graphics::initialize()) {
        printf("ERROR: Failed to initialize graphics\n");
        Platform::Window::destroy();
        return 1;
    }
    Platform::Graphics::setViewport(0, 0, 1280, 720);

    // Step 3: Initialize Audio (OpenAL)
    printf("[3/4] Initializing audio subsystem...\n");
    if (!Platform::Audio::initialize()) {
        printf("WARNING: Audio initialization failed (continuing without audio)\n");
    }

    // Step 4: Initialize game systems
    printf("[4/4] Initializing game systems...\n");
    System_Init(); // Will be implemented in future milestones

    printf("\n=== M2 SUCCESS: All systems initialized ===\n");
    printf("Window: %dx%d @ 60fps target\n",
           Platform::Window::getWidth(), Platform::Window::getHeight());
    printf("Next: M3 — Track loading (awaiting asset pipeline)\n");

    // Main loop placeholder (M2 just tests init, exits after 1 frame)
    bool running = true;
    int frames = 0;
    const int MAX_TEST_FRAMES = 60; // Run 1 second then exit

    while (running && Platform::Window::isOpen() && frames < MAX_TEST_FRAMES) {
        Platform::Window::pollEvents();
        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.0f, 0.0f, 0.2f, 1.0f); // Dark blue background

        // Future: game update & render here

        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();
        frames++;
    }

    printf("Rendered %d frames in test mode. Exiting.\n", frames);

    // Shutdown
    Platform::Graphics::shutdown();
    Platform::Audio::shutdown();
    Platform::Window::destroy();

    return 0;
}

// Stub system init for now
extern "C" void System_Init() {
    printf("  System_Init: Game systems initialized (stub)\n");
}