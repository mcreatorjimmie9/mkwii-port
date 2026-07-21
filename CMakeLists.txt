# =============================================================================
# mkwii-port — Mario Kart Wii PC Port
# CMake build system for Phase 7 (Integration)
#
# Builds the GENESIS C++ reconstructed modules (105 files across 10 modules)
# as a static library. Uses C++17.
# =============================================================================

cmake_minimum_required(VERSION 3.16)
project(mkwii-port LANGUAGES CXX)

# ----- C++ standard -----
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ----- Compiler warnings -----
# Suppress warnings common in decompiled/reconstructed code
add_compile_options(
    -Wall
    -Wno-unused-variable
    -Wno-unused-function
    -Wno-unused-but-set-variable
    -Wno-unused-parameter
    -Wno-reorder
    -Wno-sign-compare
    -Wno-implicit-fallthrough
    -Wno-missing-braces
)

# =============================================================================
# Include directories
# =============================================================================
# Order matters: earlier directories take priority for angle-bracket includes.
#
# 1. data/src/include   — GENESIS decomp.h, PlayerPointers.hpp, forwarding stubs
# 2. data/src/types     — types.h (delegates to rk_types.h), EGG_math.h
# 3. data/src           — EGG/math.h, common.h
# 4. data/src/game      — Inter-module includes (game/kart/, game/field/, etc.)
# 5. src/modules        — system/, host_system/, util/, egg/, game/, shims/, rvl/
# 6. data/src/modules   — Additional module headers (egg/, game/, rk_common.h, etc.)
# =============================================================================

include_directories(
    ${CMAKE_SOURCE_DIR}/src/modules
    ${CMAKE_SOURCE_DIR}/src/modules/egg/core
    ${CMAKE_SOURCE_DIR}/src/modules/egg/math
    ${CMAKE_SOURCE_DIR}/src/modules/game/kart
    ${CMAKE_SOURCE_DIR}/src/modules/game/field
    ${CMAKE_SOURCE_DIR}/src/modules/game/system
    ${CMAKE_SOURCE_DIR}/src/modules/game/util
    ${CMAKE_SOURCE_DIR}/src/modules/system
    ${CMAKE_SOURCE_DIR}/src/modules/util
    ${CMAKE_SOURCE_DIR}/src/modules/host_system
    ${CMAKE_SOURCE_DIR}/src/modules/shims
    ${CMAKE_SOURCE_DIR}/src/modules/shims/ax_audio
    ${CMAKE_SOURCE_DIR}/src/modules/rvl
    ${CMAKE_SOURCE_DIR}/data/src/game
    ${CMAKE_SOURCE_DIR}/data/src/game/UI
    ${CMAKE_SOURCE_DIR}/data/src/game/Scene
    ${CMAKE_SOURCE_DIR}/data/src/game/Network
    ${CMAKE_SOURCE_DIR}/data/src/game/SaveData
    ${CMAKE_SOURCE_DIR}/data/src/game/Field
    ${CMAKE_SOURCE_DIR}/data/src/game/Collision
    ${CMAKE_SOURCE_DIR}/data/src/game/KartMovement
    ${CMAKE_SOURCE_DIR}/data/src/game/AIRace
    ${CMAKE_SOURCE_DIR}/data/src/game/NW4R
    ${CMAKE_SOURCE_DIR}/data/src/game/EGG
)

# =============================================================================
# GENESIS source files — collected from data/src/game/<module>/
# Each module's .cpp files are grouped for clarity.
# =============================================================================

# --- Physics (10 files) ---
set(PHYSICS_SOURCES
    data/src/game/Physics/PlayerPhysics.cpp
    data/src/game/Physics/PlayerBoost.cpp
    data/src/game/Physics/PlayerTrick.cpp
    data/src/game/Physics/PlayerSub10.cpp
    data/src/game/Physics/PlayerSub10Bike.cpp
    data/src/game/Physics/PlayerSub10_boost.cpp
    data/src/game/Physics/PlayerSub10_update.cpp
    data/src/game/Physics/PlayerSub10_status.cpp
    data/src/game/Physics/KartWheelPhysics.cpp
    data/src/game/Physics/KartSusPhysics.cpp
    data/src/game/Physics/EffectGroup.cpp
)

