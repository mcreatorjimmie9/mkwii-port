// Decompiled from StaticR.rel
// Address: 0x80584084
// Size: 752 bytes (188 instructions)
// Stack frame: 0x00d0
// Calls: 0x80555bf4, 0x8078cfdc, 0x805908c8, 0x80590278, 0x805902c8, 0x805907a4, 0x80597974, 0x805903ec, 0x80590cac, 0x80590cd4, 0x805903ec, 0x805906f4, 0x80598c24, 0x8059031c, 0x8059156c, 0x8078a184

void sub_80584084(r3 /* param */, r4 /* param */, r6 /* param */, r7 /* param */) {
    // stwu r1, -0xd0(r1)
    // mflr r0
    // stw r0, 0xd4(r1)
    // stfd f31, 0xc0(r1)
    // xsmsubmsp f31, f1, f0
    f2 = /* load */ f2, 0(r5); // lfs
    // stw r31, 0xbc(r1)
    r31 = r3; // mr
    f1 = /* load */ f1, 4(r5); // lfs
    r3 = r1 + 0x30; // addi
    // stw r30, 0xb8(r1)
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    f0 = /* load */ f0, 8(r5); // lfs
    f3 = /* load */ f3, 0x54(r30); // lfs
    // stw r29, 0xb4(r1)
    r29 = r4; // mr
    r7 = /* load */ r7, 0(r5); // lwz
    f2 = f3 * f2; // fmuls
    r6 = /* load */ r6, 4(r5); // lwz
    f1 = f3 * f1; // fmuls
    r0 = /* load */ r0, 8(r5); // lwz
    f0 = f3 * f0; // fmuls
    // stw r7, 0x40(r1)
    r4 = r1 + 0x40; // addi
    // stw r6, 0x44(r1)
    // stw r0, 0x48(r1)
    // stfs f2, 0x40(r1)
    // stfs f1, 0x44(r1)
    // stfs f0, 0x48(r1)
    sub_0x80555bf4();
    f31 = /* load */ f31, 0xcc(r30); // lfs
    r12 = 0; // li
    f0 = /* load */ f0, 0(r30); // lfs
    r3 = (uint32_t)0 << 16; // lis
    r11 = /* load */ r11, 0(r29); // lwz
    f1 = f31; // fmr
    r10 = /* load */ r10, 4(r29); // lwz
    r5 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 8(r29); // lwz
    r4 = r1 + 0x24; // addi
    // stfs f0, 0x4c(r1)
    r3 = /* load */ r3, 0(r3); // lwz
    r5 = r5 + 0; // addi
    // stfs f0, 0x50(r1)
    r7 = r1 + 0x4c; // addi
    r8 = r1 + 8; // addi
    r6 = -1; // li
    // stfs f0, 0x54(r1)
    r9 = 0; // li
    // stfs f0, 0x58(r1)
    // stfs f0, 0x5c(r1)
    // stfs f0, 0x60(r1)
    // stw r12, 0xa4(r1)
    // stw r12, 8(r1)
    // stw r11, 0x24(r1)
    // stw r10, 0x28(r1)
    // stw r0, 0x2c(r1)
    sub_0x8078cfdc();
    // cmpwi r3, 0
    L_8058422c:
    r3 = 0x20e8 + ((uint32_t)0x20e8 << 16); // lis
    r4 = /* load */ r4, 8(r1); // lwz
    r0 = r3 + 0xfff; // addi
    r0 = r4 & r0; // and.
    L_8058422c:
    f5 = /* load */ f5, 0x24(r1); // lfs
    f3 = -f31; // fneg
    f4 = /* load */ f4, 0x64(r1); // lfs
    r3 = r31; // mr
    f2 = /* load */ f2, 0x70(r1); // lfs
    f8 = f5 + f4; // fadds
    f1 = /* load */ f1, 0x74(r1); // lfs
    f0 = /* load */ f0, 0x78(r1); // lfs
    f2 = f3 * f2; // fmuls
    f7 = /* load */ f7, 0x28(r1); // lfs
    f1 = f3 * f1; // fmuls
    f6 = /* load */ f6, 0x68(r1); // lfs
    f2 = f8 + f2; // fadds
    f5 = /* load */ f5, 0x2c(r1); // lfs
    f0 = f3 * f0; // fmuls
    f4 = /* load */ f4, 0x6c(r1); // lfs
    f6 = f7 + f6; // fadds
    // stfs f2, 0x24(r1)
    f4 = f5 + f4; // fadds
    f1 = f6 + f1; // fadds
    f0 = f4 + f0; // fadds
    // stfs f1, 0x28(r1)
    // stfs f0, 0x2c(r1)
    sub_0x805908c8();
    f6 = /* load */ f6, 0(r3); // lfs
    f2 = /* load */ f2, 0x70(r1); // lfs
    f1 = /* load */ f1, 0x74(r1); // lfs
    f5 = f6 * f2; // fmuls
    f4 = /* load */ f4, 0x24(r1); // lfs
    f0 = /* load */ f0, 0x78(r1); // lfs
    f3 = f6 * f1; // fmuls
    f2 = /* load */ f2, 0x28(r1); // lfs
    f1 = f6 * f0; // fmuls
    f0 = /* load */ f0, 0x2c(r1); // lfs
    f4 = f4 + f5; // fadds
    f2 = f2 + f3; // fadds
    f0 = f0 + f1; // fadds
    // stfs f4, 0x24(r1)
    // stfs f2, 0x28(r1)
    // stfs f0, 0x2c(r1)
    r3 = r31; // mr
    r4 = r1 + 0x24; // addi
    sub_0x80590278();
    r3 = r31; // mr
    r4 = r1 + 0x30; // addi
    sub_0x805902c8();
    r3 = r31; // mr
    sub_0x805907a4();
    sub_0x80597974();
    r3 = r31; // mr
    sub_0x805903ec();
    r5 = /* load */ r5, 4(r3); // lwz
    r4 = r1 + 0x18; // addi
    f0 = /* load */ f0, 0x68(r5); // lfs
    // stfs f0, 0x18(r3)
    f0 = /* load */ f0, 0x6c(r5); // lfs
    // stfs f0, 0x1c(r3)
    f0 = /* load */ f0, 0x70(r5); // lfs
    // stfs f0, 0x20(r3)
    r5 = /* load */ r5, 4(r3); // lwz
    f0 = /* load */ f0, 0xd4(r5); // lfs
    // stfs f0, 0xf0(r3)
    f0 = /* load */ f0, 0xd8(r5); // lfs
    // stfs f0, 0xf4(r3)
    f0 = /* load */ f0, 0xdc(r5); // lfs
    // stfs f0, 0xf8(r3)
    r3 = r31; // mr
    sub_0x80590cac();
    r3 = r31; // mr
    r4 = r1 + 0xc; // addi
    sub_0x80590cd4();
    f2 = /* load */ f2, 0xc(r1); // lfs
    r3 = r31; // mr
    // stfs f2, 0x50(r31)
    f1 = /* load */ f1, 0x10(r1); // lfs
    // stfs f1, 0x54(r31)
    f0 = /* load */ f0, 0x14(r1); // lfs
    // stfs f0, 0x58(r31)
    // stfs f2, 0x5c(r31)
    // stfs f1, 0x60(r31)
    // stfs f0, 0x64(r31)
    // stfs f2, 0x80(r31)
    // stfs f1, 0x84(r31)
    // stfs f0, 0x88(r31)
    f0 = /* load */ f0, 0x18(r1); // lfs
    // stfs f0, 0x44(r31)
    f0 = /* load */ f0, 0x1c(r1); // lfs
    // stfs f0, 0x48(r31)
    f0 = /* load */ f0, 0x20(r1); // lfs
    // stfs f0, 0x4c(r31)
    sub_0x805903ec();
    r3 = /* load */ r3, 4(r3); // lwz
    r30 = 0; // li
    f0 = /* load */ f0, 0x44(r31); // lfs
    // stfs f0, 0x158(r3)
    f0 = /* load */ f0, 0x48(r31); // lfs
    // stfs f0, 0x15c(r3)
    f0 = /* load */ f0, 0x4c(r31); // lfs
    // stfs f0, 0x160(r3)
    goto L_80584330;
    r3 = r31; // mr
    r4 = r30; // mr
    sub_0x805906f4();
    sub_0x80598c24();
    r30 = r30 + 1; // addi
    r3 = r31; // mr
    sub_0x8059031c();
    // clrlwi r0, r3, 0x10
    // cmpw r30, r0
    L_8058431c:
    r3 = r31; // mr
    sub_0x8059156c();
    sub_0x8078a184();
    // .byte 0xe3, 0xe1, 0x00, 0xc8
    r0 = /* load */ r0, 0xd4(r1); // lwz
    f31 = /* load */ f31, 0xc0(r1); // lfd
    r31 = /* load */ r31, 0xbc(r1); // lwz
    r30 = /* load */ r30, 0xb8(r1); // lwz
    r29 = /* load */ r29, 0xb4(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0xd0
}
