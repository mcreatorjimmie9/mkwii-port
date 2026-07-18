// GHIRDA Auto-Decompiled
// Address: 0x80598230 (rel: 0x085994)
// Size: 560 bytes, 140 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: KartSub_createComponents

void KartSub_createComponents(void) {
    /* ori r0, r0, 0x200 */ // 0x60000200
    *(uint32_t*)(0x10(r5)) = r0; // stw
    goto 0x80598290; // b
    uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r5 = *(uint32_t*)(4(r5)); // lwz
    uint32_t r0 = *(uint32_t*)(0x10(r5)); // lwz
    /* rlwinm r0, r0, 0, 0x17, 0x15 */
    *(uint32_t*)(0x10(r5)) = r0; // stw
    goto 0x80598290; // b
    uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r5 = *(uint32_t*)(4(r5)); // lwz
    uint32_t r0 = *(uint32_t*)(0xc(r5)); // lwz
    /* rlwinm r0, r0, 0, 0xb, 9 */
    *(uint32_t*)(0xc(r5)) = r0; // stw
    uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r5 = *(uint32_t*)(4(r5)); // lwz
    uint32_t r0 = *(uint32_t*)(4(r5)); // lwz
    /* rlwinm r0, r0, 0, 0xa, 8 */
    *(uint32_t*)(4(r5)) = r0; // stw
    uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r5 = *(uint32_t*)(4(r5)); // lwz
    uint32_t r0 = *(uint32_t*)(0x10(r5)); // lwz
    /* rlwinm r0, r0, 0, 0x17, 0x15 */
    *(uint32_t*)(0x10(r5)) = r0; // stw
    uint32_t r0 = *(uint32_t*)(0(r4)); // lwz
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */
    if (/* eq */) goto 0x805982b4; // beq
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
    /* ori r0, r0, 0x200 */ // 0x60000200
    *(uint32_t*)(0xc(r3)) = r0; // stw
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
    /* rlwinm r0, r0, 0, 0x17, 0x15 */
    *(uint32_t*)(0xc(r3)) = r0; // stw
    return;
    *(uint32_t*)(-0x40(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x44(r1)) = r0; // stw
    *(double*)(0x30(r1)) = f31; // stfd
    /* xxsel vs31, vs1, vs0, v0 */ // 0xf3e10038
    *(double*)(0x20(r1)) = f30; // stfd
    /* .word 0xf3c10028 */ // unknown instruction
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = r5; // mr
    *(uint32_t*)(0x18(r1)) = r30; // stw
    r30 = r4; // mr
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r3; // mr
    // Call 0x805907bc
    float f30 = *(float*)(0x2c(r3)); // lfs
    r3 = r29; // mr
    // Call 0x8059088c
    r4 = 0x0 << 16; // lis
    float f1 = *(float*)(0x14(r3)); // lfs
    float f0 = *(float*)(0(r4)); // lfs
    r3 = r29; // mr
    f31 = f0 + f1; // fadds
    // Call 0x8059024c
    f1 = f31; // fmr
    r5 = 0x0 << 16; // lis
    r4 = r3; // mr
    uint32_t r3 = *(uint32_t*)(0(r5)); // lwz
    f2 = f30; // fmr
    r6 = r31; // mr
    r5 = 0x1; // li
    // Call 0x80788484
    *(uint32_t*)(0x4c(r30)) = r3; // stw
    /* .word 0xe3e10038 */ // unknown instruction
    double f31 = *(double*)(0x30(r1)); // lfd
    /* .word 0xe3c10028 */ // unknown instruction
    double f30 = *(double*)(0x20(r1)); // lfd
    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
    uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x44(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x40; // addi
    return;
    *(uint32_t*)(-0x30(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x34(r1)) = r0; // stw
    *(double*)(0x20(r1)) = f31; // stfd
    /* .word 0xf3e10028 */ // unknown instruction
    *(double*)(0x10(r1)) = f30; // stfd
    /* xscmpeqdp vs30, f1, f0 */ // 0xf3c10018
    f30 = f1; // fmr
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    // Call 0x80590818
    float f0 = *(float*)(4(r3)); // lfs
    r3 = r31; // mr
    f31 = f30 * f0; // fmuls
    // Call 0x805907bc
    r3 = r31; // mr
    // Call 0x8059156c
    *(float*)(4(r3)) = f31; // stfs
    r3 = r31; // mr
    // Call 0x805907bc
    r4 = 0x0 << 16; // lis
    float f30 = *(float*)(0x2c(r3)); // lfs
    float f0 = *(float*)(0(r4)); // lfs
    r3 = r31; // mr
    f31 = f31 + f0; // fadds
    // Call 0x80591560
    *(float*)(4(r3)) = f31; // stfs
    f0 = f31 + f30; // fadds
    *(float*)(8(r3)) = f0; // stfs
    uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
    /* ori r0, r0, 0x800 */ // 0x60000800
    *(uint32_t*)(0xc(r3)) = r0; // stw
    /* .word 0xe3e10028 */ // unknown instruction
    double f31 = *(double*)(0x20(r1)); // lfd
    /* .word 0xe3c10018 */ // unknown instruction
    double f30 = *(double*)(0x10(r1)); // lfd
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x34(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x30; // addi
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
    /* oris r0, r0, 8 */ // 0x64000008
    *(uint32_t*)(0x14(r3)) = r0; // stw
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
    /* oris r0, r0, 0x10 */ // 0x64000010
    *(uint32_t*)(0x14(r3)) = r0; // stw
    return;
    *(uint32_t*)(-0x30(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x34(r1)) = r0; // stw
    r11 = r1 + 0x30; // addi
    // Call 0x80555bf4
}
