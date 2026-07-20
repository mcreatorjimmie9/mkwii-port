#pragma once
// ColResponse.hpp — General Collision Response Dispatcher
// GENESIS Phase 29: Central dispatcher that processes raw KCL collision
// results and converts them into game effects (speed changes, boosts,
// off-road penalties, trick triggers, fall boundaries, ramp launches).
// Original addresses: 0x804Fxxxx-0x8050xxxx

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Collision {

// Collision response type — what effect a collision has on the kart
enum ColResponseType {
    COL_RESP_NONE          = 0x00,
    COL_RESP_WALL_BOUNCE   = 0x01,
    COL_RESP_OOB_RESCUE    = 0x02,
    COL_RESP_BOOST_RAMP    = 0x04,
    COL_RESP_BOOST_PANEL   = 0x08,
    COL_RESP_OFFROAD_SLOW  = 0x10,
    COL_RESP_HALFPIPE      = 0x20,
    COL_RESP_TRICK_RAMP    = 0x40,
    COL_RESP_FALL_BOUNDARY = 0x80,
    COL_RESP_MOVING_ROAD   = 0x100,
};

// Collision response data — filled in by the collision system
struct ColResponseData {
    ColResponseType responseType;
    EGG::Vector3f contactNormal;   // Surface normal at contact point
    EGG::Vector3f contactPoint;    // World position of contact
    f32 penetrationDepth;          // How deep the kart penetrated
    f32 surfaceFriction;           // Friction coefficient of the surface
    u32 surfaceAttribute;          // Raw KCL attribute from the triangle
    s32 kartIdx;                   // Kart that had the collision
    u32 responseFlags;             // Combination of ColResponseType flags
};

// Off-road state per player
struct OffRoadState {
    bool mbIsOffRoad;              // Currently driving off-road
    f32 offRoadTimer;              // Time spent off-road (for visual/audio)
    f32 offRoadSpeedLimit;         // Speed cap while off-road
    s32 offRoadType;               // 0=grass, 1=sand, 2=ice, 3=deep off-road
};

// Boost panel state per player
struct BoostPanelState {
    bool mbOnBoostPanel;           // Currently on a boost panel
    f32 boostTimer;                // Boost duration remaining (frames)
    f32 boostMultiplier;           // Speed multiplier from boost
};

// Trick ramp state per player
struct TrickRampState {
    bool mbOnRamp;                 // Currently on a trick ramp
    f32 rampHeight;                // Height of the ramp
    s32 trickType;                 // 0=none, 1=normal, 2=stunt
};

// ColResponse — collision response dispatcher
class ColResponse {
public:
    /* ColResponse_ctor @ 0x804F1000 */
    ColResponse();
    /* ColResponse_dtor @ 0x804F1040 */
    ~ColResponse();

    // Initialize for a race
    /* ColResponse_init @ 0x804F1080 */
    void init(s32 playerCount);

    // Process a collision response for a kart
    /* ColResponse_process @ 0x804F1100 */
    void process(s32 kartIdx, const ColResponseData& data);

    // Update per-frame timers (boost, off-road, etc.)
    /* ColResponse_update @ 0x804F1200 */
    void update();

    // Get off-road state for a player
    const OffRoadState& getOffRoadState(s32 playerIdx) const;

    // Get boost panel state for a player
    const BoostPanelState& getBoostPanelState(s32 playerIdx) const;

    // Get trick ramp state for a player
    const TrickRampState& getTrickRampState(s32 playerIdx) const;

    // Get the effective speed multiplier for a player
    // Combines off-road, boost panel, and other modifiers
    /* ColResponse_getSpeedMultiplier @ 0x804F1300 */
    f32 getSpeedMultiplier(s32 playerIdx) const;

    // Check if a player should trigger Lakitu rescue
    /* ColResponse_needsRescue @ 0x804F1400 */
    bool needsRescue(s32 playerIdx) const;

    // Check if a player can start a trick
    /* ColResponse_canTrick @ 0x804F1500 */
    bool canTrick(s32 playerIdx) const;

    // Mark that a player has left a trick ramp (launched into air)
    /* ColResponse_onLaunch @ 0x804F1600 */
    void onLaunch(s32 playerIdx);

    // Reset all states for race restart
    void reset();

    // --- Collision resolution methods ---

    /// Resolve floor collision: push kart out of floor, adjust velocity
    /* ColResponse_resolveFloor @ 0x804F1700 */
    void resolveFloor(s32 kartIdx, const EGG::Vector3f& floorNormal, f32 penetration);

    /// Resolve wall collision: slide along wall, reduce speed
    /* ColResponse_resolveWall @ 0x804F1800 */
    void resolveWall(s32 kartIdx, const EGG::Vector3f& wallNormal, f32 penetration, f32 restitution);

    /// Resolve ceiling collision: push kart downward
    /* ColResponse_resolveCeiling @ 0x804F1900 */
    void resolveCeiling(s32 kartIdx, f32 penetration);

    /// Resolve soft wall collision: gradual push-back
    /* ColResponse_resolveSoftWall @ 0x804F1A00 */
    void resolveSoftWall(s32 kartIdx, const EGG::Vector3f& wallNormal, f32 penetration);

    /// Resolve collision with moving collision objects
    /* ColResponse_resolveMovingCol @ 0x804F1B00 */
    void resolveMovingCol(s32 kartIdx, const EGG::Vector3f& objectVel, f32 massRatio);

    /// Resolve kart-to-kart collision with momentum exchange
    /* ColResponse_resolveKartKart @ 0x804F1C00 */
    void resolveKartKart(s32 kartA, s32 kartB, const EGG::Vector3f& collisionNormal);

    /// Resolve item box collision, trigger item roulette
    /* ColResponse_resolveItemBox @ 0x804F1D00 */
    bool resolveItemBox(s32 kartIdx, const EGG::Vector3f& boxPos, f32 boxRadius);

private:
    static const s32 MAX_COL_PLAYERS = MAX_PLAYER_COUNT;
    static const f32 BOOST_PANEL_DURATION;
    static const f32 BOOST_PANEL_MULTIPLIER;
    static const f32 OFFROAD_SPEED_CAP;
    static const f32 OOB_FALL_DISTANCE;

    // Process wall collision response
    void processWallBounce(s32 kartIdx, const ColResponseData& data);

    // Process boost panel activation
    void processBoostPanel(s32 kartIdx, const ColResponseData& data);

    // Process off-road detection
    void processOffRoad(s32 kartIdx, const ColResponseData& data);

    // Process trick ramp entry
    void processTrickRamp(s32 kartIdx, const ColResponseData& data);

    // Process half-pipe entry/exit
    void processHalfPipe(s32 kartIdx, const ColResponseData& data);

    // Process fall boundary detection
    void processFallBoundary(s32 kartIdx, const ColResponseData& data);

    OffRoadState mOffRoad[MAX_COL_PLAYERS];
    BoostPanelState mBoostPanel[MAX_COL_PLAYERS];
    TrickRampState mTrickRamp[MAX_COL_PLAYERS];
    bool mbNeedsRescue[MAX_COL_PLAYERS];
    s32 mPlayerCount;

    // Per-player floor/wall/ceiling push vectors for external access
    EGG::Vector3f mFloorPush[MAX_COL_PLAYERS];
    EGG::Vector3f mWallPush[MAX_COL_PLAYERS];
};

/// Calculate penetration depth and direction between two spheres.
/// @param posA       Center of sphere A
/// @param radiusA    Radius of sphere A
/// @param posB       Center of sphere B
/// @param radiusB    Radius of sphere B
/// @param outNormal  Output: collision normal (from A to B)
/// @return Penetration depth (0.0 if no overlap)
f32 ColResponse_calcPenetration(const EGG::Vector3f& posA, f32 radiusA,
                                const EGG::Vector3f& posB, f32 radiusB,
                                EGG::Vector3f& outNormal);

} // namespace Collision
