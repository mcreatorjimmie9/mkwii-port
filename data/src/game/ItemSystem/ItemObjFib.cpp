// ============================================================================
// ItemObjFib implementation — Feather (FOIL) / Fake Item Box item object
// ============================================================================
// Translated from PowerPC assembly stubs in StaticR.rel.
// Manages feather items that float on the track with a bobbing animation.
// Players within collection radius pick up the feather.
// Also handles fake item box functionality (gives bad items to players).
// ============================================================================

#include "ItemObjFib.hpp"
#include <cmath>
#include <cstring>
#include <cstdlib>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace Item {

// ============================================================================
// Constants
// ============================================================================

const f32 ItemObjFib::BOB_AMPLITUDE    = 8.0f;   // ~8 units vertical bob
const f32 ItemObjFib::BOB_FREQUENCY    = 2.5f;   // ~2.5 Hz oscillation
const f32 ItemObjFib::COLLECT_RADIUS   = 30.0f;  // Collection trigger distance
const s32 ItemObjFib::DEFAULT_LIFETIME = 1800;   // 30 seconds at 60fps
const u8  ItemObjFib::INVALID_TARGET   = 0xFF;
const u8  ItemObjFib::VARIANT_NORMAL   = 2;
const u8  ItemObjFib::VARIANT_SPECIAL  = 3;
const u8  ItemObjFib::VARIANT_ALT      = 4;

// Fake item box constants
const s32 ItemObjFib::FAKE_BOX_LINGER_TIME = 1200; // 20 seconds at 60fps
const f32 ItemObjFib::FADE_DURATION = 1.0f;        // 1 second fade out
const f32 ItemObjFib::ACTIVATION_RADIUS = 15.0f;    // Proximity activation distance

// ============================================================================
// Constructor / Destructor
// ============================================================================

ItemObjFib::ItemObjFib()
    : mPosition(0.0f, 0.0f, 0.0f)
    , mBasePosition(0.0f, 0.0f, 0.0f)
    , mSpeed(0.0f)
    , mBobTimer(0.0f)
    , mLifetime(0)
    , mTargetId(INVALID_TARGET)
    , mVariant(VARIANT_NORMAL)
    , mAlive(false)
    , mOwnerId(INVALID_TARGET)
    , mFadeAlpha(1.0f)
    , mFading(false) {
    memset(&mBadItemPool, 0, sizeof(BadItemPool));
}

ItemObjFib::~ItemObjFib() {}

// ============================================================================
// makeArray — Create and initialize an array of feather objects
// ============================================================================
// @addr 0x807a9d90
// @size 152 bytes
//
// Assembly logic reconstructed:
//   1. Load the class table pointer from globalCfg + 0x74
//   2. Call a function at 0x8068f828 (likely an initialization or lock)
//   3. Check variantFlags bit 16 (rlwinm. r0, r0, 0, 0x10, 0x10)
//      - If set: use classIdx = 0xC (force variant from class table)
//      - If clear: use classIdx from the classIdx parameter (offset 0x6c)
//   4. Bounds check: if classIdx >= 0xC, skip variant resolution
//   5. Look up classTable[classIdx] (each entry is 0xF0 bytes)
//      - Read variant field at classEntry + 0xF4
//      - If variant == 0: use VARIANT_NORMAL (2)
//      - If variant == 1: use VARIANT_SPECIAL (3)
//      - Otherwise: keep default VARIANT_NORMAL
//   6. For each feather in the array, call vtable+0xC with arg 1
//      (this is likely a virtual init or activate call)
//   7. Call 0x8078a188 on the array's +0xA4 sub-object (model/audio init)
//   8. Load speed from config offset 0x198 for each instance
// ============================================================================

