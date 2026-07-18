// GHIRDA Auto-Decompiled
// Address: 0x8059ca5c (rel: 0x08a1c0)
// Size: 1104 bytes, 276 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: WheelPhysicsHolder_applySuspensions

void WheelPhysicsHolder_applySuspensions(void) {
    f5 = f4 + f3; // fadds
    f4 = f2 + f0; // fadds
    f3 = f31 * f8; // fmuls
    f0 = f12 * f13; // fmuls
    f1 = f10 - f1; // fsubs
    f2 = f7 - f6; // fsubs
    f3 = f5 - f3; // fsubs
    f4 = f4 - f0; // fsubs
    // Call 0x80555bf4
    /* .word 0xe3e10018 */ // unknown instruction
    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
    double f31 = *(double*)(0x10(r1)); // lfd
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x20; // addi
    return;
    *(uint32_t*)(-0x30(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x34(r1)) = r0; // stw
    *(double*)(0x20(r1)) = f31; // stfd
    /* .word 0xf3e10028 */ // unknown instruction
    float f10 = *(float*)(0xc(r4)); // lfs
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = r3; // mr
    float f31 = *(float*)(0(r4)); // lfs
    uint32_t r5 = *(uint32_t*)(4(r3)); // lwz
    r3 = r1 + 0x8; // addi
    float f12 = *(float*)(4(r4)); // lfs
    float f0 = *(float*)(0xfc(r5)); // lfs
    float f13 = *(float*)(0xf0(r5)); // lfs
    float f11 = *(float*)(0xf4(r5)); // lfs
    f7 = f10 * f0; // fmuls
    float f9 = *(float*)(8(r4)); // lfs
    f5 = f31 * f0; // fmuls
    f4 = f10 * f13; // fmuls
    float f8 = *(float*)(0xf8(r5)); // lfs
    f6 = f31 * f13; // fmuls
    f3 = f12 * f0; // fmuls
    f2 = f10 * f11; // fmuls
    f1 = f9 * f0; // fmuls
    f0 = f10 * f8; // fmuls
    f10 = f7 - f6; // fsubs
    f7 = f12 * f11; // fmuls
    f5 = f5 + f4; // fadds
    f3 = f3 + f2; // fadds
    f0 = f1 + f0; // fadds
    f6 = f12 * f8; // fmuls
    f10 = f10 - f7; // fsubs
    f1 = f9 * f8; // fmuls
    f7 = f6 + f5; // fadds
    f4 = f9 * f13; // fmuls
    f2 = f31 * f11; // fmuls
    f6 = f9 * f11; // fmuls
    f5 = f4 + f3; // fadds
    f4 = f2 + f0; // fadds
    f3 = f31 * f8; // fmuls
    f0 = f12 * f13; // fmuls
    f1 = f10 - f1; // fsubs
    f2 = f7 - f6; // fsubs
    f3 = f5 - f3; // fsubs
    f4 = f4 - f0; // fsubs
    // Call 0x80555bf4
    uint32_t r3 = *(uint32_t*)(4(r31)); // lwz
    float f0 = *(float*)(8(r1)); // lfs
    *(float*)(0xf0(r3)) = f0; // stfs
    float f0 = *(float*)(0xc(r1)); // lfs
    *(float*)(0xf4(r3)) = f0; // stfs
    float f0 = *(float*)(0x10(r1)); // lfs
    *(float*)(0xf8(r3)) = f0; // stfs
    float f0 = *(float*)(0x14(r1)); // lfs
    *(float*)(0xfc(r3)) = f0; // stfs
    /* .word 0xe3e10028 */ // unknown instruction
    double f31 = *(double*)(0x20(r1)); // lfd
    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x34(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x30; // addi
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    float f2 = *(float*)(4(r4)); // lfs
    float f5 = *(float*)(0x88(r3)); // lfs
    float f0 = *(float*)(8(r4)); // lfs
    f2 = f2 - f5; // fsubs
    float f6 = *(float*)(0x8c(r3)); // lfs
    float f3 = *(float*)(0(r4)); // lfs
    float f8 = *(float*)(0x84(r3)); // lfs
    f0 = f0 - f6; // fsubs
    f4 = f2 * f1; // fmuls
    f7 = f3 - f8; // fsubs
    *(float*)(0xc(r1)) = f2; // stfs
    f3 = f0 * f1; // fmuls
    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
    f2 = f5 + f4; // fadds
    f5 = f7 * f1; // fmuls
    f0 = f6 + f3; // fadds
    *(float*)(8(r1)) = f7; // stfs
    f1 = f8 + f5; // fadds
    *(float*)(0x88(r3)) = f2; // stfs
    *(float*)(0x8c(r3)) = f0; // stfs
    *(float*)(0x84(r3)) = f1; // stfs
    *(float*)(0xb0(r4)) = f1; // stfs
    float f0 = *(float*)(0x88(r3)); // lfs
    *(float*)(0xb4(r4)) = f0; // stfs
    float f0 = *(float*)(0x8c(r3)); // lfs
    *(float*)(8(r1)) = f5; // stfs
    *(float*)(0xc(r1)) = f4; // stfs
    *(float*)(0x10(r1)) = f3; // stfs
    *(float*)(0xb8(r4)) = f0; // stfs
    r1 = r1 + 0x20; // addi
    return;
    // Compare r4, 0
    if (/* eq */) goto 0x8059cc20; // beq
    f3 = f1; // fmr
    goto 0x8059cc24; // b
    f3 = f2; // fmr
    float f0 = *(float*)(0x84(r3)); // lfs
    // Compare r4, 0
    f0 = f0 * f3; // fmuls
    *(float*)(0x84(r3)) = f0; // stfs
    if (/* eq */) goto 0x8059cc40; // beq
    f3 = f1; // fmr
    goto 0x8059cc44; // b
    f3 = f2; // fmr
    float f0 = *(float*)(0x88(r3)); // lfs
    // Compare r4, 0
    f0 = f0 * f3; // fmuls
    *(float*)(0x88(r3)) = f0; // stfs
    if (/* eq */) goto 0x8059cc5c; // beq
    goto 0x8059cc60; // b
    f1 = f2; // fmr
    float f0 = *(float*)(0x8c(r3)); // lfs
    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
    f1 = f0 * f1; // fmuls
    float f0 = *(float*)(0x84(r3)); // lfs
    *(float*)(0x8c(r3)) = f1; // stfs
    *(float*)(0xb0(r4)) = f0; // stfs
    float f0 = *(float*)(0x88(r3)); // lfs
    *(float*)(0xb4(r4)) = f0; // stfs
    float f0 = *(float*)(0x8c(r3)); // lfs
    *(float*)(0xb8(r4)) = f0; // stfs
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    float f2 = *(float*)(4(r4)); // lfs
    float f5 = *(float*)(0x94(r3)); // lfs
    float f0 = *(float*)(8(r4)); // lfs
    f2 = f2 - f5; // fsubs
    float f6 = *(float*)(0x98(r3)); // lfs
    float f3 = *(float*)(0(r4)); // lfs
    float f8 = *(float*)(0x90(r3)); // lfs
    f0 = f0 - f6; // fsubs
    f4 = f2 * f1; // fmuls
    f7 = f3 - f8; // fsubs
    *(float*)(0xc(r1)) = f2; // stfs
    f3 = f0 * f1; // fmuls
    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
    f2 = f5 + f4; // fadds
    f5 = f7 * f1; // fmuls
    f0 = f6 + f3; // fadds
    *(float*)(8(r1)) = f7; // stfs
    f1 = f8 + f5; // fadds
    *(float*)(0x94(r3)) = f2; // stfs
    *(float*)(0x98(r3)) = f0; // stfs
    *(float*)(0x90(r3)) = f1; // stfs
    *(float*)(0xc8(r4)) = f1; // stfs
    float f0 = *(float*)(0x94(r3)); // lfs
    *(float*)(0xcc(r4)) = f0; // stfs
    float f0 = *(float*)(0x98(r3)); // lfs
    *(float*)(8(r1)) = f5; // stfs
    *(float*)(0xc(r1)) = f4; // stfs
    *(float*)(0x10(r1)) = f3; // stfs
    *(float*)(0xd0(r4)) = f0; // stfs
    r1 = r1 + 0x20; // addi
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    *(double*)(0x10(r1)) = f31; // stfd
    /* xscmpeqdp vs31, f1, f0 */ // 0xf3e10018
    f31 = f1; // fmr
    float f0 = *(float*)(0(r4)); // lfs
    r5 = 0x0 << 16; // lis
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    float f3 = *(float*)(0x90(r3)); // lfs
    float f2 = *(float*)(0x94(r3)); // lfs
    f3 = f3 + f0; // fadds
    float f0 = *(float*)(4(r4)); // lfs
    float f1 = *(float*)(0x98(r3)); // lfs
    f5 = f2 + f0; // fadds
    float f0 = *(float*)(8(r4)); // lfs
    f2 = f3 * f3; // fmuls
    f4 = f1 + f0; // fadds
    *(float*)(0x90(r3)) = f3; // stfs
    f1 = f5 * f5; // fmuls
    float f0 = *(float*)(0(r5)); // lfs
    f3 = f4 * f4; // fmuls
    *(float*)(0x94(r3)) = f5; // stfs
    f1 = f2 + f1; // fadds
    *(float*)(0x98(r3)) = f4; // stfs
    f1 = f3 + f1; // fadds
    /* .word 0xfc010040 */ // unknown instruction
    /* cror cr0eq, cr0lt, cr0eq */
    /* mfcr r0 */ // SPR
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */
    if (/* ne */) goto 0x8059cddc; // bne
    r3 = r3 + 0x90; // addi
    // Call 0x80555bf4
    /* .word 0xfc1f0840 */ // unknown instruction
    if (/* ge */) goto 0x8059cda0; // bge
    f1 = f31; // fmr
    float f2 = *(float*)(0x94(r31)); // lfs
    float f0 = *(float*)(0x98(r31)); // lfs
    f2 = f2 * f1; // fmuls
    float f3 = *(float*)(0x90(r31)); // lfs
    f0 = f0 * f1; // fmuls
    uint32_t r3 = *(uint32_t*)(4(r31)); // lwz
    f1 = f3 * f1; // fmuls
    *(float*)(0x94(r31)) = f2; // stfs
    *(float*)(0x98(r31)) = f0; // stfs
    *(float*)(0x90(r31)) = f1; // stfs
    *(float*)(0xc8(r3)) = f1; // stfs
    float f0 = *(float*)(0x94(r31)); // lfs
    *(float*)(0xcc(r3)) = f0; // stfs
    float f0 = *(float*)(0x98(r31)); // lfs
    *(float*)(0xd0(r3)) = f0; // stfs
    /* .word 0xe3e10018 */ // unknown instruction
    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
    double f31 = *(double*)(0x10(r1)); // lfd
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x20; // addi
    return;
    // Compare r4, 0
    if (/* eq */) goto 0x8059ce08; // beq
    f3 = f1; // fmr
    goto 0x8059ce0c; // b
    f3 = f2; // fmr
    float f0 = *(float*)(0x90(r3)); // lfs
    // Compare r4, 0
    f0 = f0 * f3; // fmuls
    *(float*)(0x90(r3)) = f0; // stfs
    if (/* eq */) goto 0x8059ce28; // beq
    f3 = f1; // fmr
    goto 0x8059ce2c; // b
    f3 = f2; // fmr
    float f0 = *(float*)(0x94(r3)); // lfs
    // Compare r4, 0
    f0 = f0 * f3; // fmuls
    *(float*)(0x94(r3)) = f0; // stfs
    if (/* eq */) goto 0x8059ce44; // beq
    goto 0x8059ce48; // b
    f1 = f2; // fmr
    float f2 = *(float*)(0x98(r3)); // lfs
    r4 = 0x0 << 16; // lis
    float f0 = *(float*)(0(r4)); // lfs
    f1 = f2 * f1; // fmuls
    *(float*)(0x94(r3)) = f0; // stfs
    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
    *(float*)(0x98(r3)) = f1; // stfs
    float f0 = *(float*)(0x90(r3)); // lfs
    *(float*)(0xc8(r4)) = f0; // stfs
    float f0 = *(float*)(0x94(r3)); // lfs
    *(float*)(0xcc(r4)) = f0; // stfs
    float f0 = *(float*)(0x98(r3)); // lfs
    *(float*)(0xd0(r4)) = f0; // stfs
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    uint32_t r5 = *(uint32_t*)(4(r3)); // lwz
    r3 = r3 + 0x9c; // addi
    r4 = r5 + 0x100; // addi
    r5 = r5 + 0x68; // addi
    // Call 0x80555bf4
    float f0 = *(float*)(0x9c(r31)); // lfs
}
