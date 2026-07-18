#include "PlayerPhysics.hpp"
#include "PlayerSub10.hpp"

extern "C" {
// External helpers from StaticR.rel
void sub_80555bf4();       // EGG::Heap::alloc
void sub_80537f4c();       // getRaceInfo / getGameMode
void sub_80590a9c();       // getPlayerId
void sub_80656bfc();       // checkGameModeCondition1
void sub_80656884();       // checkGameModeCondition2
void sub_80589fa4();       // updateDriftPhysics
void sub_8058be60();       // updateCollisionState1
void sub_8058b1d8();       // updateCollisionState2
void sub_8058d5b0();       // updateCollisionState3
void sub_8058b4d4();       // applyCollisionForces
void sub_80520c4c();       // initCollisionVector
void sub_80520d50();       // setCollisionVector
void sub_80520e50();       // finalizeCollisionVector
void sub_80590434();       // getInputState
void sub_8059040c();       // getPlayerPos
void sub_8059024c();       // getRawPos
void sub_805907bc();       // getKartPhysics
void sub_805907a4();       // getSomeState
void sub_80590adc();       // playSound
void sub_8058ba38();       // updateExtraPhysics
void sub_805907a4();       // getBodyCollInfo
void sub_80597974();       // resetPhysicsState
void sub_80555bf4();       // EGG::Heap::alloc
}

