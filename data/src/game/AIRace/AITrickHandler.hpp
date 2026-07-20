#pragma once

#include "AIInfo.hpp"

namespace Enemy {

struct AITrickHandler {
    AITrickHandler(AIInfo*);
    virtual ~AITrickHandler();
    virtual void vf_0x0C();
    virtual void calc();
    virtual void disableWheelie();
    virtual void update();
    void avoidPow();
    bool allowTricking();
    bool shouldTrick();
    void setTrickCooldown(f32 cooldown);
    bool allowWheelie() const;
    void init();
    void updateFrame();
    bool shouldPerformTrick();
    s32 getTrickDirection() const;
    s32 calcTrickScore() const;
    void onLanding();
    bool isInAir() const;
    f32 getTrickWindow() const;

    AIInfo* mpInfo;
    f32 mTrickCooldown;    // Minimum time between trick attempts
    f32 mLastTrickTime;    // Timestamp of last performed trick
    f32 mAirTime;          // Time spent in the air (for timing logic)
};

struct AITrickHandlerBike: public AITrickHandler {
    AITrickHandlerBike(AIInfo*);
    virtual ~AITrickHandlerBike();
    void vf_0x0C();
    void calc();
    void disableWheelie();
    void calcWheelie();
    virtual void update();
    bool allowWheelie() const;

    bool mbPerformWheelie;
    bool mbWheelieDisabled; // Tracks if wheelie was explicitly disabled
    s32 mWheelieEndFrame;   // Frame counter for when wheelie should end
};

} // namespace Enemy