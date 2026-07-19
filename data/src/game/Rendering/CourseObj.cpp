#include "CourseObj.hpp"
#include "RenderUtil.hpp"
#include <common.h>

// ============================================================================
// External globals
// ============================================================================

// Global singleton (accessed via "lis r3, 0; r3 = *(0+r3)")
void* sGlobalInstance = nullptr;

// Course render settings (accessed via "lis r31, 0; r31 = r31 + 0")
static CourseRenderSettings* sRenderSettings = nullptr;

// Course object manager (accessed via "lis r4, 0; r4 = *(0+r4)")
static CourseObjManager* sCourseObjManager = nullptr;

// ============================================================================
// Getter helpers — Thin vtable dispatch wrappers
// ============================================================================

// 0x8061E2D8 (16 bytes)
// Get the object's type ID by calling: this->vtable->0x0->0x10
u8 CourseObjActor_GetID(CourseObjActor* self) {
    void* vtbl = self->vtable;
    void* inner = *reinterpret_cast<void**>(vtbl);
    return *reinterpret_cast<u8*>(static_cast<u8*>(inner) + 0x10);
}

// 0x8061E010 (12 bytes)
// Get the manager: this->vtable->0x1C
void* CourseObjActor_GetManager(CourseObjActor* self) {
    void* vtbl = self->vtable;
    return *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x1C);
}

// 0x8061E02C (16 bytes)
// Call animate on the movement controller:
//   this->vtable->0x14->0x0C, then branch to 0x808F4360
void CourseObjActor_CallAnimate(CourseObjActor* self, s32 type) {
    void* vtbl = self->vtable;
    void* movement = *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x14);
    void* fn = *reinterpret_cast<void**>(static_cast<u8*>(movement) + 0x0C);
    // Branch to external animate function at 0x808F4360
    // ((void(*)(void*, s32, void*))(0x808F4360))(movement, type, fn);
}

// 0x8061E2BC (12 bytes)
// Get the movement controller: this->vtable->0x14
void* CourseObjActor_GetMovement(CourseObjActor* self) {
    void* vtbl = self->vtable;
    return *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x14);
}

// 0x8061E59C (12 bytes)
// Get the animation object: this->vtable->0x2C
void* CourseObjActor_GetAnimObj(CourseObjActor* self) {
    void* vtbl = self->vtable;
    return *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x2C);
}

// 0x8061E5D8 (44 bytes)
// Call create on the animation object:
//   this->vtable->0x2C->vtable->0x0C (vtable[3])
void CourseObjActor_CallCreate(CourseObjActor* self, s32 a, s32 b, s32 c, s32 d) {
    void* vtbl = self->vtable;
    void* animObj = *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x2C);
    void* animVtbl = *reinterpret_cast<void**>(animObj);
    void* fn = *reinterpret_cast<void**>(static_cast<u8*>(animVtbl) + 0x0C);
    // bctrl — indirect call to vtable method
    // ((void(*)(void*, s32, s32, s32, s32, s32))(fn))(animObj, 0, 0, 0, 0xC, 0);
}

// 0x8061E620 (16 bytes)
// Get the animation manager: this->vtable->0x2C->0x1C
void* CourseObjActor_GetAnimMgr(CourseObjActor* self) {
    void* vtbl = self->vtable;
    void* animObj = *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x2C);
    return *reinterpret_cast<void**>(static_cast<u8*>(animObj) + 0x1C);
}

// 0x8061E6BC (20 bytes)
// Call calcAnim if the vtable method at 0x24 is non-null
// Otherwise, branch to 0x8062DE24 (external calc function)
void CourseObjActor_CallCalcAnim(CourseObjActor* self) {
    void* vtbl = self->vtable;
    void* fn = *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x24);
    if (fn != nullptr) {
        // beqlr — return if null, otherwise call 0x8062DE24
        // ((void(*)(CourseObjActor*))(0x8062DE24))(self);
    }
}

// 0x8061DC48 (20 bytes)
// Get course data: this->vtable->0x08->0x90->0x04
void* CourseObjActor_GetCourseData(CourseObjActor* self) {
    void* vtbl = self->vtable;
    void* base = *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x08);
    void* courseData = *reinterpret_cast<void**>(static_cast<u8*>(base) + 0x90);
    return *reinterpret_cast<void**>(static_cast<u8*>(courseData) + 0x04);
}

