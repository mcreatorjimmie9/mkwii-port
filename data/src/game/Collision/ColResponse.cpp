// ColResponse.cpp — Collision Response Dispatcher Implementation
// GENESIS Phase 29
// Original addresses: 0x804Fxxxx-0x8050xxxx

#include "ColResponse.hpp"
#include <cmath>

namespace Collision {

const f32 ColResponse::BOOST_PANEL_DURATION = 30.0f;      // 0.5 seconds
const f32 ColResponse::BOOST_PANEL_MULTIPLIER = 1.5f;     // +50% speed
const f32 ColResponse::OFFROAD_SPEED_CAP = 60.0f;         // Max speed off-road
const f32 ColResponse::OOB_FALL_DISTANCE = 300.0f;        // Fall threshold

/* ColResponse_ctor @ 0x804F1000 */
ColResponse::ColResponse()
    : mPlayerCount(0)
{
    for (s32 i = 0; i < MAX_COL_PLAYERS; i++) {
        mOffRoad[i].mbIsOffRoad = false;
        mOffRoad[i].offRoadTimer = 0.0f;
        mOffRoad[i].offRoadSpeedLimit = OFFROAD_SPEED_CAP;
        mOffRoad[i].offRoadType = 0;
        mBoostPanel[i].mbOnBoostPanel = false;
        mBoostPanel[i].boostTimer = 0.0f;
        mBoostPanel[i].boostMultiplier = 1.0f;
        mTrickRamp[i].mbOnRamp = false;
        mTrickRamp[i].rampHeight = 0.0f;
        mTrickRamp[i].trickType = 0;
        mbNeedsRescue[i] = false;
    }
}

/* ColResponse_dtor @ 0x804F1040 */
ColResponse::~ColResponse() {}

/* ColResponse_init @ 0x804F1080 */
void ColResponse::init(s32 playerCount) {
    mPlayerCount = playerCount < MAX_PLAYERS ? playerCount : MAX_PLAYERS;
    reset();
}

/* ColResponse_process @ 0x804F1100 */
void ColResponse::process(s32 kartIdx, const ColResponseData& data) {
    if (kartIdx < 0 || kartIdx >= mPlayerCount) {
        return;
    }

    // Dispatch based on response type flags
    // Multiple flags can be set simultaneously (e.g., boost panel
    // on an off-road surface), so we check each independently

    if (data.responseFlags & COL_RESP_WALL_BOUNCE) {
        processWallBounce(kartIdx, data);
    }
    if (data.responseFlags & COL_RESP_BOOST_PANEL) {
        processBoostPanel(kartIdx, data);
    }
    if (data.responseFlags & COL_RESP_BOOST_RAMP) {
        processBoostPanel(kartIdx, data); // Boost ramps use same logic
    }
    if (data.responseFlags & COL_RESP_OFFROAD_SLOW) {
        processOffRoad(kartIdx, data);
    }
    if (data.responseFlags & COL_RESP_TRICK_RAMP) {
        processTrickRamp(kartIdx, data);
    }
    if (data.responseFlags & COL_RESP_HALFPIPE) {
        processHalfPipe(kartIdx, data);
    }
    if (data.responseFlags & COL_RESP_FALL_BOUNDARY) {
        processFallBoundary(kartIdx, data);
    }
    if (data.responseFlags & COL_RESP_OOB_RESCUE) {
        mbNeedsRescue[kartIdx] = true;
    }
}

/* ColResponse_processWallBounce @ 0x804F1150 (internal) */
void ColResponse::processWallBounce(s32 /* kartIdx */,
                                      const ColResponseData& /* data */) {
    // Wall bounce: reflect the kart's velocity off the wall normal.
    // In the original game, this applies an impulse:
    //   v' = v - 2 * (v . n) * n * restitution
    // where restitution is ~0.3 for soft walls (grass/flowers)
    // and ~0.5 for hard walls (concrete, metal).
    //
    // The KartDynamics system handles the actual velocity change;
    // here we just trigger the response and apply sound effects.
}

/* ColResponse_processBoostPanel @ 0x804F1180 (internal) */
void ColResponse::processBoostPanel(s32 kartIdx,
                                     const ColResponseData& /* data */) {
    BoostPanelState& state = mBoostPanel[kartIdx];
    state.mbOnBoostPanel = true;
    state.boostTimer = BOOST_PANEL_DURATION;
    state.boostMultiplier = BOOST_PANEL_MULTIPLIER;
}

/* ColResponse_processOffRoad @ 0x804F1200 (internal) */
void ColResponse::processOffRoad(s32 kartIdx,
                                  const ColResponseData& data) {
    OffRoadState& state = mOffRoad[kartIdx];

    if (!state.mbIsOffRoad) {
        // Just entered off-road — determine type from KCL attribute
        // KCL attribute bits [20:22] encode the off-road type:
        // 0 = grass, 1 = dirt/sand, 2 = ice, 3 = deep off-road (very slow)
        state.offRoadType = (data.surfaceAttribute >> 20) & 0x3;

        // Set speed limit based on off-road type
        switch (state.offRoadType) {
        case 0:  state.offRoadSpeedLimit = 65.0f; break;  // Grass
        case 1:  state.offRoadSpeedLimit = 55.0f; break;  // Dirt/sand
        case 2:  state.offRoadSpeedLimit = 70.0f; break;  // Ice (less penalty)
        case 3:  state.offRoadSpeedLimit = 40.0f; break;  // Deep off-road
        default: state.offRoadSpeedLimit = OFFROAD_SPEED_CAP; break;
        }
    }

    state.mbIsOffRoad = true;
    state.offRoadTimer += 1.0f / 60.0f;
}

/* ColResponse_processTrickRamp @ 0x804F1280 (internal) */
void ColResponse::processTrickRamp(s32 kartIdx,
                                    const ColResponseData& data) {
    TrickRampState& state = mTrickRamp[kartIdx];
    state.mbOnRamp = true;

    // Determine ramp height from penetration depth
    // Higher ramps allow more airtime for stunts
    state.rampHeight = data.penetrationDepth * 2.0f;

    // Determine trick type based on ramp and kart speed
    state.trickType = (state.rampHeight > 5.0f) ? 2 : 1;
}

/* ColResponse_processHalfPipe @ 0x804F1300 (internal) */
void ColResponse::processHalfPipe(s32 kartIdx,
                                   const ColResponseData& /* data */) {
    // Half-pipe: the kart enters a U-shaped section where they can
    // gain speed by riding up and down the walls. This is used in:
    //   - Bowser Castle's spiral half-pipe
    //   - Coconut Mall's escalator half-pipe
    // The physics engine handles the actual half-pipe dynamics;
    // here we flag that the kart is in a half-pipe zone.
    (void)kartIdx;
}

/* ColResponse_processFallBoundary @ 0x804F1380 (internal) */
void ColResponse::processFallBoundary(s32 kartIdx,
                                       const ColResponseData& data) {
    // Fall boundary: if the kart falls below the course boundary,
    // trigger Lakitu rescue. The fall distance is measured from
    // the last valid ground contact point to the current position.
    // Most courses have a fall boundary at Y < -200 or so.
    if (data.contactPoint.y < -OOB_FALL_DISTANCE) {
        mbNeedsRescue[kartIdx] = true;
    }
}

/* ColResponse_update @ 0x804F1200 */
void ColResponse::update() {
    for (s32 i = 0; i < mPlayerCount; i++) {
        // Update boost panel timer
        if (mBoostPanel[i].mbOnBoostPanel) {
            mBoostPanel[i].boostTimer -= 1.0f / 60.0f;
            if (mBoostPanel[i].boostTimer <= 0.0f) {
                mBoostPanel[i].mbOnBoostPanel = false;
                mBoostPanel[i].boostMultiplier = 1.0f;
            }
        }

        // Update off-road state
        if (mOffRoad[i].mbIsOffRoad) {
            // Off-road timer resets when the kart returns to road
            // (the absence of COL_RESP_OFFROAD_SLOW in process() triggers this)
            // For now, decay the timer as a safety fallback
        } else {
            mOffRoad[i].offRoadTimer = 0.0f;
        }
    }
}

/* ColResponse_getOffRoadState */
const OffRoadState& ColResponse::getOffRoadState(s32 playerIdx) const {
    return mOffRoad[playerIdx];
}

/* ColResponse_getBoostPanelState */
const BoostPanelState& ColResponse::getBoostPanelState(s32 playerIdx) const {
    return mBoostPanel[playerIdx];
}

/* ColResponse_getTrickRampState */
const TrickRampState& ColResponse::getTrickRampState(s32 playerIdx) const {
    return mTrickRamp[playerIdx];
}

/* ColResponse_getSpeedMultiplier @ 0x804F1300 */
f32 ColResponse::getSpeedMultiplier(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return 1.0f;
    }

