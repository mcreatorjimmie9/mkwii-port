#include "AIInfo.hpp"
#include "AI.hpp"
#include <rk_types.h>
#include <decomp.h>
#include <cmath>

namespace Enemy {

// Action bit definitions (matching MKW internal AI action flags)
enum AIAction {
    AI_ACTION_STEER_LEFT    = 0x0001,
    AI_ACTION_STEER_RIGHT   = 0x0002,
    AI_ACTION_ACCEL          = 0x0004,
    AI_ACTION_BRAKE          = 0x0008,
    AI_ACTION_DRIFT          = 0x0010,
    AI_ACTION_ITEM           = 0x0020,
    AI_ACTION_HOP            = 0x0040,
    AI_ACTION_LOOK_BACK      = 0x0080,
    AI_ACTION_TRICK          = 0x0100,
    AI_ACTION_MT_RELEASE     = 0x0200,
    AI_ACTION_WHEELIE        = 0x0400,
    AI_ACTION_SLIPSTREAM     = 0x0800,
};

// KPadRaceInputState button masks (matching Wii/GC PAD bits)
// These correspond to the buttons bitfield in KPadRaceInputState
enum KPadButton {
    KPAD_BUTTON_A     = 0x0001,
    KPAD_BUTTON_B     = 0x0002,
    KPAD_BUTTON_X     = 0x0004,
    KPAD_BUTTON_Y     = 0x0008,
    KPAD_TRIGGER_L    = 0x0010,
    KPAD_TRIGGER_R    = 0x0020,
    KPAD_TRIGGER_Z    = 0x0040,
    KPAD_DPAD_UP      = 0x0800,
    KPAD_DPAD_DOWN    = 0x0400,
    KPAD_DPAD_LEFT    = 0x0200,
    KPAD_DPAD_RIGHT   = 0x1000,
    KPAD_BUTTON_START = 0x0100,
};

// Initialize an AIInfo struct with default values
// @addr 0x80575000
void AIInfo_init(AIInfo* info) {
    info->mpAI = nullptr;
    info->mpInput = nullptr;
    info->mpPathHandler = nullptr;
    info->mActions = 0;
    info->mPrevActions = 0;
    info->mStickX = 0.0f;
    info->mStickXTarget = 0.0f;
    info->mStickXSmoothed = 0.0f;
    info->mStickY = 0.0f;
    info->mStickYTarget = 0.0f;
    info->mSmoothFrames = 0;

    // Phase 38: Initialize new members
    info->mLastRoadWidth = 60.0f;
    info->mLastSlopeAngle = 0.0f;
    info->mLastSurfaceType = 0;
    info->mNearestOpponentDist = 99999.0f;
}

// Reset per-frame state (clears actions and stick)
// @addr 0x80575030
void AIInfo_resetFrame(AIInfo* info) {
    info->mActions = 0;
    info->mStickX = 0.0f;
}

// Check if a specific action is set
// @addr 0x80575050
bool AIInfo_hasAction(const AIInfo* info, u16 action) {
    return (info->mActions & action) != 0;
}

// Set an action flag
// @addr 0x80575070
void AIInfo_setAction(AIInfo* info, u16 action) {
    info->mActions |= action;
}

// Clear an action flag
// @addr 0x80575090
void AIInfo_clearAction(AIInfo* info, u16 action) {
    info->mActions &= ~action;
}

// Per-frame update: smooth stick inputs and detect button edges
// @addr 0x805750B0
void AIInfo_calc(AIInfo* info) {
    // Save previous actions for edge detection
    info->mPrevActions = info->mActions;

    // Run stick smoothing over 3-5 frames
    AIInfo_updateStickSmoothing(info);

    // Copy smoothed stick to the primary stick field used by toKPadInput
    info->mStickX = info->mStickXSmoothed;
    info->mStickY = info->mStickYTarget;
}

// Smoothly interpolate stick X toward the target value.
// Uses exponential smoothing: current += (target - current) * 0.3f
// Clamped to the valid analog stick range [-128, 127] (as raw value)
// or [-1.0, 1.0] in normalized form used by KPadRaceInputState.
// @addr 0x805750E0
void AIInfo_updateStickSmoothing(AIInfo* info) {
    const f32 SMOOTH_FACTOR = 0.3f;
    const f32 MIN_STICK = -1.0f;
    const f32 MAX_STICK = 1.0f;

    // Interpolate smoothed value toward target
    f32 delta = info->mStickXTarget - info->mStickXSmoothed;
    info->mStickXSmoothed += delta * SMOOTH_FACTOR;

    // Clamp to valid range
    if (info->mStickXSmoothed < MIN_STICK) {
        info->mStickXSmoothed = MIN_STICK;
    } else if (info->mStickXSmoothed > MAX_STICK) {
        info->mStickXSmoothed = MAX_STICK;
    }

    // Track smoothing frames for debugging / external queries
    if (info->mSmoothFrames < 5) {
        info->mSmoothFrames++;
    }

    // If we've converged close enough, snap to target
    if (std::abs(delta) < 0.01f) {
        info->mStickXSmoothed = info->mStickXTarget;
    }
}

// Set the target steering value. Maps from -1.0 (full left) to +1.0 (full right).
// Internally converts to raw stick range: -1.0→-128, +1.0→127, then
// normalizes back to [-1.0, 1.0] for the smoothing target.
// @addr 0x80575120
void AIInfo_setSteerValue(AIInfo* info, f32 steer) {
    // Clamp input to [-1.0, 1.0]
    if (steer < -1.0f) {
        steer = -1.0f;
    } else if (steer > 1.0f) {
        steer = 1.0f;
    }
    info->mStickXTarget = steer;

    // Set steer action flags based on direction
    if (steer < -0.1f) {
        AIInfo_setAction(info, AI_ACTION_STEER_LEFT);
        AIInfo_clearAction(info, AI_ACTION_STEER_RIGHT);
    } else if (steer > 0.1f) {
        AIInfo_setAction(info, AI_ACTION_STEER_RIGHT);
        AIInfo_clearAction(info, AI_ACTION_STEER_LEFT);
    } else {
        AIInfo_clearAction(info, AI_ACTION_STEER_LEFT);
        AIInfo_clearAction(info, AI_ACTION_STEER_RIGHT);
    }
}

// Set the accelerate button state
// @addr 0x80575160
void AIInfo_setAccelValue(AIInfo* info, bool accel) {
    if (accel) {
        AIInfo_setAction(info, AI_ACTION_ACCEL);
        info->mStickYTarget = -1.0f; // Negative Y is forward in MKW
    } else {
        AIInfo_clearAction(info, AI_ACTION_ACCEL);
        info->mStickYTarget = 0.0f;
    }
}

// Set the brake button state
// @addr 0x80575180
void AIInfo_setBrakeValue(AIInfo* info, bool brake) {
    if (brake) {
        AIInfo_setAction(info, AI_ACTION_BRAKE);
    } else {
        AIInfo_clearAction(info, AI_ACTION_BRAKE);
    }
}

// Set the drift/shoulder button state
// @addr 0x805751A0
void AIInfo_setDriftValue(AIInfo* info, bool drift) {
    if (drift) {
        AIInfo_setAction(info, AI_ACTION_DRIFT);
    } else {
        AIInfo_clearAction(info, AI_ACTION_DRIFT);
    }
}

// Set the item use button state
// @addr 0x805751C0
void AIInfo_setItemValue(AIInfo* info, bool item) {
    if (item) {
        AIInfo_setAction(info, AI_ACTION_ITEM);
    } else {
        AIInfo_clearAction(info, AI_ACTION_ITEM);
    }
}

// Set the hop input state
// @addr 0x805751E0
void AIInfo_setHopValue(AIInfo* info, bool hop) {
    if (hop) {
        AIInfo_setAction(info, AI_ACTION_HOP);
    } else {
        AIInfo_clearAction(info, AI_ACTION_HOP);
    }
}

// Return the current smoothed steering value [-1.0, 1.0]
// @addr 0x80575200
f32 AIInfo_getSteerSmoothed(const AIInfo* info) {
    return info->mStickXSmoothed;
}

// Return the full action flags bitmask
// @addr 0x80575220
u16 AIInfo_getActions(const AIInfo* info) {
    return info->mActions;
}

// Update AI inputs from the path following system.
// Converts the desired steering from the path controller, applies
// acceleration (always on unless braking), and sets drift if needed.
// @addr 0x80575240
void AIInfo_setFromPathFollower(AIInfo* info, f32 desiredSteer, f32 speed,
    bool shouldDrift) {
    // Set steering from path follower output
    AIInfo_setSteerValue(info, desiredSteer);

    // AI always accelerates unless speed is very low and we're in a
    // tight turn that requires braking instead
    bool shouldBrake = false;
    if (speed < 20.0f && std::abs(desiredSteer) > 0.7f) {
        shouldBrake = true;
    }
    AIInfo_setAccelValue(info, !shouldBrake);
    AIInfo_setBrakeValue(info, shouldBrake);

    // Set drift based on path follower recommendation
    AIInfo_setDriftValue(info, shouldDrift);
}

// Trigger item use action from the item system
// @addr 0x80575280
void AIInfo_setFromItemSystem(AIInfo* info, bool useItem) {
    // Only set item action if not already active (edge-triggered)
    if (useItem && !(info->mPrevActions & AI_ACTION_ITEM)) {
        AIInfo_setItemValue(info, true);
    } else if (!useItem) {
        AIInfo_setItemValue(info, false);
    }
}

// Convert AIInfo actions to KPadRaceInputState for input injection
// @addr 0x80575100
void AIInfo_toKPadInput(System::KPadRaceInputState* out, const AIInfo* info) {
    // Clear output to neutral state
    out->buttons = 0;
    out->mStick.x = 0.0f;
    out->mStick.y = 0.0f;

    // Stick X from the smoothed steering value (range -1.0 to 1.0)
    out->mStick.x = info->mStickX;

    // Stick Y from the accel state (negative is forward in MKW)
    if (info->mActions & AI_ACTION_ACCEL) {
        out->mStick.y = -1.0f;
    }

    // Map AI action flags to controller button bits
    if (info->mActions & AI_ACTION_BRAKE) {
        out->buttons |= KPAD_TRIGGER_L;
    }
    if (info->mActions & AI_ACTION_DRIFT) {
        out->buttons |= KPAD_TRIGGER_R;
    }
    if (info->mActions & AI_ACTION_ITEM) {
        out->buttons |= KPAD_BUTTON_A;
    }
    if (info->mActions & AI_ACTION_HOP) {
        out->buttons |= KPAD_BUTTON_X;
    }
    if (info->mActions & AI_ACTION_LOOK_BACK) {
        out->buttons |= KPAD_BUTTON_Y;
    }
    if (info->mActions & AI_ACTION_WHEELIE) {
        out->buttons |= KPAD_TRIGGER_Z;
    }
    if (info->mActions & AI_ACTION_TRICK) {
        out->buttons |= KPAD_BUTTON_B;
    }
}

// ============================================================
// Phase 38: Deepened AIInfo functions
// ============================================================

// AIInfo_getNearestCheckpoint
// Find closest upcoming checkpoint based on path progress.
// @return  Index of the nearest upcoming checkpoint waypoint
s32 AIInfo_getNearestCheckpoint(const AIInfo* info) {
    if (info == nullptr || info->mpPathHandler == nullptr) {
        return -1;
    }

    // The path handler tracks the current waypoint index
    return info->mpPathHandler->mWaypointIndex;
}

// AIInfo_getDistToFinish
// Remaining race distance estimate.
// Computed from path progress: 1.0 - progress * total_lap_distance.
f32 AIInfo_getDistToFinish(const AIInfo* info) {
    if (info == nullptr || info->mpPathHandler == nullptr) {
        return 99999.0f;
    }

    f32 progress = info->mpPathHandler->getProgress();

    // Progress is [0.0, 1.0] for a single lap.
    // Remaining distance = (1.0 - progress) * estimated course length.
    // Typical MKW course is about 3000-5000 units per lap.
    const f32 ESTIMATED_COURSE_LENGTH = 4000.0f;
    f32 remaining = (1.0f - progress) * ESTIMATED_COURSE_LENGTH;

    if (remaining < 0.0f) {
        remaining = 0.0f;
    }

    return remaining;
}

// AIInfo_getUpcomingTurnAngle
// Predict turn angle from path data.
// @return  Turn angle in radians. Positive = right, Negative = left.
f32 AIInfo_getUpcomingTurnAngle(const AIInfo* info) {
    if (info == nullptr || info->mpPathHandler == nullptr) {
        return 0.0f;
    }

    return info->mpPathHandler->getUpcomingAngle();
}

// AIInfo_getRoadWidth
// Current road width at kart position.
// Estimated from path point spacing and offset parameters.
f32 AIInfo_getRoadWidth(AIInfo* info) {
    if (info == nullptr || info->mpPathHandler == nullptr) {
        return 0.0f;
    }

    // Estimate road width from the path point's offset rate
    // and the distance between current and next points.
    f32 width = 60.0f; // Default road width

    if (info->mpPathHandler->mpCurrPointParam != nullptr) {
        // The eflags field encodes some road properties
        s32 eflags = info->mpPathHandler->mpCurrPointParam->mEflags;

        // Wider roads are indicated by certain eflag bits
        if (eflags & 0x10) {
            width = 80.0f; // Wide road
        }
        if (eflags & 0x20) {
            width = 40.0f; // Narrow road
        }
    }

    info->mLastRoadWidth = width;
    return width;
}

// AIInfo_isOffroad
// Check if kart is on valid road surface.
bool AIInfo_isOffroad(const AIInfo* info) {
    if (info == nullptr || info->mpAI == nullptr) {
        return false;
    }

    // Off-road if not all wheels have collision (not on solid ground)
    return !info->mpAI->isAllWheelsCollision();
}

// AIInfo_isNearEdge
// Proximity to road edge.
// @param threshold  Distance threshold in world units
// @return           True if kart is within threshold of road edge
bool AIInfo_isNearEdge(const AIInfo* info, f32 threshold) {
    if (info == nullptr || info->mpPathHandler == nullptr) {
        return false;
    }

    // Get current position and target position
    const EGG::Vector3f& kartPos = info->mpAI->getPos();
    EGG::Vector3f target = info->mpPathHandler->getDirection();

    // Compute distance from kart to the center of the path
    EGG::Vector3f toKart;
    toKart.x = kartPos.x - target.x;
    toKart.y = 0.0f;
    toKart.z = kartPos.z - target.z;

    f32 distFromCenterSq = toKart.x * toKart.x + toKart.z * toKart.z;

    // Get road width (use cached or compute)
    f32 halfWidth = info->mLastRoadWidth * 0.5f;
    if (halfWidth < 1.0f) {
        halfWidth = 30.0f; // Default half-width
    }

    // Check if kart is near the edge of the road
    f32 distFromEdge = halfWidth - sqrtf(distFromCenterSq);
    return distFromEdge < threshold;
}

// AIInfo_getSurfaceType
// KCL surface type under kart.
u16 AIInfo_getSurfaceType(AIInfo* info) {
    if (info == nullptr || info->mpAI == nullptr) {
        return 0;
    }

    // Determine surface from kart collision state
    u16 surfaceType = 0;

    if (info->mpAI->isAllWheelsCollision()) {
        surfaceType = 1; // Normal road
    } else if (!info->mpAI->isOnGround()) {
        surfaceType = 3; // Off-road / no ground
    } else {
        surfaceType = 2; // Partial road contact
    }

    info->mLastSurfaceType = surfaceType;
    return surfaceType;
}

// AIInfo_getSlopeAngle
// Road incline at current position.
// Returns angle in degrees: positive = uphill, negative = downhill.
f32 AIInfo_getSlopeAngle(AIInfo* info) {
    if (info == nullptr || info->mpPathHandler == nullptr) {
        return 0.0f;
    }

    // Compute slope from the direction vector between current and next
    // path points. The Y component gives the elevation change.
    EGG::Vector3f direction = info->mpPathHandler->getDirection();

    f32 horizontalDistSq = direction.x * direction.x + direction.z * direction.z;

    if (horizontalDistSq < 0.001f) {
        info->mLastSlopeAngle = 0.0f;
        return 0.0f;
    }

    // atan2(Y, horizontal_distance) gives the slope angle in radians
    f32 horizontalDist = sqrtf(horizontalDistSq);
    f32 slopeRad = atan2f(direction.y, horizontalDist);

    // Convert to degrees
    f32 slopeDeg = slopeRad * 57.29577951f; // 180 / PI

    info->mLastSlopeAngle = slopeDeg;
    return slopeDeg;
}

// AIInfo_isApproachingRamp
// Detect nearby ramp by checking path point eflags.
bool AIInfo_isApproachingRamp(const AIInfo* info) {
    if (info == nullptr || info->mpPathHandler == nullptr) {
        return false;
    }

    // Check current path point's eflags for ramp indicator
    if (info->mpPathHandler->mpCurrPointParam != nullptr) {
        s32 eflags = info->mpPathHandler->mpCurrPointParam->mEflags;
        if (eflags & 0x04) {
            return true; // Ramp flag set in eflags
        }
    }

    // Also check next point
    if (info->mpPathHandler->mpNextPointParam != nullptr) {
        s32 eflags = info->mpPathHandler->mpNextPointParam->mEflags;
        if (eflags & 0x04) {
            return true;
        }
    }

    return false;
}

// AIInfo_getOpponentProximity
// Distance to nearest opponent.
f32 AIInfo_getOpponentProximity(const AIInfo* info) {
    if (info == nullptr) {
        return 99999.0f;
    }

    // Return cached proximity value
    // In the full implementation, this would scan all other
    // karts and find the nearest one
    return info->mNearestOpponentDist;
}

} // namespace Enemy