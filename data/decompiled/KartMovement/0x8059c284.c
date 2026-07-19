// GHIRDA Auto-Decompiled
// Address: 0x8059c284 (rel: 0x0899e8)
// Size: 36 bytes, 9 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv

void updateEffectiveRadius__Kart16KartWheelPhysics(void) {
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    uint32_t r3 = *(uint32_t*)(8(r30)); // lwz
    // Compare r3, 0
    if (/* eq */) goto 0x8059c29c; // beq
    // Call 0x80555bf4
    // Compare r31, 0
    if (/* le */) goto 0x8059c2ac; // ble
    r3 = r30; // mr
}
