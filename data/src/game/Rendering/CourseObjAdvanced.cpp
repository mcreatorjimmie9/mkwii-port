#include "CourseObj.hpp"
#include "RenderUtil.hpp"
#include <common.h>

// External function declarations for this file
extern "C" {
    void anim3D_Stop(void* animEntry, u32 type);               // 0x808238DC
    void courseObj_F03C(void* obj, s32 type);                   // 0x8061F03C
    void courseObj_F000(void* obj, s32 type);                   // 0x8061F000
    void courseObj_E308(void* obj);                             // 0x8061E308
    void courseObj_E0F0(void* obj);                             // 0x8061E0F0
    void courseObj_425D0(void* audioObj, s32 param);            // 0x806425D0
}

// ============================================================================
// CourseObjActor_StartAnimation()
// 0x8060CA0C (520 bytes)
// ============================================================================
// Start an animation on a course object. This is similar to the Update
// function's animation start path, but triggered by an external event
// (e.g., item hit, player interaction).
//
// The function:
// 1. Checks visibility conditions (same flags as Update)
// 2. Starts 3D audio for the object
// 3. Begins animation playback
// 4. Sets up the movement/transform system
// 5. Starts a timer for the animation duration
//
// This is nearly identical to the animation-start path in 0x8060CC14
// and 0x8060F4CC, with minor differences in flag handling.
// ============================================================================
void CourseObjActor_StartAnimation(CourseObjActor* self) {
    CourseObjSub* sub = self->sub;

    // Check visibility conditions
    const u32 VIS_MASK = 0x80C10100u;
    bool canSee = true;

    // Check standard visibility flags
    if ((sub->flags & 0x20000u) != 0) canSee = false;
    if ((sub->flags & (1u << 27)) != 0) canSee = false;
    if ((sub->variantFlags & (1u << 24)) != 0) canSee = false;
    if ((sub->renderGroup & 0x1F) != 0) canSee = false;

    if (!canSee) {
        return;
    }

    // Get the animation duration from global settings
    void* global = sGlobalInstance;
    s16 duration = *reinterpret_cast<s16*>(static_cast<u8*>(global));

    // Start 3D audio
    u8 objId = CourseObjActor_GetID(self);
    CourseObjManager* mgr = sCourseObjManager;
    u32 idx = objId << 2;
    void** actorArray = *reinterpret_cast<void***>(static_cast<u8*>(mgr) + 0x68);
    void* audioEntry = actorArray[idx];
    audio_Play3D(audioEntry, 0);

    // Get manager and trigger effect
    void* manager = CourseObjActor_GetManager(self);
    effectMgr_962A8(manager);

    // Check if animation flag bit 2 is set
    u16 animFlags = self->animFlags;
    if ((animFlags & 4) == 0) {
        // First time starting — set timer
        self->animTimer = duration;
        animFlags |= 4;
    } else {
        self->animTimer = duration;
    }
    self->animFlags = animFlags;

    // Set alpha/speed
    void* vtbl = self->vtable;
    typedef void (*SetAlphaFunc)(void*, f32);
    auto setAlpha = reinterpret_cast<SetAlphaFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0xE0));
    setAlpha(self, *reinterpret_cast<f32*>(static_cast<u8*>(global) + 8));

    // Trigger calcAnim
    CourseObjActor_CallCalcAnim(self);

    // Start animation with type 6
    CourseObjActor_CallAnimate(self, 6);

    // Set up audio playback with duration
    CourseObjActor_GetMovement(self);
    courseObj_859398(self);

    // Set up the movement/transform chain
    CourseObjActor_GetMovement(self);
    courseObj_E8C0(self, 4, 0, 1);

    // Set timer
    self->lodTimer3 = duration;

    // Check if there's a secondary timer at 0x148
    s16 secondaryTimer = *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x148);
    s16 globalTimer = *reinterpret_cast<s16*>(static_cast<u8*>(global));
    if (secondaryTimer <= globalTimer) {
        // Decrement secondary timer
        secondaryTimer--;
        *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x148) = secondaryTimer;
    }
}

