// GHIRDA Auto-Decompiled
// Address: 0x8059c514 (rel: 0x089c78)
// Size: 588 bytes, 147 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: setInitialState__Q24Kart14KartSusPhysicsFv

void setInitialState__Kart14KartSusPhysics(void) {
    float f11 = *(float*)(0x28(r3)); // lfs
    f4 = f10 * f13; // fmuls
    float f9 = *(float*)(0x3c(r3)); // lfs
    float f8 = *(float*)(0x2c(r3)); // lfs
    f6 = f29 * f13; // fmuls
    f5 = f5 + f4; // fadds
    r3 = r3 + 0x44; // addi
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
    f2 = f29 * f11; // fmuls
    f6 = f9 * f11; // fmuls
    f5 = f4 + f3; // fadds
    f4 = f2 + f0; // fadds
    f3 = f29 * f8; // fmuls
    f0 = f12 * f13; // fmuls
    f1 = f10 - f1; // fsubs
    f2 = f7 - f6; // fsubs
    f3 = f5 - f3; // fsubs
    f4 = f4 - f0; // fsubs
    // Call 0x80555bf4
    float f10 = *(float*)(0x70(r28)); // lfs
    r3 = r28 + 0x74; // addi
    float f0 = *(float*)(0x60(r28)); // lfs
    float f29 = *(float*)(0x64(r28)); // lfs
    float f13 = *(float*)(0x54(r28)); // lfs
    f7 = f10 * f0; // fmuls
    float f12 = *(float*)(0x68(r28)); // lfs
    f5 = f29 * f0; // fmuls
    float f11 = *(float*)(0x58(r28)); // lfs
    f4 = f10 * f13; // fmuls
    float f9 = *(float*)(0x6c(r28)); // lfs
    float f8 = *(float*)(0x5c(r28)); // lfs
    f6 = f29 * f13; // fmuls
    f5 = f5 + f4; // fadds
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
    f2 = f29 * f11; // fmuls
    f6 = f9 * f11; // fmuls
    f5 = f4 + f3; // fadds
    f4 = f2 + f0; // fadds
    f3 = f29 * f8; // fmuls
    f0 = f12 * f13; // fmuls
    f1 = f10 - f1; // fsubs
    f2 = f7 - f6; // fsubs
    f3 = f5 - f3; // fsubs
    f4 = f4 - f0; // fsubs
    // Call 0x80555bf4
    uint32_t r3 = *(uint32_t*)(4(r28)); // lwz
    f1 = f30; // fmr
    float f0 = *(float*)(0x44(r28)); // lfs
    f2 = f31; // fmr
    *(float*)(0x128(r3)) = f0; // stfs
    r4 = r30; // mr
    float f4 = *(float*)(0(r29)); // lfs
    float f0 = *(float*)(0x48(r28)); // lfs
    *(float*)(0x12c(r3)) = f0; // stfs
    float f3 = *(float*)(4(r29)); // lfs
    float f0 = *(float*)(0x4c(r28)); // lfs
    *(float*)(0x130(r3)) = f0; // stfs
    float f0 = *(float*)(8(r29)); // lfs
    float f5 = *(float*)(0x50(r28)); // lfs
    *(float*)(0x134(r3)) = f5; // stfs
    uint32_t r3 = *(uint32_t*)(4(r28)); // lwz
    float f5 = *(float*)(0x74(r28)); // lfs
    *(float*)(0x138(r3)) = f5; // stfs
    float f5 = *(float*)(0x78(r28)); // lfs
    *(float*)(0x13c(r3)) = f5; // stfs
    float f5 = *(float*)(0x7c(r28)); // lfs
    *(float*)(0x140(r3)) = f5; // stfs
    float f5 = *(float*)(0x80(r28)); // lfs
    *(float*)(0x144(r3)) = f5; // stfs
    uint32_t r3 = *(uint32_t*)(4(r28)); // lwz
    *(float*)(0x1a8(r3)) = f4; // stfs
    *(float*)(0x1ac(r3)) = f3; // stfs
    *(float*)(0x1b0(r3)) = f0; // stfs
    uint32_t r3 = *(uint32_t*)(4(r28)); // lwz
    // Call 0x805b0aac
    float f2 = *(float*)(8(r31)); // lfs
    r3 = r1 + 0x8; // addi
    float f1 = *(float*)(4(r31)); // lfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    // Call 0x80555bf4
    r3 = r28 + 0x24; // addi
    float f1 = *(float*)(0xc(r31)); // lfs
    r5 = r3; // mr
    r4 = r1 + 0x8; // addi
    // Call 0x80555bf4
    r3 = r28 + 0x54; // addi
    float f1 = *(float*)(0xc(r31)); // lfs
    r5 = r3; // mr
    r4 = r1 + 0x8; // addi
    // Call 0x80555bf4
    float f2 = *(float*)(8(r31)); // lfs
    r3 = r28 + 0x34; // addi
    float f1 = *(float*)(4(r31)); // lfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    // Call 0x80555bf4
    float f2 = *(float*)(8(r31)); // lfs
    r3 = r28 + 0x64; // addi
    float f1 = *(float*)(4(r31)); // lfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    // Call 0x80555bf4
    /* .word 0xe3e10058 */ // unknown instruction
    double f31 = *(double*)(0x50(r1)); // lfd
    /* .word 0xe3c10048 */ // unknown instruction
    double f30 = *(double*)(0x40(r1)); // lfd
    /* .word 0xe3a10038 */ // unknown instruction
    double f29 = *(double*)(0x30(r1)); // lfd
    uint32_t r31 = *(uint32_t*)(0x2c(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(0x28(r1)); // lwz
    uint32_t r29 = *(uint32_t*)(0x24(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x64(r1)); // lwz
    uint32_t r28 = *(uint32_t*)(0x20(r1)); // lwz
    /* mtlr r0 */ // SPR
    // Restore stack
    return;
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    float f0 = *(float*)(0(r4)); // lfs
    *(float*)(0x128(r3)) = f0; // stfs
    float f0 = *(float*)(4(r4)); // lfs
    *(float*)(0x12c(r3)) = f0; // stfs
    float f0 = *(float*)(8(r4)); // lfs
}
