// Decompiled from StaticR.rel
// Address: 0x805860fc
// Size: 1728 bytes (432 instructions)
// Stack frame: 0x0160
// Calls: 0x80555bf4, 0x80590cac, 0x8059024c, 0x805907bc, 0x8059040c, 0x8059040c, 0x80555bf4, 0x8078cfdc, 0x807b5770, 0x807b5770, 0x807b5770, 0x805907bc, 0x805907bc, 0x805907bc, 0x8059040c, 0x8059040c, 0x805914fc, 0x805908c8, 0x805907bc, 0x8059040c, 0x80590d38, 0x8059040c, 0x805907bc, 0x805907bc, 0x805aa328, 0x805907bc, 0x805907bc, 0x80555bf4

void sub_805860fc(void) {
    // stwu r1, -0x160(r1)
    // mflr r0
    // stw r0, 0x164(r1)
    // stfd f31, 0x150(r1)
    // .byte 0xf3, 0xe1, 0x01, 0x58
    // stfd f30, 0x140(r1)
    // xsmaddmdp f30, f1, f0
    r11 = r1 + 0x140; // addi
    sub_0x80555bf4();
    r25 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    r25 = r25 + 0; // addi
    r5 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r25); // lfs
    r21 = r3; // mr
    // stfs f0, 0xa8(r1)
    r4 = r1 + 0x84; // addi
    f31 = /* load */ f31, 0(r5); // lfs
    r24 = 0; // li
    // stfs f0, 0xac(r1)
    f30 = f31; // fmr
    // stfs f0, 0xb0(r1)
    // stfs f0, 0xb4(r1)
    // stfs f0, 0xb8(r1)
    // stfs f0, 0xbc(r1)
    // stw r0, 0x100(r1)
    // stw r0, 8(r1)
    r5 = /* load */ r5, 0(r3); // lwz
    r5 = /* load */ r5, 4(r5); // lwz
    r0 = /* load */ r0, 0xc(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x13)); // rlwinm
    // stw r0, 0xc(r5)
    r5 = /* load */ r5, 0(r3); // lwz
    r5 = /* load */ r5, 4(r5); // lwz
    r0 = /* load */ r0, 0xc(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 4)); // rlwinm
    // stw r0, 0xc(r5)
    sub_0x80590cac();
    r3 = r21; // mr
    sub_0x8059024c();
    f5 = /* load */ f5, 0xcc(r25); // lfs
    r29 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0x84(r1); // lfs
    r29 = r29 + 0; // addi
    f1 = /* load */ f1, 0x88(r1); // lfs
    r23 = 0; // li
    f4 = f5 * f0; // fmuls
    f3 = /* load */ f3, 0(r3); // lfs
    f0 = /* load */ f0, 0x8c(r1); // lfs
    f2 = f5 * f1; // fmuls
    r20 = 0x20e8 + ((uint32_t)0x20e8 << 16); // lis
    r30 = -0x8000 + ((uint32_t)-0x8000 << 16); // lis
    f3 = f3 + f4; // fadds
    r31 = (uint32_t)0 << 16; // lis
    f1 = f5 * f0; // fmuls
    r26 = (uint32_t)0 << 16; // lis
    // stfs f3, 0x78(r1)
    r27 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 4(r3); // lfs
    r28 = -0x4f18 + ((uint32_t)-0x4f18 << 16); // lis
    f0 = f0 + f2; // fadds
    // stfs f0, 0x7c(r1)
    f0 = /* load */ f0, 8(r3); // lfs
    f0 = f0 + f1; // fadds
    // stfs f0, 0x80(r1)
    r3 = r21; // mr
    sub_0x805907bc();
    r22 = r3; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x68(r3); // lfs
    // stfs f0, 0x9c(r1)
    f0 = /* load */ f0, 0x6c(r3); // lfs
    // stfs f0, 0xa0(r1)
    f0 = /* load */ f0, 0x70(r3); // lfs
    r3 = r22; // mr
    // stfs f0, 0xa4(r1)
    sub_0x8059040c();
    r3 = r3 + 0xf0; // addi
    r4 = r26 + 0; // addi
    r5 = r1 + 0x90; // addi
    sub_0x80555bf4();
    f3 = -f30; // fneg
    f2 = /* load */ f2, 0x168(r22); // lfs
    f0 = /* load */ f0, 0x90(r1); // lfs
    f1 = f31; // fmr
    f4 = /* load */ f4, 0x94(r1); // lfs
    r4 = r1 + 0x9c; // addi
    f7 = f3 * f2; // fmuls
    f2 = /* load */ f2, 0x98(r1); // lfs
    f5 = /* load */ f5, 0x9c(r1); // lfs
    r5 = r1 + 0x78; // addi
    f3 = /* load */ f3, 0xa0(r1); // lfs
    r6 = r28 + 0x2dff; // addi
    f6 = f7 * f0; // fmuls
    f0 = /* load */ f0, 0xa4(r1); // lfs
    f4 = f7 * f4; // fmuls
    r3 = /* load */ r3, 0(r27); // lwz
    f2 = f7 * f2; // fmuls
    r7 = r1 + 0xa8; // addi
    f5 = f5 + f6; // fadds
    r8 = r1 + 8; // addi
    f3 = f3 + f4; // fadds
    r9 = 0; // li
    f0 = f0 + f2; // fadds
    // stfs f5, 0x9c(r1)
    // stfs f3, 0xa0(r1)
    // stfs f0, 0xa4(r1)
    sub_0x8078cfdc();
    // cmpwi r3, 0
    L_80586778:
    r3 = /* load */ r3, 8(r1); // lwz
    r22 = 0; // li
    r5 = /* load */ r5, 0(r29); // lwz
    r0 = ((_rotl(r3, 0)) & _mask(0, 0)); // rlwinm
    r4 = /* load */ r4, 4(r29); // lwz
    r0 = _rlwimi(r0, r3, 0, 0x12, 0x12); // rlwimi.
    r0 = /* load */ r0, 8(r29); // lwz
    // stw r5, 0x6c(r1)
    // stw r4, 0x70(r1)
    // stw r0, 0x74(r1)
    L_805862f0:
    r3 = r1 + 8; // addi
    r4 = r30 + 0x2000; // addi
    sub_0x807b5770();
    goto L_805862f4;
    r3 = 0; // li
    // cmpwi r3, 0
    L_80586310:
    r3 = /* load */ r3, 0(r31); // lwz
    r0 = /* load */ r0, 4(r3); // lhz
    r0 = ((_rotl(r0, 0x1b)) & _mask(0x1d, 0x1f)); // rlwinm
    // cmpwi r0, 1
    L_80586338:
    r0 = /* load */ r0, 8(r1); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm.
    L_8058632c:
    r3 = r1 + 8; // addi
    r4 = 0x1000 + ((uint32_t)0x1000 << 16); // lis
    sub_0x807b5770();
    goto L_80586330;
    r3 = 0; // li
    // cmpwi r3, 0
    L_8058636c:
    r3 = /* load */ r3, 0(r21); // lwz
    r22 = 1; // li
    f2 = /* load */ f2, 0xd8(r1); // lfs
    r3 = /* load */ r3, 4(r3); // lwz
    f1 = /* load */ f1, 0xdc(r1); // lfs
    f0 = /* load */ f0, 0xe0(r1); // lfs
    r0 = /* load */ r0, 0xc(r3); // lwz
    // stfs f2, 0x6c(r1)
    // ori r0, r0, 0x800
    // stfs f1, 0x70(r1)
    // stfs f0, 0x74(r1)
    // stw r0, 0xc(r3)
    goto L_805863c0;
    r0 = /* load */ r0, 8(r1); // lwz
    r4 = r20 + 0xdff; // addi
    r0 = r0 & r4; // and.
    L_80586388:
    r3 = r1 + 8; // addi
    sub_0x807b5770();
    goto L_8058638c;
    r3 = 0; // li
    // cmpwi r3, 0
    L_805863c0:
    r3 = /* load */ r3, 0(r31); // lwz
    r0 = /* load */ r0, 4(r3); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x11, 0x11)); // rlwinm.
    L_805863c0:
    f2 = /* load */ f2, 0xcc(r1); // lfs
    r22 = 1; // li
    f1 = /* load */ f1, 0xd0(r1); // lfs
    f0 = /* load */ f0, 0xd4(r1); // lfs
    // stfs f2, 0x6c(r1)
    // stfs f1, 0x70(r1)
    // stfs f0, 0x74(r1)
    // cmpwi r22, 0
    L_80586784:
    r3 = r21; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x6c(r1); // lfs
    f7 = /* load */ f7, 0x44(r3); // lfs
    f1 = /* load */ f1, 4(r25); // lfs
    f6 = f0 - f7; // fsubs
    f5 = /* load */ f5, 0x70(r1); // lfs
    f4 = /* load */ f4, 0x48(r3); // lfs
    f0 = /* load */ f0, 0x4c(r3); // lfs
    f3 = f6 * f1; // fmuls
    f2 = /* load */ f2, 0x74(r1); // lfs
    f5 = f5 - f4; // fsubs
    // stfs f6, 0x18(r1)
    f4 = f2 - f0; // fsubs
    f0 = f7 + f3; // fadds
    f2 = f5 * f1; // fmuls
    // stfs f5, 0x1c(r1)
    f1 = f4 * f1; // fmuls
    // stfs f0, 0x44(r3)
    f0 = /* load */ f0, 0x48(r3); // lfs
    // stfs f3, 0x18(r1)
    f0 = f0 + f2; // fadds
    // stfs f2, 0x1c(r1)
    // stfs f0, 0x48(r3)
    f0 = /* load */ f0, 0x4c(r3); // lfs
    // stfs f1, 0x20(r1)
    f0 = f0 + f1; // fadds
    // stfs f0, 0x4c(r3)
    r3 = r21; // mr
    sub_0x805907bc();
    r22 = r3; // mr
    r3 = r21; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x44(r22); // lfs
    // stfs f0, 0x38(r3)
    f0 = /* load */ f0, 0x48(r22); // lfs
    // stfs f0, 0x3c(r3)
    f0 = /* load */ f0, 0x4c(r22); // lfs
    // stfs f0, 0x40(r3)
    r3 = r21; // mr
    sub_0x8059040c();
    r5 = (uint32_t)0 << 16; // lis
    r7 = /* load */ r7, 0x74(r3); // lwz
    r4 = r5 + 0; // addi
    r6 = /* load */ r6, 0x78(r3); // lwz
    f3 = /* load */ f3, 0x6c(r1); // lfs
    f2 = /* load */ f2, 0(r5); // lfs
    f1 = /* load */ f1, 0x70(r1); // lfs
    f0 = /* load */ f0, 4(r4); // lfs
    f2 = f3 * f2; // fmuls
    f3 = /* load */ f3, 0x74(r1); // lfs
    f1 = f1 * f0; // fmuls
    f0 = /* load */ f0, 8(r4); // lfs
    r0 = /* load */ r0, 0x7c(r3); // lwz
    f3 = f3 * f0; // fmuls
    f0 = /* load */ f0, 0xe8(r25); // lfs
    f1 = f2 + f1; // fadds
    // stw r7, 0x60(r1)
    f1 = f3 + f1; // fadds
    // stw r6, 0x64(r1)
    // stw r0, 0x68(r1)
    // .byte 0xfc, 0x01, 0x00, 0x40
    // mfcr r20
    r20 = ((_rotl(r20, 1)) & _mask(0x1f, 0x1f)); // rlwinm.
    L_805864f0:
    f1 = /* load */ f1, 0x64(r1); // lfs
    f0 = /* load */ f0, 0(r25); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805864f0:
    r3 = /* load */ r3, 0(r21); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x14, 0x14)); // rlwinm.
    L_805866ec:
    r5 = /* load */ r5, 0xc0(r1); // lwz
    f3 = -f31; // fneg
    // stw r5, 0x54(r1)
    r3 = r21; // mr
    f0 = /* load */ f0, 0x6c(r1); // lfs
    r4 = /* load */ r4, 0xc4(r1); // lwz
    r0 = /* load */ r0, 0xc8(r1); // lwz
    f2 = f3 * f0; // fmuls
    // stw r4, 0x58(r1)
    f1 = /* load */ f1, 0x70(r1); // lfs
    f0 = /* load */ f0, 0x74(r1); // lfs
    // stw r0, 0x5c(r1)
    f1 = f3 * f1; // fmuls
    f0 = f3 * f0; // fmuls
    f7 = /* load */ f7, 0x9c(r1); // lfs
    f4 = /* load */ f4, 0x54(r1); // lfs
    f6 = /* load */ f6, 0xa0(r1); // lfs
    f7 = f7 + f4; // fadds
    f5 = /* load */ f5, 0x58(r1); // lfs
    f4 = /* load */ f4, 0xa4(r1); // lfs
    f3 = /* load */ f3, 0x5c(r1); // lfs
    f5 = f6 + f5; // fadds
    f2 = f7 + f2; // fadds
    f3 = f4 + f3; // fadds
    f1 = f5 + f1; // fadds
    // stfs f2, 0x48(r1)
    f0 = f3 + f0; // fadds
    // stfs f1, 0x4c(r1)
    // stfs f0, 0x50(r1)
    sub_0x8059040c();
    r5 = /* load */ r5, 0x68(r3); // lwz
    r4 = /* load */ r4, 0x6c(r3); // lwz
    r0 = /* load */ r0, 0x70(r3); // lwz
    r3 = r21; // mr
    // stw r5, 0x3c(r1)
    f2 = /* load */ f2, 0x48(r1); // lfs
    // stw r4, 0x40(r1)
    f1 = /* load */ f1, 0x4c(r1); // lfs
    // stw r0, 0x44(r1)
    f0 = /* load */ f0, 0x50(r1); // lfs
    // stfs f2, 0x3c(r1)
    // stfs f1, 0x40(r1)
    // stfs f0, 0x44(r1)
    sub_0x805914fc();
    f30 = /* load */ f30, 4(r3); // lfs
    r3 = r21; // mr
    sub_0x805908c8();
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = r21; // mr
    f2 = /* load */ f2, 0x6c(r1); // lfs
    f6 = f0 * f30; // fmuls
    f0 = /* load */ f0, 0x70(r1); // lfs
    f1 = /* load */ f1, 0x74(r1); // lfs
    f4 = /* load */ f4, 0x3c(r1); // lfs
    f5 = f6 * f2; // fmuls
    f2 = /* load */ f2, 0x40(r1); // lfs
    f3 = f6 * f0; // fmuls
    f0 = /* load */ f0, 0x44(r1); // lfs
    f1 = f6 * f1; // fmuls
    f4 = f4 + f5; // fadds
    f2 = f2 + f3; // fadds
    f0 = f0 + f1; // fadds
    // stfs f4, 0x3c(r1)
    // stfs f2, 0x40(r1)
    // stfs f0, 0x44(r1)
    sub_0x805907bc();
    f1 = /* load */ f1, 0x22c(r3); // lfs
    r3 = r21; // mr
    f0 = /* load */ f0, 0x40(r1); // lfs
    f0 = f0 + f1; // fadds
    // stfs f0, 0x40(r1)
    sub_0x8059040c();
    r5 = /* load */ r5, 0x68(r3); // lwz
    r4 = /* load */ r4, 0x6c(r3); // lwz
    r0 = /* load */ r0, 0x70(r3); // lwz
    r3 = r21; // mr
    // stw r5, 0x30(r1)
    // stw r4, 0x34(r1)
    // stw r0, 0x38(r1)
    sub_0x80590d38();
    f2 = fabs(f1); // fabs
    f1 = /* load */ f1, 0x5c(r25); // lfs
    f0 = /* load */ f0, 0xf0(r25); // lfd
    // cmpwi r20, 0
    f1 = f1 * f2; // fmuls
    f7 = f1 - f0; // fsub
    f7 = (float)f7; // frsp
    L_80586654:
    f7 = /* load */ f7, 4(r25); // lfs
    f0 = /* load */ f0, 0(r25); // lfs
    // .byte 0xfc, 0x00, 0x38, 0x40
    L_80586668:
    f7 = f0; // fmr
    goto L_80586678;
    f0 = /* load */ f0, 4(r25); // lfs
    // .byte 0xfc, 0x00, 0x38, 0x40
    L_80586678:
    f7 = f0; // fmr
    f1 = /* load */ f1, 0x3c(r1); // lfs
    r3 = r21; // mr
    f6 = /* load */ f6, 0x30(r1); // lfs
    f0 = /* load */ f0, 0x40(r1); // lfs
    f3 = f1 - f6; // fsubs
    f5 = /* load */ f5, 0x34(r1); // lfs
    f1 = /* load */ f1, 0x44(r1); // lfs
    f2 = f0 - f5; // fsubs
    f4 = /* load */ f4, 0x38(r1); // lfs
    f0 = f3 * f7; // fmuls
    f3 = f1 - f4; // fsubs
    f1 = f2 * f7; // fmuls
    // stfs f0, 0xc(r1)
    f2 = f6 + f0; // fadds
    f0 = f3 * f7; // fmuls
    // stfs f1, 0x10(r1)
    f1 = f5 + f1; // fadds
    // stfs f0, 0x14(r1)
    f0 = f4 + f0; // fadds
    // stfs f2, 0x30(r1)
    // stfs f1, 0x34(r1)
    // stfs f0, 0x38(r1)
    sub_0x8059040c();
    f0 = /* load */ f0, 0x30(r1); // lfs
    // stfs f0, 0x68(r3)
    f0 = /* load */ f0, 0x34(r1); // lfs
    // stfs f0, 0x6c(r3)
    f0 = /* load */ f0, 0x38(r1); // lfs
    // stfs f0, 0x70(r3)
    r3 = r21; // mr
    sub_0x805907bc();
    r22 = r3; // mr
    r3 = r21; // mr
    sub_0x805907bc();
    r5 = r3; // mr
    r3 = r1 + 0x24; // addi
    r4 = r22 + 0x68; // addi
    r6 = 1; // li
    r5 = r5 + 0x38; // addi
    sub_0x805aa328();
    r3 = r21; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x24(r1); // lfs
    r22 = r3; // mr
    // stfs f0, 0x5c(r3)
    f0 = /* load */ f0, 0x28(r1); // lfs
    // stfs f0, 0x60(r3)
    f0 = /* load */ f0, 0x2c(r1); // lfs
    // stfs f0, 0x64(r3)
    r3 = r21; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x5c(r22); // lfs
    r24 = 1; // li
    // stfs f0, 0x74(r3)
    f0 = /* load */ f0, 0x60(r22); // lfs
    // stfs f0, 0x78(r3)
    f0 = /* load */ f0, 0x64(r22); // lfs
    // stfs f0, 0x7c(r3)
    r3 = /* load */ r3, 0(r21); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    // oris r0, r0, 0x400
    // stw r0, 0xc(r3)
    goto L_80586790;
    // clrlwi. r0, r23, 0x18
    L_80586784:
    f30 = /* load */ f30, 0(r25); // lfs
    r23 = r23 + 1; // addi
    // cmplwi r23, 2
    L_80586200:
    r3 = r24; // mr
    // .byte 0xe3, 0xe1, 0x01, 0x58
    f31 = /* load */ f31, 0x150(r1); // lfd
    // .byte 0xe3, 0xc1, 0x01, 0x48
    f30 = /* load */ f30, 0x140(r1); // lfd
    r11 = r1 + 0x140; // addi
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x164(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x160
}
