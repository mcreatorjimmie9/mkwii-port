#pragma once
// ============================================================================
// CourseObj — Course Object Rendering System
// ============================================================================
// Handles rendering of static and animated objects placed on the race course.
// These are the 3D objects (trees, signs, ramps, etc.) that make up the
// track environment.
//
// The system uses a state machine pattern with multiple update modes
// (init, animate, deactivate) controlled by flags in the object's state.
// ============================================================================

#include <types.h>
#include <EGG/math.h>

// Forward declarations
class CourseObjActor;
struct CourseObjState;
struct Anim3DManager;
struct CollisionObj;
struct MovementController;
struct CourseDataEntry;

// ============================================================================
// CourseObjSub — Inner state object (accessed via vtable + 0x04)
// Size: variable, accessed at vtable offset 0x04
// ============================================================================
struct CourseObjSub {
    u32 flags;              // 0x00: state flags
    u32 drawFlags;          // 0x04: draw/visibility flags
    u8 renderGroup;         // 0x08: render group ID (top 3 bits = type)
    u8 _09;                 // 0x09: unknown
    u16 _0A;                // 0x0A: unknown
    u32 variantFlags;       // 0x0C: variant/option flags
    u32 _10;                // 0x10: additional flags
    u32 _14;                // 0x14: animation state
};

// ============================================================================
// CourseObjActor — Base class for course objects
// ============================================================================
// This is the main class for all course-placed 3D objects.
// It has a rich set of fields for position, rotation, scale, animation state,
// rendering flags, and collision data.
//
// Key vtable methods (accessed via this->vtable->offset):
//   [0x00]: destructor
//   [0x04]: init
//   [0x08]: destroy
//   [0x0C]: update
//   [0x10]: draw
//   [0x14]: getMovement
//   [0x18]: getCollisionObj
//   [0x1C]: getManager
//   [0x20]: animate
//   [0x24]: calcAnim (optional, may be null)
//   [0x28]: isActive / canUnload
//   [0x2C]: getAnimCount
//   [0x30]: stepAnim / advanceFrame
//   [0x38]: virtual init (called during creation)
//   [0x40]: getParent
//   [0x48]: getSomeTable
//   [0x50]: getOther
//   [0x54]: getSomething
//   [0xE0]: setAlpha/fade
// ============================================================================

class CourseObjActor {
public:
    void* vtable;              // 0x00: vtable pointer
    CourseObjSub* sub;         // 0x04: inner state object

    // Position / transform
    Vec3f position;            // 0x08: world position (x, y, z) — actually offset 0x0C?
    f32 _10;                   // 0x10: scale or rotation component
    f32 _1B8;                  // 0x1B8: distance to camera (for LOD)

    // Rendering state
    u16 stateFlags;            // 0x0FC: state flags (various bits)
    s16 animTimer;             // 0x10C: animation countdown timer
    u16 animFlags;             // 0x118: animation type flags
    f32 animSpeed;             // 0x124: animation speed / alpha value

    // LOD / variant
    u32 courseDataPtr;         // 0x1C0: pointer into course data table
    s16 lodTimer;              // 0x236: LOD fade-in/out timer
    s16 lodTimer2;             // 0x238: secondary LOD timer
    s16 lodTimer3;             // 0x23A: tertiary LOD timer
    u16 drawGroup;             // 0x254: draw group flags
    s16 initTimer;             // 0x258: initialization delay timer

    // Collision / physics
    Vec3f velocity;            // 0x5C: velocity vector
    f32 mass;                  // 0x20: mass/weight multiplier
    Vec3f boundingBox;         // 0x74: bounding box center
    Vec3f scale;               // 0x110-0x118: scale vector

    // Animation / sound
    u8 isActive;               // 0x3A: object active flag
    u8 drawFlags2;             // 0x196: secondary draw flags
    u16 collisionFlags;        // 0x194: collision state

    // ID / indexing
    u8 objId;                  // from vtable[0x10] — object type ID
};

// ============================================================================
// CourseObjManager — Global manager for all course objects
// ============================================================================
// Accessed via global base pointer at offset 0x00.
// Contains per-object animation entries (0x248 bytes each) and
// global rendering state.
// ============================================================================
struct CourseObjManager {
    void* vtable;              // 0x00
    u8 _04[0x64];
    void** actorArray;         // 0x68: array of actor pointers (indexed by ID)
    u8 _6C[0x2A4];
    // Per-object entries start at 0x310
    // Each entry is 0x248 bytes
};

// ============================================================================
// RenderSettings (course-specific portion)
// ============================================================================
// Global render settings accessed via "lis r31, 0; r31 = r31 + 0"
struct CourseRenderSettings {
    u8 _000[0x240];
    f32 animSpeedFactor;       // 0x240
    s16 animDuration;          // 0x258
    u8 _25A[0xE6];
    f32 defaultScale;          // 0x340
    f32 scaleRange;            // 0x344
    u8 _348[0x58];
    f32 lodDistance;           // 0x3A0
    u8 _3A4[0xA4];
    // Animation entry table at 0x2E0 (12-byte entries per variant)
};

// ============================================================================
// Function declarations — Getter helpers
// ============================================================================

// 0x8061E010 — Get manager object from vtable
void* CourseObjActor_GetManager(CourseObjActor* self);

// 0x8061E02C — Call animate on movement controller
void CourseObjActor_CallAnimate(CourseObjActor* self, s32 type);

// 0x8061E2BC — Get movement controller from vtable
void* CourseObjActor_GetMovement(CourseObjActor* self);

// 0x8061E2D8 — Get object ID from vtable
u8 CourseObjActor_GetID(CourseObjActor* self);

// 0x8061E59C — Get animation object from vtable
void* CourseObjActor_GetAnimObj(CourseObjActor* self);

// 0x8061E5D8 — Call create on animation object
void CourseObjActor_CallCreate(CourseObjActor* self, s32 a, s32 b, s32 c, s32 d);

// 0x8061E620 — Get animation manager from anim object
void* CourseObjActor_GetAnimMgr(CourseObjActor* self);

// 0x8061E6BC — Call calcAnim if vtable method exists
void CourseObjActor_CallCalcAnim(CourseObjActor* self);

// 0x8061DC48 — Get course data entry
void* CourseObjActor_GetCourseData(CourseObjActor* self);

// 0x8061DC70 — Get table entry for this object's ID
void* CourseObjActor_GetIDTableEntry(CourseObjActor* self);

// 0x8061DFE0 — Get collision object from vtable
void* CourseObjActor_GetCollisionObj(CourseObjActor* self);

// ============================================================================
// Function declarations — Main update/render logic
// ============================================================================

// 0x8060D554 — Update course object with LOD and rotation
void CourseObjActor_UpdateWithRotation(CourseObjActor* self, s32 variantIdx);

// 0x8060DFB4 — Initialize a course object variant
s32 CourseObjActor_InitVariant(CourseObjActor* self, void* a, s32 b, void* c, s32 d);

// 0x8060E8E4 — Tick the animation timer
void CourseObjActor_TickTimer(CourseObjActor* self);

// 0x8060F4CC — Main update function for course objects
void CourseObjActor_Update(CourseObjActor* self);