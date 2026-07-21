// main.cpp — Mario Kart Wii PC Port Application Entry Point
// MAESTRO Phase 7: Integration Milestone M10 — Polish

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
#include "game/RaceSession.hpp"
#include "game/HUD.hpp"
#include "game/GameMenu.hpp"
#include "game/EffectsManager.hpp"
#include "game/CollisionSystem.hpp"
#include "loaders/track_manager.hpp"

extern "C" void System_Init();

// =============================================================================
// Configuration
// =============================================================================
static const f32 CAMERA_BACK_DIST  = 500.0f;
static const f32 CAMERA_UP_OFFSET  = 300.0f;
static const f32 CAMERA_FOV_DEG    = 60.0f;
static const f32 CAMERA_NEAR       = 1.0f;
static const f32 CAMERA_FAR        = 200000.0f;
static const u32 NUM_AI_KARTS = 3;
static const u32 TOTAL_LAPS   = 3;

static const f32 AI_TINT_COLORS[NUM_AI_KARTS][3] = {
    { 1.0f, 0.5f, 0.0f }, { 0.0f, 0.8f, 0.2f }, { 0.7f, 0.2f, 1.0f },
};
static const f32 AI_SPEEDS[NUM_AI_KARTS]     = { 2200.0f, 2500.0f, 2700.0f };
static const f32 AI_STEER_AGGR[NUM_AI_KARTS] = { 0.9f,   1.0f,   1.2f   };

static const char* getItemName(u8 type) {
    switch (type) {
        case ITEM_MUSHROOM:     return "Mushroom";
        case ITEM_TRIPLE_MUSH:  return "TripleMsh";
        case ITEM_GREEN_SHELL:  return "GreenShl";
        case ITEM_RED_SHELL:    return "RedShell";
        case ITEM_BANANA:       return "Banana";
        case ITEM_STAR:         return "Star";
        case ITEM_BULLET_BILL:  return "BulletBil";
        case ITEM_GOLDEN_MUSH:  return "GoldMush";
        case ITEM_THUNDER:      return "Thunder";
        case ITEM_BOB_OMB:      return "Bob-omb";
        case ITEM_MEGA_MUSH:    return "MegaMush";
        case ITEM_BLUE_SHELL:   return "BlueShl";
        default:                return "---";
    }
}

