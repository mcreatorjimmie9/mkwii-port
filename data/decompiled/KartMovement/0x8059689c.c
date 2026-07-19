// GHIRDA Auto-Decompiled
// Address: 0x8059689c (rel: 0x084000)
// Size: 424 bytes, 106 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: __ct__Q24Kart9KartStateFPQ24Kart12KartSettings

void Kart9KartState(KartSettings* settings) {
    uint32_t r4 = *(uint32_t*)(0x38(r4)); // lwz
    float f0 = *(float*)(0(r4)); // lfs
    f0 = f0 + f31; // fadds
    *(float*)(0(r4)) = f0; // stfs
    // Call 0x80590a9c
    uint32_t r4 = *(uint32_t*)(0(r28)); // lwz
    /* rlwinm r0, r3, 2, 0x16, 0x1d */
    uint32_t r3 = *(uint32_t*)(0xc(r4)); // lwz
    uint32_t r3 = *(uint32_t*)(r3, r0); // lwzx
    uint8_t r0 = *(uint8_t*)(0x20(r3)); // lbz
    // Compare r0, 1
    if (/* ne */) goto 0x805968e4; // bne
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x38(r3)); // lwz
    float f0 = *(float*)(4(r3)); // lfs
    f0 = f0 + f31; // fadds
    *(float*)(4(r3)) = f0; // stfs
    r3 = r29; // mr
    // Call 0x80590a9c
    /* clrlwi. r0, r3, 0x18 */ // mask lower bits
    if (/* ne */) goto 0x805969cc; // bne
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    /* rlwinm. r0, r3, 0, 0xd, 0xd */
    if (/* eq */) goto 0x805969cc; // beq
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */
    if (/* eq */) goto 0x80596964; // beq
    r3 = 0x0 << 16; // lis
    r4 = 0x0 << 16; // lis
    uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(0xb70(r5)); // lwz
    // Compare r0, 4
    if (/* ne */) goto 0x80596964; // bne
    uint16_t r0 = *(uint16_t*)(0xb9e(r5)); // lhz
    // Compare r0, 3
    if (/* ne */) goto 0x80596964; // bne
    /* fctiwz f0, f31 */ // float->int
    uint32_t r4 = *(uint32_t*)(0x10(r3)); // lwz
    *(double*)(0x48(r1)) = f0; // stfd
    uint32_t r0 = *(uint32_t*)(0x4c(r1)); // lwz
    // Compare r0, 0
    if (/* le */) goto 0x80596964; // ble
    *(double*)(0x48(r1)) = f0; // stfd
    uint32_t r3 = *(uint32_t*)(8(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(0x4c(r1)); // lwz
    r0 = r3 + r0; // add
    *(uint32_t*)(8(r4)) = r0; // stw
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
    /* rlwinm. r0, r0, 0, 2, 2 */
    if (/* eq */) goto 0x805969cc; // beq
    r3 = 0x0 << 16; // lis
    r4 = 0x0 << 16; // lis
    uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(0xb70(r5)); // lwz
    // Compare r0, 4
    if (/* ne */) goto 0x805969cc; // bne
    uint16_t r0 = *(uint16_t*)(0xb9e(r5)); // lhz
    // Compare r0, 0xc
    if (/* ne */) goto 0x805969cc; // bne
    /* fctiwz f0, f31 */ // float->int
    uint32_t r4 = *(uint32_t*)(0x10(r3)); // lwz
    *(double*)(0x48(r1)) = f0; // stfd
    uint32_t r0 = *(uint32_t*)(0x4c(r1)); // lwz
    // Compare r0, 0
    if (/* le */) goto 0x805969cc; // ble
    *(double*)(0x48(r1)) = f0; // stfd
    uint32_t r3 = *(uint32_t*)(8(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(0x4c(r1)); // lwz
    r0 = r3 + r0; // add
    *(uint32_t*)(8(r4)) = r0; // stw
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r5 = *(uint32_t*)(0xc(r4)); // lwz
    /* rlwinm. r0, r5, 0, 0xc, 0xc */
    if (/* ne */) goto 0x80596d14; // bne
    /* rlwinm. r0, r5, 0, 0x1a, 0x1a */
    r3 = 0x0; // li
    if (/* ne */) goto 0x805969f8; // bne
    uint32_t r0 = *(uint32_t*)(0x14(r4)); // lwz
    /* rlwinm. r0, r0, 0, 0x13, 0x13 */
    if (/* eq */) goto 0x805969fc; // beq
    r3 = 0x1; // li
    // Compare r3, 0
    if (/* eq */) goto 0x80596a0c; // beq
    /* rlwinm. r0, r5, 0, 0xd, 0xd */
    if (/* eq */) goto 0x80596c88; // beq
    uint32_t r0 = *(uint32_t*)(0x10(r4)); // lwz
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */
    if (/* eq */) goto 0x80596ab4; // beq
    r3 = r29; // mr
    // Call 0x80590d38
    f1 = fabsf(f1); // fabs
    float f0 = *(float*)(0x30(r31)); // lfs
    /* .word 0xfc010040 */ // unknown instruction
    if (/* gt */) goto 0x80596aa0; // bgt
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */
    if (/* ne */) goto 0x80596aa0; // bne
}
