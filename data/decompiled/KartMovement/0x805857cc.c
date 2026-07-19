// GHIRDA Auto-Decompiled
// Address: 0x805857cc (rel: 0x072f30)
// Size: 320 bytes, 80 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: clearBoost__Q24Kart8KartMoveFv

void clearBoost__Kart8KartMove(void) {
    *(float*)(0x44(r1)) = f0; // stfs
    // Call 0x80555bf4
    float f10 = *(float*)(0x34(r1)); // lfs
    r3 = r1 + 0x18; // addi
    float f0 = *(float*)(0x44(r1)); // lfs
    float f30 = *(float*)(0x28(r1)); // lfs
    float f13 = *(float*)(0x38(r1)); // lfs
    f7 = f10 * f0; // fmuls
    float f12 = *(float*)(0x2c(r1)); // lfs
    f5 = f30 * f0; // fmuls
    float f11 = *(float*)(0x3c(r1)); // lfs
    f4 = f10 * f13; // fmuls
    float f9 = *(float*)(0x30(r1)); // lfs
    float f8 = *(float*)(0x40(r1)); // lfs
    f6 = f30 * f13; // fmuls
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
    f2 = f30 * f11; // fmuls
    f6 = f9 * f11; // fmuls
    f5 = f4 + f3; // fadds
    f4 = f2 + f0; // fadds
    f3 = f30 * f8; // fmuls
    f0 = f12 * f13; // fmuls
    f1 = f10 - f1; // fsubs
    f2 = f7 - f6; // fsubs
    f3 = f5 - f3; // fsubs
    f4 = f4 - f0; // fsubs
    // Call 0x80555bf4
    f1 = f31; // fmr
    r3 = r1 + 0x38; // addi
    r4 = r1 + 0x18; // addi
    r5 = r1 + 0x70; // addi
    // Call 0x80555bf4
    float f0 = *(float*)(0x70(r1)); // lfs
    *(float*)(0x100(r31)) = f0; // stfs
    f3 = (float)f0; // frsp
    float f0 = *(float*)(0x74(r1)); // lfs
    *(float*)(0x104(r31)) = f0; // stfs
    f2 = (float)f0; // frsp
    float f0 = *(float*)(0x78(r1)); // lfs
    *(float*)(0x108(r31)) = f0; // stfs
    f1 = (float)f0; // frsp
    float f0 = *(float*)(0x7c(r1)); // lfs
    *(float*)(0x10c(r31)) = f0; // stfs
    f0 = (float)f0; // frsp
    *(float*)(0xf0(r31)) = f3; // stfs
    *(float*)(0xf4(r31)) = f2; // stfs
    *(float*)(0xf8(r31)) = f1; // stfs
    *(float*)(0xfc(r31)) = f0; // stfs
    /* .word 0xe3e100d8 */ // unknown instruction
    double f31 = *(double*)(0xd0(r1)); // lfd
    /* .word 0xe3c100c8 */ // unknown instruction
    double f30 = *(double*)(0xc0(r1)); // lfd
    uint32_t r31 = *(uint32_t*)(0xbc(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(0xb8(r1)); // lwz
    uint32_t r29 = *(uint32_t*)(0xb4(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0xe4(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0xe0; // addi
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    r11 = r1 + 0x20; // addi
    // Call 0x80555bf4
    r5 = 0x0 << 16; // lis
    r29 = 0x0 << 16; // lis
    float f0 = *(float*)(0(r5)); // lfs
}
