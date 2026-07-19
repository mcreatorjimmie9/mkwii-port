#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>

#define GENESIS_KART_MOVE_DEFINED

namespace Kart {

// Forward declarations
class KartDynamics;
class KartJump;
class KartHalfPipe;
class KartObjectProxy;

enum DrivingDirection {
    DRIVING_DIRECTION_IDLE = 2,
};

enum PadType {
    PAD_TYPE_NONE        = 0x0,
    PAD_TYPE_BOOST_PANEL = 0x1,
    PAD_TYPE_BOOST_RAMP  = 0x2,
    PAD_TYPE_JUMP_PAD    = 0x4,
};

// ===== KartMove =====
// Size: 0x294 (from community player.h, static_assert verified)
// Phase 6b: Should inherit from KartObjectProxy (provides vtable, KartAccessor*, nw4r::ut::Node).
// Cannot do so yet because the stub KartObjectProxy is empty. When the stub is expanded,
// change to: class KartMove : public KartObjectProxy { ... };
// KartObjectProxy layout: vtable(0x00), KartAccessor*(0x04), nw4r::ut::Node(0x08, 4 bytes)
class KartMove {
public:
    virtual ~KartMove();
    virtual void createComponents();
    virtual void setTurnParams();
    virtual void init();
    virtual void activateStar();
    virtual void activateMega();
    virtual void activateGesso();
    virtual void clear();
    virtual void initOob();
    virtual void vf2c();
    virtual void vf30();
    virtual f32 getLeanRot();
    virtual bool canWheelie();

    // Mangled functions from symbols

    // 0x805814c8 - getMaxMtCharge__Q24Kart8KartMoveFv
    // Phase 6b: Returns s16, but decomp shows mulli+lwz pattern suggesting
    // array lookup at this+0x248. The actual value comes from KartStats via accessor.
    s16 getMaxMtCharge();

    // 0x805814d4 - getMaxSmtCharge__Q24Kart8KartMoveFv
    // Same pattern as getMaxMtCharge but for super mini-turbo.
    s16 getMaxSmtCharge();

    // 0x805814e0 - getAppliedHopStickX__Q24Kart8KartMoveFv
    // Phase 6b DECOMP: Reads accessor via vtable(r3)[1] -> 0x14(accessor), then checks
    // bit 14 of accessor flags, bit 27 of accessor+4 flags, and bits 17-18 of accessor+0xC.
    // Negates hop stick X when driving backwards (drivingDirection != IDLE).
    // mulli r0, r0, 0x248 confirms this+0x248 array stride (per-kart data).
    s32 getAppliedHopStickX();

    // 0x80583c08 - setScale__Q24Kart8KartMoveFQ23EGG8Vector3f
    // Phase 6b DECOMP: Reads accessor flags at 0x2C, checks bit 20 (mega state).
    // Uses fabsf(scale.x) from param. Writes to this+0xC0 area.
    void setScale(const EGG::Vector3f& scale);

    // 0x80583f0c - empty__Q24Kart8KartMoveFl
    void empty(s32 arg);

    // 0x805857cc - clearBoost__Q24Kart8KartMoveFv
    // 320 bytes. Zeros two Vec4f blocks: one at 0xF0-0xFF and one at 0x100-0x10F.
    // Phase 6b DECOMP NOTE: The decompiled code writes f32 values at offsets
    // 0xF0, 0xF4, 0xF8, 0xFC and 0x100, 0x104, 0x108, 0x10C. This means the
    // community header's placement of s16 fields (mDriftState@0xFC, mMtCharge@0xFE,
    // mSmtCharge@0x100) may overlap with boost vectors. These boost vectors are
    // likely at a DIFFERENT position in the actual object (the clearBoost function
    // may operate on a sub-object or the offsets in the decomp are relative to a
    // different base pointer). Keeping community layout for compatibility.
    void clearBoost();