// =============================================================================
// PlayerPhysics::update — 0x805899cc (1496 bytes, 374 instructions)
//
// THE main physics orchestrator. Called every frame for each player.
// Drives the entire physics pipeline:
//   1. Early-out checks (race state, game mode)
//   2. Save previous positions
//   3. Run KartDynamics integration step
//   4. Update wheel/suspension physics
//   5. Handle collision responses
//   6. Apply moving road/water forces
//   7. Compute final velocities and positions
//   8. Update sub-objects (effects, sounds)
// =============================================================================
void PlayerPhysics::update(f32 dt) {
    // --- Frame setup ---
    // Save delta time and allocate temporary storage
    f32 one = 1.0f;

    // Check race state — skip physics if race not active
    u32 gameMode = 0;
    sub_0x80537f4c();
    // If game mode check fails, return early
    // (decompiled shows: cmpwi r3, 0 / bne)

    // --- Save previous frame state ---
    // Check if player body collision bit 19 is set
    u32 bodyFlags = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(m_playerRef) + 4);
    bool wasOnGround = (bodyFlags & 0x0008) != 0;

    // --- Check game mode for special handling ---
    // Some game modes (countdown, results) don't run full physics
    sub_0x80590a9c(); // getPlayerId
    u8 playerId = 0; // result
    sub_0x80656bfc(); // checkGameModeCondition1
    if (/* condition met */ false) {
        return; // Skip physics in certain game states
    }

    // --- Save positions into state buffer ---
    // Copy current wheel positions to buffer for delta computation
    if (m_stateBuffer != nullptr) {
        void* buf = m_stateBuffer;
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x10) =
            *reinterpret_cast<void**>(buf + 0x14);
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x18) =
            *reinterpret_cast<void**>(buf + 0x1C);
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x20) =
            *reinterpret_cast<void**>(buf + 0x24);
    }

    // --- Check if this is a special frame (countdown, etc.) ---
    u32 raceState = *reinterpret_cast<u32*>(0x00000000); // global
    u32 stateIdx = *reinterpret_cast<u32*>(raceState + 0xB70) - 3;
    bool isSpecialFrame = false;
    if (stateIdx <= 7) {
        u32 mask = (1 << stateIdx) & 0xC1;
        isSpecialFrame = (mask != 0);
    }

    // --- Main physics update path ---
    if (!isSpecialFrame) {
        // Check vehicle-specific condition (floor collision bit 30)
        u16 status = m_statusFlags;
        bool hasFloorCol = (status & 0x4000) != 0;

        // Check BSP floor data for special floor
        sub_0x80590a9c(); // getPlayerId
        // Load BSP floor type at player position
        u32 bspFloorType = 0; // loaded from BSP data via player index
        bool isBoostPanel = (bspFloorType & 0x00000004) != 0;

        if (!hasFloorCol) {
            // No floor collision this frame — check if we need to
            // initialize from saved positions
            if (m_stateBuffer != nullptr) {
                void* buf = m_stateBuffer;
                *reinterpret_cast<void**>(buf + 0x10) =
                    *reinterpret_cast<void**>(buf + 0x14);
                *reinterpret_cast<void**>(buf + 0x18) =
                    *reinterpret_cast<void**>(buf + 0x1C);
                *reinterpret_cast<void**>(buf + 0x20) =
                    *reinterpret_cast<void**>(buf + 0x24);
            }

            m_stateFlags = 0;
        } else {
            // Has floor collision — run full physics pipeline

            // Save current positions for delta
            m_prevPos.x = m_framePosX;
            m_prevPos.y = m_framePosY;
            m_prevPos.z = *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x7C);

            // Step 1: Update drift physics
            sub_0x80589fa4();

            // Step 2: Check for OOB / wall collision flags
            status = m_statusFlags;
            if ((status & 0x0040) != 0) {
                // Has trickable surface or similar
                // Save positions from buffer
                if (m_stateBuffer != nullptr) {
                    void* buf = m_stateBuffer;
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0A8) =
                        *reinterpret_cast<void**>(buf + 0x14);
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0AC) =
                        *reinterpret_cast<void**>(buf + 0x1C);
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0B0) =
                        *reinterpret_cast<void**>(buf + 0x24);
                }

                // Check global race state for special handling
                u32 globalState = *reinterpret_cast<u32*>(0x00000000);
                u32 bspState = *reinterpret_cast<u32*>(globalState + 0xB74);
                if (bspState == 6) {
                    // Special state: use saved positions directly
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

                    // Clear OOB flag
                    m_stateFlags = 0;
                    m_anyFloorCol = false;
                    goto apply_effects;
                }

                // Not special state — check if player is hit
                if ((*reinterpret_cast<u8*>(
                        reinterpret_cast<char*>(m_playerRef) + 0x54)) == 0) {
                    // Player not hit — proceed with collision update
                }

                // Check wall collision flag
                u32 wallFlags = *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(m_playerRef) + 4);
                if ((wallFlags & 0x0002) != 0) {
                    // Wall collision — skip to effects
                    goto apply_effects;
                }

                // Step 3: Run full collision pipeline
                sub_0x8058be60(); // updateCollisionState1
                sub_0x8058b1d8(); // updateCollisionState2

                // Step 4: Apply suspension forces from state buffer
                if (m_stateBuffer != nullptr) {
                    sub_0x8058d5b0(); // updateCollisionState3
                }

                // Step 5: Apply collision forces
                sub_0x8058b4d4(); // applyCollisionForces

                // Store dt
                m_interpFactor = one;
                goto apply_effects;
            }

            // Normal physics path (no OOB/wall):
            // Step 3: Run collision pipeline
            sub_0x8058be60(); // updateCollisionState1
            sub_0x8058b1d8(); // updateCollisionState2

            // Step 4: Apply suspension forces
            if (m_stateBuffer != nullptr) {
                sub_0x8058d5b0(); // updateCollisionState3
            }

            // Step 5: Apply collision forces
            sub_0x8058b4d4(); // applyCollisionForces

            // Store dt
            m_interpFactor = one;

        apply_effects:
            // --- Compute frame delta and apply effects ---
            f32 deltaX = m_framePosX - m_prevPos.x;
            f32 deltaY = m_framePosY - m_prevPos.y;
            f32 deltaZ = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C) -
                        m_prevPos.z;

            // Compute collision vector for sub-object
            sub_0x80520c4c(); // initCollisionVector

            // Apply floor normal from collision
            f32 floorFactor = 0.0f;
            sub_0x80520d50(); // setCollisionVector(normal)
            sub_0x80520e50(); // finalizeCollisionVector

            // Get input state for effects
            sub_0x80590434();

            // Call body collision handler via vtable
            // (vtable[0x14] indirect call with collision data)

            // Check if we need to apply airborne effects
            bool hasFloorColNow = (m_statusFlags & 0x4000) != 0;
            if (hasFloorColNow) {
                // Ground contact — update air timer
            }

            // --- Air time tracking ---
            if (m_anyFloorCol) {
                // Increment in-air counter
                s16 airTimer = *reinterpret_cast<s16*>(
                    reinterpret_cast<char*>(this) + 0x56);
                airTimer++;
                if (airTimer > 0x190) { // 400 frames
                    airTimer = 0x190;
                }
                *reinterpret_cast<s16*>(
                    reinterpret_cast<char*>(this) + 0x56) = airTimer;
            } else {
                // Not in air — check if should count
                // (decompiled: check bit 31 of status, then bit 17)
                u16 status16 = m_statusFlags;
                bool someCondition = (status16 & 0x8000) != 0;
                if (someCondition) {
                    // Check for special race conditions
                    u32 raceState2 = *reinterpret_cast<u32*>(0x00000000);
                    u32 bspState2 = *reinterpret_cast<u32*>(raceState2 + 0xB70) - 3;
                    bool isSpecialState = false;
                    if (bspState2 <= 7) {
                        u32 mask = (1 << bspState2) & 0xC1;
                        isSpecialState = (mask != 0);
                    }

                    if (isSpecialState) {
                        // In special state — check global flag
                        u32 globalFlag = *reinterpret_cast<u32*>(
                            raceState2 + 0xB78);
                        if (globalFlag == 0) {
                            // Check body flag 17
                            u32 bodyFlags2 = *reinterpret_cast<u32*>(
                                reinterpret_cast<char*>(m_playerRef) + 4);
                            if ((bodyFlags2 & 0x00020000) != 0) {
                                // Increment some counter
                                u32 counter = *reinterpret_cast<u32*>(
                                    reinterpret_cast<char*>(this) + 0x5C);
                                counter++;
                                if (counter >= 0x1F4) { // 500
                                    counter = 0;
                                }
                                *reinterpret_cast<u32*>(
                                    reinterpret_cast<char*>(this) + 0x5C) = counter;
                            }
                        }

                        // Count leading zeros to get priority
                        u32 priorityFlags = *reinterpret_cast<u32*>(
                            reinterpret_cast<char*>(m_playerRef) + 4);
                        // r4 = cntlzw(priorityFlags) >> 5

                        // Play collision sound
                        sub_0x80590adc(/* soundId */, 0, 1, 0);
                    }
                }

                // Clear airtime counter and update status flags
                *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(this) + 0x5C) = 0;

                // Update status flags: clear bits 29-31, set bit 29
                m_statusFlags &= ~0xE000;
                m_statusFlags |= 0x2000;
            }

            // --- Final position update ---
            // Store dt
            m_interpFactor = one;

            // Apply position from saved state
            m_prevPos.x = m_framePosX;
            m_prevPos.y = m_framePosY;
            m_prevPos.z = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C);

            // Scale interpolation
            EGG::Vector3f frameStartPos;
            sub_0x8059024c(); // getRawPos into frameStartPos

            f32 scaleX = frameStartPos.x + (m_framePosX - frameStartPos.x) * dt;
            f32 scaleY = frameStartPos.y + (m_framePosY - frameStartPos.y) * dt;
            f32 scaleZ = frameStartPos.z + (*reinterpret_cast<f32*>(
                               reinterpret_cast<char*>(this) + 0x7C) - frameStartPos.z) * dt;

            // Store interpolated position
            sub_0x805907bc(); // getKartPhysics
            m_framePosX = 0.0f; // reset to zero before applying
            m_framePosY = 0.0f;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x7C) = 0.0f;

            // Update position from interpolated values
            sub_0x8059040c(); // getPlayerPos
            m_framePosX = 0.0f;
            m_framePosY = 0.0f;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x7C) = 0.0f;

            // Copy interpolation result to output vectors
            f32 interpDt = one * dt;
            EGG::Vector3f interpResult;
            // Matrix multiplication with dt for position interpolation
            // (decompiled: EGG::Vec copy with dt factor applied)
            sub_0x80555bf4(); // EGG::Heap::alloc for temp

            sub_0x8059040c(); // getPlayerPos

            // Store interpolated position into m_savedPos1 (offset 0xF0)
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF0) = interpResult.x;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF4) = interpResult.y;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF8) = interpResult.z;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xFC) = interpResult.w;

            // Also store into offset 0x2C-0x38
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x2C) = interpResult.x;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x30) = interpResult.y;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x34) = interpResult.z;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x38) = interpResult.w;

            // Mark this player as physics-updated this frame
            sub_0x80590a9c(); // getPlayerId
            // Set player's physics update flag: stb r4, 0x69(r3) (byte)
            goto done;
        }

        // --- No floor collision path ---
        // Check additional floor flags
        u16 statusFlags2 = m_statusFlags;
        if ((statusFlags2 & 0x0020) != 0) {
            // Has a different type of floor contact
            goto no_floor_path;
        }

        // Reset position from saved buffer
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
        // Update extra physics for no-floor case
        sub_0x8058ba38();

        // Check trickable surface flags
        u16 statusFlags3 = m_statusFlags;
        if ((statusFlags3 & 0x0010) != 0) {
            // On trickable surface
            sub_0x80590a9c(); // getPlayerId
            // Set player's trickable update flag: stb r4, 0x6a(r3) (byte)

            sub_0x805907a4(); // getBodyCollInfo
            sub_0x80597974(); // resetPhysicsState
            goto done;
        }

        // --- Restore positions from interpolation buffer ---
        sub_0x8059024c(); // getRawPos
        m_framePosX = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x3C);
        m_framePosY = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x40);
        *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x44) =
            *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x48);

        sub_0x8059040c(); // getPlayerPos
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
    // --- Final cleanup ---
    // Store final dt
    m_interpFactor = one;
}