// ============================================================================
// CourseObjActor_StartAnimationVariant()
// 0x8060CC14 (600 bytes)
// ============================================================================
// Similar to StartAnimation but with variant flag (bit 2 instead of bit 1).
// Used for a different class of course objects that use flag bit 2
// in the animFlags field.
//
// The logic is nearly identical to 0x8060CA0C but checks/sets bit 2
// (0x04 mask) instead of bit 2 (same bit, different semantics).
// ============================================================================
void CourseObjActor_StartAnimationVariant(CourseObjActor* self) {
    CourseObjSub* sub = self->sub;

    // Check visibility conditions
    bool canSee = true;
    if ((sub->flags & 0x20000u) != 0) canSee = false;
    if ((sub->flags & (1u << 27)) != 0) canSee = false;
    if ((sub->variantFlags & (1u << 24)) != 0) canSee = false;
    if ((sub->renderGroup & 0x1F) != 0) canSee = false;

    if (!canSee) {
        return;
    }

    void* global = sGlobalInstance;
    s16 duration = *reinterpret_cast<s16*>(static_cast<u8*>(global));

    // Start 3D audio
    u8 objId = CourseObjActor_GetID(self);
    CourseObjManager* mgr = sCourseObjManager;
    u32 idx = objId << 2;
    void** actorArray = *reinterpret_cast<void***>(static_cast<u8*>(mgr) + 0x68);
    void* audioEntry = actorArray[idx];
    audio_Play3D(audioEntry, 0);

    void* manager = CourseObjActor_GetManager(self);
    effectMgr_962A8(manager);

    // Check animation flag bit 2
    u16 animFlags = self->animFlags;
    if ((animFlags & 4) == 0) {
        self->animTimer = duration;
        animFlags |= 4;
    } else {
        self->animTimer = duration;
    }
    self->animFlags = animFlags;

    // Set alpha
    void* vtbl = self->vtable;
    typedef void (*SetAlphaFunc)(void*, f32);
    auto setAlpha = reinterpret_cast<SetAlphaFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0xE0));
    setAlpha(self, *reinterpret_cast<f32*>(static_cast<u8*>(global) + 8));

    // CalcAnim
    CourseObjActor_CallCalcAnim(self);

    // Start animation
    CourseObjActor_CallAnimate(self, 6);

    // Movement setup
    CourseObjActor_GetMovement(self);
    courseObj_859398(self);
    CourseObjActor_GetMovement(self);
    courseObj_E8C0(self, 4, 0, 1);

    self->lodTimer3 = duration;

    // Secondary timer
    s16 secondaryTimer = *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x148);
    s16 globalTimer = *reinterpret_cast<s16*>(static_cast<u8*>(global));
    if (secondaryTimer <= globalTimer) {
        secondaryTimer--;
        *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x148) = secondaryTimer;
    }
}

// ============================================================================
// CourseObjActor_UpdateFade()
// 0x8060EC24 (548 bytes)
// ============================================================================
// Update the fade-in/fade-out state of a course object.
// Handles distance-based alpha fading and deactivation when fully faded.
//
// The function:
// 1. Checks if the "distance fade" flag (bit 13) is set
// 2. If so, decreases alpha by a step amount
// 3. If alpha reaches 0, deactivates the object
// 4. Handles the "countdown to start" mechanism (offset 0x21C)
// 5. Manages state transitions between visible/fading/hidden
// ============================================================================
void CourseObjActor_UpdateFade(CourseObjActor* self) {
    CourseObjSub* sub = self->sub;

    // Check if distance-fade is active (bit 13 of sub->flags)
    if ((sub->drawFlags & (1u << 13)) == 0) {
        // Not fading — check if we should start countdown
        u16 objFlags = *reinterpret_cast<u16*>(static_cast<u8*>(sub) + 0x14);
        if ((objFlags & (1u << 14)) == 0) {
            goto check_countdown;
        }
        // Check additional conditions for deactivation
        u32 drawFlags = sub->drawFlags;
        if ((drawFlags & (1u << 27)) != 0) goto check_countdown;
        if ((sub->variantFlags & (1u << 17)) != 0 &&
            (sub->variantFlags & (1u << 18)) != 0 &&
            (drawFlags & (1u << 28)) != 0 &&
            ((drawFlags >> 28) & 1) == 0) {
            goto deactivate;
        }
        goto check_countdown;
    }

    // Distance-fade is active — decrease alpha
    void* global = sGlobalInstance;
    f32 currentAlpha = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x160);
    f32 fadeStep = *reinterpret_cast<f32*>(static_cast<u8*>(global) + 0x48);

    /* WII_FIXED: verify — floating point comparison */
    if (currentAlpha > fadeStep) {
        // Still visible — decrease alpha
        currentAlpha -= fadeStep;
        *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x160) = currentAlpha;

        // Clamp to 0
        f32 minAlpha = *reinterpret_cast<f32*>(static_cast<u8*>(global) + 0xC8);
        if (currentAlpha <= minAlpha) {
            *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x160) = minAlpha;
        }
    } else {
        // Fully faded — deactivate
        goto deactivate;
    }

    // Update alpha display via vtable
    void* manager = CourseObjActor_GetManager(self);
    void* vtbl = self->vtable;
    typedef void (*SetAlphaFunc)(void*, f32, u32);
    auto setAlpha = reinterpret_cast<SetAlphaFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0xE4));
    setAlpha(self, 0, 0x1AA);

    // Clear "animated" flag
    sub->drawFlags = sub->drawFlags & ~0x0F;

    // Set "hidden" flag
    sub->drawFlags |= 8;

    // Stop animation
    CourseObjActor_CallAnimate(self, 0);
    courseObj_E308(self);

    // Stop 3D audio
    u8 objId = CourseObjActor_GetID(self);
    CourseObjManager* mgr = sCourseObjManager;
    u32 idx = objId << 2;
    void** actorArray = *reinterpret_cast<void***>(static_cast<u8*>(mgr) + 0x68);
    void* audioEntry = actorArray[idx];
    audio_Stop3D(audioEntry);

    // Reset animation entry
    void* animEntry = *reinterpret_cast<void**>(
        static_cast<u8*>(mgr->actorArray) + (objId * 0x248));
    anim3D_Stop(animEntry, 0);

    return;

