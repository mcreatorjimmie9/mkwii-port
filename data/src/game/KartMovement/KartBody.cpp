#include <cstring>
#include <cmath>
#include "KartBody.hpp"
#include "KartPhysicsSub.hpp"
#include "KartDynamics.hpp"

// ===== ::KartBody (global namespace, NOT Kart::KartBody) =====
// Phase 6b: This class was misidentified as Kart::KartBody.
// Mangled name Q29KartBody confirms global namespace, size 0x38.
// It's a singleton effect manager for visual/audio effects.

// External globals
extern void* sRaceState;
extern void* sAudioSystem;

// 0x805a3c94 - __ct__Q29KartBodyFv
// Size: 2164 bytes (very large constructor)
KartBody::KartBody() {
    // From disasm at 0x805a3c94 (541 instructions):
    // Stores vtable at offset 0
    // Stores secondary vtable at offset 0x04
    // Initializes effectGroup at 0x08
    // Initializes effectDataTable at 0x0C
    // Initializes effectArray1/2 at 0x14/0x18
    // Checks global race state for engine class (clz lookup at global+0xb70-6)
    // Sets engineClass (0x25) from race state
    // Sets someFlag (0x26) based on vehicle type
    // Allocates effect index arrays
    // Sets audioSystem (0x30)
    // 30 calls total

    this->effectVtable = nullptr;
    this->effectGroup = nullptr;
    this->effectDataTable = nullptr;
    this->effectArray1 = nullptr;
    this->effectArray2 = nullptr;
    this->activeCount = 0;
    this->effectArraySize = 0;
    this->vehicleType = 0;
    this->engineClass = 0;
    this->someFlag = 0;
    this->raceStatus = 0;
    this->unk28 = 0;
    this->unk2a = 0;
    this->unk2c = 0;
    this->_2e = 0;
    this->audioSystem = nullptr;
    this->sceneParent = nullptr;

    // Initialize body collision state
    mHitboxCount = 0;
    mMainHitboxIdx = 0;
    mWheelHitboxBaseIdx = 1;
    mBodyRadius = 0.0f;
    mCollisionScale = 1.0f;
    mCompressionAmount = 0.0f;
    mCompressionDir.setAll(0);
    mCollisionNormal.setAll(0);
    mCompressionTimer = 0;

    for (s32 i = 0; i < 8; i++) {
        mBodyHitboxes[i].pos.setAll(0);
        mBodyHitboxes[i].radius = 0.0f;
        mBodyHitboxes[i].enabled = false;
    }
}

// 0x805a3b78 - __dt__Q29KartBodyFv
// Size: 152 bytes
KartBody::~KartBody() {
    // Nulls vtable pointer
    // Calls destructor chain on effect objects via vtable[8]
    // Clears two effect arrays (calls operator delete[])
}

// 0x805a3c10 - createInstance__Q29KartBodyFv (singleton factory)
// Size: 132 bytes
// Phase 6b: Allocates exactly 0x38 bytes (li r3, 0x38)
KartBody* KartBody::createInstance() {
    // Checks global singleton pointer
    // Allocates 0x38 bytes
    // Calls constructor at 0x805a3c94
    // Stores to global
    static KartBody* instance = nullptr;
    if (!instance) {
        instance = new KartBody();
    }
    return instance;
}

// 0x805a45c0 - createEffectObj__Q29KartBodyFiiiPvi
// Size: 488 bytes
// Phase 6b: Refined parameter names from decompiled code
void* KartBody::createEffectObj(int effectType, int slotIdx, int variation, void* parent, int index, int onlineFlag) {
    // Creates an effect object for visual effects
    // Allocates 0x360 (online) or 0x348 (offline) byte objects
    // Calls init (0x8059d540)
    // Stores vtable at offset 0 of new object
    // Stores vtable+0x30 at offset 0x88 of new object
    // Indexes into effectArray1 (0x14) and effectArray2 (0x18) using slotIdx*4
    // When onlineFlag != 0: reads sceneParent (0x34) for parent data
    // When onlineFlag == 0: sets byte at 0x33e of new object to 0
    return nullptr;
}

// 0x805a47a8 - countActiveEffects__Q29KartBodyCFv
// Size: 144 bytes
// Phase 6b: Refined logic from decompiled code
int KartBody::countActiveEffects() const {
    // Loop: ctr = effectArraySize (0x20)
    // For each entry in effectArray2 (0x18):
    //   Read ptr from array[i]
    //   Read ptr->0x198 (some sub-object)
    //   Read u16 at subObj+0x6c
    //   Test bit 0x1c (bit 28) of u16
    //   If set: activeCount++
    // Return: clz(effectArraySize - activeCount) >> 5
    // This gives priority of highest active effect (0 = highest)
    return 0;
}