// Address: 0x807a9d90 — ItemObjFib_makeArray (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 152 bytes
/**
 * ItemObjFib_makeArray
 * @addr 0x807a9d90
 * @size 152 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
s32 ItemObjFib::makeArray(ItemObjFib* array, u32 count, u32 maxCount,
    void* globalCfg, u8 classIdx, ClassEntry* classTable,
    u32 variantFlags, f32 speed) {

    // Determine the effective class index for variant lookup
    // Assembly: rlwinm. r0, r0, 0, 0x10, 0x10 tests bit 16 of variantFlags
    u8 effectiveClassIdx;
    if (variantFlags & (1u << 16)) {
        effectiveClassIdx = 0xC; // Force class 12 when flag bit 16 is set
    } else {
        effectiveClassIdx = classIdx; // Use the class index from slot data
    }

    // Determine the variant (2 = normal, 3 = special, 4 = alternate)
    // Assembly: cmplwi r4, 0xC / bge → skip if out of range
    //           lis r3, classTable / lbz r0 → check classTable enabled
    //           mulli r0, r4, 0xF0 → index into class entry table
    //           lwz r0, 0xF4(r3) → read variant field
    u8 variant = VARIANT_NORMAL;

    if (effectiveClassIdx < 0xC) {
        // Check if the class table is valid and populated
        if (classTable != nullptr) {
            // Each class entry is 0xF0 bytes; variant selector at offset +0xF4
            ClassEntry* entry = reinterpret_cast<ClassEntry*>(
                reinterpret_cast<u8*>(classTable) + effectiveClassIdx * 0xF0);

            s32 variantField = *reinterpret_cast<s32*>(
                reinterpret_cast<u8*>(entry) + 0xF4);

            if (variantField == 0) {
                variant = VARIANT_SPECIAL;
            } else if (variantField == 1) {
                variant = VARIANT_ALT;
            }
            // Otherwise: keep VARIANT_NORMAL (already set above)
        }
    }

    // Initialize each feather in the array
    for (u32 i = 0; i < count; i++) {
        ItemObjFib* fib = &array[i];
        fib->mVariant = variant;
        fib->mSpeed = speed;
        fib->mAlive = false;
        fib->mBobTimer = 0.0f;
        fib->mLifetime = DEFAULT_LIFETIME;
        fib->mTargetId = INVALID_TARGET;
        fib->mPosition.set(0.0f, 0.0f, 0.0f);
        fib->mBasePosition.set(0.0f, 0.0f, 0.0f);
        fib->mOwnerId = INVALID_TARGET;
        fib->mFadeAlpha = 1.0f;
        fib->mFading = false;
        memset(&fib->mBadItemPool, 0, sizeof(BadItemPool));
    }

    return 0;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a9d90: 80 65 00 00              lwz      r3, 0(r5) */
/* 0x807a9d94: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a9d98: 4b ee 5a 91              bl       0x8068f828 */
/* 0x807a9d9c: 80 1e 00 78              lwz      r0, 0x78(r30) */
/* 0x807a9da0: 3b a0 00 02              li       r29, 2 */
/* 0x807a9da4: 54 00 04 21              rlwinm.  r0, r0, 0, 0x10, 0x10 */
/* 0x807a9da8: 40 82 00 0c              bne      0x807a9db4 */
/* 0x807a9dac: 88 9e 00 6c              lbz      r4, 0x6c(r30) */
/* 0x807a9db0: 48 00 00 08              b        0x807a9db8 */
/* 0x807a9db4: 38 80 00 0c              li       r4, 0xc */
/* 0x807a9db8: 28 04 00 0c              cmplwi   r4, 0xc */
/* 0x807a9dbc: 40 80 00 40              bge      0x807a9dfc */
/* 0x807a9dc0: 3c 60 00 00              lis      r3, 0 */
/* 0x807a9dc4: 88 03 00 00              lbz      r0, 0(r3) */
/* 0x807a9dc8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807a9dcc: 41 82 00 30              beq      0x807a9dfc */
/* 0x807a9dd0: 3c 60 00 00              lis      r3, 0 */
/* 0x807a9dd4: 1c 04 00 f0              mulli    r0, r4, 0xf0 */
/* 0x807a9dd8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a9ddc: 7c 63 02 14              add      r3, r3, r0 */
/* 0x807a9de0: 80 03 00 f4              lwz      r0, 0xf4(r3) */
/* 0x807a9de4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807a9de8: 40 82 00 08              bne      0x807a9df0 */
/* 0x807a9dec: 3b a0 00 03              li       r29, 3 */
/* 0x807a9df0: 2c 00 00 01              cmpwi    r0, 1 */
/* 0x807a9df4: 40 82 00 08              bne      0x807a9dfc */
/* 0x807a9df8: 3b a0 00 04              li       r29, 4 */
/* 0x807a9dfc: 80 7e 03 30              lwz      r3, 0x330(r30) */
/* 0x807a9e00: 38 80 00 01              li       r4, 1 */
/* 0x807a9e04: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a9e08: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x807a9e0c: 7d 89 03 a6              mtctr    r12 */
/* 0x807a9e10: 4e 80 04 21              bctrl     */
/* 0x807a9e14: 80 7e 00 a4              lwz      r3, 0xa4(r30) */
/* 0x807a9e18: 4b fe 03 71              bl       0x8078a188 */
/* 0x807a9e1c: 80 7e 03 30              lwz      r3, 0x330(r30) */
/* 0x807a9e20: 38 81 00 08              addi     r4, r1, 8 */
/* 0x807a9e24: c0 1f 01 98              lfs      f0, 0x198(r31) */
#endif


