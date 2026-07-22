// main.cpp — Mario Kart Wii Application Entry Point
// Bridge layer: uses decompiled SceneDirector to drive the race.

#include <cstdio>
#include <chrono>

#include "platform/window.hpp"
#include "platform/graphics.hpp"
#include "platform/audio.hpp"
#include "platform/input.hpp"

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

// Decompiled scene system
#include "Scene/SceneDirector.hpp"
#include "Scene/SceneCreator.hpp"
#include "Scene/SceneRace.hpp"

// Phase 21: RaceManager for logging
#include "RaceEngine/RaceManager.hpp"
#include "RaceEngine/RaceConfig.hpp"

// Audio system
#include "AudioSystem.hpp"

// EGG heap subsystem
#include "Heap_Classes.hpp"
#include "FrameTimer.hpp"

extern "C" void System_Init();
extern "C" void initSystemSingletons();
extern "C" void shutdownSystemSingletons();

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
    // Step 1.5: Initialize EGG system and audio engine
    // =========================================================================
    printf("  System_Init...");
    System_Init();
    printf("OK\n");

    // Initialize global FrameTimer with 60 Hz target
    static EGG::FrameTimer gFrameTimer;
    gFrameTimer.init(60);
    printf("  Audio engine...");
    nw4r::snd::AudioSystem::instance().initialize();
    printf("OK\n");

    // =========================================================================
    // Step 1.75: Initialize Wii system singletons
    // =========================================================================
    // In the original MKWii, these are created during the boot sequence
    // before any scene loading. Order: InitScene → KPadDirector → RaceConfig.
    printf("  System singletons (InitScene, KPadDirector)...");
    initSystemSingletons();
    printf("OK\n");

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

    printf("  Race: %u laps, %u racers\n",
           System::RaceManager::getLapCount(),
           System::RaceConfig::getRacePlayerCount());
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

        // Phase 12: Frame timer with real delta time
        gFrameTimer.beginFrame();

        if (input.quit) {
            running = false;
            break;
        }

        // Update audio system (voice states, 3D listener)
        nw4r::snd::AudioSystem::instance().update();

        // Update scene state (countdown, racing, finish)
        // NOTE: SceneDirector::update() doesn't take dt; RaceScene internally
        // uses its own FRAME_TIME constant. Future: propagate dt through Scene.
        Scene::SceneDirector::getInstance()->update();

        // Render frame
        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f);
        Scene::SceneDirector::getInstance()->draw();

        // Fade overlay — render transition effect after scene draw
#ifdef HAS_OPENGL
        {
            auto* sd = Scene::SceneDirector::getInstance();
            if (sd->isTransitioning()) {
                u8 alpha = sd->getFadeAlpha();
                if (alpha > 0) {
                    f32 a = static_cast<f32>(alpha) / 255.0f;
                    // Fade to black (default)
                    GL3::gl.glEnable(GL3::GL_BLEND);
                    GL3::gl.glBlendFunc(GL3::GL_SRC_ALPHA, GL3::GL_ONE_MINUS_SRC_ALPHA);
                    GL3::gl.glDisable(GL3::GL_DEPTH_TEST);

                    // Use a simple NDC quad (no projection matrix needed)
                    static u32 fadeProg = 0;
                    static s32 fadeColLoc = -1;
                    if (fadeProg == 0) {
                        const char* vSrc =
                            "#version 330 core\n"
                            "layout(location=0) in vec2 aPos;\n"
                            "void main() { gl_Position = vec4(aPos, 0.0, 1.0); }\n";
                        const char* fSrc =
                            "#version 330 core\n"
                            "uniform vec4 u_color;\n"
                            "out vec4 fragColor;\n"
                            "void main() { fragColor = u_color; }\n";
                        auto comp = [](u32 type, const char* src) -> u32 {
                            u32 s = GL3::gl.glCreateShader(type);
                            GL3::gl.glShaderSource(s, 1, &src, nullptr);
                            GL3::gl.glCompileShader(s);
                            s32 ok = 0;
                            GL3::gl.glGetShaderiv(s, GL3::GL_COMPILE_STATUS, &ok);
                            if (!ok) { GL3::gl.glDeleteShader(s); return 0; }
                            return s;
                        };
                        u32 vs = comp(GL3::GL_VERTEX_SHADER, vSrc);
                        u32 fs = comp(GL3::GL_FRAGMENT_SHADER, fSrc);
                        if (vs && fs) {
                            fadeProg = GL3::gl.glCreateProgram();
                            GL3::gl.glAttachShader(fadeProg, vs);
                            GL3::gl.glAttachShader(fadeProg, fs);
                            GL3::gl.glLinkProgram(fadeProg);
                            s32 lok = 0;
                            GL3::gl.glGetProgramiv(fadeProg, GL3::GL_LINK_STATUS, &lok);
                            if (!lok) { GL3::gl.glDeleteProgram(fadeProg); fadeProg = 0; }
                            else { fadeColLoc = GL3::gl.glGetUniformLocation(fadeProg, "u_color"); }
                        }
                        if (vs) GL3::gl.glDeleteShader(vs);
                        if (fs) GL3::gl.glDeleteShader(fs);
                    }
                    if (fadeProg > 0) {
                        f32 quad[] = { -1,-1, 1,-1, 1,1, -1,-1, 1,1, -1,1 };
                        u32 vao, vbo;
                        GL3::gl.glGenVertexArrays(1, &vao);
                        GL3::gl.glGenBuffers(1, &vbo);
                        GL3::gl.glBindVertexArray(vao);
                        GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, vbo);
                        GL3::gl.glBufferData(GL3::GL_ARRAY_BUFFER, sizeof(quad), quad, GL3::GL_DYNAMIC_DRAW);
                        GL3::gl.glVertexAttribPointer(0, 2, GL3::GL_FLOAT, GL3::GL_FALSE, 0, nullptr);
                        GL3::gl.glEnableVertexAttribArray(0);
                        GL3::gl.glUseProgram(fadeProg);
                        GL3::gl.glUniform4f(fadeColLoc, 0.0f, 0.0f, 0.0f, a);
                        GL3::gl.glDrawArrays(GL3::GL_TRIANGLES, 0, 6);
                        GL3::gl.glBindVertexArray(0);
                        GL3::gl.glUseProgram(0);
                        GL3::gl.glDeleteVertexArrays(1, &vao);
                        GL3::gl.glDeleteBuffers(1, &vbo);
                    }
                    GL3::gl.glDisable(GL3::GL_BLEND);
                    GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
                }
            }
        }
