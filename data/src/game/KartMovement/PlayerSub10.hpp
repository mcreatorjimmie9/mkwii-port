#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>

namespace Kart {

class PlayerPointers;
class PlayerTrick;
class PlayerZipper;

class PlayerSub10 {
public:
    virtual ~PlayerSub10();
    virtual void setTurnParams();
    virtual void activateStar();
    virtual void activateMega();
    virtual void applyInk(int unk);
    virtual void cancelWheelie();
    virtual bool checkWheelie();
    virtual void updateTurn();
    virtual void updateVehicleSpeed();
    virtual void updateUpsWhileAirborne();
    virtual void updateVehicleRotationVector(float turn);
    virtual float getWheelieSoftSpeedLimitBonus();
    virtual void updateWheelie();
    virtual bool canHop();
    virtual void hop();
    virtual void updateMtCharge();

    PlayerSub10();
    void init(bool unk0, bool unk1);
    void update();
    void updateHopPhysics();
    void updateDir();
    void updateAcceleration();
    void updateOffroad();
    void updateRotation();
    void updateStandstillBoostRot();
    void updateUps();
    void updateManualDrift();
    void updateAutoDrift();
    void updateHopAndSlipdrift();
    void activateMushroom();
    void endTrick();
    void activateZipperBoost();
    void tryStartJumpPad();
    void applyLightning();
    void applyLightningEffect(int frames, int unk0, int unk1);
    void activateTc();
    void deactivateTc();
    void updateInk();
    void applyStartBoost(int frames);
    void tryEndJumpPad();
    void updateBoost();
    void releaseMt(int unk0, int unk1);
    void updateStickyRoad();
    void setInitialPhysicsValues(EGG::Vector3f* position, EGG::Vector3f* angles);
    void doRespawn();
    void enterCannon();
    void updateCannon();
    void activateBullet(int unk);
    void updateDiving();
    void updateSlipstream();
    void updateSpecialFloor();

    PlayerPointers* playerPointers;
    u8 _04[4];
    u8 _08[4];
    // vtable at 0x0c
    float speedMultiplier;
    float baseSpeed;
    float softSpeedLimit;
    float _1c;
    float vehicleSpeed;
    float lastSpeed;
    float _28;
    float hardSpeedLimit;
    float acceleration;
    float speedDragMultiplier;
    EGG::Vector3f smoothedUp;
    EGG::Vector3f up;
    EGG::Vector3f landingDir;
    EGG::Vector3f dir;
    EGG::Vector3f lastDir;
    EGG::Vector3f vel1Dir;
    EGG::Vector3f _80;
    EGG::Vector3f dirDiff;
    bool hasLandingDir;
    u8 _99[3];
    float outsideDriftAngle;
    float landingAngle;
    EGG::Vector3f outsideDriftLastDir;
    float speedRatioCapped;
    float speedRatio;
    float kclSpeedFactor;
    float kclRotFactor;
    float kclWheelSpeedFactor;
    float kclWheelRotFactor;
    int16_t flooorCollisionCount;
    u8 _ca[2];
    int32_t hopStickX;
    int16_t hopFrame;
    EGG::Vector3f hopUp;
    EGG::Vector3f hopDir;
    int32_t slipstreamCharge;
    float _f0;
    float divingRot;
    float boostRot;
    int16_t driftState;
    int16_t mtCharge;
    int16_t smtCharge;
    int16_t mtBoost;
    float outsideDriftBonus;
    // PlayerBoost at ~0x114
    int16_t zipperBoost;
    int16_t zipperBoostMax;
    u8 _130[0x148 - 0x134];
    int16_t offroadInvincibilityFrames;
    uint16_t _14a;
    uint16_t ssmtCharge;
    u8 _14e[0x15c - 0x150];
    float effectiveTurn;
    float conservedTurn;
    EGG::Vector3f scale;
    float _170;
    float someScale;
    float shockSpeedMultiplier;
    float megaScale;
    u8 _180[0x188 - 0x184];
    int16_t mushroomBoost2;
    int16_t starTimer;
    int16_t shockTimer;
    int16_t blooperCharacterInk;
    uint8_t field_0x190;
    u8 _191;
    int16_t crushTimer;
    int16_t MegaTimer;
    u8 _196[0x1a8 - 0x198];
    float jumpPadMinSpeed;
    float jumpPadMaxSpeed;
    float _1b8, _1bc;
    // JumpPadProperties at ~0x1c0
    int16_t rampBoost;
    u8 _1c6[0x230 - 0x1c8];
    float hopVelY;
    float hopPosY;
    float hopGravity;
    u8 _234[0x24c - 0x23c];
    uint32_t drivingDirection;
    uint16_t backwardsAllowCounter;
    u8 _24e[2];
    uint32_t specialFloor;
    u8 _254[4];
    PlayerTrick* trick;
    PlayerZipper* zipper;
    u8 _260[0x28c - 0x264];
    float rawTurn;
    float _28c;
    int16_t ghostVanishTimer;
    u8 _292[2];
};

class PlayerSub10Bike : public PlayerSub10 {
public:
    virtual ~PlayerSub10Bike();
    virtual void setTurnParams() override;
    virtual void cancelWheelie() override;
    virtual bool checkWheelie() override;
    virtual void updateVehicleRotationVector(float turn) override;
    virtual float getWheelieSoftSpeedLimitBonus() override;
    virtual void updateWheelie() override;
    virtual void updateMtCharge() override;
    virtual void startWheelie();
    virtual void cancelWheelieInternal();

    PlayerSub10Bike();

    float leanRot;
    float leanRotCap;
    float leanRotInc;
    float wheelieRot;
    float maxWheelieRot;
    uint32_t wheelieTimer;
    uint8_t field_0x2AC;
    u8 _2ad[5];
    uint16_t wheelietimer2;
    uint16_t wheelieCooldown;
    u8 _2b8[8];
    void* turnParams;
};

// ===== Free functions (mangled) =====

// 0x80580128 - PlayerSub10_cancelWheelie
void PlayerSub10_cancelWheelie();

// 0x80589a74 - PlayerSub10_updateWheelie
void PlayerSub10_updateWheelie();

// 0x8058a24c - PlayerSub10Bike_updateWheelie
void PlayerSub10Bike_updateWheelie();

// 0x8058a80c - PlayerSub10Bike_getWheelieSoftSpeedLimitBonus
float PlayerSub10Bike_getWheelieSoftSpeedLimitBonus();

// 0x8058a838 - PlayerSub10Bike_startWheelie
void PlayerSub10Bike_startWheelie();

// 0x8058a8ac - PlayerSub10Bike_cancelWheelie
void PlayerSub10Bike_cancelWheelie();

// 0x8058ac80 - PlayerSub10Bike_tryStartWheelie
void PlayerSub10Bike_tryStartWheelie();

// 0x8058b4c8 - PlayerSub10Bike_checkWheelieSpeed
void PlayerSub10Bike_checkWheelieSpeed();

// 0x8058bc2c - PlayerSub10_checkWheelie
bool PlayerSub10_checkWheelie();

} // namespace Kart