# --- KartMovement (12 files) ---
set(KARTMOVEMENT_SOURCES
    data/src/game/KartMovement/KartMove.cpp
    data/src/game/KartMovement/KartBody.cpp
    # NOTE: KartMovement/KartDynamics.cpp is NOT included here.
    # The KartDynamics class is provided by Collision/KartDynamics.cpp instead.
    # Both files define the same Kart::KartDynamics symbols (ODR violation).
    # The Collision/ version is community-verified with full calc(), applyEngineForce(),
    # applyAirDrag(), applyRollingResistance(), mass, and quaternion integration.
    data/src/game/KartMovement/KartHitbox.cpp
    data/src/game/KartMovement/KartInput.cpp
    data/src/game/KartMovement/KartState.cpp
    data/src/game/KartMovement/KartSettings.cpp
    data/src/game/KartMovement/KartSub.cpp
    data/src/game/KartMovement/KartTire.cpp
    data/src/game/KartMovement/KartWheelPhysics.cpp
    data/src/game/KartMovement/KartPhysicsSub.cpp
    data/src/game/KartMovement/PlayerSub10.cpp
    data/src/game/KartMovement/KartWheelie.cpp
    data/src/game/KartMovement/KartDrift.cpp
    data/src/game/KartMovement/KartAir.cpp
    data/src/game/KartMovement/KartSus.cpp
    data/src/game/KartMovement/KartMovement.cpp
)

# --- RaceEngine (10 files) ---
set(RACEENGINE_SOURCES
    data/src/game/RaceEngine/RaceConfig.cpp
    data/src/game/RaceEngine/RaceManager.cpp
    data/src/game/RaceEngine/Racedata.cpp
    data/src/game/RaceEngine/Raceinfo.cpp
    data/src/game/RaceEngine/RaceinfoPlayer.cpp
    data/src/game/RaceEngine/CtrlRaceTime.cpp
    data/src/game/RaceEngine/Scenario.cpp
    data/src/game/RaceEngine/TimeAttackGamemode.cpp
    data/src/game/RaceEngine/TimeAttackSplitsPage.cpp
    data/src/game/RaceEngine/TimeAttackBackPage.cpp
    data/src/game/RaceEngine/RaceSequence.cpp
    data/src/game/RaceEngine/RaceDirector.cpp
)

# --- AIRace (8 files) ---
set(AIRACE_SOURCES
    data/src/game/AIRace/AI.cpp
    data/src/game/AIRace/AIControl.cpp
    data/src/game/AIRace/AIEngine.cpp
    data/src/game/AIRace/AITrickHandler.cpp
    data/src/game/AIRace/KPadAI.cpp
    data/src/game/AIRace/AIRoad.cpp
    data/src/game/AIRace/AIDrift.cpp
    data/src/game/AIRace/AIItem.cpp
    data/src/game/AIRace/AIPath.cpp
    data/src/game/AIRace/AIRank.cpp
    data/src/game/AIRace/AIProbability.cpp
    data/src/game/AIRace/AISpeed.cpp
    data/src/game/AIRace/AILookAt.cpp
    data/src/game/AIRace/AIManager.cpp
    data/src/game/AIRace/AIInfo.cpp
)

# --- Collision (10 files) ---
set(COLLISION_SOURCES
    data/src/game/Collision/KartCollide.cpp
    data/src/game/Collision/KartDynamics.cpp
    data/src/game/Collision/KartHitbox.cpp
    data/src/game/Collision/KartWheelPhysics.cpp
    data/src/game/Collision/PlayerSub10.cpp
    data/src/game/Collision/PlayerSub18.cpp
    data/src/game/Collision/KartSuspension.cpp
    data/src/game/Collision/KartBoost.cpp
    data/src/game/Collision/KartRespawn.cpp
    data/src/game/Collision/KartGravity.cpp
    data/src/game/Collision/WaterCollision.cpp
    data/src/game/Collision/MovingColObj.cpp
    data/src/game/Collision/ColResponse.cpp
)