    // Accessors (from community code)
    f32 baseSpeed() const { return mBaseSpeed; }
    f32 speed() const { return mSpeed; }
    void setSpeed(f32 speed) { mSpeed = speed; }
    const EGG::Vector3f& dir() const { return mDir; }
    f32 speedRatioCapped() const { return mSpeedRatioCapped; }
    f32 speedRatio() const { return mSpeedRatio; }
    s32 hopStickX() const { return mHopStickX; }
    s16 driftState() const { return mDriftState; }
    s16 mtCharge() const { return mMtCharge; }
    s16 smtCharge() const { return mSmtCharge; }
    const EGG::Vector3f& scale() const { return mScale; }
    f32 totalScale() const { return mTotalScale; }
    f32 hitboxScale() const { return mHitboxScale; }
    s16 respawnTimer() const { return mRespawnTimer; }
    DrivingDirection drivingDirection() const { return mDrivingDirection; }
    s16 backwardsAllowCounter() const { return mBackwardsAllowCounter; }
    void setPadType(u32 padType) { mPadType |= padType; }
    u16 flags() const { return mFlags; }
    const KartJump* kartJump() const { return mJump; }
    const KartHalfPipe* kartHalfPipe() const { return mHalfPipe; }

private:
    // Phase 6b: KartObjectProxy provides vtable(0x00), mAccessor(0x04), mNode(0x08)
    // When inheritance is added, remove the 0x00-0x0B fields below
    u8 _00c[0x014 - 0x010];           // 0x00C: 4 bytes padding (includes vtable + proxy data)
    f32 mBaseSpeed;                     // 0x014: top speed from KartStats
    u8 _018[0x020 - 0x018];           // 0x018: 8 bytes (unknown speed params: acceleration-related)
    f32 mSpeed;                         // 0x020: current vehicle speed
    u8 _024[0x05c - 0x024];           // 0x024: 0x38 bytes (boost force vectors, accel state)
    EGG::Vector3f mDir;                 // 0x05C: forward direction vector
    u8 _068[0x0b0 - 0x068];           // 0x068: 0x48 bytes (steering, wheelie state)
    f32 mSpeedRatioCapped;              // 0x0B0: speed ratio clamped to [0, 1]
    f32 mSpeedRatio;                    // 0x0B4: speed / baseSpeed (can exceed 1.0 with boost)
    u8 _0b8[0x0cc - 0x0b8];           // 0x0B8: 0x14 bytes (unknown)
    s32 mHopStickX;                     // 0x0CC: hop input X axis (stick X at hop initiation)
    u8 _0d0[0x0fc - 0x0d0];           // 0x0D0: 0x2C bytes (drift input, state)
    // Phase 6b NOTE: clearBoost writes f32 at 0xF0-0xFF and 0x100-0x10F.
    // The community header places s16 charge fields here which may conflict.
    // These offsets are from the community source; the boost vectors may be
    // at a different base (e.g., a sub-object pointer).
    s16 mDriftState;                    // 0x0FC: 0=none, 1=outside, 2=inside MT
    s16 mMtCharge;                      // 0x0FE: mini-turbo charge (0-650 range)
    s16 mSmtCharge;                     // 0x100: super mini-turbo charge
    u8 _102[0x164 - 0x102];           // 0x102: 0x62 bytes (trick, stunt state, boost vecs)
    EGG::Vector3f mScale;               // 0x164: model scale (mega mushroom etc.)
    f32 mTotalScale;                    // 0x170: derived total scale (max component of mScale)
    f32 mHitboxScale;                   // 0x174: hitbox scale factor (affects collision radius)
    u8 _178[0x238 - 0x178];           // 0x178: 0xC0 bytes (complex state: wheelie, halfpipe, etc.)
    s16 someTimer;                      // 0x238: general purpose timer
    s16 mRespawnTimer;                  // 0x23A: respawn countdown
    u8 _23c[0x248 - 0x23c];           // 0x23C: 0xC bytes
    DrivingDirection mDrivingDirection; // 0x248: current driving direction (2=idle, 3=backwards)
    s16 mBackwardsAllowCounter;         // 0x24C: frames before backwards allowed
    u8 _24e[0x250 - 0x24e];           // 0x24E: 2 bytes padding
    u32 mPadType;                       // 0x250: OR of PadType flags (boost panel, jump pad, etc.)
    u16 mFlags;                         // 0x254: move state flags
    u8 _256[0x258 - 0x256];           // 0x256: 2 bytes padding
    KartJump* mJump;                    // 0x258: jump state object
    KartHalfPipe* mHalfPipe;            // 0x25C: halfpipe state object
    u8 _260[0x294 - 0x260];           // 0x260: 0x34 bytes trailing data
};
// static_assert(sizeof(KartMove) == 0x294);

} // namespace Kart