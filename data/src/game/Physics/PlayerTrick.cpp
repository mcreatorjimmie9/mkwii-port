#include "PlayerTrick.hpp"
#include <cstdint>

// Forward declarations for extern stubs
extern "C" {
void sub_0x0005ec0c(void* p);
void sub_0x0005ebf0(void* p);
void sub_0x0005e564(void* p);
}

// Helper macros for pointer arithmetic with void*
#define PTR_ADD(base, offset) reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(base) + (offset))
#define PTR_READ_U32(base, offset) (*reinterpret_cast<u32*>(PTR_ADD(base, offset)))
#define PTR_READ_U8(base, offset) (*reinterpret_cast<u8*>(PTR_ADD(base, offset)))
#define PTR_READ_S16(base, offset) (*reinterpret_cast<s16*>(PTR_ADD(base, offset)))
#define PTR_WRITE_U32(base, offset, val) (*reinterpret_cast<u32*>(PTR_ADD(base, offset)) = (val))
#define PTR_WRITE_U8(base, offset, val) (*reinterpret_cast<u8*>(PTR_ADD(base, offset)) = (val))
#define PTR_WRITE_S16(base, offset, val) (*reinterpret_cast<s16*>(PTR_ADD(base, offset)) = (val))

// ============================================================================
// PlayerTrick Implementation
// Addresses 0x80575a44 - 0x80576afc
// ============================================================================

// ============================================================================
// PlayerTrick() — Constructor
// 0x80575a44 (100 bytes)
// ============================================================================
PlayerTrick::PlayerTrick() {
    nextTimer = 0;
    boostRampEnabled = false;
}

// ============================================================================
// updateNext()
// 0x80575b38 (308 bytes)
// Called when the player is airborne to check if trick conditions are met.
// ============================================================================
void PlayerTrick::updateNext() {
    // Get player state flags
    void* kartObj = this->pointers ? *reinterpret_cast<void**>(this->pointers) : nullptr;
    if (!kartObj) return;
    void* state = *reinterpret_cast<void**>(PTR_ADD(kartObj, 4));
    u32 flags8 = PTR_READ_U32(state, 8);
    u8 trickState = PTR_READ_U8(this, 0x3A);

    // Check if trick-related flags are set (0x461 = bits 0,1,6,9)
    if (!(flags8 & 0x461)) {
        return;
    }

    if (trickState != 0) {
        if (trickState >= 0x0E) {
            PTR_WRITE_U8(this, 0x18, 0x0E);
            PTR_WRITE_S16(this, 0x1A, 0);
        } else {
            s16 timer = PTR_READ_S16(this, 0x1A);
            if (timer <= 0) {
                PTR_WRITE_S16(this, 0x1A, 0);
            }
        }

        if (PTR_READ_S16(this, 0x1A) <= 0) {
            // Check trick validity — placeholder logic
        }
    }
}

// ============================================================================
// tryStart(left)
// 0x80575d7c (364 bytes)
// Attempts to start a trick based on the left direction vector.
// ============================================================================
void PlayerTrick::tryStart(Vec3* left) {
    // Check player state for trick blocking flags
    void* kartObj = this->pointers ? *reinterpret_cast<void**>(this->pointers) : nullptr;
    if (!kartObj) return;
    void* state = *reinterpret_cast<void**>(PTR_ADD(kartObj, 4));
    u32 flags14 = PTR_READ_U32(state, 0x14);

    // Check bit 28 (0x10000000) — blocks trick
    if (flags14 & 0x10000000) {
        return;
    }

    // sub_0x0005ec0c(this);

    // Check trick state and type
    u32 stateFlags = PTR_READ_U32(this, 0x1C); // masked with 0x1FF
    u32 trickType = PTR_READ_U32(this, 0x18); // masked with 0x1FF
    if (stateFlags != trickType) {
        return;
    }

    // Check if airborne (flag bit 9 of state)
    void* state2 = *reinterpret_cast<void**>(PTR_ADD(kartObj, 4));
    u32 flags8b = PTR_READ_U32(state2, 8);
    if (!(flags8b & 0x200)) {
        return;
    }

    // Determine trick category
    TrickCategory cat = STUNT;
    this->startInner(cat);

    // Set airborne trick flag — clear trick-related flags
    void* state3 = *reinterpret_cast<void**>(PTR_ADD(kartObj, 4));
    u32 flags8c = PTR_READ_U32(state3, 8);
    flags8c &= ~0x461;
    PTR_WRITE_U32(state3, 8, flags8c);
}

// Virtual destructors — placeholder implementations
PlayerTrick::~PlayerTrick() {}
void PlayerTrick::start(Vec3* left) {}
void PlayerTrick::startInner(TrickCategory cat) {}
void PlayerTrick::updateRot() {}
void PlayerTrick::update() {}
void PlayerTrick::end() {}

PlayerTrickBike::~PlayerTrickBike() {}
void PlayerTrickBike::start(Vec3* left) {}
void PlayerTrickBike::startInner(TrickCategory cat) {}
void PlayerTrickBike::updateRot() {}