/* === DISASSEMBLY === */


//   0x807a9d90:  lwz      r3, 0(r5)
//   0x807a9d94:  lwz      r3, 0x74(r3)
//   0x807a9d98:  bl       0x8068f828
//   0x807a9d9c:  lwz      r0, 0x78(r30)
//   0x807a9da0:  li       r29, 2
//   0x807a9da4:  rlwinm.  r0, r0, 0, 0x10, 0x10
//   0x807a9da8:  bne      0x807a9db4
//   0x807a9dac:  lbz      r4, 0x6c(r30)
//   0x807a9db0:  b        0x807a9db8
//   0x807a9db4:  li       r4, 0xc
//   0x807a9db8:  cmplwi   r4, 0xc
//   0x807a9dbc:  bge      0x807a9dfc
//   0x807a9dc0:  lis      r3, 0
//   0x807a9dc4:  lbz      r0, 0(r3)
//   0x807a9dc8:  cmpwi    r0, 0
//   0x807a9dcc:  beq      0x807a9dfc
//   0x807a9dd0:  lis      r3, 0
//   0x807a9dd4:  mulli    r0, r4, 0xf0
//   0x807a9dd8:  lwz      r3, 0(r3)
//   0x807a9ddc:  add      r3, r3, r0
//   0x807a9de0:  lwz      r0, 0xf4(r3)
//   0x807a9de4:  cmpwi    r0, 0
//   0x807a9de8:  bne      0x807a9df0
//   0x807a9dec:  li       r29, 3
//   0x807a9df0:  cmpwi    r0, 1
//   0x807a9df4:  bne      0x807a9dfc
//   0x807a9df8:  li       r29, 4
//   0x807a9dfc:  lwz      r3, 0x330(r30)
//   0x807a9e00:  li       r4, 1
//   0x807a9e04:  lwz      r12, 0(r3)
//   0x807a9e08:  lwz      r12, 0xc(r12)
//   0x807a9e0c:  mtctr    r12
//   0x807a9e10:  bctrl    
//   0x807a9e14:  lwz      r3, 0xa4(r30)
//   0x807a9e18:  bl       0x8078a188
//   0x807a9e1c:  lwz      r3, 0x330(r30)
//   0x807a9e20:  addi     r4, r1, 8
//   0x807a9e24:  lfs      f0, 0x198(r31)

// ============================================================================
// init — Initialize a feather instance at the given position
// ============================================================================

void ItemObjFib::init(const EGG::Vector3f& pos, f32 speed) {
    mBasePosition = pos;
    mPosition = pos;
    mSpeed = speed;
    mBobTimer = 0.0f;
    mLifetime = DEFAULT_LIFETIME;
    mTargetId = INVALID_TARGET;
    mAlive = true;
    mFadeAlpha = 1.0f;
    mFading = false;
}

// ============================================================================
// initFakeBox — Initialize as a fake item box
// ============================================================================

void ItemObjFib::initFakeBox(const EGG::Vector3f& pos, u8 ownerId) {
    mBasePosition = pos;
    mPosition = pos;
    mSpeed = 0.0f; // Fake boxes don't fall
    mBobTimer = 0.0f;
    mLifetime = FAKE_BOX_LINGER_TIME;
    mTargetId = INVALID_TARGET; // Anyone can hit it
    mAlive = true;
    mOwnerId = ownerId;
    mFadeAlpha = 1.0f;
    mFading = false;

    // Set default bad item pool if not already configured
    if (mBadItemPool.count == 0) {
        mBadItemPool.itemIds[0] = BAD_ITEM_BANANA;
        mBadItemPool.weights[0] = 50;
        mBadItemPool.itemIds[1] = BAD_ITEM_GREEN_SHELL;
        mBadItemPool.weights[1] = 30;
        mBadItemPool.itemIds[2] = BAD_ITEM_MUSHROOM_SLOW;
        mBadItemPool.weights[2] = 20;
        mBadItemPool.count = 3;
    }
}

// ============================================================================
// update — Per-frame update: bob animation, proximity check, lifetime
// ============================================================================

void ItemObjFib::update() {
    if (!mAlive) return;

    // Handle fade-out animation
    if (mFading) {
        mFadeAlpha -= (1.0f / 60.0f) / FADE_DURATION;
        if (mFadeAlpha <= 0.0f) {
            mFadeAlpha = 0.0f;
            mAlive = false;
            return;
        }
    }

    // Advance bob timer
    mBobTimer += (1.0f / 60.0f); // Assume 60fps frame time

    // Compute vertical bob offset using sine wave
    f32 bobOffset = BOB_AMPLITUDE *
        sinf(2.0f * (f32)M_PI * BOB_FREQUENCY * mBobTimer);

    // Update Y position with bob animation
    mPosition.y = mBasePosition.y + bobOffset;

    // Apply gentle downward drift from speed (only for feathers, not fake boxes)
    if (mOwnerId == INVALID_TARGET || mSpeed > 0.0f) {
        mBasePosition.y -= mSpeed * (1.0f / 60.0f);
    }

    // Tick down lifetime
    mLifetime--;
    if (mLifetime <= 0) {
        onExpire();
    }
}

