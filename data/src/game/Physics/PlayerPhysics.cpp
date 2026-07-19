#include "PlayerPhysics.hpp"
#include "PlayerSub10.hpp"

extern "C" {
// External helpers from StaticR.rel
void sub_80555bf4();       // EGG::Heap::alloc
void sub_0x80555bf4();     // variant with 0x prefix
void sub_0x80537f4c();     // getRaceInfo / getGameMode
void sub_0x80590a9c();     // getPlayerId
void sub_0x80656bfc();     // checkGameModeCondition1
void sub_0x80656884();     // checkGameModeCondition2
void sub_0x80589fa4();     // updateDriftPhysics
void sub_0x8058be60();     // updateCollisionState1
void sub_0x8058b1d8();     // updateCollisionState2
void sub_0x8058d5b0();     // updateCollisionState3
void sub_0x8058b4d4();     // applyCollisionForces
void sub_0x80520c4c();     // initCollisionVector
void sub_0x80520d50();     // setCollisionVector
void sub_0x80520e50();     // finalizeCollisionVector
void sub_0x80590434();     // getInputState
void sub_0x8059040c();     // getPlayerPos
void sub_0x8059024c();     // getRawPos
void sub_0x805907bc();     // getKartPhysics
void sub_0x805907a4();     // getSomeState
void sub_0x80590adc();     // playSound
void sub_0x8058ba38();     // updateExtraPhysics
void sub_0x80597974();     // resetPhysicsState
}