// 0x805a4838 - updateAudio__Q29KartBodyFv
// Size: 96 bytes
void KartBody::updateAudio() {
    // If audioSystem (0x30) is non-null and global byte is non-zero:
    //   Call createSingleHitbox-like function (0x805bac44) with audioSystem
    // If global int bit 0 is 0 (not in some state):
    //   Call soundPlayer function (0x805504dc) with audioSystem (0x30)
    // Call audio update function (0x8083d8bc)
}

// ===== Body collision management =====

// Initialize hitbox groups from BSP data and set default radii
void KartBody::init(BspHitbox* hitboxData, s32 hitboxCount) {
    mHitboxCount = 0;
    mMainHitboxIdx = 0;
    mWheelHitboxBaseIdx = 1;
    mBodyRadius = 0.0f;
    mCollisionScale = 1.0f;
    mCompressionAmount = 0.0f;
    mCompressionTimer = 0;
    mCollisionNormal.setAll(0);
    mCompressionDir.setAll(0);

    // Create hitboxes from BSP data
    if (hitboxData && hitboxCount > 0) {
        createHitboxes(hitboxData, hitboxCount);
    }

    // Set the main body radius from the first hitbox
    if (mHitboxCount > 0) {
        mBodyRadius = mBodyHitboxes[mMainHitboxIdx].radius;
    }
}

// Per-frame: update hitbox positions based on kart pose, manage compression
void KartBody::calc(const EGG::Matrix34f& pose, f32 hitboxScale) {
    // Update compression spring-back each frame
    updateCompression();

    // Apply the collision scale factor (for mega mushroom etc.)
    if (hitboxScale > 0.0f && hitboxScale != mCollisionScale) {
        setHitboxScale(hitboxScale);
    }

    // Transform all active hitbox positions by the kart's current pose
    for (s32 i = 0; i < mHitboxCount && i < 8; i++) {
        if (!mBodyHitboxes[i].enabled) {
            continue;
        }

        // Transform the base hitbox position through the kart's world matrix
        EGG::Vector3f basePos = mBodyHitboxes[i].pos;
        EGG::Vector3f transformed;
        transformed.x = pose.m[0][0] * basePos.x + pose.m[0][1] * basePos.y +
                        pose.m[0][2] * basePos.z + pose.m[0][3];
        transformed.y = pose.m[1][0] * basePos.x + pose.m[1][1] * basePos.y +
                        pose.m[1][2] * basePos.z + pose.m[1][3];
        transformed.z = pose.m[2][0] * basePos.x + pose.m[2][1] * basePos.y +
                        pose.m[2][2] * basePos.z + pose.m[2][3];

        // Apply compression distortion to the main body hitbox
        if (i == mMainHitboxIdx && mCompressionAmount > 0.0f) {
            f32 compFactor = 1.0f - mCompressionAmount * 0.5f;
            // Compress along the collision normal direction
            f32 dotN = transformed.x * mCompressionDir.x +
                       transformed.y * mCompressionDir.y +
                       transformed.z * mCompressionDir.z;
            transformed.x -= mCompressionDir.x * dotN * mCompressionAmount * 0.3f;
            transformed.y -= mCompressionDir.y * dotN * mCompressionAmount * 0.3f;
            transformed.z -= mCompressionDir.z * dotN * mCompressionAmount * 0.3f;
        }

        mBodyHitboxes[i].pos = transformed;
    }
}

// Parse BSP collision data to create hitbox groups
void KartBody::createHitboxes(BspHitbox* data, s32 count) {
    if (!data || count <= 0) {
        return;
    }

    // Clamp to maximum hitbox count
    s32 maxCount = count;
    if (maxCount > 8) {
        maxCount = 8;
    }

    mHitboxCount = maxCount;

    // Copy BSP hitbox data into the body hitbox array
    for (s32 i = 0; i < maxCount; i++) {
        mBodyHitboxes[i].pos = data[i].pos;
        mBodyHitboxes[i].radius = data[i].radius;
        mBodyHitboxes[i].enabled = data[i].enabled;
    }

    // Clear any remaining hitbox slots
    for (s32 i = maxCount; i < 8; i++) {
        mBodyHitboxes[i].pos.setAll(0);
        mBodyHitboxes[i].radius = 0.0f;
        mBodyHitboxes[i].enabled = false;
    }

    // Identify the main body hitbox (typically index 0, largest radius)
    f32 maxRadius = 0.0f;
    for (s32 i = 0; i < maxCount; i++) {
        if (mBodyHitboxes[i].enabled && mBodyHitboxes[i].radius > maxRadius) {
            maxRadius = mBodyHitboxes[i].radius;
            mMainHitboxIdx = i;
        }
    }

    // Wheel hitboxes follow the main hitbox
    mWheelHitboxBaseIdx = (mMainHitboxIdx + 1 < maxCount) ? mMainHitboxIdx + 1 : maxCount;
    mBodyRadius = maxRadius;

    // Setup body collision bitmask: first hitbox is body, rest are wheels/special
    // Bit 0: main body active
    // Bits 1-4: wheel hitboxes (up to 4)
    // Bit 5+: special hitboxes
}

