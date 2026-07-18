// Decompiled from StaticR.rel
// Address: 0x805855fc
// Size: 752 bytes (188 instructions)
// Stack frame: 0x00e0
// Calls: 0x8059040c, 0x80555bf4, 0x80590cd4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4

void sub_805855fc(r3 /* param */, r4 /* param */) {
    // stwu r1, -0xe0(r1)
    // mflr r0
    // stw r0, 0xe4(r1)
    // stfd f31, 0xd0(r1)
    // .byte 0xf3, 0xe1, 0x00, 0xd8
    // stfd f30, 0xc0(r1)
    // xsmsubmsp f30, f1, f0
    f31 = f1; // fmr
    // stw r31, 0xbc(r1)
    // stw r30, 0xb8(r1)
    r30 = r4; // mr
    // stw r29, 0xb4(r1)
    r29 = r3; // mr
    sub_0x8059040c();
    r5 = /* load */ r5, 0(r30); // lwz
    r31 = r3; // mr
    r4 = /* load */ r4, 4(r30); // lwz
    r3 = r1 + 0x98; // addi
    r0 = /* load */ r0, 8(r30); // lwz
    // stw r5, 0x98(r1)
    // stw r4, 0x9c(r1)
    // stw r0, 0xa0(r1)
    sub_0x80555bf4();
    r3 = r29; // mr
    r4 = r1 + 0x8c; // addi
    sub_0x80590cd4();
    f6 = /* load */ f6, 0x8c(r1); // lfs
    r3 = r1 + 0x8c; // addi
    f1 = /* load */ f1, 0x98(r1); // lfs
    f5 = /* load */ f5, 0x90(r1); // lfs
    f3 = f1 - f6; // fsubs
    f0 = /* load */ f0, 0x9c(r1); // lfs
    f4 = /* load */ f4, 0x94(r1); // lfs
    f2 = f0 - f5; // fsubs
    f1 = /* load */ f1, 0xa0(r1); // lfs
    f0 = f3 * f31; // fmuls
    f3 = f1 - f4; // fsubs
    f1 = f2 * f31; // fmuls
    // stfs f0, 8(r1)
    f2 = f6 + f0; // fadds
    f0 = f3 * f31; // fmuls
    // stfs f1, 0xc(r1)
    f1 = f5 + f1; // fadds
    // stfs f0, 0x10(r1)
    f0 = f4 + f0; // fadds
    // stfs f2, 0x80(r1)
    // stfs f1, 0x84(r1)
    // stfs f0, 0x88(r1)
    sub_0x80555bf4();
    r3 = r1 + 0x80; // addi
    sub_0x80555bf4();
    r3 = r1 + 0x60; // addi
    r4 = r1 + 0x8c; // addi
    r5 = r1 + 0x80; // addi
    sub_0x80555bf4();
    f10 = /* load */ f10, 0x6c(r1); // lfs
    r3 = r1 + 0x70; // addi
    f0 = /* load */ f0, 0x10c(r31); // lfs
    f30 = /* load */ f30, 0x60(r1); // lfs
    f13 = /* load */ f13, 0x100(r31); // lfs
    f7 = f10 * f0; // fmuls
    f12 = /* load */ f12, 0x64(r1); // lfs
    f5 = f30 * f0; // fmuls
    f11 = /* load */ f11, 0x104(r31); // lfs
    f4 = f10 * f13; // fmuls
    f9 = /* load */ f9, 0x68(r1); // lfs
    f8 = /* load */ f8, 0x108(r31); // lfs
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
    sub_0x80555bf4();
    r3 = r1 + 0x70; // addi
    sub_0x80555bf4();
    r6 = /* load */ r6, 0x38(r29); // lwz
    r4 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0x3c(r29); // lwz
    r3 = r1 + 0x70; // addi
    // stw r0, 0x58(r1)
    r4 = r4 + 0; // addi
    r5 = r1 + 0x48; // addi
    // stw r6, 0x54(r1)
    r0 = /* load */ r0, 0x40(r29); // lwz
    // stw r0, 0x5c(r1)
    sub_0x80555bf4();
    r7 = /* load */ r7, 0x70(r1); // lwz
    r3 = r1 + 0x28; // addi
    r6 = /* load */ r6, 0x74(r1); // lwz
    r4 = r1 + 0x48; // addi
    r0 = /* load */ r0, 0x78(r1); // lwz
    r5 = r1 + 0x54; // addi
    f0 = /* load */ f0, 0x7c(r1); // lfs
    // stw r7, 0x38(r1)
    // stw r6, 0x3c(r1)
    // stw r0, 0x40(r1)
    // stfs f0, 0x44(r1)
    sub_0x80555bf4();
    f10 = /* load */ f10, 0x34(r1); // lfs
    r3 = r1 + 0x18; // addi
    f0 = /* load */ f0, 0x44(r1); // lfs
    f30 = /* load */ f30, 0x28(r1); // lfs
    f13 = /* load */ f13, 0x38(r1); // lfs
    f7 = f10 * f0; // fmuls
    f12 = /* load */ f12, 0x2c(r1); // lfs
    f5 = f30 * f0; // fmuls
    f11 = /* load */ f11, 0x3c(r1); // lfs
    f4 = f10 * f13; // fmuls
    f9 = /* load */ f9, 0x30(r1); // lfs
    f8 = /* load */ f8, 0x40(r1); // lfs
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
    sub_0x80555bf4();
    f1 = f31; // fmr
    r3 = r1 + 0x38; // addi
    r4 = r1 + 0x18; // addi
    r5 = r1 + 0x70; // addi
    sub_0x80555bf4();
    f0 = /* load */ f0, 0x70(r1); // lfs
    // stfs f0, 0x100(r31)
    f3 = (float)f0; // frsp
    f0 = /* load */ f0, 0x74(r1); // lfs
    // stfs f0, 0x104(r31)
    f2 = (float)f0; // frsp
    f0 = /* load */ f0, 0x78(r1); // lfs
    // stfs f0, 0x108(r31)
    f1 = (float)f0; // frsp
    f0 = /* load */ f0, 0x7c(r1); // lfs
    // stfs f0, 0x10c(r31)
    f0 = (float)f0; // frsp
    // stfs f3, 0xf0(r31)
    // stfs f2, 0xf4(r31)
    // stfs f1, 0xf8(r31)
    // stfs f0, 0xfc(r31)
    // .byte 0xe3, 0xe1, 0x00, 0xd8
    f31 = /* load */ f31, 0xd0(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0xc8
    f30 = /* load */ f30, 0xc0(r1); // lfd
    r31 = /* load */ r31, 0xbc(r1); // lwz
    r30 = /* load */ r30, 0xb8(r1); // lwz
    r29 = /* load */ r29, 0xb4(r1); // lwz
    r0 = /* load */ r0, 0xe4(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0xe0
}
