#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>

#define GENESIS_KART_MOVE_DEFINED

namespace Kart {

// Forward declarations
class KartDynamics;

// ===== KartMove =====
// Size: 0x294 (from community player.h)
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
    s16 getMaxMtCharge();

    // 0x805814d4 - getMaxSmtCharge__Q24Kart8KartMoveFv
    s16 getMaxSmtCharge();

    // 0x805814e0 - getAppliedHopStickX__Q24Kart8KartMoveFv
    s32 getAppliedHopStickX();

    // 0x80583c08 - setScale__Q24Kart8KartMoveFQ23EGG8Vector3f
    void setScale(const EGG::Vector3f& scale);

    // 0x80583f0c - empty__Q24Kart8KartMoveFl
    void empty(s32 arg);

    // 0x805857cc - clearBoost__Q24Kart8KartMoveFv
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
    u32 drivingDirection() const { return mDrivingDirection; }
    s16 backwardsAllowCounter() const { return mBackwardsAllowCounter; }
    void setPadType(u32 padType) { mPadType |= padType; }
    u16 flags() const { return mFlags; }

private:
    u8 _00c[0x014 - 0x010];
    f32 mBaseSpeed;
    u8 _018[0x020 - 0x018];
    f32 mSpeed;
    u8 _024[0x5c - 0x24];
    EGG::Vector3f mDir;
    u8 _068[0x0b0 - 0x68];
    f32 mSpeedRatioCapped;
    f32 mSpeedRatio;
    u8 _0b8[0x0cc - 0x0b8];
    s32 mHopStickX;
    u8 _0d0[0x0fc - 0x0d0];
    s16 mDriftState;
    s16 mMtCharge;
    s16 mSmtCharge;
    u8 _102[0x164 - 0x102];
    EGG::Vector3f mScale;
    f32 mTotalScale;
    f32 mHitboxScale;
    u8 _170[0x238 - 0x178];
    s16 _someTimer;
    s16 mRespawnTimer;
    u8 _23c[0x248 - 0x23c];
    u32 mDrivingDirection;
    s16 mBackwardsAllowCounter;
    u8 _24e[0x250 - 0x24e];
    u32 mPadType;
    u16 mFlags;
    u8 _256[2];
    // KartJump* mJump;
    // KartHalfPipe* mHalfPipe;
};
// static_assert(sizeof(KartMove) == 0x294);

} // namespace Kart