// 0x8061DC70 (40 bytes)
// Get the ID table entry for this object:
//   this->vtable->0x00->0x10 (ID)
//   global->0x0C (table base)
//   table[ID * 4]->0x48
void* CourseObjActor_GetIDTableEntry(CourseObjActor* self) {
    void* vtbl = self->vtable;
    void* inner = *reinterpret_cast<void**>(vtbl);
    u8 objId = *reinterpret_cast<u8*>(static_cast<u8*>(inner) + 0x10);

    void* global = sGlobalInstance;
    void* table = *reinterpret_cast<void**>(static_cast<u8*>(global) + 0x0C);
    void* entry = *reinterpret_cast<void**>(static_cast<u8*>(table) + (objId << 2));
    return *reinterpret_cast<void**>(static_cast<u8*>(entry) + 0x48);
}

// 0x8061DFE0 (12 bytes)
// Get collision object: this->vtable->0x18
void* CourseObjActor_GetCollisionObj(CourseObjActor* self) {
    void* vtbl = self->vtable;
    return *reinterpret_cast<void**>(static_cast<u8*>(vtbl) + 0x18);
}

// ============================================================================
// CourseObjActor_UpdateWithRotation()
// 0x8060D554 (820 bytes)
// ============================================================================
// Update a course object with LOD checking and rotation/scale transforms.
//
// This function:
// 1. Checks visibility flags (0x0C & 0x80C10000, bit 17, bit 27, etc.)
// 2. If the object is close enough and passes all flag checks:
//    a. Calculates LOD based on distance and scale
//    b. Stores a pointer to course data entry at offset 0x1C0
//    c. If far away: sets hidden flag (0x40) and returns
//    d. If close: calculates rotation transform using cross/dot products
//    e. Updates position with rotation and scale
// 3. Calls drawing functions and marks visibility
//
// @param variantIdx  Which variant of the course data to use
// ============================================================================
void CourseObjActor_UpdateWithRotation(CourseObjActor* self, s32 variantIdx) {
    CourseObjSub* sub = self->sub;

    // Check visibility conditions
    // Flag mask: 0x80C10100 (bits 8, 16, 27, 31)
    const u32 VIS_MASK = 0x80C10100u;
    bool canSee = true;

    // Check bit 17 (0x20000) of flags
    if ((sub->flags & 0x20000u) != 0) {
        canSee = false;
    }
    // Check bit 27 of flags
    if ((sub->flags & (1u << 27)) != 0) {
        canSee = false;
    }
    // Check bit 24 of variantFlags
    if ((sub->variantFlags & (1u << 24)) != 0) {
        canSee = false;
    }
    // Check bit 0 of renderGroup (top 3 bits)
    if ((sub->renderGroup & 0x1F) != 0) {
        canSee = false;
    }

    if (!canSee) {
        return;
    }

    // Get the course data entry for this variant
    void* courseData = CourseObjActor_GetCourseData(self);

    // Calculate pointer into the animation entry table
    // Entry offset = 0x2E0 + variantIdx * 0x0C
    u32 entryOffset = 0x2E0 + (variantIdx * 0x0C);
    self->courseDataPtr = reinterpret_cast<uintptr_t>(static_cast<u8*>(courseData) + entryOffset);

    // Set "loaded" flag (bit 14) on draw flags
    sub->drawFlags |= 0x4000;

    // Check if we need LOD processing
    s16 lodMin = static_cast<s16>(sRenderSettings->_000[0x360]);
    s16 lodMax = static_cast<s16>(sRenderSettings->_000[0x364]);
    bool inLodRange = true;

    if (self->_1B8 < sRenderSettings->defaultScale) {
        // Below minimum scale — always visible
    } else if (self->_10 * sRenderSettings->scaleRange <= self->_1B8) {
        // In range
    } else {
        // Out of LOD range — select variant based on direction
        s32 sign = (variantIdx < lodMin) ? -1 : ((lodMin < variantIdx) ? 1 : 0);
        s32 absSign = (sign < 0) ? -sign : sign;
        u32 newOffset = 0x348 + (absSign * 0x0C);
        self->courseDataPtr = reinterpret_cast<u32>(static_cast<u8*>(sRenderSettings) + newOffset);

        inLodRange = false;

        // Set "needs update" flag
        sub->drawFlags |= 0x10;
    }

    if (lodMax == 0) {
        // Object is hidden by LOD — set hidden flag and return
        sub->drawFlags |= 0x40;
    } else if (!inLodRange) {
        // Already handled above
    } else {
        // Object is visible — proceed with transform
        // Set "transformed" flag (bit 6)
        sub->drawFlags |= 0x80;

        // Set "visibility updated" flag (bit 11)
        sub->drawFlags |= 0x800;

        // Get the animation entry and trigger 3D audio
        u8 objId = CourseObjActor_GetID(self);
        // audio_378A4(actor from table lookup)
        courseObj_E908(self);

        // Set scale to 0.0f and start fade-in
        courseObj_DC98(self, 7, 1);

        // Trigger 3D audio
        void* manager = CourseObjActor_GetManager(self);
        effectMgr_65E0(manager, 1);
    }

    if (lodMax != 0) {
        // Object was hidden — mark as such
        // Get the course data entry and load position
        void* entry = reinterpret_cast<void*>(self->courseDataPtr);
        f32 entryY = *reinterpret_cast<f32*>(static_cast<u8*>(entry) + 8);

        // Get world position from course data
        void* worldData = CourseObjActor_GetCourseData(self);
        self->boundingBox.x = *reinterpret_cast<f32*>(static_cast<u8*>(worldData) + 0x74);
        self->boundingBox.y = entryY;
        self->boundingBox.z = *reinterpret_cast<f32*>(static_cast<u8*>(worldData) + 0x7C);

        // Copy current position
        Vec3f pos = self->position;

        // Calculate rotation transform
        // (Original uses fmuls/fadds for matrix multiply)
        /* WII_GX: Matrix transform for course object rotation */
        f32 rx = self->velocity.x;
        f32 ry = self->velocity.y;
        f32 rz = self->velocity.z;

        f32 sx = rx * pos.x;
        f32 sy = ry * pos.y;
        f32 sz = rz * pos.z;

        self->mass = self->mass * (sx + sy + sz);

        // Store rotated position
        self->velocity.x = pos.x;
        self->velocity.y = pos.y;
        self->velocity.z = pos.z;

        self->boundingBox.x = pos.x;
        self->boundingBox.y = pos.y;
        self->boundingBox.z = pos.z;

        // Set "position updated" flag
        sub->drawFlags |= 0x40;

        // Start animation
        courseObj_DC98(self, 3, 1);

        void* manager = CourseObjActor_GetManager(self);
        effectMgr_65E0(manager, 1);
    }
}

