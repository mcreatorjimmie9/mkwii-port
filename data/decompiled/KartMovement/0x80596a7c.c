// GHIRDA Auto-Decompiled
// Address: 0x80596a7c (rel: 0x0841e0)
// Size: 160 bytes, 40 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: reset__Q24Kart9KartStateFv

void reset__Kart9KartState(void) {
    f1 = f1 * f0; // fmuls
    float f3 = *(float*)(8(r4)); // lfs
    float f0 = *(float*)(0x2c(r31)); // lfs
    f3 = f4 * f3; // fmuls
    f1 = f2 + f1; // fadds
    f1 = f3 + f1; // fadds
    f1 = fabsf(f1); // fabs
    /* .word 0xfc010040 */ // unknown instruction
    if (/* le */) goto 0x80596ab4; // ble
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0x10(r3)); // lwz
    /* rlwinm r0, r0, 0, 0x1c, 0x1a */
    *(uint32_t*)(0x10(r3)) = r0; // stw
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r5 = *(uint32_t*)(0x10(r4)); // lwz
    /* rlwinm. r0, r5, 0, 0x1a, 0x1a */
    if (/* eq */) goto 0x80596af4; // beq
    /* rlwinm. r0, r5, 0, 0x1c, 0x1c */
    if (/* ne */) goto 0x80596af4; // bne
    uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
    /* rlwinm. r0, r4, 0, 0x19, 0x1a */
    if (/* eq */) goto 0x80596ae4; // beq
    /* rlwinm. r0, r4, 0, 0x13, 0x13 */
    if (/* eq */) goto 0x80596af4; // beq
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0x10(r3)); // lwz
    /* rlwinm r0, r0, 0, 0x1b, 0x19 */
    *(uint32_t*)(0x10(r3)) = r0; // stw
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
    /* clrlwi. r0, r0, 0x1f */ // mask lower bits
    if (/* ne */) goto 0x80596b24; // bne
    uint32_t r0 = *(uint32_t*)(0x10(r3)); // lwz
    r3 = r29; // mr
    /* rlwinm r28, r0, 0x1c, 0x1f, 0x1f */
    // Call 0x8059040c
    /* cntlzw r0, r28 */ // 0x7f800034
}
