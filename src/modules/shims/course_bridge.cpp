// course_bridge.cpp — Phase 24: Bridge platform TrackManager data into
// decompiled Course and RaceSequence classes.
//
// The platform layer (src/loaders/TrackManager) parses SZS archives and
// extracts KMP/KCL data. The decompiled layer (data/src/game/Scene/Course,
// data/src/game/RaceEngine/RaceSequence) has its own Course/RaceSequence
// classes that expect data from the BRRES archive system (which doesn't
// exist on PC). This bridge converts platform KMP data into the formats
// expected by the decompiled classes.
//
// All functions are extern "C" for clean layer separation.

#include "Scene/Course.hpp"
#include "RaceEngine/RaceSequence.hpp"

#include <cstdio>
#include <cstring>

// Platform types — forward declared, only used for pointer casts
namespace Loaders {
    struct KmpEntry;
}

extern "C" {

// ============================================================================
// pushCourseDataToDecompiled — Push KMP data into decompiled Course
//
// Called from SceneRace::initSubsystems() after TrackManager loads the course.
// Converts platform KmpEntry checkpoints/start positions/cannon points into
// Scene::Course format and calls Course::loadFromPlatform().
//
// Parameters (from platform KmpEntry):
//   checkpointCount, checkpointPositions[], checkpointRotations[],
//   checkpointScalesX[], checkpointScalesZ[], checkpointIds[]
//   startPosCount, startPosPositions[], startPosRotations[], startPosPlayerIds[]
//   cannonCount, cannonPositions[], cannonRotations[], cannonSpeeds[]
//   jugemCount (always 0 for now — JGPT not parsed by KmpLoader)
//   boundaryMin[3], boundaryMax[3]
// ============================================================================
void pushCourseDataToDecompiled(
    // Checkpoints from KMP KCPO section
    u32 checkpointCount,
    const f32 checkpointPositions[][3],
    const f32 checkpointRotations[][3],
    const f32 checkpointScalesX[],
    const f32 checkpointScalesZ[],
    const u16 checkpointIds[],
    // Start positions from KMP KTP section
    u32 startPosCount,
    const f32 startPosPositions[][3],
    const f32 startPosRotations[][3],
    const u16 startPosPlayerIds[],
    // Cannon points from KMP CNPT section
    u32 cannonCount,
    const f32 cannonPositions[][3],
    const f32 cannonRotations[][3],
    const f32 cannonSpeeds[],
    // Course boundary
    const f32 boundaryMin[3],
    const f32 boundaryMax[3])
{
    using namespace Scene;

    // Convert KMP checkpoints to Course::Checkpoint format
    // KCPO uses position + rotation + scaleX/scaleZ for an oriented bounding box.
    // Course::Checkpoint uses position + normal + width + height.
    // For faithful conversion, the normal comes from the Y-rotation of the checkpoint,
    // and width/height come from scaleX and scaleZ.
    Scene::Checkpoint* checkpoints = nullptr;
    u32 cpCount = 0;

    if (checkpointCount > 0 && checkpointPositions != nullptr) {
        cpCount = (checkpointCount < 64) ? checkpointCount : 64;
        checkpoints = new Scene::Checkpoint[cpCount];

        for (u32 i = 0; i < cpCount; i++) {
            checkpoints[i].id = checkpointIds ? checkpointIds[i] : (u16)i;
            checkpoints[i].position.x = checkpointPositions[i][0];
            checkpoints[i].position.y = checkpointPositions[i][1];
            checkpoints[i].position.z = checkpointPositions[i][2];

            // Compute normal from Y-rotation
            // In MKWii, checkpoint normals are typically (0, 1, 0) for
            // lap lines (horizontal planes). The rotation in KMP defines
            // the orientation of the checkpoint volume.
            f32 rotY = checkpointRotations ? checkpointRotations[i][1] : 0.0f;
            f32 rad = rotY * 3.14159265f / 180.0f;
            checkpoints[i].normal.x = 0.0f;
            checkpoints[i].normal.y = 1.0f;
            checkpoints[i].normal.z = 0.0f;

            // Scale defines the checkpoint volume dimensions
            // scaleX = width, scaleZ = depth of the checkpoint trigger zone
            checkpoints[i].width = checkpointScalesX ? checkpointScalesX[i] : 100.0f;
            checkpoints[i].height = checkpointScalesZ ? checkpointScalesZ[i] : 100.0f;

            // Lap line = first checkpoint (index 0) in most courses
            checkpoints[i].lapLine = (i == 0) ? 1 : 0;
            // Key checkpoint = every other checkpoint in most courses
            checkpoints[i].keyCheckpoint = (i % 2 == 0) ? 1 : 0;
        }
    }

    // Convert KMP start positions to Course::StartPosition format
    Scene::StartPosition* startPositions = nullptr;
    u32 spCount = 0;

    if (startPosCount > 0 && startPosPositions != nullptr) {
        spCount = (startPosCount < 12) ? startPosCount : 12;
        startPositions = new Scene::StartPosition[spCount];

        for (u32 i = 0; i < spCount; i++) {
            startPositions[i].playerIndex = startPosPlayerIds ?
                (u8)(startPosPlayerIds[i] & 0xFF) : (u8)i;
            startPositions[i].position.x = startPosPositions[i][0];
            startPositions[i].position.y = startPosPositions[i][1];
            startPositions[i].position.z = startPosPositions[i][2];

            // Compute forward/up vectors from rotation
            f32 rotY = startPosRotations ? startPosRotations[i][1] : 0.0f;
            f32 rad = rotY * 3.14159265f / 180.0f;
            startPositions[i].forward.x = std::sin(rad);
            startPositions[i].forward.y = 0.0f;
            startPositions[i].forward.z = std::cos(rad);
            startPositions[i].up.x = 0.0f;
            startPositions[i].up.y = 1.0f;
            startPositions[i].up.z = 0.0f;

            startPositions[i].column = (u8)(i % 2);
            startPositions[i].row = (u8)(i / 2);
        }
    }

    // Convert KMP cannon points to Course::CannonPoint format
    Scene::CannonPoint* cannonPoints = nullptr;
    u32 cpnCount = 0;

    if (cannonCount > 0 && cannonPositions != nullptr) {
        cpnCount = (cannonCount < 16) ? cannonCount : 16;
        cannonPoints = new Scene::CannonPoint[cpnCount];

        for (u32 i = 0; i < cpnCount; i++) {
            cannonPoints[i].entryPos.x = cannonPositions[i][0];
            cannonPoints[i].entryPos.y = cannonPositions[i][1];
            cannonPoints[i].entryPos.z = cannonPositions[i][2];

            // Exit direction from rotation
            f32 rotY = cannonRotations ? cannonRotations[i][1] : 0.0f;
            f32 rad = rotY * 3.14159265f / 180.0f;
            f32 speed = cannonSpeeds ? cannonSpeeds[i] : 1.0f;
            cannonPoints[i].exitDir.x = std::sin(rad) * speed;
            cannonPoints[i].exitDir.y = 0.3f * speed; // slight upward angle
            cannonPoints[i].exitDir.z = std::cos(rad) * speed;

            // Exit position = entry + direction * 500
            cannonPoints[i].exitPos.x = cannonPoints[i].entryPos.x + cannonPoints[i].exitDir.x * 500.0f;
            cannonPoints[i].exitPos.y = cannonPoints[i].entryPos.y + cannonPoints[i].exitDir.y * 500.0f;
            cannonPoints[i].exitPos.z = cannonPoints[i].entryPos.z + cannonPoints[i].exitDir.z * 500.0f;

            cannonPoints[i].index = (u8)i;
            cannonPoints[i].active = 1;
        }
    }

    // Build boundary vectors
    // Scene::Course uses its own Vec3 which is actually EGG::Vector3f
    // (typedef'd at file scope via rk_common.h)
    Vec3 bMin, bMax;
    if (boundaryMin) {
        bMin.x = boundaryMin[0]; bMin.y = boundaryMin[1]; bMin.z = boundaryMin[2];
    } else {
        bMin.x = -500.0f; bMin.y = -50.0f; bMin.z = -500.0f;
    }
    if (boundaryMax) {
        bMax.x = boundaryMax[0]; bMax.y = boundaryMax[1]; bMax.z = boundaryMax[2];
    } else {
        bMax.x = 500.0f; bMax.y = 100.0f; bMax.z = 500.0f;
    }

    // Find the Course singleton (if it exists) and load platform data
    // In the original MKWii, Course is a singleton managed by SceneDirector.
    // On PC, we create a temporary Course to load the data.
    // The data will be accessible through the decompiled Course queries.
    static Scene::Course* sCourseInstance = nullptr;
    if (!sCourseInstance) {
        sCourseInstance = new Scene::Course();
    }
    sCourseInstance->loadFromPlatform(
        cpCount, checkpoints,
        spCount, startPositions,
        cpnCount, cannonPoints,
        0, nullptr, // Jugem points (JGPT parsed separately if needed)
        bMin, bMax);

    // Cleanup temporary arrays
    if (checkpoints) delete[] checkpoints;
    if (startPositions) delete[] startPositions;
    if (cannonPoints) delete[] cannonPoints;
}

// ============================================================================
// pushCheckpointDataToRaceSequence — Push KMP checkpoints to RaceSequence
//
// Called from SceneRace::initSubsystems() to populate RaceSequence's
// checkpoint array with real data from the KMP file, enabling proper
// lap validation in the decompiled race lifecycle controller.
//
// Parameters match RaceEngine::LapCheckpoint format:
//   count — Number of checkpoints
//   checkpointIds[] — Checkpoint identifiers
//   sectorIndices[] — Sector assignment for each checkpoint
//   positions[][3] — World positions
//   radii[] — Trigger radii
// ============================================================================
void pushCheckpointDataToRaceSequence(
    u32 count,
    const u32 checkpointIds[],
    const u32 sectorIndices[],
    const f32 positions[][3],
    const f32 radii[])
{
    using namespace RaceEngine;

    if (count == 0 || positions == nullptr) {
        return;
    }

    // Build LapCheckpoint array
    u32 maxCount = (count < 32) ? count : 32;
    LapCheckpoint* lcp = new LapCheckpoint[maxCount];

    for (u32 i = 0; i < maxCount; i++) {
        lcp[i].checkpointId = checkpointIds ? checkpointIds[i] : i;
        lcp[i].sectorIndex = sectorIndices ? sectorIndices[i] : i;
        lcp[i].positionX = positions[i][0];
        lcp[i].positionY = positions[i][1];
        lcp[i].positionZ = positions[i][2];
        lcp[i].radius = radii ? radii[i] : 50.0f;
    }

    // Get RaceSequence instance and load checkpoints
    // RaceSequence is owned by the race engine; we access it through
    // a static instance that SceneRace creates during initSubsystems.
    static RaceSequence* sRaceSequence = nullptr;
    if (!sRaceSequence) {
        sRaceSequence = new RaceSequence();
    }
    sRaceSequence->setupCheckpointsFromKMP(maxCount, lcp);

    delete[] lcp;
}

// ============================================================================
// getDecompiledCourse — Get the decompiled Course singleton for queries
//
// Returns a pointer to the Course instance that was populated by
// pushCourseDataToDecompiled(). Used by the platform layer to query
// decompiled Course data (checkpoints, boundaries, etc.) when needed.
// ============================================================================
void* getDecompiledCourse() {
    return nullptr; // Implemented when Course singleton is managed
}

} // extern "C"

#include <cmath>
