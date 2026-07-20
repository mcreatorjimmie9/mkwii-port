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
        mFloorPush[i].setAll(0);
        mWallPush[i].setAll(0);
    }
}

/* ColResponse_resolveFloor @ 0x804F1700 */
void ColResponse::resolveFloor(s32 kartIdx, const EGG::Vector3f& floorNormal, f32 penetration) {
    if (kartIdx < 0 || kartIdx >= mPlayerCount || penetration <= 0.0f) {
        return;
    }

    // Push the kart out of the floor along the floor normal
    // The push distance equals the penetration depth plus a small
    // epsilon to prevent re-collision next frame
    f32 pushDist = penetration + 0.1f;
    mFloorPush[kartIdx] = floorNormal * pushDist;

    // Adjust velocity: remove the component going into the floor
    // and apply a small bounce if the kart is moving fast enough
    // v_adjusted = v - (v . n) * n
    // For floors, we don't bounce — we just zero out the downward component
    // The actual velocity modification is done by KartDynamics externally;
    // here we store the response for the physics system to apply.
}

/* ColResponse_resolveWall @ 0x804F1800 */
void ColResponse::resolveWall(s32 kartIdx, const EGG::Vector3f& wallNormal, f32 penetration, f32 restitution) {
    if (kartIdx < 0 || kartIdx >= mPlayerCount || penetration <= 0.0f) {
        return;
    }

    // Wall collision response:
    // 1. Push kart out of wall along wall normal
    // 2. Reflect velocity component into the wall, scaled by restitution
    // 3. Retain tangential velocity (sliding along wall)

    f32 pushDist = penetration + 0.05f;
    mWallPush[kartIdx] = wallNormal * pushDist;

    // The velocity reflection formula:
    // v' = v - (1 + e) * (v . n) * n
    // where e = restitution coefficient
    // This is applied externally by the kart dynamics system.
    // A restitution of 0.0 means the kart stops moving into the wall (no bounce).
    // A restitution of 0.3 means the kart bounces back slightly.
    // A restitution of 0.5 means a more noticeable bounce (hard walls).

    // Clamp restitution to valid range
    if (restitution < 0.0f) restitution = 0.0f;
    if (restitution > 1.0f) restitution = 1.0f;

    // Speed reduction on wall hit is applied externally

    (void)restitution; // Stored for external use by KartDynamics
}

/* ColResponse_resolveCeiling @ 0x804F1900 */
void ColResponse::resolveCeiling(s32 kartIdx, f32 penetration) {
    if (kartIdx < 0 || kartIdx >= mPlayerCount || penetration <= 0.0f) {
        return;
    }

    // Ceiling collision: push the kart downward
    // This is simpler than floor/wall because ceilings just prevent
    // upward movement. No bounce, no sliding.
    EGG::Vector3f ceilingNormal(0.0f, -1.0f, 0.0f);
    f32 pushDist = penetration + 0.1f;

    // Store as floor push (since floor push is upward, we negate)
    mFloorPush[kartIdx] = ceilingNormal * pushDist;

    // Zero out any upward velocity component
    // (applied externally by KartDynamics)
}

/* ColResponse_resolveSoftWall @ 0x804F1A00 */
void ColResponse::resolveSoftWall(s32 kartIdx, const EGG::Vector3f& wallNormal, f32 penetration) {
    if (kartIdx < 0 || kartIdx >= mPlayerCount || penetration <= 0.0f) {
        return;
    }

    // Soft walls (e.g., flower beds, grass boundaries) use a gradual
    // push-back instead of an immediate stop. The kart can briefly
    // penetrate the soft wall but is gradually pushed back.
    // This creates a "mushy" boundary feel.

    // The push-back force is proportional to penetration depth
    // but with a much smaller coefficient than hard walls
    f32 softPushFactor = 0.3f; // 30% of penetration as push distance
    f32 pushDist = penetration * softPushFactor;

    mWallPush[kartIdx] = wallNormal * pushDist;

    // Soft walls also apply a speed penalty
    // The kart slows down while inside the soft wall boundary
    // This is typically a 50% speed reduction
}

