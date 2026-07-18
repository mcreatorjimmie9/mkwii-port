// GHIRDA Auto-Decompiled
// Address: 0x8059b9f0 (rel: 0x089154)
// Size: 184 bytes, 46 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: reset__Q24Kart16KartWheelPhysicsFv

void reset__Kart16KartWheelPhysics(void) {
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x3; // li
    // Call 0x80566624
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    double f31 = *(double*)(0x10(r28)); // lfd
    r26 = 0x0; // li
    r31 = 0x0 << 16; // lis
    goto 0x8059bc2c; // b
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    /* rlwinm r0, r26, 4, 0x14, 0x1b */
    uint32_t r3 = *(uint32_t*)(0x18(r3)); // lwz
    r3 = r3 + r0; // add
    uint8_t r0 = *(uint8_t*)(0x11(r3)); // lbz
    // Compare r0, 0
    if (/* eq */) goto 0x8059bc28; // beq
    // Compare r26, 0
    if (/* ne */) goto 0x8059bc28; // bne
    r25 = 0x0; // li
    r24 = 0x0; // li
    goto 0x8059bc10; // b
    uint32_t r0 = *(uint32_t*)(0x2c(r20)); // lwz
    /* clrlwi r4, r26, 0x18 */ // mask lower bits
    *(uint32_t*)(0x10(r20)) = r0; // stw
    /* clrlwi r5, r24, 0x18 */ // mask lower bits
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(0x18(r3)); // lwz
    // Call 0x808569b0
    // Compare r3, 0
    r30 = r3; // mr
    if (/* eq */) goto 0x8059bc0c; // beq
    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(4(r4)); // lwz
    /* rlwinm. r0, r0, 0, 0xb, 0xb */
    if (/* eq */) goto 0x8059bc0c; // beq
    uint32_t r0 = *(uint32_t*)(0x20(r3)); // lwz
    // Compare r0, 0
    if (/* eq */) goto 0x8059bc0c; // beq
    uint16_t r0 = *(uint16_t*)(0x24(r3)); // lhz
    /* clrlwi. r0, r0, 0x1f */ // mask lower bits
    if (/* ne */) goto 0x8059bc0c; // bne
    /* addic. r3, r3, 0x18 */ // 0x34630018
}