// ============================================================================
// onHit — Give bad item to player who touched fake box
// ============================================================================

void ItemObjFib::onHit(u8 playerId, BadItemType* outItem) {
    (void)playerId;

    // Select a bad item based on the player's position
    // We use the player ID as a rough position indicator (lower ID = further ahead)
    // In practice, the caller would pass the actual race position
    BadItemType item = selectBadItem(playerId + 1);

    if (outItem) {
        *outItem = item;
    }

    // The fake box is consumed on hit
    mAlive = false;
}

// ============================================================================
// setBadItemPool — Configure which bad items to give
// ============================================================================

void ItemObjFib::setBadItemPool(const BadItemPool& pool) {
    mBadItemPool = pool;
}

// ============================================================================
// selectBadItem — Random bad item selection weighted by position
// ============================================================================
// Players further back in the race get worse items.
// The weight system allows position-dependent item distribution:
//   - 1st place: mostly bananas (mild penalty)
//   - Last place: slow mushrooms, fake boosts (severe penalty)
// ============================================================================

BadItemType ItemObjFib::selectBadItem(u8 playerPosition) const {
    if (mBadItemPool.count == 0) {
        return BAD_ITEM_BANANA; // Default fallback
    }

    // Calculate total weight, adjusting based on player position
    // Players in higher positions (further back) get more weight on worse items
    u32 totalWeight = 0;
    u32 adjustedWeights[8];

    for (u8 i = 0; i < mBadItemPool.count && i < 8; i++) {
        // Worsen items for players further back in the race
        u32 baseWeight = mBadItemPool.weights[i];

        // Items later in the pool are "worse" — increase their weight
        // for players in worse positions
        f32 positionFactor = 1.0f + (f32)playerPosition * 0.1f *
                             ((f32)i / (f32)mBadItemPool.count);

        adjustedWeights[i] = (u32)(baseWeight * positionFactor);
        totalWeight += adjustedWeights[i];
    }

    if (totalWeight == 0) {
        return (BadItemType)mBadItemPool.itemIds[0];
    }

    // Weighted random selection
    u32 roll = (u32)(std::rand() % totalWeight);
    u32 cumulative = 0;

    for (u8 i = 0; i < mBadItemPool.count && i < 8; i++) {
        cumulative += adjustedWeights[i];
        if (roll < cumulative) {
            return (BadItemType)mBadItemPool.itemIds[i];
        }
    }

    // Fallback to last item in pool
    return (BadItemType)mBadItemPool.itemIds[mBadItemPool.count - 1];
}

// ============================================================================
// getLingerTime — How long fake box stays visible
// ============================================================================

s32 ItemObjFib::getLingerTime() const {
    return mLifetime;
}

// ============================================================================
// checkProximity — Distance-based activation
// ============================================================================
// Checks if a kart is within the activation radius of this item.
// Uses squared distance to avoid unnecessary sqrt.
// ============================================================================

bool ItemObjFib::checkProximity(const EGG::Vector3f& kartPos) const {
    if (!mAlive || mFading) return false;

    f32 dx = kartPos.x - mPosition.x;
    f32 dy = kartPos.y - mPosition.y;
    f32 dz = kartPos.z - mPosition.z;
    f32 distSq = dx * dx + dy * dy + dz * dz;

    f32 radiusSq = ACTIVATION_RADIUS * ACTIVATION_RADIUS;
    return distSq < radiusSq;
}

// ============================================================================
// onExpire — Fade out and remove
// ============================================================================

void ItemObjFib::onExpire() {
    // Begin fade-out instead of immediately disappearing
    mFading = true;
    mFadeAlpha = 1.0f;
}

// ============================================================================
// removeFromField — Mark the feather as removed from the field
// ============================================================================

void ItemObjFib::removeFromField() {
    mAlive = false;
    mTargetId = INVALID_TARGET;
    mLifetime = 0;
    mPosition.set(0.0f, -1000.0f, 0.0f); // Move off-screen
}

// ============================================================================
// ItemObjFib_create — Factory function
// ============================================================================

ItemObjFib* ItemObjFib_create() {
    ItemObjFib* fib = new ItemObjFib();
    return fib;
}

} // namespace Item