// GHIRDA Auto-Decompiled
// Address: 0x8059bb78 (rel: 0x0892dc)
// Size: 1088 bytes, 272 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f

void calcCollision__Kart16KartWheelPhysics(EGG::Vector3f* a, EGG::Vector3f* b) {
    uint32_t r5 = *(uint32_t*)(0(r29)); // lwz
    r6 = 0x0; // li
    uint32_t r9 = *(uint32_t*)(0x44(r4)); // lwz
    r7 = 0x1; // li
    uint32_t r4 = *(uint32_t*)(0x18(r5)); // lwz
    r8 = 0x0; // li
    uint32_t r10 = *(uint32_t*)(0(r9)); // lwz
    uint16_t r0 = *(uint16_t*)(0x48(r4)); // lhz
    uint16_t r5 = *(uint16_t*)(4(r10)); // lhz
    uint16_t r4 = *(uint16_t*)(0x4a(r4)); // lhz
    r9 = r0 >> 1; // srwi
    uint16_t r0 = *(uint16_t*)(6(r10)); // lhz
    r5 = r5 >> 1; // srwi
    r4 = r4 >> 1; // srwi
    r0 = r0 >> 1; // srwi
    /* subf r5, r9, r5 */ // 0x7ca92850
    /* subf r0, r4, r0 */ // 0x7c040050
    /* clrlwi r4, r5, 0x10 */ // mask lower bits
    /* clrlwi r5, r0, 0x10 */ // mask lower bits
    // Call 0x80566294
    r21 = r21 + 0x1; // addi
    /* clrlwi r0, r21, 0x18 */ // mask lower bits
    // Compare r0, r22
    if (/* lt */) goto 0x8059bb60; // blt
    uint16_t r0 = *(uint16_t*)(0x24(r30)); // lhz
    r3 = r30 + 0x18; // addi
    r4 = 0x0; // li
    /* ori r0, r0, 1 */ // 0x60000001
    *(uint16_t*)(0x24(r30)) = r0; // sth
    uint32_t r12 = *(uint32_t*)(0x18(r30)); // lwz
    uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    r25 = r25 + 0x1; // addi
    /* clrlwi r0, r25, 0x18 */ // mask lower bits
    // Compare r0, 2
    if (/* ge */) goto 0x8059bc28; // bge
    r24 = r24 + 0x1; // addi
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    /* clrlwi r4, r24, 0x18 */ // mask lower bits
    uint32_t r3 = *(uint32_t*)(0x18(r3)); // lwz
    uint8_t r0 = *(uint8_t*)(4(r3)); // lbz
    // Compare r4, r0
    if (/* lt */) goto 0x8059ba54; // blt
    r26 = r26 + 0x1; // addi
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint8_t r0 = *(uint8_t*)(0x21(r3)); // lbz
    // Compare r26, r0
    if (/* lt */) goto 0x8059ba24; // blt
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x3; // li
    // Call 0x805665f0
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x1; // li
    // Call 0x80566624
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    double f31 = *(double*)(0x10(r28)); // lfd
    r21 = 0x0; // li
    r31 = 0x0 << 16; // lis
    r22 = 0x0 << 16; // lis
    goto 0x8059bd5c; // b
    uint32_t r5 = *(uint32_t*)(0x2c(r20)); // lwz
    *(uint32_t*)(0x10(r20)) = r5; // stw
    uint16_t r3 = *(uint16_t*)(0x34(r5)); // lhz
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */
    if (/* ne */) goto 0x8059bc9c; // bne
    /* ori r0, r3, 1 */ // 0x60600001
    *(uint16_t*)(0x34(r5)) = r0; // sth
    uint16_t r0 = *(uint16_t*)(0x34(r5)); // lhz
    r4 = r21; // mr
    /* ori r0, r0, 8 */ // 0x60000008
    *(uint16_t*)(0x34(r5)) = r0; // sth
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    uint32_t r5 = *(uint32_t*)(0x10(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x44(r3)); // lwz
    uint16_t r0 = *(uint16_t*)(0x34(r5)); // lhz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    /* ori r0, r0, 1 */ // 0x60000001
    uint16_t r3 = *(uint16_t*)(4(r3)); // lhz
    *(uint32_t*)(0x3c(r1)) = r3; // stw
    double f0 = *(double*)(0x38(r1)); // lfd
    *(uint16_t*)(0x34(r5)) = r0; // sth
    f0 = f0 - f31; // fsubs
    *(float*)(8(r5)) = f0; // stfs
    uint32_t r3 = *(uint32_t*)(0(r22)); // lwz
    // Call 0x805b9d48
    uint32_t r3 = *(uint32_t*)(0x30(r20)); // lwz
    r4 = 0x1; // li
    r5 = 0x100; // li
    r6 = 0x100; // li
    // Call 0x805ba100
    uint32_t r3 = *(uint32_t*)(0x10(r20)); // lwz
    r4 = 0x1; // li
    r5 = 0x0; // li
    // Call 0x80568814
    r3 = r20; // mr
    // Call 0x805669d0
    uint32_t r3 = *(uint32_t*)(0(r22)); // lwz
    /* clrlwi r4, r21, 0x18 */ // mask lower bits
    // Call 0x805b9e80
    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
    r6 = 0x0; // li
    r7 = 0x1; // li
    r8 = 0x0; // li
    uint32_t r4 = *(uint32_t*)(0x44(r4)); // lwz
    uint32_t r5 = *(uint32_t*)(0(r4)); // lwz
    uint16_t r4 = *(uint16_t*)(4(r5)); // lhz
    uint16_t r0 = *(uint16_t*)(6(r5)); // lhz
    r5 = r4 >> 1; // srwi
    r4 = r0 >> 1; // srwi
    r5 = r5 + 0x-80; // addi
    r0 = r4 + 0x-80; // addi
    /* clrlwi r4, r5, 0x10 */ // mask lower bits
    /* clrlwi r5, r0, 0x10 */ // mask lower bits
    // Call 0x80566294
    r21 = r21 + 0x1; // addi
    uint32_t r3 = *(uint32_t*)(0(r22)); // lwz
    uint8_t r0 = *(uint8_t*)(0x21(r3)); // lbz
    // Compare r21, r0
    if (/* lt */) goto 0x8059bc80; // blt
    r4 = 0x0 << 16; // lis
    r3 = 0x0 << 16; // lis
    uint32_t r0 = *(uint32_t*)(0(r4)); // lwz
    r3 = r3 + 0x0; // addi
    uint32_t r6 = *(uint32_t*)(0x10(r20)); // lwz
    r4 = 0x1; // li
    r5 = r0 * 0xc; // mulli
    double f1 = *(double*)(0x10(r28)); // lfd
    uint16_t r0 = *(uint16_t*)(0x34(r6)); // lhz
    uint16_t r3 = *(uint16_t*)(r3, r5); // lhzx
    /* ori r0, r0, 1 */ // 0x60000001
    *(uint32_t*)(0x34(r1)) = r3; // stw
    double f0 = *(double*)(0x30(r1)); // lfd
    *(uint16_t*)(0x34(r6)) = r0; // sth
    f0 = f0 - f1; // fsubs
    *(float*)(8(r6)) = f0; // stfs
    uint32_t r0 = *(uint32_t*)(0x28(r20)); // lwz
    *(uint32_t*)(0x10(r20)) = r0; // stw
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    // Call 0x805665f0
    r3 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    // Call 0x80607408
    // Compare r3, 0
    if (/* eq */) goto 0x8059bf1c; // beq
    r3 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint8_t r0 = *(uint8_t*)(0x20(r3)); // lbz
    // Compare r0, 0
    if (/* eq */) goto 0x8059bf1c; // beq
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x2; // li
    // Call 0x80566624
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    uint32_t r6 = *(uint32_t*)(0x2c(r20)); // lwz
    *(uint32_t*)(0x10(r20)) = r6; // stw
    uint16_t r3 = *(uint16_t*)(0x34(r6)); // lhz
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */
    if (/* ne */) goto 0x8059be2c; // bne
    /* ori r0, r3, 1 */ // 0x60600001
    *(uint16_t*)(0x34(r6)) = r0; // sth
    uint16_t r0 = *(uint16_t*)(0x34(r6)); // lhz
    r5 = 0x0 << 16; // lis
    double f1 = *(double*)(0x10(r28)); // lfd
    r4 = 0x1; // li
    /* ori r0, r0, 8 */ // 0x60000008
    *(uint16_t*)(0x34(r6)) = r0; // sth
    uint32_t r3 = *(uint32_t*)(0(r5)); // lwz
    uint32_t r6 = *(uint32_t*)(0x10(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x44(r3)); // lwz
    uint16_t r0 = *(uint16_t*)(0x34(r6)); // lhz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    /* ori r0, r0, 1 */ // 0x60000001
    uint16_t r3 = *(uint16_t*)(4(r3)); // lhz
    *(uint32_t*)(0x3c(r1)) = r3; // stw
    double f0 = *(double*)(0x38(r1)); // lfd
    *(uint16_t*)(0x34(r6)) = r0; // sth
    f0 = f0 - f1; // fsubs
    *(float*)(8(r6)) = f0; // stfs
    uint32_t r5 = *(uint32_t*)(0(r5)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r20)); // lwz
    uint32_t r5 = *(uint32_t*)(0x44(r5)); // lwz
    uint32_t r6 = *(uint32_t*)(0(r5)); // lwz
    uint16_t r5 = *(uint16_t*)(4(r6)); // lhz
    uint16_t r6 = *(uint16_t*)(6(r6)); // lhz
    // Call 0x805ba100
    uint32_t r3 = *(uint32_t*)(0x10(r20)); // lwz
    r4 = 0x1; // li
    r5 = 0x0; // li
    // Call 0x80568814
    r3 = r20; // mr
    // Call 0x805669d0
    r3 = 0x0 << 16; // lis
    r4 = 0x0; // li
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    r5 = 0x0; // li
    r6 = 0x0; // li
    r7 = 0x1; // li
    uint32_t r3 = *(uint32_t*)(0x28(r3)); // lwz
    r8 = 0x0; // li
    // Call 0x80566294
    r4 = 0x0 << 16; // lis
    r3 = 0x0 << 16; // lis
    uint32_t r0 = *(uint32_t*)(0(r4)); // lwz
    r3 = r3 + 0x0; // addi
    uint32_t r6 = *(uint32_t*)(0x10(r20)); // lwz
    r4 = 0x2; // li
    r5 = r0 * 0xc; // mulli
    double f1 = *(double*)(0x10(r28)); // lfd
    uint16_t r0 = *(uint16_t*)(0x34(r6)); // lhz
    uint16_t r3 = *(uint16_t*)(r3, r5); // lhzx
    /* ori r0, r0, 1 */ // 0x60000001
    *(uint32_t*)(0x34(r1)) = r3; // stw
    double f0 = *(double*)(0x30(r1)); // lfd
    *(uint16_t*)(0x34(r6)) = r0; // sth
    f0 = f0 - f1; // fsubs
    *(float*)(8(r6)) = f0; // stfs
    uint32_t r0 = *(uint32_t*)(0x28(r20)); // lwz
    *(uint32_t*)(0x10(r20)) = r0; // stw
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    // Call 0x805665f0
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x0; // li
    // Call 0x80566624
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r3 = *(uint32_t*)(0x30(r3)); // lwz
    // Call 0x80555bf4
    uint32_t r3 = *(uint32_t*)(0x30(r20)); // lwz
    r4 = 0x0; // li
    r5 = 0x0; // li
    r6 = 0x0; // li
    // Call 0x805ba100
    uint32_t r3 = *(uint32_t*)(0x10(r20)); // lwz
    r4 = 0x1; // li
    r5 = 0x0; // li
    // Call 0x805686cc
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    r3 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    // Call 0x8067f350
    float f0 = *(float*)(0x20(r1)); // lfs
    r3 = r27; // mr
    *(float*)(0x64(r27)) = f0; // stfs
    float f0 = *(float*)(0x24(r1)); // lfs
    *(float*)(0x68(r27)) = f0; // stfs
    float f0 = *(float*)(0x28(r1)); // lfs
    *(float*)(0x6c(r27)) = f0; // stfs
    float f0 = *(float*)(0x14(r1)); // lfs
    *(float*)(0x70(r27)) = f0; // stfs
    float f0 = *(float*)(0x18(r1)); // lfs
    *(float*)(0x74(r27)) = f0; // stfs
    float f0 = *(float*)(0x1c(r1)); // lfs
    *(float*)(0x78(r27)) = f0; // stfs
}
