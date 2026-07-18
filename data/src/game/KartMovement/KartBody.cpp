#include "KartBody.hpp"

namespace Kart {

// ===== KartBody =====

// 0x805a3c94 - __ct__Q29KartBodyFv
// Size: 2164 bytes (very large constructor)
KartBody::KartBody() {
    // Stores vtable at offset 0
    // Initializes fields 0x24-0x2c
    // Checks global race state (b70/b74)
    // Allocates int arrays for effects
    // Calls effect lookup (0x80542528) multiple times for different effect types
    // Allocates 3 sets of effect objects
    // Sets up audio system connections
    // 30 calls total
    memset(&this->_a0, 0, sizeof(this->_a0));
    this->vtable = nullptr;
    this->_04 = nullptr;
    this->_08 = nullptr;
    this->_0c = nullptr;
    this->_14 = nullptr;
    this->_18 = nullptr;
    this->_24 = 0;
    this->_25 = 0;
    this->_26 = 0;
    this->_27 = 0;
    this->_2a = 0;
    this->_2c = nullptr;
    this->sinkDepth = 0.0f;
    this->_94 = 0.0f;
    this->_98 = 0.0f;
}

// 0x805a3b78 - __dt__Q29KartBodyFv
// Size: 152 bytes
KartBody::~KartBody() {
    // Nulls vtable pointer
    // Calls destructor on existing objects
    // Clears two arrays
    this->vtable = nullptr;
    this->_14 = nullptr;
    this->_18 = nullptr;
}

// 0x805a3c10 - createInstance__Q29KartBodyFv (singleton factory)
// Size: 132 bytes
KartBody* KartBody::createInstance() {
    // Checks global singleton pointer
    // Allocates 0x38 bytes
    // Calls constructor at 0x805a3c98
    // Stores to global
    static KartBody* instance = nullptr;
    if (!instance) {
        instance = new KartBody();
    }
    return instance;
}

// 0x805a45c0 - createEffectObj__Q29KartBodyFiiiPvi
// Size: 488 bytes
void* KartBody::createEffectObj(int a, int b, int c, void* d, int e, int f) {
    // Allocates 0x360 or 0x348 byte objects based on online flag
    // Calls init (0x8059d540)
    // Stores vtable, indexes into arrays at 0x14/0x18
    return nullptr;
}

// 0x805a47a8 - countActiveEffects__Q29KartBodyCFv
// Size: 144 bytes
int KartBody::countActiveEffects() const {
    // Iterates array at offset 0x18 (count from 0x20)
    // Checks bit 0x1c at offset 0x6c of each object's pointed-to data at 0x198
    // Returns clz(total-active)/32
    return 0;
}

// 0x805a4838 - updateAudio__Q29KartBodyFv
// Size: 96 bytes
void KartBody::updateAudio() {
    // Calls audio system (0x805bac44)
    // Checks global state
    // Calls sound player (0x805504dc)
    // Calls audio update (0x8083d8bc)
}

// ===== KartBodySub =====

// 0x805a4508 - __ct__Q213KartBodySubFiiPQ29KartBodyiiPvi
// Size: 184 bytes
KartBodySub::KartBodySub(int a, int b, KartBody* body, int c, int d, void* e, int f) {
    // Stores vtable at offset 0
    // Calls scene init (0x805ba760)
    // Stores second vtable at offset 4
    // Allocates arrays
    // 8-register parameter setup
}

// ===== KartCollideArea =====

// 0x8059648c - __ct__Q24Kart15KartCollideAreaFv
// Size: 240 bytes
KartCollideArea::KartCollideArea() {
    // Calls: 0x8059148c, 0x805899cc, 0x805903ec, 0x805b3c6c, 0x80590774,
    //         0x805b3c6c, 0x8059032c, 0x805907bc, 0x805849cc, 0x8059478c
    // Collision area initialization
}

KartCollideArea::~KartCollideArea() {}
void KartCollideArea::init() {}
void KartCollideArea::vf10() {}
void KartCollideArea::vf14() {}

} // namespace Kart