# --- ItemSystem (16 files) ---
set(ITEMSYSTEM_SOURCES
    data/src/game/ItemSystem/ItemObj.cpp
    data/src/game/ItemSystem/ItemObjRed.cpp
    data/src/game/ItemSystem/ItemObjBlue.cpp
    data/src/game/ItemSystem/ItemObjBomb.cpp
    data/src/game/ItemSystem/ItemObjFib.cpp
    data/src/game/ItemSystem/ItemHolder.cpp
    data/src/game/ItemSystem/ItemHolderItem.cpp
    data/src/game/ItemSystem/ItemHolderPlayer.cpp
    data/src/game/ItemSystem/ItemHolderPlayerb4.cpp
    data/src/game/ItemSystem/ItemRoulette.cpp
    data/src/game/ItemSystem/ItemSlotData.cpp
    data/src/game/ItemSystem/ItemSlotTable.cpp
    data/src/game/ItemSystem/ITEMHandler.cpp
    data/src/game/ItemSystem/Global.cpp
    data/src/game/ItemSystem/PlayerSub10.cpp
    data/src/game/ItemSystem/PlayerSub18.cpp
)

# --- AudioEngine (10 files) ---
set(AUDIOENGINE_SOURCES
    data/src/game/AudioEngine/SoundPlayer.cpp
    data/src/game/AudioEngine/SoundArchive.cpp
    data/src/game/AudioEngine/SoundHandle.cpp
    data/src/game/AudioEngine/AxVoiceManager.cpp
    data/src/game/AudioEngine/Sequencer.cpp
    data/src/game/AudioEngine/MusicSeqPlayer.cpp
    data/src/game/AudioEngine/StreamPlayer.cpp
    data/src/game/AudioEngine/DSPManager.cpp
    data/src/game/AudioEngine/Sound3D.cpp
    data/src/game/AudioEngine/AudioBus.cpp
    data/src/game/AudioEngine/AudioSystem.cpp
)

# --- Rendering (10 files) ---
set(RENDERING_SOURCES
    data/src/game/Rendering/SceneGraph.cpp
    data/src/game/Rendering/CourseObj.cpp
    data/src/game/Rendering/CourseObjAdvanced.cpp
    data/src/game/Rendering/TexAnim.cpp
    data/src/game/Rendering/GXDisplayList.cpp
    data/src/game/Rendering/Material.cpp
    data/src/game/Rendering/LightManager.cpp
    data/src/game/Rendering/Camera.cpp
    data/src/game/Rendering/FogSystem.cpp
    data/src/game/Rendering/ShadowManager.cpp
    data/src/game/Rendering/RenderUtil.cpp
)

# --- Scene (14 files) ---
set(SCENE_SOURCES
    data/src/game/Scene/SceneDirector.cpp
    data/src/game/Scene/SceneBase.cpp
    data/src/game/Scene/SceneCamera.cpp
    data/src/game/Scene/Course.cpp
    data/src/game/Scene/CourseObjects.cpp
    data/src/game/Scene/ObjectDirector.cpp
    data/src/game/Scene/MapObjDirector.cpp
    data/src/game/Scene/EffectDirector.cpp
    data/src/game/Scene/J2DPane.cpp
    data/src/game/Scene/ResTIMG.cpp
    data/src/game/Scene/SceneCaryard.cpp
    data/src/game/Scene/ParticleEffect.cpp
    data/src/game/Scene/Skybox.cpp
    data/src/game/Scene/SceneCreator.cpp
    data/src/game/Scene/SceneMgr.cpp
    data/src/game/Scene/SceneTransition.cpp
    data/src/game/Scene/HomeButton.cpp
    data/src/game/Scene/SceneBase2D.cpp
    data/src/game/Scene/SceneBase3D.cpp
)

# --- UI (15 files) ---
set(UI_SOURCES
    data/src/game/UI/UIManager.cpp
    data/src/game/UI/UIControl.cpp
    data/src/game/UI/SectionDirector.cpp
    data/src/game/UI/MenuPage.cpp
    data/src/game/UI/Layout.cpp
    data/src/game/UI/LayoutLoader.cpp
    data/src/game/UI/PaneWrapper.cpp
    data/src/game/UI/AnimationController.cpp
    data/src/game/UI/MessageBox.cpp
    data/src/game/UI/TextInput.cpp
    data/src/game/UI/PageManager.cpp
    data/src/game/UI/PageController.cpp
    data/src/game/UI/PageAnimCtrl.cpp
    data/src/game/UI/UIControlSystem.cpp
    data/src/game/UI/UIControlHelper.cpp
)

