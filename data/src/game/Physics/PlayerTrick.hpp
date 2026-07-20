#pragma once

#include <types.h>
#include <EGG/math.h>

// Forward declarations
class PlayerSub10;
class PlayerPointers;

// ============================================================================
// Trick Properties — loaded from KartParam.bin per-vehicle
// ============================================================================
struct TrickProperties {
    f32 initialAngleDiff;   // 0x00: initial angle difference threshold
    f32 minAngleDiff;       // 0x04: minimum angle difference
    f32 minAngleDiffMul;    // 0x08: multiplier for min angle diff
    f32 angleDiffMulDec;    // 0x0C: per-frame decay for multiplier
}; // Total size 0x10

// ============================================================================
// Trick Type enumeration
// ============================================================================
enum TrickType : s32 {
    STUNT_TRICK_BASIC       = 0,
    BIKE_FLIP_TRICK_X_NOSE  = 1,
    BIKE_FLIP_TRICK_X_TAIL  = 2,
    FLIP_TRICK_Y_LEFT       = 3,
    FLIP_TRICK_Y_RIGHT      = 4,
    KART_FLIP_TRICK_Z       = 5,
    BIKE_SIDE_STUNT_TRICK   = 6,
};

enum TrickCategory : s32 {
    STUNT       = 0,
    SINGLE_FLIP = 1,
    DOUBLE_FLIP = 2,
};

// ============================================================================
// PlayerTrick — Trick/Airborne Stunt System
// Size: 0x50
// ============================================================================
// Manages trick state during airborne segments: detection, animation
// (rotation), angle tracking, and boost reward on landing.
//
// vtable: 0x808b58b0 (base), 0x808b5890 (bike override)
// ============================================================================
class PlayerTrick {
public:
    virtual ~PlayerTrick();                     // 0x80575aa8
    virtual void start(Vec3* left);              // 0x80575ee8
    virtual void startInner(TrickCategory cat);  // 0x8057616c
    // virtual 1-2: unknown
    virtual void updateRot();                   // 0x805764fc

    PlayerTrick();                               // 0x80575a44
    void init(PlayerSub10* ps, PlayerPointers* ptrs);
    void updateNext();                             // 0x80575b38
    void tryStart(Vec3* left);                   // 0x80575d7c
    void update();                                 // 0x805763e4
    void end();                                    // 0x805766b8

    // Query helpers
    TrickType getTrickType() const { return type; }
    TrickCategory getTrickCategory() const { return category; }
    u8 getTrickState() const { return nextDirection; }

    // Calculate the trick score boost duration.
    s16 calcTrickScore() const;

    // Get the animation ID for the current trick type.
    s32 getAnimId() const;

    // Check if a stick direction is valid for a trick input.
    static bool isValidDirection(s32 stickX, s32 stickY);

    // === Field layout (from player.h) ===
    PlayerPointers* pointers;      // 0x00
    u8 _004[0x004];               // 0x04-0x07
    u8 _008[0x004];               // 0x08-0x0B
    // vtable at 0x0C
    TrickType type;                 // 0x10
    TrickCategory category;       // 0x14
    u8 nextDirection;              // 0x18
    u8 _19;                       // 0x19
    s16 nextTimer;                 // 0x1A
    f32 rotDir;                    // 0x1C
    TrickProperties* properties;    // 0x20
    f32 angle;                     // 0x24
    f32 angleDiff;                  // 0x28
    f32 angleDiffMul;               // 0x2C
    f32 angleDiffMulDec;            // 0x30
    f32 maxAngle;                  // 0x34
    s16 cooldown;                  // 0x38
    bool boostRampEnabled;          // 0x3A
    u8 _3b;                       // 0x3B
    Quat rot;                       // 0x3C
    PlayerSub10* playerSub10;        // 0x48
}; // Total size 0x50
// static_assert(sizeof(PlayerTrick) == 0x50);

// ============================================================================
// PlayerTrickBike — Bike-specific trick overrides
// ============================================================================
class PlayerTrickBike : public PlayerTrick {
public:
    virtual ~PlayerTrickBike();                  // 0x80576afc
    virtual void start(Vec3* left) override;      // 0x80576758
    virtual void startInner(TrickCategory cat) override; // 0x8057689c
    virtual void updateRot() override;             // 0x80576994

    // vtable: 0x808b5890
}; // Total size 0x50
// static_assert(sizeof(PlayerTrick) == 0x50);