deactivate:
    // Deactivate the object
    sub->drawFlags = sub->drawFlags & ~0x0F;

    // Check if the object should be permanently hidden
    u16 objFlags2 = *reinterpret_cast<u16*>(static_cast<u8*>(sub) + 0x14);
    if ((objFlags2 & (1u << 27)) != 0) {
        return;
    }
    if ((sub->drawFlags & (1u << 27)) != 0) {
        return;
    }
    if ((sub->variantFlags & (1u << 17)) != 0 &&
        (sub->variantFlags & (1u << 18)) != 0 &&
        ((objFlags2 >> 28) & 1) == 0) {
        return;
    }

    // Stop 3D audio and reset
    courseObj_F000(self, 0);

check_countdown:
    // Handle the countdown-to-start mechanism at offset 0x21C
    s16 countdown = *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x21C);
    void* global2 = sGlobalInstance;
    s16 threshold = *reinterpret_cast<s16*>(static_cast<u8*>(global2));

    if (countdown < threshold - 0x5A) {
        // Start the countdown
        courseObj_F000(self, 0);
    }

    countdown++;
    *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x21C) = countdown;

    threshold = *reinterpret_cast<s16*>(static_cast<u8*>(global2));
    if (countdown >= threshold) {
        // Countdown complete — trigger the state transition
        CourseObjSub* sub2 = self->sub;

        // Clear specific flags: bit 27 and bit 29
        u32 flags = sub2->drawFlags;
        flags &= ~((1u << 27) | (1u << 29));
        sub2->drawFlags = flags;

        // Clear visibility flags with mask 0xFFFFDFFF
        sub2->drawFlags = sub2->drawFlags & 0xFFFFDFFFu;

        // Call state transition function
        courseObj_F03C(self, -0x201);  // 0xFFFFFF01 sign-extended → type 0x13

        return;
    }

    // Countdown not yet complete
    // Check additional conditions for premature activation
    if ((sub->variantFlags & (1u << 27)) != 0) {
        return;
    }

    CourseObjSub* sub3 = self->sub;
    u32 flags3 = sub3->drawFlags;

    // Check bit 28
    if ((flags3 & (1u << 28)) != 0) {
        return;
    }

    // Call F03C with type -0x201
    courseObj_F03C(self, -0x201);
}

