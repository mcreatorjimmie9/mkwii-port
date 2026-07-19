// GHIRDA Auto-Decompiled
// Address: 0x8059b9bc (rel: 0x089120)
// Size: 52 bytes, 13 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: setBsp__Q24Kart16KartWheelPhysicsFv

void setBsp__Kart16KartWheelPhysics(void) {
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    r29 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    // Compare r3, 0
    if (/* eq */) goto 0x8059bdbc; // beq
    uint8_t r0 = *(uint8_t*)(0x20(r3)); // lbz
    // Compare r0, 0
    if (/* eq */) goto 0x8059bdbc; // beq
    // Call 0x80842214
    /* clrlwi r0, r3, 0x18 */ // mask lower bits
    // Compare r0, 1
    if (/* ne */) goto 0x8059bc3c; // bne
}
