#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <EGG/math.h>
#include <modules/BSP.hpp>
#define GENESIS_KART_BODY_DEFINED

// ===== IMPORTANT NAMESPACE NOTE =====
// This class is ::KartBody (global namespace), NOT Kart::KartBody.
// Mangled name Q29KartBody = no namespace (Q2 means 0-length ns), 9-char name "KartBody".
// Community's Kart::KartBody (Q24Kart8KartBody) is a DIFFERENT class that inherits
// from KartPart and has size 0x224 — it represents the actual kart body model.
// This ::KartBody is a singleton effect manager for visual/audio effects, size 0x38.
// =====

// Forward declarations
class KartPhysics;

// ===== KartBody (global namespace, effect manager singleton) =====
// Size: 0x38 (confirmed by createInstance: li r3, 0x38)
// Alloc: 0x805a3c10
class KartBody {
public:
    // 0x805a3c10 - createInstance__Q29KartBodyFv (singleton factory)
    // Allocates 0x38 bytes, calls constructor, stores to global
    static KartBody* createInstance();

    // 0x805a3c94 - __ct__Q29KartBodyFv
    // 2164 bytes, 541 instructions, 30 calls
    // Initializes effect arrays, audio system, engine class detection
    KartBody();

    // 0x805a3b78 - __dt__Q29KartBodyFv
    // 152 bytes, nulls vtable, cleans up effect arrays
    ~KartBody();

    // 0x805a45c0 - createEffectObj__Q29KartBodyFiiiPvi
    // 488 bytes. Allocates 0x360 (online) or 0x348 (offline) byte effect objects
    // Params: effectType, slotIdx, variation, parent, index, onlineFlag
    void* createEffectObj(int effectType, int slotIdx, int variation, void* parent, int index, int onlineFlag);

    // 0x805a47a8 - countActiveEffects__Q29KartBodyCFv
    // Iterates effectArray2, checks active bit at offset 0x6c of each pointed object
    // Returns priority of highest active effect (0 = highest)
    int countActiveEffects() const;

    // 0x805a4838 - updateAudio__Q29KartBodyFv
    // Updates engine audio, tire screech, suspension sounds based on effect state
    void updateAudio();

    // --- Body collision management ---
    // Initialize hitbox groups from BSP data and set default radii
    void init(BspHitbox* hitboxData, s32 hitboxCount);

    // Per-frame: update hitbox positions, check compression, update visual effects
    void calc(const EGG::Matrix34f& pose, f32 hitboxScale);

    // Parse BSP collision data to create hitbox groups
    void createHitboxes(BspHitbox* data, s32 count);

    // Scale all hitboxes (used for mega mushroom growth)
    void setHitboxScale(f32 scale);

    // Return the primary body hitbox for kart-kart collision
    const BspHitbox* getMainHitbox() const;

    // Return a specific wheel hitbox by index (0-3)
    const BspHitbox* getWheelHitbox(u8 index) const;

    // Return the main body collision radius
    f32 getBodyRadius() const;

    // Compress body hitbox (visual squash on wall hit)
    void setCompression(f32 amount, const EGG::Vector3f& direction);

    // Gradually restore compressed hitbox back to normal
    void updateCompression();

    // Check if body is currently compressed
    bool isCompressed() const;

    // Return the last collision normal vector
    const EGG::Vector3f& getCollisionNormal() const;

private:
    u8 _00[0x04];           // 0x00: vtable (implicit)
    void* effectVtable;     // 0x04: secondary vtable ptr (set to vtable in ctor)
    void* effectGroup;      // 0x08: effect group pointer
    void* effectDataTable;  // 0x0C: effect data lookup table
    u8 _10[0x04];           // 0x10: unknown (not accessed in known functions)
    void** effectArray1;    // 0x14: array of effect object pointers, indexed by slot
    void** effectArray2;    // 0x18: array of effect object pointers, indexed by slot
    u32 activeCount;        // 0x1C: effect slot count (set from race state; 6 for online, 3 for someFlag)
    u32 effectArraySize;    // 0x20: effect index count (set from race state; used as loop bound)
    u8 vehicleType;         // 0x24: vehicle type flag (compared against race state at global+0xb74)
    u8 engineClass;         // 0x25: engine class (0-3) derived from clz(global+0xb74-6)>>5
    u8 someFlag;            // 0x26: vehicle body flag (set to 1 when global+0x26 == 3)
    u8 raceStatus;          // 0x27: race status byte from global (checked for == 4)
    u16 unk28;              // 0x28: unknown u16
    u16 unk2a;              // 0x2A: unknown u16 (zeroed in ctor)
    u16 unk2c;              // 0x2C: unknown u16 (zeroed in ctor; Phase 6b: was void*, fixed to u16 from sth at 0x2c)
    u16 _2e;                // 0x2E: padding (2 bytes)
    void* audioSystem;      // 0x30: audio system pointer (used in updateAudio)
    void* sceneParent;      // 0x34: scene/parent object (used in createEffectObj when online)

    // --- Body collision state ---
    BspHitbox mBodyHitboxes[8];      // Main + wheel hitboxes from BSP data
    s32 mHitboxCount;                 // Number of active hitboxes
    s32 mMainHitboxIdx;               // Index of the primary body hitbox
    s32 mWheelHitboxBaseIdx;          // Base index for wheel hitboxes (0-3)
    f32 mBodyRadius;                  // Main body collision radius
    f32 mCollisionScale;              // Current hitbox scale (1.0 = normal, >1 = mega)
    f32 mCompressionAmount;           // Current compression (0.0 = none, 1.0 = max)
    EGG::Vector3f mCompressionDir;    // Direction of compression
    EGG::Vector3f mCollisionNormal;   // Last collision normal vector
    u32 mCompressionTimer;            // Frames remaining for spring-back
    static const u32 COMPRESSION_RECOVERY_FRAMES = 10;
};
// static_assert(sizeof(KartBody) == 0x38);

// ===== KartBodySub =====
// 0x805a4508 - __ct__Q213KartBodySubFiiPQ29KartBodyiiPvi
class KartBodySub {
public:
    KartBodySub(int a, int b, KartBody* body, int c, int d, void* e, int f);

private:
    void* vtable;
    void* vtable2;
    void* _08;
    void* _0c;
    // 8-register parameter setup fields
};

// KartCollideArea and KartCollideAreaBase are defined in Collision/KartCollide.hpp
// (Phase 6b: moved here from this file to their proper module)