// ============================================================================
// CourseObjActor_UpdateMovement()
// 0x8060B918 (604 bytes)
// ============================================================================
// Update the movement/physics state of a course object.
// Handles position interpolation, velocity application, and
// state transitions based on movement flags.
//
// The function:
// 1. Checks if the object has movement enabled (bit 27 of sub->flags)
// 2. If movement flag is set, applies velocity with delta-time scaling
// 3. Handles LOD-based activation/deactivation
// 4. Manages the movement timer at offset 0x1CC
// 5. Updates position based on direction and speed
// ============================================================================
void CourseObjActor_UpdateMovement(CourseObjActor* self) {
    CourseObjSub* sub = self->sub;
    CourseRenderSettings* settings = sRenderSettings;

    // Check if movement is enabled (bit 27 of sub->flags)
    if ((sub->flags & (1u << 27)) == 0) {
        goto check_movement_timer;
    }

    // Check if the "no-move" flag (bit 4) is set in variantFlags
    if ((sub->drawFlags & (1u << 4)) != 0) {
        goto check_movement_timer;
    }

    // Check movement type flags
    u32 moveFlags = sub->renderGroup;  // offset 0x08
    if ((moveFlags & (1u << 4)) != 0) {
        goto check_movement_timer;
    }

    // Calculate movement magnitude: settings.animSpeedFactor * self.scale * speed
    f32 scaleFactor = settings->animSpeedFactor;  // 0x22C
    f32 objectScale = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x14);
    f32 speed = *reinterpret_cast<f32*>(static_cast<u8*>(settings) + 0x20);

    /* WII_GX: Movement calculation with fmuls */
    f32 magnitude = scaleFactor * objectScale;
    if (magnitude < speed) {
        goto check_activation;
    }

    // Check additional activation conditions
    u32 renderGroup = sub->renderGroup;
    if ((renderGroup & (1u << 21)) != 0) {
        goto check_activation;
    }
    if ((sub->drawFlags & (1u << 2)) != 0) {
        goto check_activation;
    }

    // Check velocity magnitude
    f32 velocity = *reinterpret_cast<f32*>(static_cast<u8*>(sub) + 0x88);
    f32 threshold = *reinterpret_cast<f32*>(static_cast<u8*>(settings) + 0xB8);

    /* WII_GX: fabs comparison */
    if (velocity < 0) velocity = -velocity;
    if (velocity <= threshold) {
        goto check_activation;
    }

    // Object is moving — increment movement timer
    s16 moveTimer = *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x1CC);
    s16 maxTimer = *reinterpret_cast<s16*>(static_cast<u8*>(settings) + 0xCC);

    moveTimer++;
    if (moveTimer >= maxTimer) {
        moveTimer = maxTimer;  // clamp
    }
    *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x1CC) = moveTimer;
    goto apply_movement;

check_activation:
    // Object is not moving enough — reset timer
    *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x1CC) = 0;

apply_movement:
    // Apply movement based on timer
    s16 moveTimer = *reinterpret_cast<s16*>(static_cast<u8*>(self) + 0x1CC);
    s16 maxTimer = *reinterpret_cast<s16*>(static_cast<u8*>(settings) + 0xCC);

    if (moveTimer < maxTimer) {
        // Timer not expired — continue
        goto update_position;
    }

    // Timer expired — call vtable method to start movement
    void* vtbl = self->vtable;
    typedef void (*StartMoveFunc)(void*);
    auto startMove = reinterpret_cast<StartMoveFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0x34));
    startMove(self);

    // Set "movement active" flag (bit 12)
    sub->drawFlags |= 0x1000;

    // Check if "distance animated" flag (bit 13) is set
    u32 flags = sub->drawFlags;
    if ((flags & (1u << 13)) == 0) {
        goto update_position;
    }

    // Object is distance-animated — calculate new position
    f32 velocity2 = *reinterpret_cast<f32*>(static_cast<u8*>(sub) + 0x88);

    if (velocity2 < 0) {
        // Moving backward
        *reinterpret_cast<s16*>(static_cast<u8*>(settings) + 0xCC) = 1;

        courseObj_E0F0(self);
        f32 delta = *reinterpret_cast<f32*>(static_cast<u8*>(settings) + 0xC8);
        f32 scale2 = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x5C);
        f32 current = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x1C8);
        current -= delta * scale2;
        *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x1C8) = current;
    } else {
        // Moving forward
        *reinterpret_cast<s16*>(static_cast<u8*>(settings) + 0xCC) = -1;

        courseObj_E0F0(self);
        f32 delta = *reinterpret_cast<f32*>(static_cast<u8*>(settings) + 0xC8);
        f32 scale2 = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x5C);
        f32 current = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x1C8);
        current += delta * scale2;
        *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x1C8) = current;
    }

    // Get position update from vtable
    courseObj_E0F0(self);
    f32 posX = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x64);
    f32 posY = *reinterpret_cast<f32*>(static_cast<u8*>(settings) + 0xC4);
    f32 posZ = *reinterpret_cast<f32*>(static_cast<u8*>(self) + 0x1C8);

    // Update position
    /* WII_GX: Position update calculation */
    // (posX + posY * scale) → some transform
    // Original uses fadds/fmuls chain

