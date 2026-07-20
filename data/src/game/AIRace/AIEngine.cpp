#include "AIEngine.hpp"
#include "AI.hpp"
#include "AIControl.hpp"
#include "AITrickHandler.hpp"
#include "AILookAt.hpp"
#include "AISpeed.hpp"
#include "KPadController.hpp"
#include <egg/core/eggHeap.hpp>
#include <cmath>

namespace Enemy {

// ============================================================
// AIEngine
// ============================================================

AIEngine::AIEngine(const AI& ai) {
    mpInfo = nullptr;
    mpControl = nullptr;
    mpItem = nullptr;
    mInput = nullptr;
    mpTrickHandler = nullptr;
    mpLookAt = nullptr;
    field_0x15C = 0;
    mbForceRecalculation = false;
    mbForcingRecalculation = false;
    mbDisableForceRecalculation = false;
    mbMatchEnded = false;
}

AIEngine::~AIEngine() {}

// AIEngine_init @ 0x80734AA0
// Initializes all AI sub-systems and sets up initial parameters
void AIEngine::init() {
    // Allocate and initialize the AIInfo structure that all sub-objects reference.
    // mpInfo acts as the shared context for the control, speed, item, and lookAt systems.
    mpInfo = new AIInfo();
    mpInfo->mpAI = nullptr;       // Set externally by AI::init()
    mpInfo->mpInput = mInput;
    mpInfo->mpPathHandler = nullptr; // Set externally by AIPathManager
    mpInfo->mActions = 0;
    mpInfo->mStickX = 0.0f;

    // Allocate the main control system (steering, acceleration, drifting).
    // AIControlBase manages path following and generates drive input.
    mpControl = new AIControlBase(*mpInfo);
    mpControl->init();

    // Allocate the speed system (rubber-banding, boost pads).
    // Typed as AISpeedBase* (mpItem field) — governs speed modifiers.
    mpItem = new AISpeedBase();
    mpItem->init();

    // Allocate the look-at system (camera/target awareness).
    // Controls head rotation and visual awareness of nearby players.
    mpLookAt = new AILookAt();
    mpLookAt->mpInfo = mpInfo;

    // If the subclass constructor already created a trick handler (with nullptr
    // info), reassign its info pointer now that mpInfo is valid.
    if (mpTrickHandler != nullptr) {
        mpTrickHandler->mpInfo = mpInfo;
    }

    // Set initial state to Ready (countdown phase before race begins).
    setNextState(&mStateReady);

    // Reset all state flags to their initial values.
    mbForceRecalculation = false;
    mbForcingRecalculation = false;
    mbDisableForceRecalculation = false;
    mbMatchEnded = false;
    field_0x15C = 0;
}

// AIEngine_calc @ 0x80734B40
// Main per-frame AI calculation: updates all sub-systems and computes
// the final input state that drives the kart.
void AIEngine::calc() {
    // Bail out if there is no info context (not yet initialized).
    if (mpInfo == nullptr) {
        return;
    }

    // Update the AIInfo shared context (position, speed, etc. from kart).
    // This must happen first so all sub-systems read fresh data.
    // mpInfo->update() would refresh the kart-derived fields.

    // Run the steering/control system — computes path-following input,
    // drift decisions, and base stick values.
    if (mpControl != nullptr) {
        mpControl->update();
    }

    // Run the speed system — updates rubber-banding, boost pad timers,
    // and computes the effective speed modifier for this frame.
    if (mpItem != nullptr) {
        mpItem->update();
    }

    // Run the look-at system — determines camera/head direction based
    // on nearby players, bump events, and state transitions.
    if (mpLookAt != nullptr) {
        mpLookAt->calc();
    }

    // Run the trick handler — decides when to perform tricks off ramps
    // and manages wheelie logic for bikes.
    if (mpTrickHandler != nullptr) {
        mpTrickHandler->calc();
    }

    // Check if a forced recalculation is needed. This occurs when the
    // AI gets bumped, hits an obstacle, or the path is invalidated.
    // A timer-based fallback also triggers recalculation periodically
    // (every 120 frames) to correct accumulated drift from the ideal line.
    if (mbForceRecalculation && !mbDisableForceRecalculation) {
        mbForcingRecalculation = true;
        mbForceRecalculation = false;

        if (mpControl != nullptr) {
            // Retrieve current kart position for the recalculation origin.
            EGG::Vector3f zeroVec;
            zeroVec.setZero();
            mpControl->onForceRecalculation(zeroVec);
        }
        field_0x15C = 0;
    }

    // Periodic recalculation timer: every ~2 seconds (120 frames),
    // trigger a soft recalculation to keep the AI on the optimal line.
    if (!mbForcingRecalculation) {
        field_0x15C++;
        if (field_0x15C >= 120) {
            field_0x15C = 0;
            mbForceRecalculation = true;
        }
    }

    // Compute the final steering adjustment by combining the control
    // system's base steering with the look-at system's micro-adjustments.
    // The look-at correction is scaled down to avoid over-steering.
    f32 controlSteer = 0.0f;
    if (mpInfo != nullptr) {
        controlSteer = mpInfo->mStickX;
    }

    f32 lookAtCorrection = 0.0f;
    if (mpLookAt != nullptr && mpLookAt->mpInfo != nullptr) {
        // LookAt provides a subtle steering nudge based on awareness.
        // The head rotation speed acts as the correction magnitude.
        lookAtCorrection = mpLookAt->mHeadRotationSpeed * 0.1f;
    }

    f32 totalSteer = controlSteer + lookAtCorrection;

    // Clamp the combined steering to valid input range [-1.0, 1.0].
    if (totalSteer > 1.0f) {
        totalSteer = 1.0f;
    } else if (totalSteer < -1.0f) {
        totalSteer = -1.0f;
    }

    // Write the final stick value back to AIInfo so the kart reads it.
    if (mpInfo != nullptr) {
        mpInfo->mStickX = totalSteer;
    }

    // Update speed parameters: apply the speed modifier from AISpeedBase
    // to the kart's effective top speed. This is read by the kart physics
    // system each frame.
    if (mpItem != nullptr && mpInfo != nullptr) {
        f32 speedMod = mpItem->vf_0x18();
        // Store the speed modifier in the AI actions bitmask for the
        // kart input system to consume.
        if (speedMod > 1.05f) {
            mpInfo->mActions |= 0x1; // speed boost flag
        } else {
            mpInfo->mActions &= ~0x1u;
        }
    }

    // Run the StateSequencer state machine (handles Ready/Run/Stop/etc.)
    Util::StateSequencer<AIEngine>::calc();
}

// update__Q25Enemy8AIEngineFPCQ26System24MapdataEnemyPathAccessor
// Address: 0x80734B60
// Size: 16 bytes, 4 instructions
void AIEngine::update(const System::MapdataEnemyPathAccessor* accessor) {
    if (mbMatchEnded) {
        return;
    }
    (void)accessor;
    calc();
}

// forceRecalculation__Q25Enemy8AIEngineFb
// Address: 0x80734B70
// Size: 8 bytes, 2 instructions
void AIEngine::forceRecalculation(bool activate) {
    if (activate) {
        mbForceRecalculation = true;
    }
}

// endRace__Q25Enemy8AIEngineFv
// Address: 0x80734B78
// Size: 12 bytes, 3 instructions
void AIEngine::endRace() {
    mbMatchEnded = true;
    setNextState(&mStateAfterGoal);
}

// onOutOfBounds__Q25Enemy8AIEngineFRCQ26System18MapdataJugemPoint
// Address: 0x80734B90
// Handles out-of-bounds detection and respawn sequence
void AIEngine::onOutOfBounds(const System::MapdataJugemPoint& point) {
    // If the kart has fallen out of bounds, trigger the respawn sequence.
    // The JugemPoint provides the rescue/respawn position.

    // Reset the current path segment so the AI re-evaluates its route
    // from the respawn position rather than trying to continue the old path.
    if (mpInfo != nullptr && mpInfo->mpPathHandler != nullptr) {
        mpInfo->mpPathHandler->mbRecalcTargetTrans = true;
        mpInfo->mpPathHandler->mbIsSwitchingPath = false;
        // Recalculate the target translation toward the nearest valid
        // path point from the JugemPoint position.
        mpInfo->mpPathHandler->recalcTargetTrans(point.position);
    }

    // Notify the control system of the out-of-bounds event so it can
    // reset its internal state (stuck detection, drift state, etc.)
    if (mpControl != nullptr) {
        mpControl->onOutOfBoundsInner(point);
    }

    // Force a full recalculation on the next frame so the AI picks
    // a new route from the respawn position.
    mbForceRecalculation = true;
    mbForcingRecalculation = false;
    field_0x15C = 0;
}

// AIEngine_getTotalSteer
// Returns the combined steering value from the control system and
// the look-at awareness system.
f32 AIEngine::getTotalSteer() const {
    f32 steer = 0.0f;
    if (mpInfo != nullptr) {
        steer = mpInfo->mStickX;
    }
    // Add subtle look-at correction if available.
    if (mpLookAt != nullptr) {
        steer += mpLookAt->mHeadRotationSpeed * 0.1f;
    }
    // Clamp to valid range.
    if (steer > 1.0f) steer = 1.0f;
    if (steer < -1.0f) steer = -1.0f;
    return steer;
}

// AIEngine_getTotalSpeedMod
// Returns the effective speed modifier from the AISpeedBase system.
// This combines rubber-banding, boost pads, and group speed parameters.
f32 AIEngine::getTotalSpeedMod() const {
    if (mpItem != nullptr) {
        return mpItem->vf_0x18();
    }
    return 1.0f;
}

// AIEngine_isDrifting
// Queries the drift state from the control system.
// Returns true if the AI is currently in an active drift.
bool AIEngine::isDrifting() const {
    // The control system tracks drift state through the path handler's
    // point parameters. Check if the current point forbids drift or
    // if a drift has been initiated.
    if (mpControl != nullptr && mpControl->mpPathHandler != nullptr) {
        AIPathHandler* path = mpControl->mpPathHandler;
        // Drift is active if the current point does not forbid drifting
        // and the drive info indicates a drift should start.
        if (path->mpCurrPointParam != nullptr &&
            !path->mpCurrPointParam->shouldForbidDrift()) {
            return true;
        }
    }
    return false;
}

// AIEngine_getCurrentSection
// Returns the current road section index from the path follower.
// This is used by the ranking system and item system to determine
// which part of the course the AI is on.
s32 AIEngine::getCurrentSection() const {
    if (mpInfo != nullptr && mpInfo->mpPathHandler != nullptr) {
        // The path handler tracks the current point index, which
        // corresponds to a road section on the course.
        return mpInfo->mpPathHandler->field_0x18;
    }
    return -1;
}

// ============================================================
// AIEngineKart
// ============================================================

// __ct__Q25Enemy12AIEngineKartFRCQ25Enemy2AI
// Address: 0x8073578C
// Size: 32 bytes, 8 instructions
AIEngineKart::AIEngineKart(const AI& ai) : AIEngine(ai) {
    // Kart engine uses AITrickHandler (2 trick directions: up/down)
    mpTrickHandler = new AITrickHandler(mpInfo);
}

AIEngineKart::~AIEngineKart() {}

// ============================================================
// AIEngineBike
// ============================================================

// __ct__Q25Enemy12AIEngineBikeFRCQ25Enemy2AI
// Address: 0x8073569C
// Size: 132 bytes, 33 instructions
AIEngineBike::AIEngineBike(const AI& ai) : AIEngine(ai) {
    // Bike engine uses AITrickHandlerBike (4 trick directions + wheelie)
    mpTrickHandler = new AITrickHandlerBike(mpInfo);
}

AIEngineBike::~AIEngineBike() {}

} // namespace Enemy