# --- Runtime (18 categorized files — function declarations) ---
set(RUNTIME_SOURCES
    data/src/game/Runtime/RuntimeOS.cpp
    data/src/game/Runtime/Memory.cpp
    data/src/game/Runtime/Heap.cpp
    data/src/game/Runtime/MathUtil.cpp
    data/src/game/Runtime/Core.cpp
    data/src/game/Runtime/Gfx.cpp
    data/src/game/Runtime/Archive.cpp
    data/src/game/Runtime/ArchiveExt.cpp
    data/src/game/Runtime/Scene3D.cpp
    data/src/game/Runtime/SceneGraph.cpp
    data/src/game/Runtime/Particle.cpp
    data/src/game/Runtime/Animation.cpp
    data/src/game/Runtime/AudioEngine.cpp
    data/src/game/Runtime/Network.cpp
    data/src/game/Runtime/DiscIO.cpp
    data/src/game/Runtime/System.cpp
)

# --- Runtime Deep-Rebuilt Classes (16 files — Phase 8 class hierarchy extraction) ---
set(RUNTIME_CLASSES_SOURCES
    # Phase 3a/2b: Original 5 subsystems
    data/src/game/Runtime/Gfx_Classes.cpp
    data/src/game/Runtime/MathUtil_Classes.cpp
    data/src/game/Runtime/Archive_Classes.cpp
    data/src/game/Runtime/Core_Classes.cpp
    data/src/game/Runtime/Heap_Classes.cpp
    # Phase 8: Scene3D, SceneGraph, Particle
    data/src/game/Runtime/Scene3D_Classes.cpp
    data/src/game/Runtime/SceneGraph_Classes.cpp
    data/src/game/Runtime/Particle_Classes.cpp
    # Phase 8: Animation, AudioEngine, DiscIO, System
    data/src/game/Runtime/Animation_Classes.cpp
    data/src/game/Runtime/AudioEngine_Classes.cpp
    data/src/game/Runtime/DiscIO_Classes.cpp
    data/src/game/Runtime/System_Classes.cpp
    # Phase 8: Network, Memory, RuntimeOS, ArchiveExt
    data/src/game/Runtime/Network_Classes.cpp
    data/src/game/Runtime/Memory_Classes.cpp
    data/src/game/Runtime/RuntimeOS_Classes.cpp
    data/src/game/Runtime/ArchiveExt_Classes.cpp
)

# --- EGG Framework Classes (alias for backward compat) ---
set(EGG_CLASSES_SOURCES ${RUNTIME_CLASSES_SOURCES})

# --- Network (8 files) ---
set(NETWORK_SOURCES
    data/src/game/Network/Connection.cpp
    data/src/game/Network/Packet.cpp
    data/src/game/Network/PacketHandler.cpp
    data/src/game/Network/RKNetConnectionManager.cpp
    data/src/game/Network/RacingNet.cpp
    data/src/game/Network/Session.cpp
    data/src/game/Online/DWCMatchmaker.cpp
    data/src/game/Online/GameSpyAuth.cpp
    data/src/game/Online/NWC24Manager.cpp
)

# --- Field (10 files, Phase 27) ---
set(FIELD_SOURCES
    data/src/game/Field/KCollision.cpp
    data/src/game/Field/CourseColManager.cpp
    data/src/game/Field/KartInput.cpp
    data/src/game/Field/InputManager.cpp
    data/src/game/Field/CourseData.cpp
    data/src/game/Field/CheckpointSystem.cpp
    data/src/game/Field/StartGrid.cpp
    data/src/game/Field/RoutePoint.cpp
)

