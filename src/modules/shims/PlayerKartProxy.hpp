// PlayerKartProxy.hpp — Concrete KartObjectProxy wiring real subsystems
//
// KartCollide inherits from KartObjectProxy and calls virtual methods
// (kartState(), kartMove(), kartDynamics(), etc.) to access sibling subsystems.
// The base KartObjectProxy returns nullptr stubs.
// This class overrides those methods to return the actual decompiled subsystems
// that Player creates during init().
//
// This is the "bridge" that connects KartCollide (decompiled collision system)
// to the live Player subsystem instances.

#pragma once

#include <game/kart/KartObjectProxy.hpp>
#include <game/field/CollisionEntries.hpp>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>

namespace Kart {
class KartMove;
class KartState;
class KartBody;
class KartDynamics;
class KartCollide;
class KartPhysicsEngine;
class KartStats;
}

class PlayerKartProxy : public Kart::KartObjectProxy {
public:
    PlayerKartProxy()
        : m_playerIdx(-1)
        , m_kartMove(nullptr)
        , m_kartState(nullptr)
        , m_kartBody(nullptr)
        , m_kartDynamics(nullptr)
        , m_kartCollide(nullptr)
        , m_kartPhysicsEngine(nullptr)
        , m_kartStats(nullptr)
        , m_hitboxGroup(nullptr)
        , m_wheelCount(4) {}

    // Wire all subsystems from Player's init()
    void wire(s32 playerIdx,
              Kart::KartMove* move, Kart::KartState* state,
              Kart::KartBody* body, Kart::KartDynamics* dynamics,
              Kart::KartCollide* collide,
              void* hitboxGroup, s32 wheelCount = 4) {
        m_playerIdx = playerIdx;
        m_kartMove = move;
        m_kartState = state;
        m_kartBody = body;
        m_kartDynamics = dynamics;
        m_kartCollide = collide;
        m_hitboxGroup = hitboxGroup;
        m_wheelCount = wheelCount;
    }

    // KartObjectProxy overrides — return real subsystems
    s32 getPlayerIdx() const override { return m_playerIdx; }
    Kart::KartState* kartState() override { return m_kartState; }
    Kart::KartMove* kartMove() override { return m_kartMove; }
    Kart::KartBody* kartBody() override { return m_kartBody; }
    Kart::KartDynamics* kartDynamics() override { return m_kartDynamics; }
    Kart::KartCollide* kartCollide() override { return m_kartCollide; }
    Kart::KartPhysicsEngine* kartPhysicsEngine() override { return m_kartPhysicsEngine; }
    Kart::KartStats* kartStats() override { return m_kartStats; }
    void* hitboxGroup() override { return m_hitboxGroup; }
    s32 getWheelCount() override { return m_wheelCount; }
    bool isCpu() override { return false; } // This proxy is for human players

    // Get/set position and scale — delegate to KartDynamics
    const EGG::Vector3f& getPos() const override {
        if (m_kartDynamics) return m_kartDynamics->pos;
        static EGG::Vector3f zero;
        return zero;
    }
    const EGG::Vector3f& getScale() const override {
        if (m_kartDynamics) return m_kartDynamics->scale;
        static EGG::Vector3f one(1.0f, 1.0f, 1.0f);
        return one;
    }
    void getBodyForward(EGG::Vector3f& out) const override {
        out.setAll(0.0f);
        out.z = 1.0f; // Default forward
        if (m_kartDynamics) {
            // Transform forward vector by kart's rotation
            EGG::Vector3f fwd(0.0f, 0.0f, 1.0f);
            m_kartDynamics->fullRot.rotateVector(fwd, out);
        }
    }

private:
    s32 m_playerIdx;
    Kart::KartMove* m_kartMove;
    Kart::KartState* m_kartState;
    Kart::KartBody* m_kartBody;
    Kart::KartDynamics* m_kartDynamics;
    Kart::KartCollide* m_kartCollide;
    Kart::KartPhysicsEngine* m_kartPhysicsEngine;
    Kart::KartStats* m_kartStats;
    void* m_hitboxGroup;
    s32 m_wheelCount;
};