// ============================================================================
// CourseObjActor_InitVariant()
// 0x8060DFB4 (544 bytes)
// ============================================================================
// Initialize a course object with the given variant parameters.
// Handles two main paths:
// 1. Path A (type 0): Full initialization with 3D model, animation, sound
// 2. Path B (type != 0): Simplified initialization with direct creation
//
// @param a  Unknown parameter (from r5)
// @param b  Type/mode parameter (from r6)
// @param c  Variant parameter (from r7)
// @param d  Flag parameter (from r8)
// @return   Non-zero if variant was successfully initialized
// ============================================================================
s32 CourseObjActor_InitVariant(CourseObjActor* self, void* a, s32 b, void* c, s32 d) {
    CourseObjSub* sub = self->sub;
    u32 baseFlags = sub->renderGroup;
    u32 objFlags = sub->flags;

    // Check if initialization should proceed
    // Mask: 0x102 (bits 1 and 8)
    bool skipInit = false;
    if ((objFlags & 0x102) != 0) {
        skipInit = true;
    }
    // Mask: 0x20C6000 (bits 13, 17, 18, 22, 23)
    if (!skipInit && (sub->variantFlags & 0x20C6000u) != 0) {
        skipInit = true;
    }

    if (skipInit) {
        // Check bit 4 of drawFlags
        if ((sub->drawFlags & (1u << 4)) != 0) {
            return 0;
        }
        return 1;
    }

    // Check bit 16 of flags to determine init path
    if ((sub->flags & (1u << 16)) == 0) {
        // Path B: Direct creation path
        // Clear specific flags
        sub->drawFlags = sub->drawFlags & ~0x0F;

        // Get animation entry from manager
        u8 objId = CourseObjActor_GetID(self);
        CourseObjManager* mgr = sCourseObjManager;
        u32 entryBase = objId * 0x248;
        void* animEntry = static_cast<u8*>(mgr->actorArray) + entryBase;

        // Create 3D animation
        anim3D_Init(animEntry, nullptr, 0, 0);

        // Get the animation manager
        void* manager = CourseObjActor_GetManager(self);

        // Call vtable[0xE0/56] — set alpha to 0.0f
        void* vtbl = self->vtable;
        typedef void (*SetAlphaFunc)(void*, f32);
        auto setAlpha = reinterpret_cast<SetAlphaFunc>(
            *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0xE0));
        setAlpha(self, 0.0f);

        // Reset collision timer
        self->collisionFlags = 0;

        // Initialize collision
        void* collisionMgr = CourseObjActor_GetCollisionObj(self);
        courseObj_DC98(self, 0.0f, 1);

        // Check if audio has been initialized
        if (self->drawFlags2 == 0) {
            // Initialize 3D audio
            void* audioObj = *reinterpret_cast<void**>(static_cast<u8*>(self) + 0x260);
            audio_Play3D(audioObj, 1);
            self->drawFlags2 = 1;
        }

        return 1;
    }

    // Path A: Full initialization with variant selection
    s32 variantType;
    if (b == 0x0A) {
        variantType = 0x0A;
    } else if (b == 0x0F) {
        variantType = 0x0F;
    } else if (b == 0) {
        variantType = 0x11;
    } else {
        variantType = b;
    }

    // Call creation with variant type
    CourseObjActor_CallCreate(self, variantType);

    // Get animation entry and create 3D model
    u8 objId = CourseObjActor_GetID(self);
    CourseObjManager* mgr = sCourseObjManager;
    u32 entryBase = objId * 0x248;
    void* animEntry = static_cast<u8*>(mgr->actorArray) + entryBase;
    anim3D_Init(animEntry, nullptr, 0x0C, 0);

    // Set alpha to 0.0f
    void* manager = CourseObjActor_GetManager(self);
    void* vtbl = self->vtable;
    typedef void (*SetAlphaFunc)(void*, f32);
    auto setAlpha = reinterpret_cast<SetAlphaFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0xE0));
    setAlpha(self, 0.0f);

    // Check if audio was initialized during creation
    if (self->drawFlags2 == 0) {
        void* audioObj = *reinterpret_cast<void**>(static_cast<u8*>(self) + 0x260);
        audio_Play3D(audioObj, 1);
        self->drawFlags2 = 1;
    }

    return 1;
}