# --- NW4R Graphics Wrappers (8 files) ---
set(NW4R_SOURCES
    data/src/game/NW4R/AnmObjTexPat.cpp
    data/src/game/NW4R/AnmObjTexSrt.cpp
    data/src/game/NW4R/AnmObjMatClr.cpp
    data/src/game/NW4R/AnmObjChr.cpp
    data/src/game/NW4R/AnmScn.cpp
    data/src/game/NW4R/G3dObj.cpp
    data/src/game/NW4R/G3dResFile.cpp
    data/src/game/NW4R/ResTex.cpp
)

# --- SaveData (8 files) ---
set(SAVEDATA_SOURCES
    data/src/game/SaveData/GhostFile.cpp
    data/src/game/SaveData/License.cpp
    data/src/game/SaveData/RecordBook.cpp
    data/src/game/SaveData/RecordData.cpp
    data/src/game/SaveData/SaveData.cpp
    data/src/game/SaveData/SaveManager.cpp
    data/src/game/SaveData/Settings.cpp
    data/src/game/SaveData/GhostManager.cpp
    data/src/game/SaveData/RankingSystem.cpp
)

# --- EGG Framework Utilities (6 files, Phase 20) ---
# Address range: 0x8016C000-0x80178000 (DOL)
# Covers Display, FrmHeap, Graphics, Utility, FrameTimer, ArchiveHeap
set(EGG_SOURCES
    data/src/game/EGG/Display.cpp
    data/src/game/EGG/FrmHeap.cpp
    data/src/game/EGG/Graphics.cpp
    data/src/game/EGG/Utility.cpp
    data/src/game/EGG/FrameTimer.cpp
    data/src/game/EGG/ArchiveHeap.cpp
    data/src/game/EGG/TaskScheduler.cpp
    data/src/game/EGG/Mutex.cpp
    data/src/game/EGG/FileLoader.cpp
)

# =============================================================================
# Static library target
# =============================================================================

add_library(mkwii-genesis STATIC
    ${PHYSICS_SOURCES}
    ${KARTMOVEMENT_SOURCES}
    ${RACEENGINE_SOURCES}
    ${AIRACE_SOURCES}
    ${COLLISION_SOURCES}
    ${ITEMSYSTEM_SOURCES}
    ${AUDIOENGINE_SOURCES}
    ${RENDERING_SOURCES}
    ${SCENE_SOURCES}
    ${UI_SOURCES}
    ${RUNTIME_SOURCES}
    ${RUNTIME_CLASSES_SOURCES}
    ${NETWORK_SOURCES}
    ${SAVEDATA_SOURCES}
    ${FIELD_SOURCES}
    ${NW4R_SOURCES}
    ${EGG_SOURCES}
)