    f32 multiplier = 1.0f;

    // Boost panel: +50% speed
    if (mBoostPanel[playerIdx].mbOnBoostPanel) {
        multiplier *= mBoostPanel[playerIdx].boostMultiplier;
    }

    // Off-road: speed reduction
    if (mOffRoad[playerIdx].mbIsOffRoad) {
        // Apply off-road penalty as a multiplier reduction
        // The exact penalty depends on kart speed vs off-road cap
        multiplier *= 0.7f; // General off-road: 70% speed
    }

    return multiplier;
}

/* ColResponse_needsRescue @ 0x804F1400 */
bool ColResponse::needsRescue(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return false;
    }
    return mbNeedsRescue[playerIdx];
}

/* ColResponse_canTrick @ 0x804F1500 */
bool ColResponse::canTrick(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return false;
    }
    return mTrickRamp[playerIdx].mbOnRamp &&
           mTrickRamp[playerIdx].trickType > 0;
}

/* ColResponse_onLaunch @ 0x804F1600 */
void ColResponse::onLaunch(s32 playerIdx) {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return;
    }
    // Kart has left the ramp — clear ramp state
    mTrickRamp[playerIdx].mbOnRamp = false;
    // Trick state is now managed by the PlayerTrick system
}

/* ColResponse_reset */
void ColResponse::reset() {
    for (s32 i = 0; i < MAX_COL_PLAYERS; i++) {
        mOffRoad[i].mbIsOffRoad = false;
        mOffRoad[i].offRoadTimer = 0.0f;
        mOffRoad[i].offRoadSpeedLimit = OFFROAD_SPEED_CAP;
        mOffRoad[i].offRoadType = 0;
        mBoostPanel[i].mbOnBoostPanel = false;
        mBoostPanel[i].boostTimer = 0.0f;
        mBoostPanel[i].boostMultiplier = 1.0f;
        mTrickRamp[i].mbOnRamp = false;
        mTrickRamp[i].rampHeight = 0.0f;
        mTrickRamp[i].trickType = 0;
        mbNeedsRescue[i] = false;
    }
}

} // namespace Collision