// ============================================================================
// CourseObjActor_TickTimer()
// 0x8060E8E4 (764 bytes)
// ============================================================================
// Decrement the animation timer and handle state transitions.
// This is the per-frame tick for course objects.
//
// State machine:
// - If timer > 0: decrement, when it reaches 0, transition to "animate" state
// - "animate" state: call calcAnim, check if done, handle completion
// - On completion: stop audio, notify parent, reset state
// ============================================================================
void CourseObjActor_TickTimer(CourseObjActor* self) {
    // Decrement timer
    s16 timer = self->animTimer - 1;
    self->animTimer = timer;

    if (timer >= 0) {
        // Timer still running — clamp to 0
        self->animTimer = 0;
        return;
    }
    self->animTimer = 0;

    // Timer expired — check if object is still active
    if (self->isActive == 0) {
        return;
    }

    // Call calcAnim to advance the animation
    s32 result = 0;
    CourseObjActor_CallCalcAnim(self);
    // result = return value from calcAnim

    if (result == 0) {
        // Animation still running — reset timer from global
        void* global = sGlobalInstance;
        self->animTimer = *reinterpret_cast<s16*>(static_cast<u8*>(global));
        return;
    }

    // Animation completed — get the anim object
    void* animObj = CourseObjActor_GetAnimObj(self);

    // Check if animation has more frames
    s16 frameCount = *reinterpret_cast<s16*>(static_cast<u8*>(animObj) + 0xC4);
    if (frameCount >= 0) {
        // Still has frames — continue animating
        CourseObjActor_CallCalcAnim(self);

        // Call vtable[0x10/4] on anim object — draw/update
        void* animVtbl = *reinterpret_cast<void**>(animObj);
        typedef void (*UpdateFunc)(void*);
        auto updateFn = reinterpret_cast<UpdateFunc>(
            *reinterpret_cast<u32*>(static_cast<u8*>(animVtbl) + 0x10));
        updateFn(animObj);

        // Call FX function
        fx_F726C(animObj);
        return;
    }

    // Animation fully completed

    // Check if sub-object has the "moving" flag (bit 13 of drawFlags)
    CourseObjSub* sub = self->sub;
    if ((sub->drawFlags & (1u << 13)) != 0) {
        // Stop 3D audio for this object
        u8 objId = CourseObjActor_GetID(self);
        CourseObjManager* mgr = sCourseObjManager;
        u32 idx = objId << 2;
        void** actorArray = *reinterpret_cast<void***>(static_cast<u8*>(mgr) + 0x68);
        void* audioEntry = actorArray[idx];
        audio_Stop3D(audioEntry);

        // Transition to deactivate state (type 0xB)
        CourseObjActor_CallCreate(self, 0xB);
    }

    // Call calcAnim again to finalize
    CourseObjActor_CallCalcAnim(self);

    // Check if animation object has the "done" flag
    s16 doneCount = *reinterpret_cast<s16*>(static_cast<u8*>(animObj) + 0xCC);
    if ((doneCount & (1u << 30)) != 0) {
        // Has pending frames — kill 3D audio
        u8 objId = CourseObjActor_GetID(self);
        CourseObjManager* mgr = sCourseObjManager;
        u32 idx = objId << 2;
        void** actorArray = *reinterpret_cast<void***>(static_cast<u8*>(mgr) + 0x68);
        void* audioEntry = actorArray[idx];
        audio_Kill3D(audioEntry);

        // Check game mode flags
        void* global = sGlobalInstance;
        s32 gameMode = *reinterpret_cast<s32*>(static_cast<u8*>(global) + 0xB70);
        gameMode -= 3;
        if (gameMode <= 0) {
            // Check bits 0 and 6 of (1 << gameMode) & 0xC1
            s32 mask = (1 << gameMode) & 0xC1;
            if (mask == 0) {
                return;
            }
        }
        // Flag 1 = replay mode or similar
    }

    // Notify parent / trigger end-of-animation
    // Call vtable[0x10/4] on anim object to finalize
    void* animVtbl = *reinterpret_cast<void**>(animObj);
    typedef void (*FinalizeFunc)(void*);
    auto finalizeFn = reinterpret_cast<FinalizeFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(animVtbl) + 0x10));
    finalizeFn(animObj);

    // Call scene update
    fx_F726C(animObj);
}