#endif

        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();

        // Phase 12: End frame timing
        gFrameTimer.endFrame();
    }

    // =========================================================================
    // Cleanup
    // =========================================================================
    printf("\nShutting down...\n");
    shutdownSystemSingletons();
    Scene::SceneDirector::getInstance()->shutdown();
    nw4r::snd::AudioSystem::instance().shutdown();

    Platform::InputManager::shutdown();
    Platform::Graphics::shutdown();
    Platform::Audio::shutdown();
    Platform::Window::destroy();

    printf("Exiting.\n");
    return 0;
}

// ============================================================================
// System_Init — EGG system initialization (root heaps, heap subsystem)
//
// In the original MKWii, EGG::TSystem::initializeMemory() creates root heaps
// from MEM1/MEM2 arenas (24MB + 56MB on Wii). The PC port uses a single
// 32MB root heap allocated from the OS, with child ExpHeaps for scenes.
//
// Phase 12: Implemented with real EGG::ExpHeap creation.
// ============================================================================

// Global root heap — accessible from anywhere in the game code
// via EGG::Heap::sCurrentHeap or direct global access.
static EGG::Heap* sRootHeap = nullptr;

extern "C" void System_Init() {
    printf("  System_Init: creating root EGG heap (32MB)...\n");

    // In the original MKWii:
    //   MEM1: 24MB arena (OS heap, stack, game allocations)
    //   MEM2: 56MB arena (scene data, textures, audio)
    // For PC port: single 32MB root heap from malloc.
    const u32 ROOT_HEAP_SIZE = 32 * 1024 * 1024; // 32 MB
    u8* rootMem = static_cast<u8*>(malloc(ROOT_HEAP_SIZE));
    if (!rootMem) {
        printf("  System_Init: FATAL — failed to allocate root heap memory\n");
        return;
    }

    // Initialize the EGG heap subsystem (sets sCurrentHeap = nullptr)
    EGG::Heap::initialize();

    // Create the root ExpHeap in the allocated memory region
    EGG::ExpHeap* rootHeap = EGG::ExpHeap::create(rootMem, ROOT_HEAP_SIZE, nullptr);
    if (!rootHeap) {
        printf("  System_Init: FATAL — failed to create root ExpHeap\n");
        free(rootMem);
        return;
    }
    // Root heap is ready — no name set (mName is protected)

    // Make it the current heap for new/delete allocations
    EGG::Heap::setCurrentHeap(rootHeap);
    sRootHeap = rootHeap;

    printf("  System_Init: root heap %p (%u MB, %u bytes free)\n",
           rootHeap, ROOT_HEAP_SIZE / (1024 * 1024),
           rootHeap->getAllocatableSize(4));
}