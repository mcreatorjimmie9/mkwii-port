// Decompiled from StaticR.rel
// Address: 0x8058b4d4
// Size: 1044 bytes (261 instructions)
// Stack frame: 0x0130
// Calls: 0x80555bf4, 0x805907bc, 0x805908c8, 0x80590d38, 0x8078cfdc, 0x807b5770, 0x80555bf4, 0x805aa328, 0x8059024c, 0x8059040c, 0x80555bf4, 0x80555bf4, 0x80590d38, 0x80555bf4

void sub_8058b4d4(void) {
    // stwu r1, -0x130(r1)
    // mflr r0
    // stw r0, 0x134(r1)
    // stfd f31, 0x120(r1)
    // .byte 0xf3, 0xe1, 0x01, 0x28
    // stfd f30, 0x110(r1)
    // .byte 0xf3, 0xc1, 0x01, 0x18
    // stfd f29, 0x100(r1)
    // xsmaddadp f29, f1, f0
    // stfd f28, 0xf0(r1)
    // xxsel vs28, vs1, vs0, v3
    r11 = r1 + 0xf0; // addi
    sub_0x80555bf4();
    r5 = /* load */ r5, 0x74(r3); // lwz
    r31 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0x78(r3); // lwz
    r23 = r4; // mr
    // stw r0, 0x50(r1)
    r30 = r3; // mr
    r31 = r31 + 0; // addi
    // stw r5, 0x4c(r1)
    r0 = /* load */ r0, 0x7c(r3); // lwz
    // stw r0, 0x54(r1)
    r4 = /* load */ r4, 0x68(r3); // lwz
    r0 = /* load */ r0, 0x6c(r3); // lwz
    // stw r0, 0x44(r1)
    // stw r4, 0x40(r1)
    r0 = /* load */ r0, 0x70(r3); // lwz
    // stw r0, 0x48(r1)
    sub_0x805907bc();
    r4 = /* load */ r4, 0x38(r3); // lwz
    r0 = /* load */ r0, 0x3c(r3); // lwz
    // stw r0, 0x38(r1)
    f30 = /* load */ f30, 0x50(r31); // lfs
    // stw r4, 0x34(r1)
    r0 = /* load */ r0, 0x40(r3); // lwz
    r3 = r30; // mr
    // stw r0, 0x3c(r1)
    sub_0x805908c8();
    f0 = /* load */ f0, 0(r3); // lfs
    // cmpwi r23, 0x14
    f2 = /* load */ f2, 0x34(r1); // lfs
    r24 = 0x14; // li
    f6 = f30 - f0; // fsubs
    f0 = /* load */ f0, 0x38(r1); // lfs
    f1 = /* load */ f1, 0x3c(r1); // lfs
    f4 = /* load */ f4, 0x40(r1); // lfs
    f5 = f6 * f2; // fmuls
    f2 = /* load */ f2, 0x44(r1); // lfs
    f3 = f6 * f0; // fmuls
    f0 = /* load */ f0, 0x48(r1); // lfs
    f1 = f6 * f1; // fmuls
    f4 = f4 + f5; // fadds
    f2 = f2 + f3; // fadds
    f0 = f0 + f1; // fadds
    // stfs f4, 0x40(r1)
    // stfs f2, 0x44(r1)
    // stfs f0, 0x48(r1)
    L_8058b5c4:
    r24 = r23; // mr
    // cmpwi r24, 3
    f29 = /* load */ f29, 4(r31); // lfs
    L_8058b5f8:
    // subfic r3, r24, 0x14
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    // xoris r3, r3, 0x8000
    // stw r3, 0xbc(r1)
    f2 = /* load */ f2, 0x48(r31); // lfd
    // stw r0, 0xb8(r1)
    f0 = /* load */ f0, 0x54(r31); // lfs
    f1 = /* load */ f1, 0xb8(r1); // lfd
    f1 = f1 - f2; // fsubs
    f29 = f1 / f0; // fdivs
    // cmpwi r24, 0
    r23 = 0; // li
    L_8058b798:
    f31 = /* load */ f31, 0(r31); // lfs
    r25 = 0; // li
    f28 = /* load */ f28, 0x58(r31); // lfs
    r26 = (uint32_t)0 << 16; // lis
    r27 = (uint32_t)0 << 16; // lis
    r28 = -0x1507 + ((uint32_t)-0x1507 << 16); // lis
    r29 = 0x20e8 + ((uint32_t)0x20e8 << 16); // lis
    goto L_8058b790;
    r3 = r30; // mr
    sub_0x80590d38();
    f4 = f29 * f1; // fmuls
    f3 = /* load */ f3, 0x4c(r1); // lfs
    f2 = /* load */ f2, 0x50(r1); // lfs
    f1 = f30; // fmr
    f0 = /* load */ f0, 0x54(r1); // lfs
    r4 = r1 + 0x40; // addi
    f6 = f4 * f3; // fmuls
    f3 = /* load */ f3, 0x40(r1); // lfs
    f5 = f4 * f2; // fmuls
    f2 = /* load */ f2, 0x44(r1); // lfs
    f4 = f4 * f0; // fmuls
    f0 = /* load */ f0, 0x48(r1); // lfs
    f3 = f3 + f6; // fadds
    // stfs f6, 0x28(r1)
    f2 = f2 + f5; // fadds
    r3 = /* load */ r3, 0(r26); // lwz
    f0 = f0 + f4; // fadds
    // stfs f5, 0x2c(r1)
    // stfs f4, 0x30(r1)
    r5 = r27 + 0; // addi
    r6 = r28 + -0x4201; // addi
    r7 = r1 + 0x58; // addi
    // stfs f3, 0x40(r1)
    r8 = r1 + 8; // addi
    r9 = 0; // li
    // stfs f2, 0x44(r1)
    // stfs f0, 0x48(r1)
    // stfs f31, 0x58(r1)
    // stfs f31, 0x5c(r1)
    // stfs f31, 0x60(r1)
    // stfs f31, 0x64(r1)
    // stfs f31, 0x68(r1)
    // stfs f31, 0x6c(r1)
    // stw r25, 0xb0(r1)
    // stw r25, 8(r1)
    sub_0x8078cfdc();
    // cmpwi r3, 0
    L_8058b78c:
    f1 = /* load */ f1, 0x40(r1); // lfs
    r4 = r29 + 0xfff; // addi
    f0 = /* load */ f0, 0x70(r1); // lfs
    f3 = /* load */ f3, 0x44(r1); // lfs
    f4 = f1 + f0; // fadds
    f2 = /* load */ f2, 0x74(r1); // lfs
    r0 = /* load */ r0, 8(r1); // lwz
    f2 = f3 + f2; // fadds
    f1 = /* load */ f1, 0x48(r1); // lfs
    f0 = /* load */ f0, 0x78(r1); // lfs
    r0 = r0 & r4; // and.
    // stfs f4, 0x40(r1)
    f0 = f1 + f0; // fadds
    // stfs f2, 0x44(r1)
    // stfs f0, 0x48(r1)
    L_8058b710:
    r3 = r1 + 8; // addi
    sub_0x807b5770();
    goto L_8058b714;
    r3 = 0; // li
    // cmpwi r3, 0
    L_8058b78c:
    f1 = /* load */ f1, 0x7c(r1); // lfs
    r3 = r1 + 0x34; // addi
    f6 = /* load */ f6, 0x34(r1); // lfs
    f0 = /* load */ f0, 0x80(r1); // lfs
    f3 = f1 - f6; // fsubs
    f5 = /* load */ f5, 0x38(r1); // lfs
    f1 = /* load */ f1, 0x84(r1); // lfs
    f2 = f0 - f5; // fsubs
    f4 = /* load */ f4, 0x3c(r1); // lfs
    f0 = f3 * f28; // fmuls
    f3 = f1 - f4; // fsubs
    f1 = f2 * f28; // fmuls
    // stfs f0, 0xc(r1)
    f2 = f6 + f0; // fadds
    f0 = f3 * f28; // fmuls
    // stfs f1, 0x10(r1)
    f1 = f5 + f1; // fadds
    // stfs f0, 0x14(r1)
    f0 = f4 + f0; // fadds
    // stfs f2, 0x34(r1)
    // stfs f1, 0x38(r1)
    // stfs f0, 0x3c(r1)
    sub_0x80555bf4();
    r3 = r1 + 0x4c; // addi
    r5 = r1 + 0x34; // addi
    r4 = r3; // mr
    r6 = 1; // li
    sub_0x805aa328();
    r23 = r23 + 1; // addi
    // cmpw r23, r24
    L_8058b624:
    f0 = /* load */ f0, 0x40(r1); // lfs
    r3 = r30; // mr
    // stfs f0, 0x3c(r30)
    f0 = /* load */ f0, 0x44(r1); // lfs
    // stfs f0, 0x40(r30)
    f0 = /* load */ f0, 0x48(r1); // lfs
    // stfs f0, 0x44(r30)
    sub_0x8059024c();
    f2 = /* load */ f2, 0x40(r1); // lfs
    f1 = /* load */ f1, 0(r3); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    f1 = f2 - f1; // fsubs
    // stfs f1, 0x20(r30)
    f2 = /* load */ f2, 0x44(r1); // lfs
    f1 = /* load */ f1, 4(r3); // lfs
    f1 = f2 - f1; // fsubs
    // stfs f1, 0x24(r30)
    f1 = /* load */ f1, 8(r3); // lfs
    r3 = r30; // mr
    f2 = /* load */ f2, 0x48(r1); // lfs
    f1 = f2 - f1; // fsubs
    // stfs f0, 0x24(r30)
    // stfs f1, 0x28(r30)
    sub_0x8059040c();
    r3 = r3 + 0xf0; // addi
    r4 = r1 + 0x18; // addi
    sub_0x80555bf4();
    f10 = /* load */ f10, 0x24(r1); // lfs
    r3 = r30 + 0x2c; // addi
    f0 = /* load */ f0, 0x98(r30); // lfs
    f29 = /* load */ f29, 0x18(r1); // lfs
    f13 = /* load */ f13, 0x8c(r30); // lfs
    f7 = f10 * f0; // fmuls
    f12 = /* load */ f12, 0x1c(r1); // lfs
    f5 = f29 * f0; // fmuls
    f11 = /* load */ f11, 0x90(r30); // lfs
    f4 = f10 * f13; // fmuls
    f9 = /* load */ f9, 0x20(r1); // lfs
    f8 = /* load */ f8, 0x94(r30); // lfs
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
    sub_0x80555bf4();
    r3 = r30; // mr
    sub_0x80590d38();
    f0 = /* load */ f0, 0x80(r30); // lfs
    f0 = f0 - f1; // fsubs
    // stfs f0, 0x4c(r30)
    // .byte 0xe3, 0xe1, 0x01, 0x28
    f31 = /* load */ f31, 0x120(r1); // lfd
    // .byte 0xe3, 0xc1, 0x01, 0x18
    f30 = /* load */ f30, 0x110(r1); // lfd
    // .byte 0xe3, 0xa1, 0x01, 0x08
    f29 = /* load */ f29, 0x100(r1); // lfd
    // .byte 0xe3, 0x81, 0x00, 0xf8
    f28 = /* load */ f28, 0xf0(r1); // lfd
    r11 = r1 + 0xf0; // addi
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x134(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x130
}