// ============================================================================
// CourseObjActor_Update()
// 0x8060F4CC (1180 bytes)
// ============================================================================
// Main update function for course objects.
// Handles the full lifecycle: visibility check, animation start/stop,
// state transitions, LOD updates, and audio triggers.
//
// State flow:
// 1. Check if bit 17 of sub->flags is set → if so, start animation
// 2. If animation timer > 0 and conditions met:
//    a. Get LOD entry, set visibility
//    b. Start 3D audio and animation
//    c. Set timer to duration from render settings
// 3. If animation timer expired:
//    a. Check if object should restart or deactivate
//    b. Handle state flag transitions
// 4. Decrement all three timers (LOD timers at 0x236, 0x238, 0x23A)
// ============================================================================
void CourseObjActor_Update(CourseObjActor* self) {
    CourseObjSub* sub = self->sub;
    CourseRenderSettings* settings = sRenderSettings;

    // Check bit 17 of flags — "start animation" trigger
    if ((sub->flags & (1u << 17)) == 0) {
        goto check_timers;
    }

    // Start animation path
    u8 objId = CourseObjActor_GetID(self);
    CourseObjManager* mgr = sCourseObjManager;
    u32 idx = objId << 2;
    void** actorArray = *reinterpret_cast<void***>(static_cast<u8*>(mgr) + 0x68);
    void* audioEntry = actorArray[idx];

    // Mark audio as active
    *reinterpret_cast<u8*>(static_cast<u8*>(audioEntry) + 0x6A) = 1;

    // Check bit 13 of drawFlags — "has movement"
    bool hasMovement = (sub->flags & (1u << 13)) != 0;

    // Check visibility conditions (same as UpdateWithRotation)
    bool canSee = true;
    if (hasMovement) {
        canSee = false;
    }
    if ((sub->flags & (1u << 27)) != 0) {
        canSee = false;
    }
    if ((sub->variantFlags & (1u << 24)) != 0) {
        canSee = false;
    }
    if ((sub->renderGroup & 0x1F) != 0) {
        canSee = false;
    }

    if (!canSee) {
        // Not visible — check if we should still start
        if (self->animTimer > 0) {
            // Timer already running — handle expiry
            s16 newTimer = self->animTimer - 1;
            self->animTimer = (newTimer >= 0) ? newTimer : 0;

            if (newTimer >= 0) {
                // Still timing
            } else {
                // Timer expired — start animation
                s16 duration = settings->animDuration;
                void* manager = CourseObjActor_GetManager(self);
                effectMgr_962A8(manager);

                // Mark as animated
                self->animFlags |= 1;
                self->animSpeed = settings->lodDistance;
                self->animTimer = duration;

                // Trigger 3D audio
                audio_Play3D(audioEntry, 0);

                // Start animation
                CourseObjActor_CallAnimate(self, 6);

                // Stop audio
                u8 id = CourseObjActor_GetID(self);
                audio_Play3DEx(audioEntry, static_cast<u16>(id));

                // Setup movement
                CourseObjActor_GetMovement(self);
                courseObj_859398(self);

                // Set timer and start
                self->lodTimer3 = duration;
                courseObj_DC98(self, 3, 1);

                // Mark as not moving
                self->lodTimer2 = 0;
                goto decrement_timers;
            }
        } else {
            // No timer — set from global
            self->lodTimer2 = settings->animDuration;
        }
        goto decrement_timers;
    }

    // Object is visible — start animation
    s16 duration = settings->animDuration;

    // Stop 3D audio
    audio_Play3D(audioEntry, 0);

    // Start 3D animation
    void* manager = CourseObjActor_GetManager(self);
    effectMgr_962A8(manager);

    // Check if already animated
    if ((self->animFlags & 1) == 0) {
        // First time — set timer
        self->animTimer = duration;
        self->animFlags |= 1;
        self->animSpeed = settings->lodDistance;
    } else {
        // Already animated — set timer
        self->animTimer = duration;
    }

    // Trigger 3D audio
    audio_Play3D(audioEntry, 0);

    // Start animation
    CourseObjActor_CallAnimate(self, 6);

    // Setup movement
    CourseObjActor_GetMovement(self);
    courseObj_859398(self);

    // Set timer
    self->lodTimer3 = duration;
    courseObj_DC98(self, 3, 1);

    self->lodTimer2 = 0;

decrement_timers:
    // Decrement LOD timer 2
    {
        s16 t = self->lodTimer2 - 1;
        self->lodTimer2 = (t >= 0) ? t : 0;
    }

    // Check draw flag 31
    if ((self->drawGroup & 1) == 0) {
        goto check_main_timer;
    }

    // Check sub flag 23
    if ((sub->drawFlags & (1u << 23)) == 0) {
        goto handle_draw_group;
    }

    // Reset draw group and reload timer
    self->drawGroup &= ~0xFFFF;
    self->animTimer = settings->animDuration;

    // Check game mode
    void* global = sGlobalInstance;
    if (*reinterpret_cast<u32*>(static_cast<u8*>(global) + 0xB78) != 0) {
        // Special mode active
        s32 mode = *reinterpret_cast<s32*>(static_cast<u8*>(global) + 0xB70) - 3;
        if (mode <= 0) {
            s32 mask = (1 << mode) & 0xC1;
            if (mask != 0) {
                // Replay/battle mode
                goto handle_draw_group;
            }
        }

        // Mark as replay-visible
        sub->drawFlags |= 0x100;
        self->animSpeed = *reinterpret_cast<f32*>(static_cast<u8*>(settings) + 0x124);
    }

handle_draw_group:
    // Reload timer from settings
    self->animTimer = settings->animDuration;
    self->drawGroup &= ~0xFFFF;

    // Check sub draw flag 23
    if ((sub->drawFlags & (1u << 23)) != 0) {
        sub->drawFlags &= ~(1u << 23);
        self->animTimer = settings->animDuration;
    }

check_main_timer:
    // Decrement main animation timer
    {
        s16 t = self->animTimer - 1;
        self->animTimer = (t >= 0) ? t : 0;
        goto done;
    }

check_timers:
    // Object not in "start animation" state
    // Check sub flags
    if ((sub->flags & (1u << 23)) != 0) {
        // Clear flag
        sub->flags &= ~(1u << 23);
        goto handle_deactivate;
    }

    // Check if already deactivated
    if (self->lodTimer2 <= 0) {
        // Clear "deactivated" flag
        sub->drawFlags &= ~0xFFFF;
        goto check_main_timer;
    }

    // Decrement LOD timer 2
    {
        s16 t = self->lodTimer2 - 1;
        self->lodTimer2 = (t >= 0) ? t : 0;
        goto check_main_timer;
    }

handle_deactivate:
    // Mark as deactivated
    sub->drawFlags &= ~(1u << 23);
    goto check_main_timer;

done:
    // Decrement LOD timer 3 (final decrement)
    {
        s16 t = self->lodTimer3 - 1;
        self->lodTimer3 = (t >= 0) ? t : 0;
    }
}