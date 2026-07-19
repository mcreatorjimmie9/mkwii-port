#include <cstring>
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