target_include_directories(mkwii-genesis PUBLIC
    ${CMAKE_SOURCE_DIR}/src/platform
)
message(STATUS "")
message(STATUS "=== mkwii-port Build Configuration ===")
message(STATUS "C++ standard:      C++17")
message(STATUS "Build type:        ${CMAKE_BUILD_TYPE}")
message(STATUS "Compiler:          ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
list(LENGTH PHYSICS_SOURCES _phys_cnt)
list(LENGTH KARTMOVEMENT_SOURCES _kart_cnt)
list(LENGTH RACEENGINE_SOURCES _race_cnt)
list(LENGTH AIRACE_SOURCES _ai_cnt)
list(LENGTH COLLISION_SOURCES _coll_cnt)
list(LENGTH ITEMSYSTEM_SOURCES _item_cnt)
list(LENGTH AUDIOENGINE_SOURCES _audio_cnt)
list(LENGTH RENDERING_SOURCES _render_cnt)
list(LENGTH SCENE_SOURCES _scene_cnt)
list(LENGTH UI_SOURCES _ui_cnt)
list(LENGTH FIELD_SOURCES _field_cnt)
list(LENGTH NW4R_SOURCES _nw4r_cnt)
list(LENGTH EGG_SOURCES _egg_cnt)
math(EXPR _total "${_phys_cnt}+${_kart_cnt}+${_race_cnt}+${_ai_cnt}+${_coll_cnt}+${_item_cnt}+${_audio_cnt}+${_render_cnt}+${_scene_cnt}+${_ui_cnt}+${_field_cnt}+${_nw4r_cnt}+${_egg_cnt}")
message(STATUS "Physics:       ${_phys_cnt} files")
message(STATUS "KartMovement:  ${_kart_cnt} files")
message(STATUS "RaceEngine:   ${_race_cnt} files")
message(STATUS "AIRace:       ${_ai_cnt} files")
message(STATUS "Collision:    ${_coll_cnt} files")
message(STATUS "ItemSystem:   ${_item_cnt} files")
message(STATUS "AudioEngine:  ${_audio_cnt} files")
message(STATUS "Rendering:    ${_render_cnt} files")
message(STATUS "Scene:        ${_scene_cnt} files")
message(STATUS "UI:           ${_ui_cnt} files")
message(STATUS "Field:        ${_field_cnt} files")
message(STATUS "NW4R:         ${_nw4r_cnt} files")
message(STATUS "EGG Util:     ${_egg_cnt} files")
message(STATUS "TOTAL:        ${_total} GENESIS source files")

# =============================================================================
# Phase 18: Linkage Test executable
# =============================================================================
add_executable(mkwii-linktest
    test/main.cpp
    test/link_stubs.cpp
)
target_link_libraries(mkwii-linktest
    mkwii-genesis
)
# The link test needs the same include paths as the library
target_include_directories(mkwii-linktest PRIVATE
    ${CMAKE_SOURCE_DIR}/src/modules
    ${CMAKE_SOURCE_DIR}/src/modules/egg/core
    ${CMAKE_SOURCE_DIR}/src/modules/egg/math
    ${CMAKE_SOURCE_DIR}/src/modules/game/kart
    ${CMAKE_SOURCE_DIR}/src/modules/game/field
    ${CMAKE_SOURCE_DIR}/src/modules/game/system
    ${CMAKE_SOURCE_DIR}/src/modules/game/util
    ${CMAKE_SOURCE_DIR}/src/modules/system
    ${CMAKE_SOURCE_DIR}/src/modules/util
    ${CMAKE_SOURCE_DIR}/src/modules/host_system
    ${CMAKE_SOURCE_DIR}/src/modules/shims
    ${CMAKE_SOURCE_DIR}/src/modules/shims/ax_audio
    ${CMAKE_SOURCE_DIR}/src/modules/rvl
    ${CMAKE_SOURCE_DIR}/data/src/game
    ${CMAKE_SOURCE_DIR}/data/src/game/UI
    ${CMAKE_SOURCE_DIR}/data/src/game/Scene
    ${CMAKE_SOURCE_DIR}/data/src/game/Network
    ${CMAKE_SOURCE_DIR}/data/src/game/SaveData
    ${CMAKE_SOURCE_DIR}/data/src/game/Field
    ${CMAKE_SOURCE_DIR}/data/src/game/Collision
    ${CMAKE_SOURCE_DIR}/data/src/game/AIRace
    ${CMAKE_SOURCE_DIR}/data/src/game/EGG
)

# =============================================================================
# Phase 7: Integration — Milestone M4 Application
# =============================================================================
find_package(Threads QUIET)

# M4 uses runtime dlopen for SDL2/GL — no dev packages needed.
# We always define HAS_SDL2 and HAS_OPENGL since the runtime libs are present.
# The platform layer uses dlopen("libSDL2-2.0.so.0") and dlsym for GL functions.
set(SDL2_FOUND TRUE)
set(OPENGL_FOUND TRUE)
message(STATUS "SDL2: runtime dlopen mode (libSDL2-2.0.so.0)")
message(STATUS "OpenGL: runtime dlsym mode (via SDL_GL_GetProcAddress)")

# OpenAL — still needs proper discovery or stub mode
find_package(OpenAL QUIET)
if(OPENAL_FOUND)
    message(STATUS "OpenAL found")
else()
    message(STATUS "OpenAL NOT found — audio will run in stub mode")
endif()

# Application executable (M8 core sources: items, race, AI, collision)
set(APP_SOURCES
    src/main.cpp
    src/platform/window.cpp
    src/platform/graphics.cpp
    src/platform/audio.cpp
    src/platform/input.cpp
    src/game/KartEntity.cpp
    src/game/CollisionSystem.cpp
    src/game/AIController.cpp
    src/game/ItemBox.cpp
    src/game/RaceSession.cpp
    # HUD / BitmapFont — 2D overlay rendering for race HUD
    src/game/BitmapFont.cpp
    src/game/HUD.cpp
    src/game/GameMenu.cpp
    # Bridge layer: Player class + SceneRace (uses platform headers)
    data/src/game/Player/Player.cpp
    data/src/game/Scene/SceneRace.cpp
    # PAD/KPAD shim bridge to Platform::InputManager
    src/modules/shims/pad_bridge.cpp
)

add_executable(mkwii-port ${APP_SOURCES})

# Always enable SDL2 + OpenGL (runtime loading via dlopen/dlsym)
target_compile_definitions(mkwii-port PRIVATE HAS_SDL2 HAS_OPENGL)
if(OPENAL_FOUND)
    target_compile_definitions(mkwii-port PRIVATE HAS_OPENAL)
endif()

target_include_directories(mkwii-port PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/modules
    ${CMAKE_SOURCE_DIR}/src/platform
    ${CMAKE_SOURCE_DIR}/data/src/game
    ${CMAKE_SOURCE_DIR}/data/src/game/UI
    ${CMAKE_SOURCE_DIR}/data/src/game/Scene
    ${CMAKE_SOURCE_DIR}/data/src/game/Network
    ${CMAKE_SOURCE_DIR}/data/src/game/SaveData
    ${CMAKE_SOURCE_DIR}/data/src/game/Field
    ${CMAKE_SOURCE_DIR}/data/src/game/Collision
    ${CMAKE_SOURCE_DIR}/data/src/game/AIRace
    ${CMAKE_SOURCE_DIR}/data/src/game/EGG
    ${CMAKE_SOURCE_DIR}/data/src/game/Rendering
    ${CMAKE_SOURCE_DIR}/data/src/game/KartMovement
    ${CMAKE_SOURCE_DIR}/data/src/game/Physics
    ${CMAKE_SOURCE_DIR}/data/src/game/ItemSystem
    ${CMAKE_SOURCE_DIR}/data/src/game/AudioEngine
    ${CMAKE_SOURCE_DIR}/data/src/game/RaceEngine
    ${CMAKE_SOURCE_DIR}/data/src/game/NW4R
)
target_link_libraries(mkwii-port PRIVATE
    mkwii-genesis
    mkwii-loaders
    Threads::Threads
    dl
)
if(OPENAL_FOUND)
    target_link_libraries(mkwii-port PRIVATE ${OPENAL_LIBRARY})
endif()

# =============================================================================
# Asset Loaders (Phase 7 M3 — Track Loading)
# =============================================================================
# YAZ0 decompressor + U8 archive parser — pure C++17, no external deps.
# Used to load Mario Kart Wii .szs track archives at runtime.
set(LOADERS_SOURCES
    src/loaders/szs_reader.cpp
    src/loaders/kmp_loader.cpp
    src/loaders/kcl_loader.cpp
    src/loaders/track_manager.cpp
)
add_library(mkwii-loaders STATIC ${LOADERS_SOURCES})
target_include_directories(mkwii-loaders PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_include_directories(mkwii-loaders PUBLIC ${CMAKE_SOURCE_DIR}/data/src/modules)

# Link the loader library into the main port executable
target_link_libraries(mkwii-port PRIVATE mkwii-loaders)

# Track loader test (end-to-end: download + parse SZS/KMP/KCL)
add_executable(track_loader_test src/loaders/test_track_load.cpp)
target_link_libraries(track_loader_test PRIVATE mkwii-loaders)

# =============================================================================
# Phase 6: Physics Validation Test Suite
# =============================================================================
enable_testing()
file(GLOB PHYSICS_TESTS data/tests/unit/*.cpp)
add_executable(physics_tests ${PHYSICS_TESTS})
target_include_directories(physics_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/src/modules
    ${CMAKE_SOURCE_DIR}/data/src/game
)
target_link_libraries(physics_tests PRIVATE mkwii-genesis)
add_test(NAME physics_validation COMMAND physics_tests)