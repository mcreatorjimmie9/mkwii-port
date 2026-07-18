// GHIRDA Auto-Decompiled
// Address: 0x8059baa8 (rel: 0x08920c)
// Size: 208 bytes, 52 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f

void setColState__Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f(float a, float b, float c, EGG::Vector3f* d) {
    if (/* eq */) goto 0x8059bc0c; // beq
    uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
    r4 = 0x1; // li
    uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    uint32_t r5 = *(uint32_t*)(0x10(r20)); // lwz
    uint16_t r3 = *(uint16_t*)(0x34(r5)); // lhz
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */
    if (/* ne */) goto 0x8059bad8; // bne
    /* ori r0, r3, 1 */ // 0x60600001
    *(uint16_t*)(0x34(r5)) = r0; // sth
    uint16_t r0 = *(uint16_t*)(0x34(r5)); // lhz
    r4 = 0x1; // li
    /* ori r0, r0, 8 */ // 0x60000008
    *(uint16_t*)(0x34(r5)) = r0; // sth
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    uint32_t r5 = *(uint32_t*)(0x10(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x44(r3)); // lwz
    uint16_t r0 = *(uint16_t*)(0x34(r5)); // lhz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    /* ori r0, r0, 1 */ // 0x60000001
    uint16_t r3 = *(uint16_t*)(4(r3)); // lhz
    *(uint32_t*)(0x34(r1)) = r3; // stw
    double f0 = *(double*)(0x30(r1)); // lfd
    *(uint16_t*)(0x34(r5)) = r0; // sth
    f0 = f0 - f31; // fsubs
    *(float*)(8(r5)) = f0; // stfs
    uint32_t r5 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r20)); // lwz
    uint32_t r6 = *(uint32_t*)(0x18(r5)); // lwz
    uint16_t r5 = *(uint16_t*)(0x48(r6)); // lhz
    uint16_t r6 = *(uint16_t*)(0x4a(r6)); // lhz
    // Call 0x805ba100
    uint32_t r3 = *(uint32_t*)(0x10(r20)); // lwz
    r4 = 0x1; // li
    r5 = 0x0; // li
    // Call 0x80568814
    /* clrlwi r0, r25, 0x18 */ // mask lower bits
    uint32_t r23 = *(uint32_t*)(0x20(r30)); // lwz
    /* cntlzw r0, r0 */ // 0x7c000034
    r21 = 0x0; // li
    r3 = r0 >> 5; // srwi
    r0 = r3 + 0x1; // addi
    /* clrlwi r22, r0, 0x18 */ // mask lower bits
    goto 0x8059bbcc; // b
    r3 = r20; // mr
    // Call 0x805669d0
    uint32_t r3 = *(uint32_t*)(4(r23)); // lwz
    // Call 0x80555bf4
    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
    r3 = r23; // mr
}
