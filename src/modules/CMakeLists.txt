# Mario Kart Wii PC Port - StaticR.rel Modules
# Phase 6: Reconstructed module source files
cmake_minimum_required(VERSION 3.16)
project(mkwii_staticr C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wno-unused-variable -Wno-unused-function -Wno-unused-but-set-variable -Wno-implicit-function-declaration -Wno-int-conversion -Wno-pointer-to-int-cast -Wno-int-to-pointer-cast -Wno-missing-braces -fno-builtin -Wno-parentheses -Wno-return-type")

include_directories(${CMAKE_SOURCE_DIR}/src/modules)

set(MODULE_SOURCES
    src/modules/AIRace/AIRace.c
    src/modules/Audio/Audio.c
    src/modules/Collision/Collision.c
    src/modules/Data/Data.c
    src/modules/ItemSystem/ItemSystem.c
    src/modules/KartMovement/KartMovement.c
    src/modules/Network/Network.c
    src/modules/Physics/Physics.c
    src/modules/RaceEngine/RaceEngine.c
    src/modules/Rendering/Rendering.c
    src/modules/Runtime/Runtime.c
    src/modules/Scene/Scene.c
    src/modules/UI/UI.c
    src/modules/stubs.c
)

add_library(mkwii_staticr STATIC ${MODULE_SOURCES})
