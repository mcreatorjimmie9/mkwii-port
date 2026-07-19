# =============================================================================
# mkwii-port — Mario Kart Wii PC Port
# CMake build system for Phase 7 (Integration)
#
# Builds the GENESIS C++ reconstructed modules (88 files across 10 modules)
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
    data/src/game/KartMovement/KartDynamics.cpp
    data/src/game/KartMovement/KartHitbox.cpp
    data/src/game/KartMovement/KartInput.cpp
    data/src/game/KartMovement/KartState.cpp
    data/src/game/KartMovement/KartSettings.cpp
    data/src/game/KartMovement/KartSub.cpp
    data/src/game/KartMovement/KartTire.cpp
    data/src/game/KartMovement/KartWheelPhysics.cpp
    data/src/game/KartMovement/KartPhysicsSub.cpp
    data/src/game/KartMovement/PlayerSub10.cpp
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
)

# --- AIRace (5 files) ---
set(AIRACE_SOURCES
    data/src/game/AIRace/AI.cpp
    data/src/game/AIRace/AIControl.cpp
    data/src/game/AIRace/AIEngine.cpp
    data/src/game/AIRace/AITrickHandler.cpp
    data/src/game/AIRace/KPadAI.cpp
)

# --- Collision (6 files) ---
set(COLLISION_SOURCES
    data/src/game/Collision/KartCollide.cpp
    data/src/game/Collision/KartDynamics.cpp
    data/src/game/Collision/KartHitbox.cpp
    data/src/game/Collision/KartWheelPhysics.cpp
    data/src/game/Collision/PlayerSub10.cpp
    data/src/game/Collision/PlayerSub18.cpp
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
)

# --- Scene (10 files) ---
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
)

# --- UI (11 files) ---
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
)

# =============================================================================
# Build summary
# =============================================================================
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
math(EXPR _total "${_phys_cnt}+${_kart_cnt}+${_race_cnt}+${_ai_cnt}+${_coll_cnt}+${_item_cnt}+${_audio_cnt}+${_render_cnt}+${_scene_cnt}+${_ui_cnt}")
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
message(STATUS "TOTAL:        ${_total} GENESIS source files")