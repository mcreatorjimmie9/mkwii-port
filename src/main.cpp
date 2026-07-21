// main.cpp — Mario Kart Wii Application Entry Point
// Bridge layer: uses decompiled SceneDirector to drive the race.

#include <cstdio>
#include <chrono>

#include "platform/window.hpp"
#include "platform/graphics.hpp"
#include "platform/audio.hpp"
#include "platform/input.hpp"

// Decompiled scene system
#include "Scene/SceneDirector.hpp"
#include "Scene/SceneCreator.hpp"
#include "Scene/SceneRace.hpp"

extern "C" void System_Init();

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    printf("=== Mario Kart Wii ===\n");
    printf("SceneDirector Bridge\n\n");

    // =========================================================================
    // Step 1: Initialize platform systems
    // =========================================================================
    printf("[1/3] Initializing platform...\n");

    if (!Platform::Window::create(1280, 720, "Mario Kart Wii")) {
        printf("ERROR: Failed to create window\n");
        return 1;
    }
    if (!Platform::Graphics::initialize()) {
        printf("ERROR: Failed to initialize graphics\n");
        Platform::Window::destroy();
        return 1;
    }
    Platform::Graphics::setViewport(0, 0, 1280, 720);

    if (!Platform::Audio::initialize())
        printf("  WARNING: Audio initialization failed\n");
    if (!Platform::InputManager::initialize())
        printf("  WARNING: Input initialization failed\n");

    // =========================================================================
    // Step 2: Initialize scene system and create race scene
    // =========================================================================
    printf("[2/3] Initializing scene system...\n");

    Scene::SceneDirector::getInstance()->init();
    Scene::SceneCreator::initGlobal();

    // Create race scene, load course, and start countdown.
    // This is done BEFORE changeScene() so that when SceneDirector's
    // finalizeTransition() calls load()+init() again, the scene detects
    // it is already set up and skips re-initialization.
    auto* raceScene = new Scene::RaceScene();
    raceScene->init();
    raceScene->loadCourse(0);    // beginner_course
    raceScene->startCountdown();

    // Hand the scene to SceneDirector with immediate transition (no fade).
    // finalizeTransition() will call load() (no-op) and init() (idempotent),
    // then set the scene to ACTIVE.
    Scene::SceneDirector::getInstance()->changeScene(
        raceScene, Scene::SceneDirector::TRANS_IMMEDIATE);

    printf("  Race: %u laps, %u racers\n", 3u, 4u);
    printf("  Controls: WASD=drive, Space=item, Escape=exit\n");
    printf("\n");

    // =========================================================================
    // Step 3: Main loop — SceneDirector drives all updates
    // =========================================================================
    printf("[3/3] Starting main loop...\n");

    bool running = true;

    while (running && Platform::Window::isOpen()) {
        // Poll window events and input
        Platform::Window::pollEvents();
        Platform::InputManager::poll();
        const auto& input = Platform::InputManager::getState();

        if (input.quit) {
            running = false;
            break;
        }

        // Update scene state (countdown, racing, finish)
        Scene::SceneDirector::getInstance()->update();

        // Render frame
        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f);
        Scene::SceneDirector::getInstance()->draw();
        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();
    }

    // =========================================================================
    // Cleanup
    // =========================================================================
    printf("\nShutting down...\n");
    Scene::SceneDirector::getInstance()->shutdown();

    Platform::InputManager::shutdown();
    Platform::Graphics::shutdown();
    Platform::Audio::shutdown();
    Platform::Window::destroy();

    printf("Exiting.\n");
    return 0;
}

extern "C" void System_Init() {
    printf("  System_Init: stub\n");
}