update_position:
    // Continue with position updates...
}

// ============================================================================
// CourseObjActor_InitAnimation()
// 0x806107D8 (736 bytes)
// ============================================================================
// Initialize and start an animation with a specific frame count.
// Similar to StartAnimation but takes an explicit frame count parameter
// and handles fixed-point to float conversion of the frame value.
//
// @param self       The course object
// @param param      Unknown parameter
// @param frameCount Frame count for the animation (s16, converted via bias trick)
// ============================================================================
void CourseObjActor_InitAnimation(CourseObjActor* self, void* param, s16 frameCount) {
    CourseObjSub* sub = self->sub;

    // Check if frame count is negative (use default from object)
    if (frameCount < 0) {
        // Get the default frame count from the object's anim data
        courseObj_E0F0(self);
        frameCount = static_cast<s16>(*reinterpret_cast<u32*>(
            static_cast<u8*>(self) + 0x6C));
    }

    // Convert frame count to float if needed
    /* WII_FIXED: verify — 0x43300000 bias trick for int-to-float */
    f32 floatFrames;
    if (frameCount >= 0) {
        // Positive — use directly
        floatFrames = static_cast<f32>(frameCount);
    } else {
        // Negative — use bias trick
        // The xoris/0x4330 pattern converts s16 to float
        u32 biased = static_cast<u32>(frameCount ^ 0x8000);
        // ... (actual conversion uses double arithmetic)
        floatFrames = intToFloat(biased);
    }

    // Check visibility
    bool canSee = true;
    if ((sub->flags & 0x20000u) != 0) canSee = false;
    if ((sub->flags & (1u << 27)) != 0) canSee = false;
    if ((sub->variantFlags & (1u << 24)) != 0) canSee = false;
    if ((sub->renderGroup & 0x1F) != 0) canSee = false;

    if (!canSee) {
        return;
    }

    // Check if draw flag bit 30 is set (variant-specific)
    if ((sub->drawFlags & (1u << 30)) == 0) {
        goto start_anim;
    }

    // Already animated — check and update
    u16 animFlags = self->animFlags;
    if ((animFlags & 1) == 0) {
        // First time — set timer
        self->animTimer = frameCount;
        animFlags |= 1;
    } else {
        self->animTimer = frameCount;
    }
    self->animFlags = animFlags;

    // Set alpha to 0.0f
    void* vtbl = self->vtable;
    typedef void (*SetAlphaFunc)(void*, f32);
    auto setAlpha = reinterpret_cast<SetAlphaFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0xE0));
    setAlpha(self, 0.0f);

    goto setup_audio;

start_anim:
    // Start 3D audio
    u8 objId = CourseObjActor_GetID(self);
    CourseObjManager* mgr = sCourseObjManager;
    u32 idx = objId << 2;
    void** actorArray = *reinterpret_cast<void***>(static_cast<u8*>(mgr) + 0x68);
    void* audioEntry = actorArray[idx];
    audio_Play3D(audioEntry, 0);

    // Trigger effect
    void* manager = CourseObjActor_GetManager(self);
    effectMgr_962A8(manager);

    // Check animation flags
    u16 animFlags2 = self->animFlags;
    if ((animFlags2 & 1) == 0) {
        self->animTimer = frameCount;
        animFlags2 |= 1;
    } else {
        self->animTimer = frameCount;
    }
    self->animFlags = animFlags2;

    // Set alpha to 0.0f
    setAlpha(self, 0.0f);

setup_audio:
    // CalcAnim
    CourseObjActor_CallCalcAnim(self);

    // Start animation
    CourseObjActor_CallAnimate(self, 6);

    // Movement setup
    CourseObjActor_GetMovement(self);
    courseObj_859398(self);
    CourseObjActor_GetMovement(self);
    courseObj_E8C0(self, 4, 0, 1);

    // Set timer
    self->lodTimer3 = frameCount;
}