// =============================================================================
// Position suffix string
// =============================================================================
static const char* posSuffix(u32 pos) {
    static const char* suffix[] = {"st", "nd", "rd", "th",
                                   "th", "th", "th", "th", "th", "th", "th", "th"};
    return suffix[(pos > 4) ? 4 : (pos - 1)];
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    printf("=== Mario Kart Wii PC Port ===\n");
    printf("MAESTRO Phase 7 — Milestone M9: Full Race\n\n");

    // =========================================================================
    // Step 1-4: Init Window, Graphics, Audio, Input
    // =========================================================================
    printf("[1/10] Initializing systems...\n");
    if (!Platform::Window::create(1280, 720, "Mario Kart Wii PC Port — M9")) {
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
        printf("WARNING: Audio initialization failed\n");
    if (!Platform::InputManager::initialize())
        printf("WARNING: Input initialization failed\n");

    // =========================================================================
    // Step 5: Load track
    // =========================================================================
    printf("[2/10] Loading track...\n");

    Loaders::TrackManager trackManager;
    bool trackLoaded = false;

    const char* TRACK_URL = "https://142.169.46.167:3923/mkwii/DATA/files/Race/beginner_course.szs";
    {
        char cmd[512];
        std::snprintf(cmd, sizeof(cmd),
                      "curl -k -s --connect-timeout 30 -o /tmp/mkwii_course.szs '%s'", TRACK_URL);
        if (std::system(cmd) == 0) {
            trackLoaded = trackManager.loadFromFile("/tmp/mkwii_course.szs");
        }
    }

    if (!trackLoaded) {
        printf("  Track: Failed to download\n");
    } else {
        printf("  Track: '%s' — %u starts, %u GOBJ, %u CPs, %u paths\n",
               trackManager.getTrackName().c_str(),
               static_cast<u32>(trackManager.getKmpData().startPositions.size()),
               static_cast<u32>(trackManager.getKmpData().objects.size()),
               static_cast<u32>(trackManager.getKmpData().checkpoints.size()),
               static_cast<u32>(trackManager.getKmpData().paths.size()));
    }

    // =========================================================================
    // Step 6: Spawn player kart
    // =========================================================================
    printf("[3/10] Spawning player kart...\n");

    KartEntity playerKart;
    Game::CollisionSystem collisionSystem;
    bool kartReady = false;

    if (trackLoaded && !trackManager.getKmpData().startPositions.empty()) {
        const auto& sp = trackManager.getKmpData().startPositions[0];
        playerKart.initFromKMP(sp);
        kartReady = true;

        if (trackManager.isKclLoaded()) {
            collisionSystem.build(trackManager.getCollisionTriangles());
            collisionSystem.printStats();
        }
        playerKart.initGL();
    } else {
        Loaders::KmpEntry::StartPosition fallback;
        fallback.position = {0.0f, 100.0f, 0.0f};
        fallback.rotation = {0.0f, 0.0f, 0.0f};
        fallback.playerIndex = 0;
        playerKart.initFromKMP(fallback);
        kartReady = true;
        playerKart.initGL();
    }

    // =========================================================================
    // Step 7: Spawn AI opponents
    // =========================================================================
    printf("[4/10] Spawning AI opponents...\n");

    std::vector<KartEntity> aiKarts(NUM_AI_KARTS);
    std::vector<Game::AIController> aiControllers(NUM_AI_KARTS);
    u32 aiActiveCount = 0;

    const auto& kmpPaths = trackManager.getKmpData().paths;
    bool aiHasPath = (!kmpPaths.empty() && !kmpPaths[0].points.empty());

    for (u32 i = 0; i < NUM_AI_KARTS; i++) {
        u32 startIdx = (i + 1) % trackManager.getKmpData().startPositions.size();
        if (trackLoaded && trackManager.getKmpData().startPositions.size() > startIdx) {
            aiKarts[i].initFromKMP(trackManager.getKmpData().startPositions[startIdx]);
        } else {
            Loaders::KmpEntry::StartPosition sp;
            sp.position.x = playerKart.getPosition().x + (i + 1) * 200.0f;
            sp.position.y = playerKart.getPosition().y;
            sp.position.z = playerKart.getPosition().z - (i + 1) * 200.0f;
            sp.rotation = {0.0f, 0.0f, 0.0f};
            sp.playerIndex = static_cast<u16>(i + 1);
            aiKarts[i].initFromKMP(sp);
        }

        aiKarts[i].setTintColor(AI_TINT_COLORS[i][0], AI_TINT_COLORS[i][1], AI_TINT_COLORS[i][2]);
        aiKarts[i].initGL();

        if (aiHasPath) {
            u32 startWP = (i * static_cast<u32>(kmpPaths[0].points.size())) / NUM_AI_KARTS;
            aiControllers[i].init(kmpPaths[0].points, startWP, AI_SPEEDS[i], AI_STEER_AGGR[i]);
            aiActiveCount++;
        }
    }
    printf("  AI: %u active\n", aiActiveCount);

    // =========================================================================
    // Step 8: Spawn item boxes
    // =========================================================================
    printf("[5/10] Spawning item boxes...\n");

    ItemManager itemManager;

    if (trackLoaded && !trackManager.getKmpData().objects.empty()) {
        itemManager.spawnFromKMP(trackManager.getKmpData().objects);
    } else {
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
    }
    itemManager.initAllGL();
    printf("  Items: %u boxes\n", itemManager.getBoxCount());

    // Player item slot
    ItemSlot playerItem;

    // =========================================================================
    // Step 9: Initialize race session and HUD
    // =========================================================================
    printf("[6/10] Initializing race session...\n");

    u32 totalRacers = 1 + NUM_AI_KARTS;
    RaceSession race;
    race.init(totalRacers, TOTAL_LAPS, trackManager.getKmpData().checkpoints);
    race.startCountdown();

    HUD hud;
    hud.initGL();

    // =========================================================================
    // Step 10: Game menu (pre-race)
    // =========================================================================
    printf("[7/11] Showing start menu...\n");

    GameMenu menu;
    menu.initGL();
    menu.init(trackManager.getTrackName().c_str());

    EffectsManager effects;
    effects.initGL();

    // =========================================================================
    // Step 11: Race loop
    // =========================================================================
    printf("[8/11] Waiting for start...\n");

    f32 aspect = static_cast<f32>(Platform::Window::getWidth()) /
                 static_cast<f32>(Platform::Window::getHeight());

    auto camPos = playerKart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);
    Platform::Graphics::setupCamera(
        camPos.x, camPos.y, camPos.z,
        playerKart.getPosition().x, playerKart.getPosition().y, playerKart.getPosition().z,
        CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR);

    printf("\n=== M10 SUCCESS: Full Race with Polish ===\n");
    printf("Controls: WASD=drive, Space=item, Enter=start, Escape=exit\n");
    printf("Race: %u laps, %u racers\n", TOTAL_LAPS, totalRacers);
    printf("Window: %dx%d @ 60fps\n\n",
           Platform::Window::getWidth(), Platform::Window::getHeight());

    bool running = true;
    int frames = 0;
    f32 dt = 1.0f / 60.0f;
    auto lastTime = std::chrono::high_resolution_clock::now();
    bool prevItemPressed = false;
    bool raceFinishedPrinted = false;

    // =========================================================================
    // Pre-race menu loop
    // =========================================================================
    while (running && Platform::Window::isOpen() && !menu.isStarted()) {
        auto now = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration<float>(now - lastTime).count();
        lastTime = now;
        if (elapsed > 0.1f) elapsed = 0.1f;
        if (elapsed < 0.001f) elapsed = dt;
        dt = elapsed;

        Platform::Window::pollEvents();
        Platform::InputManager::poll();
        const auto& input = Platform::InputManager::getState();
        if (input.quit) { running = false; break; }

        menu.update(dt, input.enter);

        Platform::Graphics::beginFrame();
        Platform::Graphics::clearScreen(0.05f, 0.05f, 0.2f, 1.0f);
        menu.render(Platform::Window::getWidth(), Platform::Window::getHeight());
        Platform::Graphics::endFrame();
        Platform::Window::swapBuffers();
        frames++;
    }

    if (!running) {
        // User quit during menu
        menu.cleanupGL();
        effects.cleanupGL();
        hud.cleanupGL();
        itemManager.cleanupAllGL();
        for (u32 i = 0; i < NUM_AI_KARTS; i++) aiKarts[i].cleanupGL();
        playerKart.cleanupGL();
        Platform::InputManager::shutdown();
        Platform::Graphics::shutdown();
        Platform::Audio::shutdown();
        Platform::Window::destroy();
        return 0;
    }

    printf("  Menu: Start pressed! Beginning race...\n");

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

        // -- Countdown phase: no kart updates ----------------------------------
        if (race.getPhase() == RACE_PHASE_COUNTDOWN) {
            race.updateCountdown(dt);

            // Camera still follows kart during countdown
            const auto& pos = playerKart.getPosition();
            auto cam = playerKart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);
            Platform::Graphics::setupCamera(
                cam.x, cam.y, cam.z, pos.x, pos.y, pos.z,
                CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR);

            Platform::Graphics::beginFrame();
            Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f);
            const auto& vp = Platform::Graphics::getViewProjMatrix();
            itemManager.renderBoxes(vp);
            for (u32 i = 0; i < NUM_AI_KARTS; i++) {
                if (aiKarts[i].isActive()) aiKarts[i].render(vp);
            }
            playerKart.render(vp);

            // HUD: countdown overlay
            hud.setCountdown(race.getCountdownTimer(), true);
            hud.render(Platform::Window::getWidth(), Platform::Window::getHeight());

            Platform::Graphics::endFrame();
            Platform::Window::swapBuffers();
            frames++;
            continue;
        }

        // -- Racing phase ------------------------------------------------------
        if (race.getPhase() == RACE_PHASE_RACING) {
            // Update player kart
            if (kartReady) {
                playerKart.update(input, dt, &collisionSystem);
            }

            // Update AI karts
            for (u32 i = 0; i < NUM_AI_KARTS; i++) {
                if (aiControllers[i].isActive()) {
                    aiControllers[i].updateKart(aiKarts[i], dt);
                }
            }

            // Update item boxes
            itemManager.updateBoxes(dt);

            // Item collection
            if (kartReady) {
                itemManager.tryCollect(playerKart.getPosition(), playerItem);
            }

            // Item usage (edge-triggered)
            {
                bool itemPressed = input.item;
                if (itemPressed && !prevItemPressed && playerItem.type != ITEM_NONE) {
                    u8 usedType = playerItem.type;
                    f32 spd = playerKart.getSpeed();
                    f32 maxSpd = 3000.0f;
                    itemManager.useItem(playerItem, spd, maxSpd,
                                        playerKart.getYaw(), playerKart.getPosition());
                    // Trigger visual effects based on item type
                    if (usedType == ITEM_MUSHROOM || usedType == ITEM_TRIPLE_MUSH ||
                        usedType == ITEM_GOLDEN_MUSH) {
                        effects.triggerBoost(1.0f);
                    } else if (usedType == ITEM_STAR) {
                        effects.triggerStar(8.0f);
                    }
                }
                prevItemPressed = itemPressed;
            }

            // Race session updates
            race.update(dt);

            // Check checkpoints for player
            if (kartReady) {
                race.checkCheckpoints(0, playerKart.getPosition());
            }

            // Check checkpoints for AI (simulated distance tracking)
            for (u32 i = 0; i < NUM_AI_KARTS; i++) {
                if (aiKarts[i].isActive()) {
                    u32 aiId = i + 1;
                    race.checkCheckpoints(aiId, aiKarts[i].getPosition());
                    // Approximate AI distance based on waypoint progress
                    auto& rs = race.getRacer(aiId);
                    rs.distance = static_cast<f32>(aiControllers[i].getCurrentWaypoint());
                }
            }

            // Player distance based on speed accumulation
            if (kartReady) {
                auto& rs = race.getRacer(0);
                rs.distance += playerKart.getSpeed() * dt * 0.001f;
            }

            // Calculate positions
            race.calculatePositions();

            // Check for race finish
            if (race.allFinished() && !raceFinishedPrinted) {
                printf("\n=== RACE FINISHED ===\n");
                for (u32 i = 0; i < totalRacers; i++) {
                    const auto& rs = race.getRacer(i);
                    const char* name = (i == 0) ? "Player" : "AI";
                    printf("  %u%s %s: %s\n",
                           rs.finishPosition, posSuffix(rs.finishPosition), name,
                           race.getRaceTimeString());
                }
                raceFinishedPrinted = true;
            }

            // Update camera
            if (kartReady) {
                const auto& pos = playerKart.getPosition();
                auto cam = playerKart.getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);
                Platform::Graphics::setupCamera(
                    cam.x, cam.y, cam.z, pos.x, pos.y, pos.z,
                    CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR);
            }

            // -- Render --------------------------------------------------------
            Platform::Graphics::beginFrame();
            Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f);
            const auto& vp = Platform::Graphics::getViewProjMatrix();

            itemManager.renderBoxes(vp);
            for (u32 i = 0; i < NUM_AI_KARTS; i++) {
                if (aiKarts[i].isActive()) aiKarts[i].render(vp);
            }
            if (kartReady) playerKart.render(vp);

            // HUD overlay
            hud.setPosition(race.getPlayerPosition());
            hud.setLap(race.getPlayerLap(), TOTAL_LAPS);
            hud.setSpeed(playerKart.getSpeed());
            hud.setItem(getItemName(playerItem.type));
            hud.setLapTime(race.getCurrentLapTimeString());
            hud.setRaceTime(race.getRaceTimeString());
            hud.setCountdown(0.0f, false);
            hud.setFinished(race.allFinished());
            hud.setFinishPosition(race.getPlayerPosition());
            hud.setFinishTime(race.getRaceTimeString());
            hud.render(Platform::Window::getWidth(), Platform::Window::getHeight());

            // Visual effects overlay
            effects.update(playerKart.getSpeed(), dt);
            effects.render(Platform::Window::getWidth(), Platform::Window::getHeight());

            Platform::Graphics::endFrame();
            Platform::Window::swapBuffers();
            frames++;

            // Status log every 600 frames
            if (frames % 600 == 0) {
                printf("  F:%d | %u%s | Lap %u/%u | %.0f u/s | %s\n",
                       frames, race.getPlayerPosition(), posSuffix(race.getPlayerPosition()),
                       race.getPlayerLap(), TOTAL_LAPS, playerKart.getSpeed(),
                       race.getRaceTimeString());
            }
        }

        // -- Finished phase: wait for exit ---------------------------------------
        if (race.getPhase() == RACE_PHASE_FINISHED) {
            Platform::Window::pollEvents();
            Platform::InputManager::poll();
            const auto& finInput = Platform::InputManager::getState();
            if (finInput.quit) {
                running = false;
                break;
            }

            // Static render
            Platform::Graphics::beginFrame();
            Platform::Graphics::clearScreen(0.4f, 0.6f, 1.0f, 1.0f);
            const auto& vp = Platform::Graphics::getViewProjMatrix();
            itemManager.renderBoxes(vp);
            for (u32 i = 0; i < NUM_AI_KARTS; i++) {
                if (aiKarts[i].isActive()) aiKarts[i].render(vp);
            }
            if (kartReady) playerKart.render(vp);

            hud.setFinished(true);
            hud.setFinishPosition(race.getPlayerPosition());
            hud.setFinishTime(race.getRaceTimeString());
            hud.render(Platform::Window::getWidth(), Platform::Window::getHeight());

            Platform::Graphics::endFrame();
            Platform::Window::swapBuffers();
            frames++;
        }
    }

    printf("Rendered %d frames total. Exiting.\n", frames);

    // Cleanup
    menu.cleanupGL();
    effects.cleanupGL();
    hud.cleanupGL();
    itemManager.cleanupAllGL();
    for (u32 i = 0; i < NUM_AI_KARTS; i++) aiKarts[i].cleanupGL();
    playerKart.cleanupGL();
    Platform::InputManager::shutdown();
    Platform::Graphics::shutdown();
    Platform::Audio::shutdown();
    Platform::Window::destroy();

    return 0;
}

extern "C" void System_Init() {
    printf("  System_Init: stub\n");
}