// Scale all hitboxes (used for mega mushroom)
void KartBody::setHitboxScale(f32 scale) {
    if (scale <= 0.0f) {
        scale = 1.0f;
    }

    f32 ratio = scale / mCollisionScale;
    mCollisionScale = scale;

    // Scale all active hitbox radii by the ratio
    for (s32 i = 0; i < mHitboxCount && i < 8; i++) {
        if (mBodyHitboxes[i].enabled) {
            mBodyHitboxes[i].radius *= ratio;
        }
    }

    // Update cached body radius
    if (mMainHitboxIdx < mHitboxCount) {
        mBodyRadius = mBodyHitboxes[mMainHitboxIdx].radius;
    }
}

// Return the primary body hitbox for kart-kart collision
const BspHitbox* KartBody::getMainHitbox() const {
    if (mMainHitboxIdx < mHitboxCount && mMainHitboxIdx < 8) {
        return &mBodyHitboxes[mMainHitboxIdx];
    }
    return nullptr;
}

// Return a specific wheel hitbox by index (0-3)
const BspHitbox* KartBody::getWheelHitbox(u8 index) const {
    if (index >= 4) {
        return nullptr;
    }
    s32 idx = mWheelHitboxBaseIdx + static_cast<s32>(index);
    if (idx < mHitboxCount && idx < 8) {
        return &mBodyHitboxes[idx];
    }
    return nullptr;
}

// Return the main body collision radius
f32 KartBody::getBodyRadius() const {
    return mBodyRadius * mCollisionScale;
}

// Compress body hitbox (visual squash on wall hit)
void KartBody::setCompression(f32 amount, const EGG::Vector3f& direction) {
    // Clamp compression amount to valid range
    if (amount < 0.0f) {
        amount = 0.0f;
    }
    if (amount > 1.0f) {
        amount = 1.0f;
    }

    mCompressionAmount = amount;
    mCompressionTimer = COMPRESSION_RECOVERY_FRAMES;

    // Normalize the collision direction if it has significant magnitude
    f32 lenSq = direction.x * direction.x + direction.y * direction.y +
                direction.z * direction.z;
    if (lenSq > 1.0e-8f) {
        f32 invLen = 1.0f / std::sqrt(lenSq);
        mCompressionDir.x = direction.x * invLen;
        mCompressionDir.y = direction.y * invLen;
        mCompressionDir.z = direction.z * invLen;
    }

    // Store as the last collision normal
    mCollisionNormal = mCompressionDir;
}

// Gradually restore compressed hitbox back to normal (spring-back)
void KartBody::updateCompression() {
    if (mCompressionTimer <= 0) {
        mCompressionAmount = 0.0f;
        return;
    }

    // Spring-back: linearly reduce compression over the recovery period
    f32 decayPerFrame = 1.0f / static_cast<f32>(COMPRESSION_RECOVERY_FRAMES);
    mCompressionAmount -= decayPerFrame;

    if (mCompressionAmount <= 0.0f) {
        mCompressionAmount = 0.0f;
        mCompressionTimer = 0;
    } else {
        mCompressionTimer--;
    }
}

// Check if body is currently compressed
bool KartBody::isCompressed() const {
    return mCompressionAmount > 0.0f;
}

// Return the last collision normal vector
const EGG::Vector3f& KartBody::getCollisionNormal() const {
    return mCollisionNormal;
}

// ===== KartBodySub =====

// 0x805a4508 - __ct__Q213KartBodySubFiiPQ29KartBodyiiPvi
// Size: 184 bytes
KartBodySub::KartBodySub(int a, int b, KartBody* body, int c, int d, void* e, int f) {
    this->vtable = nullptr;
    this->vtable2 = nullptr;
    this->_08 = nullptr;
    this->_0c = nullptr;
}

// KartCollideArea definitions moved to Collision/KartCollide.cpp (Phase 6b)