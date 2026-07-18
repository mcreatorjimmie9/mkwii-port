// GHIRDA Auto-Decompiled
// Address: 0x8059c760 (rel: 0x089ec4)
// Size: 640 bytes, 160 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff

void calcCollision__Kart14KartSusPhysics(EGG::Vector3f* vec) {
    *(float*)(0x130(r3)) = f0; // stfs
    float f0 = *(float*)(0xc(r4)); // lfs
    *(float*)(0x134(r3)) = f0; // stfs
    return;
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    goto 0x805b1cc4; // b
    r6 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    float f1 = *(float*)(0(r6)); // lfs
    goto 0x805b1624; // b
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    *(double*)(0x10(r1)) = f31; // stfd
    /* xscmpeqdp vs31, f1, f0 */ // 0xf3e10018
    float f10 = *(float*)(0x40(r3)); // lfs
    float f0 = *(float*)(0xc(r4)); // lfs
    float f31 = *(float*)(0x34(r3)); // lfs
    float f13 = *(float*)(0(r4)); // lfs
    f7 = f10 * f0; // fmuls
    float f12 = *(float*)(0x38(r3)); // lfs
    f5 = f31 * f0; // fmuls
    float f9 = *(float*)(0x3c(r3)); // lfs
    f4 = f10 * f13; // fmuls
    float f11 = *(float*)(4(r4)); // lfs
    float f8 = *(float*)(8(r4)); // lfs
    f6 = f31 * f13; // fmuls
    f5 = f5 + f4; // fadds
    r3 = r3 + 0x34; // addi
    f3 = f12 * f0; // fmuls
    f2 = f10 * f11; // fmuls
    f1 = f9 * f0; // fmuls
    f0 = f10 * f8; // fmuls
    f10 = f7 - f6; // fsubs
    f7 = f12 * f11; // fmuls
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
    /* .word 0xe3e10018 */ // unknown instruction
    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
    double f31 = *(double*)(0x10(r1)); // lfd
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x20; // addi
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    *(double*)(0x10(r1)) = f31; // stfd
    /* xscmpeqdp vs31, f1, f0 */ // 0xf3e10018
    float f10 = *(float*)(0x70(r3)); // lfs
    float f0 = *(float*)(0xc(r4)); // lfs
    float f31 = *(float*)(0x64(r3)); // lfs
    float f13 = *(float*)(0(r4)); // lfs
    f7 = f10 * f0; // fmuls
    float f12 = *(float*)(0x68(r3)); // lfs
    f5 = f31 * f0; // fmuls
    float f9 = *(float*)(0x6c(r3)); // lfs
    f4 = f10 * f13; // fmuls
    float f11 = *(float*)(4(r4)); // lfs
    float f8 = *(float*)(8(r4)); // lfs
    f6 = f31 * f13; // fmuls
    f5 = f5 + f4; // fadds
    r3 = r3 + 0x64; // addi
    f3 = f12 * f0; // fmuls
    f2 = f10 * f11; // fmuls
    f1 = f9 * f0; // fmuls
    f0 = f10 * f8; // fmuls
    f10 = f7 - f6; // fsubs
    f7 = f12 * f11; // fmuls
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
    /* .word 0xe3e10018 */ // unknown instruction
    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
    double f31 = *(double*)(0x10(r1)); // lfd
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x20; // addi
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    *(double*)(0x10(r1)) = f31; // stfd
    /* xscmpeqdp vs31, f1, f0 */ // 0xf3e10018
    float f10 = *(float*)(0x30(r3)); // lfs
    float f0 = *(float*)(0xc(r4)); // lfs
    float f31 = *(float*)(0x24(r3)); // lfs
    float f13 = *(float*)(0(r4)); // lfs
    f7 = f10 * f0; // fmuls
    float f12 = *(float*)(0x28(r3)); // lfs
    f5 = f31 * f0; // fmuls
    float f9 = *(float*)(0x2c(r3)); // lfs
    f4 = f10 * f13; // fmuls
    float f11 = *(float*)(4(r4)); // lfs
    float f8 = *(float*)(8(r4)); // lfs
    f6 = f31 * f13; // fmuls
    f5 = f5 + f4; // fadds
    r3 = r3 + 0x24; // addi
    f3 = f12 * f0; // fmuls
    f2 = f10 * f11; // fmuls
    f1 = f9 * f0; // fmuls
    f0 = f10 * f8; // fmuls
    f10 = f7 - f6; // fsubs
    f7 = f12 * f11; // fmuls
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
    /* .word 0xe3e10018 */ // unknown instruction
    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
    double f31 = *(double*)(0x10(r1)); // lfd
    /* mtlr r0 */
    // Restore stack
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
}
