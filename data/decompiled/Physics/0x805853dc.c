// Decompiled from StaticR.rel
// Address: 0x805853dc
// Size: 544 bytes (136 instructions)
// Stack frame: 0x0080
// Calls: 0x8051aed0, 0x80555bf4, 0x8059024c, 0x8051aea8

void sub_805853dc(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    // stwu r1, -0x80(r1)
    // mflr r0
    // stw r0, 0x84(r1)
    // stw r31, 0x7c(r1)
    r31 = r5; // mr
    // stw r30, 0x78(r1)
    r30 = r4; // mr
    // stw r29, 0x74(r1)
    r29 = r3; // mr
    r3 = (uint32_t)0 << 16; // lis
    r6 = /* load */ r6, 0(r29); // lwz
    r3 = /* load */ r3, 0(r3); // lwz
    r4 = /* load */ r4, 4(r6); // lwz
    r0 = /* load */ r0, 0x80(r4); // lwz
    // clrlwi r4, r0, 0x10
    sub_0x8051aed0();
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    f2 = /* load */ f2, 0(r4); // lfs
    r4 = r1 + 0x2c; // addi
    f0 = /* load */ f0, 8(r5); // lfs
    f1 = /* load */ f1, 4(r5); // lfs
    f3 = /* load */ f3, 0(r5); // lfs
    // stfs f3, 0(r30)
    // stfs f1, 4(r30)
    // stfs f0, 8(r30)
    r5 = /* load */ r5, 0(r3); // lwz
    r3 = r1 + 0x38; // addi
    f3 = /* load */ f3, 0x14(r5); // lfs
    f4 = /* load */ f4, 0x10(r5); // lfs
    f5 = /* load */ f5, 0xc(r5); // lfs
    f0 = f2 * f3; // fmuls
    f1 = f2 * f4; // fmuls
    // stfs f5, 0(r31)
    f2 = f2 * f5; // fmuls
    // stfs f4, 4(r31)
    // stfs f3, 8(r31)
    // stfs f2, 0x2c(r1)
    // stfs f1, 0x30(r1)
    // stfs f0, 0x34(r1)
    sub_0x80555bf4();
    r3 = (uint32_t)0 << 16; // lis
    r5 = (uint32_t)0 << 16; // lis
    f11 = /* load */ f11, 0(r3); // lfs
    r6 = r3 + 0; // addi
    // stfs f11, 0(r31)
    r4 = r5 + 0; // addi
    r3 = r29; // mr
    f10 = /* load */ f10, 4(r6); // lfs
    // stfs f10, 4(r31)
    f9 = /* load */ f9, 8(r6); // lfs
    // stfs f9, 8(r31)
    f2 = /* load */ f2, 0x58(r1); // lfs
    f1 = /* load */ f1, 0x5c(r1); // lfs
    f0 = /* load */ f0, 0x48(r1); // lfs
    f7 = f2 * f11; // fmuls
    f6 = f1 * f10; // fmuls
    f2 = /* load */ f2, 0x4c(r1); // lfs
    f1 = /* load */ f1, 0x38(r1); // lfs
    f4 = f0 * f11; // fmuls
    f3 = f2 * f10; // fmuls
    f0 = /* load */ f0, 0x3c(r1); // lfs
    f8 = /* load */ f8, 0x60(r1); // lfs
    f1 = f1 * f11; // fmuls
    f0 = f0 * f10; // fmuls
    f5 = /* load */ f5, 0x50(r1); // lfs
    f2 = /* load */ f2, 0x40(r1); // lfs
    f8 = f8 * f9; // fmuls
    f6 = f7 + f6; // fadds
    f5 = f5 * f9; // fmuls
    f3 = f4 + f3; // fadds
    f6 = f8 + f6; // fadds
    f2 = f2 * f9; // fmuls
    f7 = f5 + f3; // fadds
    // stfs f6, 8(r31)
    f0 = f1 + f0; // fadds
    // stfs f7, 4(r31)
    f3 = f2 + f0; // fadds
    // stfs f3, 0(r31)
    f2 = /* load */ f2, 0(r5); // lfs
    f4 = /* load */ f4, 4(r4); // lfs
    f5 = f2 * f7; // fmuls
    f0 = /* load */ f0, 8(r4); // lfs
    f1 = f4 * f3; // fmuls
    f3 = f0 * f3; // fmuls
    f2 = f2 * f6; // fmuls
    f5 = f5 - f1; // fsubs
    f1 = f4 * f6; // fmuls
    f0 = f0 * f7; // fmuls
    // stfs f5, 0x28(r1)
    f2 = f3 - f2; // fsubs
    f0 = f1 - f0; // fsubs
    // stfs f2, 0x24(r1)
    // stfs f0, 0x20(r1)
    sub_0x8059024c();
    f1 = /* load */ f1, 0(r3); // lfs
    r5 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r30); // lfs
    r4 = r1 + 0x20; // addi
    f2 = /* load */ f2, 8(r3); // lfs
    r3 = r1 + 8; // addi
    f5 = f1 - f0; // fsubs
    f0 = /* load */ f0, 8(r30); // lfs
    f1 = /* load */ f1, 0x20(r1); // lfs
    f4 = f2 - f0; // fsubs
    f3 = /* load */ f3, 0(r5); // lfs
    f0 = /* load */ f0, 0x24(r1); // lfs
    f2 = /* load */ f2, 0x28(r1); // lfs
    f1 = f1 * f5; // fmuls
    f0 = f0 * f3; // fmuls
    f2 = f2 * f4; // fmuls
    // stfs f5, 0x14(r1)
    f0 = f1 + f0; // fadds
    // stfs f4, 0x1c(r1)
    // stfs f3, 0x18(r1)
    f1 = f2 + f0; // fadds
    sub_0x8051aea8();
    f1 = /* load */ f1, 0(r30); // lfs
    f0 = /* load */ f0, 8(r1); // lfs
    f2 = /* load */ f2, 4(r30); // lfs
    f0 = f1 + f0; // fadds
    f1 = /* load */ f1, 8(r30); // lfs
    // stfs f0, 0(r30)
    f0 = /* load */ f0, 0xc(r1); // lfs
    f0 = f2 + f0; // fadds
    // stfs f0, 4(r30)
    f0 = /* load */ f0, 0x10(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 8(r30)
    r31 = /* load */ r31, 0x7c(r1); // lwz
    r30 = /* load */ r30, 0x78(r1); // lwz
    r29 = /* load */ r29, 0x74(r1); // lwz
    r0 = /* load */ r0, 0x84(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x80
}