// =============================================================================
// PlayerPhysics::update — 0x805899cc (1496 bytes, 374 instructions)
//
// THE main physics orchestrator. Called every frame for each player.
// =============================================================================
void PlayerPhysics::update(f32 dt) {
    // --- Frame setup ---
    f32 one = 1.0f;

    // Check race state — skip physics if race not active
    u32 gameMode = 0;
    sub_0x80537f4c();

    // --- Save previous frame state ---
    u32 bodyFlags = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(m_playerRef) + 4);
    bool wasOnGround = (bodyFlags & 0x0008) != 0;

    // --- Check game mode for special handling ---
    sub_0x80590a9c(); // getPlayerId
    u8 playerId = 0;
    sub_0x80656bfc(); // checkGameModeCondition1
    if (false) {
        return;
    }

    // --- Save positions into state buffer ---
    if (m_stateBuffer != nullptr) {
        void* buf = m_stateBuffer;
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x10) =
            *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x14);
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x18) =
            *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x1C);
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x20) =
            *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x24);
    }

    // --- Check if this is a special frame ---
    u32 raceState = 0; // TODO: global load
    u32 stateIdx = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(raceState + 0xB70)) - 3;
    bool isSpecialFrame = false;
    if (stateIdx <= 7) {
        u32 mask = (1 << stateIdx) & 0xC1;
        isSpecialFrame = (mask != 0);
    }

    // --- Main physics update path ---
    if (!isSpecialFrame) {
        u16 status = m_statusFlags;
        bool hasFloorCol = (status & 0x4000) != 0;

        sub_0x80590a9c();
        u32 bspFloorType = 0;
        bool isBoostPanel = (bspFloorType & 0x00000004) != 0;

        if (!hasFloorCol) {
            if (m_stateBuffer != nullptr) {
                void* buf = m_stateBuffer;
                *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x10) =
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x14);
                *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x18) =
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x1C);
                *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x20) =
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x24);
            }

            m_stateFlags = 0;
        } else {
            m_prevPos.x = m_framePosX;
            m_prevPos.y = m_framePosY;
            m_prevPos.z = *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x7C);

            sub_0x80589fa4();

            status = m_statusFlags;
            if ((status & 0x0040) != 0) {
                if (m_stateBuffer != nullptr) {
                    void* buf = m_stateBuffer;
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0A8) =
                        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x14);
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0AC) =
                        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x1C);
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0B0) =
                        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x24);
                }

                u32 globalState = 0; // TODO: global load
                u32 bspState = *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(globalState + 0xB74));
                if (bspState == 6) {
                    if (m_stateBuffer != nullptr) {
                        void* buf = m_stateBuffer;
                        m_framePosX = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(buf) + 0x14);
                        m_framePosY = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(buf) + 0x1C);
                        *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C) =
                            *reinterpret_cast<f32*>(
                                reinterpret_cast<char*>(buf) + 0x24);
                    }

                    m_stateFlags = 0;
                    m_anyFloorCol = false;
                    goto apply_effects;
                }

                if ((*reinterpret_cast<u8*>(
                        reinterpret_cast<char*>(m_playerRef) + 0x54)) == 0) {
                }

                u32 wallFlags = *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(m_playerRef) + 4);
                if ((wallFlags & 0x0002) != 0) {
                    goto apply_effects;
                }

                sub_0x8058be60();
                sub_0x8058b1d8();

                if (m_stateBuffer != nullptr) {
                    sub_0x8058d5b0();
                }

                sub_0x8058b4d4();
                m_interpFactor = one;
                goto apply_effects;
            }

            sub_0x8058be60();
            sub_0x8058b1d8();

            if (m_stateBuffer != nullptr) {
                sub_0x8058d5b0();
            }

            sub_0x8058b4d4();
            m_interpFactor = one;

        apply_effects:
            f32 deltaX = m_framePosX - m_prevPos.x;
            f32 deltaY = m_framePosY - m_prevPos.y;
            f32 deltaZ = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C) -
                        m_prevPos.z;

            sub_0x80520c4c();
            f32 floorFactor = 0.0f;
            sub_0x80520d50();
            sub_0x80520e50();

            sub_0x80590434();

            bool hasFloorColNow = (m_statusFlags & 0x4000) != 0;

            if (m_anyFloorCol) {
                s16 airTimer = *reinterpret_cast<s16*>(
                    reinterpret_cast<char*>(this) + 0x56);
                airTimer++;
                if (airTimer > 0x190) {
                    airTimer = 0x190;
                }
                *reinterpret_cast<s16*>(
                    reinterpret_cast<char*>(this) + 0x56) = airTimer;
            } else {
                u16 status16 = m_statusFlags;
                bool someCondition = (status16 & 0x8000) != 0;
                if (someCondition) {
                    u32 raceState2 = 0; // TODO: global
                    u32 bspState2 = *reinterpret_cast<u32*>(
                        reinterpret_cast<char*>(raceState2 + 0xB70)) - 3;
                    bool isSpecialState = false;
                    if (bspState2 <= 7) {
                        u32 mask = (1 << bspState2) & 0xC1;
                        isSpecialState = (mask != 0);
                    }

                    if (isSpecialState) {
                        u32 globalFlag = *reinterpret_cast<u32*>(
                            reinterpret_cast<char*>(raceState2 + 0xB78));
                        if (globalFlag == 0) {
                            u32 bodyFlags2 = *reinterpret_cast<u32*>(
                                reinterpret_cast<char*>(m_playerRef) + 4);
                            if ((bodyFlags2 & 0x00020000) != 0) {
                                u32 counter = *reinterpret_cast<u32*>(
                                    reinterpret_cast<char*>(this) + 0x5C);
                                counter++;
                                if (counter >= 0x1F4) {
                                    counter = 0;
                                }
                                *reinterpret_cast<u32*>(
                                    reinterpret_cast<char*>(this) + 0x5C) = counter;
                            }
                        }

                        sub_0x80590adc();
                    }
                }

                *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(this) + 0x5C) = 0;

                m_statusFlags &= ~0xE000;
                m_statusFlags |= 0x2000;
            }

            m_interpFactor = one;

            m_prevPos.x = m_framePosX;
            m_prevPos.y = m_framePosY;
            m_prevPos.z = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C);

            EGG::Vector3f frameStartPos;
            sub_0x8059024c();

            f32 scaleX = frameStartPos.x + (m_framePosX - frameStartPos.x) * dt;
            f32 scaleY = frameStartPos.y + (m_framePosY - frameStartPos.y) * dt;
            f32 scaleZ = frameStartPos.z + (*reinterpret_cast<f32*>(
                               reinterpret_cast<char*>(this) + 0x7C) - frameStartPos.z) * dt;

            sub_0x805907bc();
            m_framePosX = 0.0f;
            m_framePosY = 0.0f;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x7C) = 0.0f;

            sub_0x8059040c();
            m_framePosX = 0.0f;
            m_framePosY = 0.0f;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x7C) = 0.0f;

            f32 interpDt = one * dt;
            EGG::Vector3f interpResult;
            sub_0x80555bf4();

            sub_0x8059040c();

            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF0) = interpResult.x;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF4) = interpResult.y;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF8) = interpResult.z;

            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x2C) = interpResult.x;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x30) = interpResult.y;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x34) = interpResult.z;

            sub_0x80590a9c();
            goto done;
        }

        u16 statusFlags2 = m_statusFlags;
        if ((statusFlags2 & 0x0020) != 0) {
            goto no_floor_path;
        }

        if (m_stateBuffer != nullptr) {
            void* buf = m_stateBuffer;
            m_framePosX = *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(buf) + 0x14);
            m_framePosY = *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(buf) + 0x1C);
            *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x7C) =
                *reinterpret_cast<f32*>(
                    reinterpret_cast<char*>(buf) + 0x24);
        }

        m_stateFlags = 0;
        m_anyFloorCol = false;
        goto done;

    no_floor_path:
        sub_0x8058ba38();

        u16 statusFlags3 = m_statusFlags;
        if ((statusFlags3 & 0x0010) != 0) {
            sub_0x80590a9c();

            sub_0x805907a4();
            sub_0x80597974();
            goto done;
        }

        sub_0x8059024c();
        m_framePosX = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x3C);
        m_framePosY = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x40);
        *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x44) =
            *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x48);

        sub_0x8059040c();
        m_framePosX = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0xF0);
        m_framePosY = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0xF4);
        *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x7C) =
            *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0xF8);

        goto done;
    }

done:
    m_interpFactor = one;
}
