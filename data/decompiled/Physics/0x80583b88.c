// Decompiled from StaticR.rel
// Address: 0x80583b88
// Size: 932 bytes (233 instructions)
// Stack frame: 0x0120
// Calls: 0x80555bf4, 0x8059088c, 0x8059040c, 0x8059040c, 0x805902a4, 0x8078cd58, 0x805aa328, 0x8059040c, 0x805aa50c, 0x8059040c, 0x8059040c, 0x805aa50c, 0x8059040c, 0x80555bf4

void sub_80583b88(void) {
    // stwu r1, -0x120(r1)
    // mflr r0
    // stw r0, 0x124(r1)
    // stfd f31, 0x110(r1)
    // .byte 0xf3, 0xe1, 0x01, 0x18
    // stfd f30, 0x100(r1)
    // xsmaddadp f30, f1, f0
    // stfd f29, 0xf0(r1)
    // xxsel vs29, vs1, vs0, v3
    // stfd f28, 0xe0(r1)
    // .byte 0xf3, 0x81, 0x00, 0xe8
    // stfd f27, 0xd0(r1)
    // .byte 0xf3, 0x61, 0x00, 0xd8
    r11 = r1 + 0xd0; // addi
    sub_0x80555bf4();
    r4 = /* load */ r4, 0(r3); // lwz
    r28 = (uint32_t)0 << 16; // lis
    r31 = r3; // mr
    r5 = /* load */ r5, 4(r4); // lwz
    r28 = r28 + 0; // addi
    r0 = /* load */ r0, 8(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x15)); // rlwinm.
    L_80583bf8:
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x10, 0xe)); // rlwinm
    // stw r0, 4(r3)
    goto L_80583eec;
    r0 = /* load */ r0, 4(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xf, 0xf)); // rlwinm.
    L_80583c14:
    sub_0x8059088c();
    r0 = /* load */ r0, 0x2c(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x14, 0x14)); // rlwinm.
    L_80583c28:
    f1 = /* load */ f1, 0x20(r31); // lfs
    f0 = /* load */ f0, 0xc0(r28); // lfs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80583c3c:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 4)); // rlwinm.
    L_80583eec:
    r3 = r31; // mr
    sub_0x8059040c();
    r5 = /* load */ r5, 0x68(r3); // lwz
    r4 = /* load */ r4, 0x6c(r3); // lwz
    r0 = /* load */ r0, 0x70(r3); // lwz
    r3 = r31; // mr
    // stw r5, 0x48(r1)
    // stw r4, 0x4c(r1)
    // stw r0, 0x50(r1)
    sub_0x8059040c();
    f6 = /* load */ f6, 0x20(r31); // lfs
    f2 = /* load */ f2, 0x74(r31); // lfs
    f1 = /* load */ f1, 0x78(r31); // lfs
    f5 = f6 * f2; // fmuls
    f4 = /* load */ f4, 0xb0(r3); // lfs
    f0 = /* load */ f0, 0x7c(r31); // lfs
    f3 = f6 * f1; // fmuls
    f2 = /* load */ f2, 0xb4(r3); // lfs
    f1 = f6 * f0; // fmuls
    f0 = /* load */ f0, 0xb8(r3); // lfs
    f4 = f4 + f5; // fadds
    f2 = f2 + f3; // fadds
    r3 = r31; // mr
    f0 = f0 + f1; // fadds
    // stfs f4, 0x3c(r1)
    // stfs f2, 0x40(r1)
    // stfs f0, 0x44(r1)
    sub_0x805902a4();
    r4 = (uint32_t)0 << 16; // lis
    f5 = /* load */ f5, 4(r3); // lfs
    f6 = /* load */ f6, 0x14(r3); // lfs
    r0 = 0; // li
    f7 = /* load */ f7, 0x24(r3); // lfs
    f2 = (float)f5; // frsp
    f30 = /* load */ f30, 0(r4); // lfs
    f1 = (float)f6; // frsp
    f0 = (float)f7; // frsp
    f4 = /* load */ f4, 0(r28); // lfs
    f3 = -f30; // fneg
    f31 = /* load */ f31, 0x1c(r28); // lfs
    r27 = 0; // li
    // stfs f5, 0x30(r1)
    f27 = f3 * f2; // fmuls
    r26 = 0; // li
    f28 = f3 * f1; // fmuls
    // stfs f6, 0x34(r1)
    f29 = f3 * f0; // fmuls
    r28 = (uint32_t)0 << 16; // lis
    // stfs f7, 0x38(r1)
    r29 = (uint32_t)0 << 16; // lis
    r30 = 0x40 + ((uint32_t)0x40 << 16); // lis
    // stfs f4, 0x54(r1)
    // stfs f4, 0x58(r1)
    // stfs f4, 0x5c(r1)
    // stfs f4, 0x60(r1)
    // stfs f4, 0x64(r1)
    // stfs f4, 0x68(r1)
    // stw r0, 0xac(r1)
    // stw r0, 8(r1)
    f2 = /* load */ f2, 0x48(r1); // lfs
    f1 = f30; // fmr
    f0 = /* load */ f0, 0x3c(r1); // lfs
    r4 = r1 + 0x24; // addi
    f4 = /* load */ f4, 0x4c(r1); // lfs
    r5 = r29 + 0; // addi
    f5 = f2 + f0; // fadds
    f3 = /* load */ f3, 0x40(r1); // lfs
    r6 = r30 + 0x800; // addi
    f2 = /* load */ f2, 0x50(r1); // lfs
    r7 = r1 + 0x54; // addi
    f0 = /* load */ f0, 0x44(r1); // lfs
    f3 = f4 + f3; // fadds
    // stfs f5, 0x24(r1)
    f0 = f2 + f0; // fadds
    r3 = /* load */ r3, 0(r28); // lwz
    // stfs f3, 0x28(r1)
    r8 = r1 + 8; // addi
    // stfs f0, 0x2c(r1)
    r9 = 0; // li
    sub_0x8078cd58();
    // cmpwi r3, 0
    L_80583e7c:
    r28 = r1 + 0x78; // addi
    r3 = r31 + 0x74; // addi
    r4 = r3; // mr
    r6 = 1; // li
    r5 = r28; // mr
    sub_0x805aa328();
    r3 = r31; // mr
    sub_0x8059040c();
    r4 = /* load */ r4, 0xb0(r3); // lwz
    r5 = r28; // mr
    r0 = /* load */ r0, 0xb4(r3); // lwz
    // stw r0, 0x1c(r1)
    // stw r4, 0x18(r1)
    r0 = /* load */ r0, 0xb8(r3); // lwz
    r3 = r1 + 0x18; // addi
    // stw r0, 0x20(r1)
    r4 = r3; // mr
    sub_0x805aa50c();
    r3 = r31; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x18(r1); // lfs
    // stfs f0, 0xb0(r3)
    f0 = /* load */ f0, 0x1c(r1); // lfs
    // stfs f0, 0xb4(r3)
    f0 = /* load */ f0, 0x20(r1); // lfs
    // stfs f0, 0xb8(r3)
    r3 = r31; // mr
    sub_0x8059040c();
    r4 = /* load */ r4, 0xc8(r3); // lwz
    r5 = r28; // mr
    r0 = /* load */ r0, 0xcc(r3); // lwz
    // stw r0, 0x10(r1)
    // stw r4, 0xc(r1)
    r0 = /* load */ r0, 0xd0(r3); // lwz
    r3 = r1 + 0xc; // addi
    // stw r0, 0x14(r1)
    r4 = r3; // mr
    sub_0x805aa50c();
    r3 = r31; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0xc(r1); // lfs
    // stfs f0, 0xc8(r3)
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f0, 0xcc(r3)
    f0 = /* load */ f0, 0x14(r1); // lfs
    // stfs f0, 0xd0(r3)
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x16, 0x16)); // rlwinm.
    L_80583e74:
    f2 = /* load */ f2, 0x78(r1); // lfs
    // stfs f2, 0x44(r31)
    f1 = /* load */ f1, 0x7c(r1); // lfs
    // stfs f1, 0x48(r31)
    f0 = /* load */ f0, 0x80(r1); // lfs
    // stfs f0, 0x4c(r31)
    // stfs f2, 0x38(r31)
    // stfs f1, 0x3c(r31)
    // stfs f0, 0x40(r31)
    r27 = 1; // li
    goto L_80583ed0;
    f2 = /* load */ f2, 0x3c(r1); // lfs
    r26 = r26 + 1; // addi
    f1 = /* load */ f1, 0x40(r1); // lfs
    // cmplwi r26, 3
    f5 = f2 * f31; // fmuls
    f0 = /* load */ f0, 0x44(r1); // lfs
    f4 = f1 * f31; // fmuls
    f2 = /* load */ f2, 0x48(r1); // lfs
    f3 = f0 * f31; // fmuls
    f1 = /* load */ f1, 0x4c(r1); // lfs
    f0 = /* load */ f0, 0x50(r1); // lfs
    f2 = f2 + f27; // fadds
    f1 = f1 + f28; // fadds
    // stfs f5, 0x3c(r1)
    f0 = f0 + f29; // fadds
    // stfs f4, 0x40(r1)
    // stfs f3, 0x44(r1)
    // stfs f2, 0x48(r1)
    // stfs f1, 0x4c(r1)
    // stfs f0, 0x50(r1)
    L_80583d28:
    // cmpwi r27, 0
    L_80583eec:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x10, 0xe)); // rlwinm
    // stw r0, 4(r3)
    // .byte 0xe3, 0xe1, 0x01, 0x18
    f31 = /* load */ f31, 0x110(r1); // lfd
    // .byte 0xe3, 0xc1, 0x01, 0x08
    f30 = /* load */ f30, 0x100(r1); // lfd
    // .byte 0xe3, 0xa1, 0x00, 0xf8
    f29 = /* load */ f29, 0xf0(r1); // lfd
    // .byte 0xe3, 0x81, 0x00, 0xe8
    f28 = /* load */ f28, 0xe0(r1); // lfd
    // .byte 0xe3, 0x61, 0x00, 0xd8
    r11 = r1 + 0xd0; // addi
    f27 = /* load */ f27, 0xd0(r1); // lfd
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x124(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x120
}