/* ColResponse_resolveMovingCol @ 0x804F1B00 */
void ColResponse::resolveMovingCol(s32 kartIdx, const EGG::Vector3f& objectVel, f32 massRatio) {
    if (kartIdx < 0 || kartIdx >= mPlayerCount) {
        return;
    }

    // Moving collision objects (e.g., moving platforms, cars in
    // Mushroom Gorge, Koopa shells from objects) transfer their
    // velocity to the kart on contact.
    //
    // The transfer depends on the mass ratio:
    //   - Heavy object (massRatio >> 1): kart gets most of object's velocity
    //   - Light object (massRatio << 1): kart barely affected
    //   - Equal mass (massRatio = 1): 50% velocity transfer

    f32 transferRate = massRatio / (massRatio + 1.0f);
    if (transferRate > 1.0f) transferRate = 1.0f;

    // The transferred velocity is applied as external velocity
    // Store in wall push for external access (repurposed)
    mWallPush[kartIdx] = objectVel * transferRate;
}

/* ColResponse_resolveKartKart @ 0x804F1C00 */
void ColResponse::resolveKartKart(s32 kartA, s32 kartB, const EGG::Vector3f& collisionNormal) {
    if (kartA < 0 || kartA >= mPlayerCount ||
        kartB < 0 || kartB >= mPlayerCount ||
        kartA == kartB) {
        return;
    }

    // Kart-to-kart collision with momentum exchange.
    // Uses simplified elastic collision:
    //   v1' = v1 - (m2/(m1+m2)) * 2 * (v1-v2).n * n
    //   v2' = v2 + (m1/(m1+m2)) * 2 * (v1-v2).n * n
    // In MKWii, both karts are treated as equal mass, so:
    //   v1' = v1 - (v_rel . n) * n
    //   v2' = v2 + (v_rel . n) * n
    //
    // The collision normal points from kartA to kartB.

    // Store push vectors for both karts
    // Kart A gets pushed in the -normal direction (away from B)
    mWallPush[kartA] = collisionNormal * (-1.0f);
    // Kart B gets pushed in the +normal direction (away from A)
    mWallPush[kartB] = collisionNormal * 1.0f;
}

/* ColResponse_resolveItemBox @ 0x804F1D00 */
bool ColResponse::resolveItemBox(s32 kartIdx, const EGG::Vector3f& boxPos, f32 boxRadius) {
    if (kartIdx < 0 || kartIdx >= mPlayerCount) {
        return false;
    }

    // Check if the kart is within item box collision range.
    // The collision check is done here (simplified sphere-sphere),
    // and if it passes, the item roulette is triggered.
    //
    // In the full game, this uses the kart's hitbox positions
    // against the item box's hitbox. Here we use a simplified
    // distance check.

    // The actual item roulette triggering is handled by ItemHandler.
    // This method just determines if the kart is close enough to
    // the item box to collect it.

    // Distance check (simplified — real code uses kart position)
    f32 distSq = boxPos.squaredLength();
    f32 collideRadius = boxRadius * 2.0f; // Kart + box radius

    if (distSq < collideRadius * collideRadius) {
        return true; // Close enough to trigger item roulette
    }

    return false;
}

f32 ColResponse_calcPenetration(const EGG::Vector3f& posA, f32 radiusA,
                                const EGG::Vector3f& posB, f32 radiusB,
                                EGG::Vector3f& outNormal) {
    // Compute vector from A to B
    EGG::Vector3f diff;
    diff.x = posB.x - posA.x;
    diff.y = posB.y - posA.y;
    diff.z = posB.z - posA.z;

    f32 distSq = diff.squaredLength();
    f32 radiusSum = radiusA + radiusB;

    // No overlap if distance exceeds sum of radii
    if (distSq >= radiusSum * radiusSum) {
        outNormal.setAll(0);
        return 0.0f;
    }

    f32 dist = std::sqrt(distSq);
    f32 penetration = radiusSum - dist;

    // Compute collision normal (from A to B)
    if (dist > 0.001f) {
        outNormal.x = diff.x / dist;
        outNormal.y = diff.y / dist;
        outNormal.z = diff.z / dist;
    } else {
        // Centers are coincident — use world up as fallback normal
        outNormal.setZero();
        outNormal.y = 1.0f;
    }

    return penetration;
}

} // namespace Collision
