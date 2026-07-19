// Decompiled from StaticR.rel
// Address: 0x80587da8
// Size: 1512 bytes (378 instructions)
// Stack frame: 0x00a0
// Calls: 0x80537f4c, 0x805906a4, 0x80590cfc, 0x80516c00, 0x8059040c, 0x8057d1d4, 0x8059040c, 0x80586a1c, 0x80555bf4, 0x8059040c

void sub_80587da8(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0xa0(r1)
    // mflr r0
    // stw r0, 0xa4(r1)
    // stfd f31, 0x90(r1)
    // xscmpgedp vs31, f1, f0
    // stfd f30, 0x80(r1)
    // xsmsubasp f30, f1, f0
    // stfd f29, 0x70(r1)
    // xxsel vs29, vs1, vs0, v1
    // stfd f28, 0x60(r1)
    // .byte 0xf3, 0x81, 0x00, 0x68
    // stfd f27, 0x50(r1)
    // xscmpgtdp vs27, f1, f0
    f28 = f1; // fmr
    // stw r31, 0x4c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x48(r1)
    r30 = r3; // mr
    r5 = /* load */ r5, 0x2c0(r3); // lwz
    r4 = /* load */ r4, 0(r3); // lwz
    f27 = /* load */ f27, 4(r5); // lfs
    r4 = /* load */ r4, 4(r4); // lwz
    f29 = /* load */ f29, 8(r5); // lfs
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 6)); // rlwinm.
    L_80587e20:
    f27 = /* load */ f27, 0x20(r5); // lfs
    f29 = /* load */ f29, 0x24(r5); // lfs
    goto L_80587e58;
    r3 = (uint32_t)0 << 16; // lis
    r4 = 2; // li
    r3 = /* load */ r3, 0(r3); // lwz
    sub_0x80537f4c();
    // cmpwi r3, 0
    L_80587e4c:
    f1 = /* load */ f1, 0x20(r30); // lfs
    f0 = /* load */ f0, 0x6c(r31); // lfs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80587e58:
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    f27 = /* load */ f27, 0x18(r3); // lfs
    f29 = /* load */ f29, 0x1c(r3); // lfs
    f3 = /* load */ f3, 0x298(r30); // lfs
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0x29c(r30); // lfs
    r3 = r30; // mr
    f2 = f29 - f3; // fsubs
    f4 = /* load */ f4, 0(r4); // lfs
    f0 = f27 - f1; // fsubs
    f29 = /* load */ f29, 0(r31); // lfs
    f2 = f4 * f2; // fmuls
    f31 = f3 + f2; // fadds
    // stfs f31, 0x298(r30)
    f30 = -f31; // fneg
    f2 = /* load */ f2, 0(r4); // lfs
    f0 = f2 * f0; // fmuls
    f27 = f1 + f0; // fadds
    // stfs f27, 0x29c(r30)
    sub_0x805906a4();
    // cmpwi r3, 0
    L_80587eac:
    f2 = /* load */ f2, 0x28c(r30); // lfs
    goto L_80587eb8;
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    f2 = /* load */ f2, 0x88(r3); // lfs
    r3 = /* load */ r3, 0(r30); // lwz
    r5 = 1; // li
    r6 = 1; // li
    r7 = 1; // li
    r8 = /* load */ r8, 4(r3); // lwz
    r4 = 1; // li
    r0 = /* load */ r0, 4(r8); // lwz
    r3 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80587eec:
    r3 = /* load */ r3, 8(r8); // lwz
    // andi. r3, r3, 0x1b
    L_80587eec:
    r4 = 0; // li
    // cmpwi r4, 0
    L_80587f0c:
    r3 = 0x20c + ((uint32_t)0x20c << 16); // lis
    r4 = /* load */ r4, 0xc(r8); // lwz
    r3 = r3 + 0x100; // addi
    r3 = r4 & r3; // and.
    L_80587f0c:
    r7 = 0; // li
    // cmpwi r7, 0
    L_80587f2c:
    r3 = 7 + ((uint32_t)7 << 16); // lis
    r4 = /* load */ r4, 0x14(r8); // lwz
    r3 = r3 + 0x4e80; // addi
    r3 = r4 & r3; // and.
    L_80587f2c:
    r6 = 0; // li
    // cmpwi r6, 0
    L_80587f44:
    r3 = /* load */ r3, 8(r8); // lwz
    r3 = ((_rotl(r3, 0)) & _mask(0x15, 0x15)); // rlwinm.
    L_80587f44:
    r5 = 0; // li
    // cmpwi r5, 0
    L_80587f80:
    r3 = ((_rotl(r0, 0)) & _mask(2, 2)); // rlwinm
    r3 = _rlwimi(r3, r0, 0, 0x10, 0x10); // rlwimi.
    L_80587f80:
    r4 = /* load */ r4, 8(r8); // lwz
    r3 = ((_rotl(r4, 0)) & _mask(3, 3)); // rlwinm
    r3 = _rlwimi(r3, r4, 0, 0x15, 0x15); // rlwimi.
    L_80587f80:
    r3 = /* load */ r3, 0xc(r8); // lwz
    r3 = ((_rotl(r3, 0)) & _mask(4, 4)); // rlwinm.
    L_80587f80:
    r3 = /* load */ r3, 0x10(r8); // lwz
    r3 = ((_rotl(r3, 0)) & _mask(0x1a, 0x1c)); // rlwinm.
    L_80587f98:
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    f1 = /* load */ f1, 0x294(r30); // lfs
    f0 = /* load */ f0, 0x28(r3); // lfs
    f0 = f1 * f0; // fmuls
    // stfs f0, 0x294(r30)
    goto L_805880d4;
    r3 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm
    r3 = _rlwimi(r3, r0, 0, 0x1c, 0x1c); // rlwimi.
    L_80588074:
    r0 = /* load */ r0, 0xcc(r30); // lwz
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    // cmpwi r0, 1
    f30 = /* load */ f30, 0x14(r3); // lfs
    f31 = /* load */ f31, 0x10(r3); // lfs
    f1 = /* load */ f1, 0xc(r3); // lfs
    L_80587fcc:
    f0 = f30; // fmr
    f30 = -f31; // fneg
    f31 = -f0; // fneg
    // cmpwi r0, -1
    L_80588024:
    f0 = /* load */ f0, 0(r31); // lfs
    // fcmpu cr0, f0, f2
    L_80588000:
    f1 = /* load */ f1, 0x1c(r31); // lfs
    f2 = /* load */ f2, 0x294(r30); // lfs
    f0 = /* load */ f0, 0x48(r31); // lfs
    f1 = f1 - f2; // fsubs
    f0 = f0 * f1; // fmuls
    f0 = f2 + f0; // fadds
    // stfs f0, 0x294(r30)
    goto L_805880d4;
    f1 = f1 * f2; // fmuls
    f0 = /* load */ f0, 0x294(r30); // lfs
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    f0 = f0 + f1; // fadds
    // stfs f0, 0x294(r30)
    f0 = /* load */ f0, 0(r3); // lfs
    f0 = -f0; // fneg
    f29 = f0 * f2; // fmuls
    goto L_805880d4;
    f0 = /* load */ f0, 0(r31); // lfs
    // fcmpu cr0, f0, f2
    L_80588050:
    f1 = /* load */ f1, 0x78(r31); // lfs
    f2 = /* load */ f2, 0x294(r30); // lfs
    f0 = /* load */ f0, 0x48(r31); // lfs
    f1 = f1 - f2; // fsubs
    f0 = f0 * f1; // fmuls
    f0 = f2 + f0; // fadds
    // stfs f0, 0x294(r30)
    goto L_805880d4;
    f1 = f1 * f2; // fmuls
    f0 = /* load */ f0, 0x294(r30); // lfs
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    f0 = f0 + f1; // fadds
    // stfs f0, 0x294(r30)
    f0 = /* load */ f0, 0(r3); // lfs
    f0 = -f0; // fneg
    f29 = f0 * f2; // fmuls
    goto L_805880d4;
    f0 = /* load */ f0, 0xb0(r31); // lfs
    // .byte 0xfc, 0x02, 0x00, 0x40
    L_8058809c:
    f0 = /* load */ f0, 0x294(r30); // lfs
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    f0 = f0 + f27; // fadds
    // stfs f0, 0x294(r30)
    f0 = /* load */ f0, 0(r3); // lfs
    f29 = -f0; // fneg
    goto L_805880d4;
    f0 = /* load */ f0, 0x100(r31); // lfs
    // .byte 0xfc, 0x02, 0x00, 0x40
    L_805880c0:
    f0 = /* load */ f0, 0x294(r30); // lfs
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    f0 = f0 - f27; // fsubs
    // stfs f0, 0x294(r30)
    f29 = /* load */ f29, 0(r3); // lfs
    goto L_805880d4;
    r3 = /* load */ r3, 0x2c0(r30); // lwz
    f1 = /* load */ f1, 0x294(r30); // lfs
    f0 = /* load */ f0, 0x28(r3); // lfs
    f0 = f1 * f0; // fmuls
    // stfs f0, 0x294(r30)
    f0 = /* load */ f0, 0x294(r30); // lfs
    r0 = 0; // li
    // .byte 0xfc, 0x1e, 0x00, 0x40
    L_805880f0:
    // stfs f30, 0x294(r30)
    r0 = 1; // li
    goto L_80588100;
    // .byte 0xfc, 0x1f, 0x00, 0x40
    L_80588100:
    // stfs f31, 0x294(r30)
    r0 = 1; // li
    // cmpwi r0, 0
    L_80588158:
    r3 = r30; // mr
    sub_0x80590cfc();
    f1 = f29; // fmr
    r4 = r3; // mr
    r3 = r1 + 8; // addi
    sub_0x80516c00();
    r3 = r30; // mr
    sub_0x8059040c();
    f1 = /* load */ f1, 0x74(r3); // lfs
    f0 = /* load */ f0, 8(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x74(r3)
    f1 = /* load */ f1, 0x78(r3); // lfs
    f0 = /* load */ f0, 0xc(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x78(r3)
    f1 = /* load */ f1, 0x7c(r3); // lfs
    f0 = /* load */ f0, 0x10(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x7c(r3)
    r3 = /* load */ r3, 0(r30); // lwz
    f2 = /* load */ f2, 0x48(r31); // lfs
    r3 = /* load */ r3, 4(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = ((_rotl(r3, 0)) & _mask(3, 3)); // rlwinm
    r0 = _rlwimi(r0, r3, 0, 0x1c, 0x1c); // rlwimi.
    L_8058817c:
    f0 = /* load */ f0, 0x104(r31); // lfs
    f2 = f2 * f0; // fmuls
    r0 = ((_rotl(r3, 0)) & _mask(2, 2)); // rlwinm.
    f1 = /* load */ f1, 4(r31); // lfs
    L_80588190:
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
    f0 = /* load */ f0, 0x294(r30); // lfs
    f27 = f28 * f1; // fmuls
    r3 = r30; // mr
    f28 = f0 * f2; // fmuls
    sub_0x8057d1d4();
    // stfs f1, 0x38(r1)
    r3 = r30; // mr
    // stfs f27, 0x3c(r1)
    // stfs f28, 0x40(r1)
    sub_0x8059040c();
    f2 = /* load */ f2, 0xe4(r3); // lfs
    f1 = (float)f27; // frsp
    f0 = /* load */ f0, 0x38(r1); // lfs
    f2 = f2 + f0; // fadds
    f0 = (float)f28; // frsp
    // stfs f2, 0xe4(r3)
    f2 = /* load */ f2, 0xe8(r3); // lfs
    f1 = f2 + f1; // fadds
    // stfs f1, 0xe8(r3)
    f1 = /* load */ f1, 0xec(r3); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0xec(r3)
    r3 = r30; // mr
    sub_0x80586a1c();
    r3 = /* load */ r3, 0x44(r30); // lwz
    r0 = /* load */ r0, 0x48(r30); // lwz
    // stw r0, 0x30(r1)
    // stw r3, 0x2c(r1)
    r0 = /* load */ r0, 0x4c(r30); // lwz
    // stw r0, 0x34(r1)
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r3 = /* load */ r3, 8(r3); // lwz
    r0 = ((_rotl(r3, 0)) & _mask(4, 4)); // rlwinm
    r0 = _rlwimi(r0, r3, 0, 0x15, 0x16); // rlwimi.
    L_80588304:
    f2 = /* load */ f2, 0xb0(r30); // lfs
    f1 = /* load */ f1, 0x74(r31); // lfs
    f3 = /* load */ f3, 0x20(r30); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    f6 = f1 * f2; // fmuls
    // .byte 0xfc, 0x03, 0x00, 0x40
    L_80588240:
    f6 = f0; // fmr
    f0 = /* load */ f0, 4(r31); // lfs
    // .byte 0xfc, 0x00, 0x30, 0x40
    L_80588250:
    f6 = f0; // fmr
    f0 = /* load */ f0, 4(r31); // lfs
    r4 = (uint32_t)0 << 16; // lis
    f12 = /* load */ f12, 0x44(r30); // lfs
    r3 = r4 + 0; // addi
    f5 = f0 - f6; // fsubs
    f11 = /* load */ f11, 0x48(r30); // lfs
    f1 = /* load */ f1, 0(r4); // lfs
    f4 = f6 * f12; // fmuls
    f0 = /* load */ f0, 4(r3); // lfs
    f2 = f6 * f11; // fmuls
    f9 = f5 * f1; // fmuls
    f10 = /* load */ f10, 0x4c(r30); // lfs
    f8 = f5 * f0; // fmuls
    f1 = /* load */ f1, 8(r3); // lfs
    f3 = f6 * f10; // fmuls
    // stfs f4, 0x20(r1)
    f7 = f5 * f1; // fmuls
    // stfs f2, 0x24(r1)
    f6 = f4 + f9; // fadds
    f0 = /* load */ f0, 8(r31); // lfs
    f5 = f2 + f8; // fadds
    // stfs f3, 0x28(r1)
    f4 = f3 + f7; // fadds
    // stfs f9, 0x14(r1)
    f2 = f6 * f6; // fmuls
    f1 = f5 * f5; // fmuls
    // stfs f8, 0x18(r1)
    f3 = f4 * f4; // fmuls
    // stfs f7, 0x1c(r1)
    f1 = f2 + f1; // fadds
    // stfs f6, 0x2c(r1)
    f1 = f3 + f1; // fadds
    // stfs f5, 0x30(r1)
    // stfs f4, 0x34(r1)
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    // mfcr r0
    r0 = ((_rotl(r0, 3)) & _mask(0x1f, 0x1f)); // rlwinm.
    L_805882f8:
    r3 = r1 + 0x2c; // addi
    sub_0x80555bf4();
    goto L_80588304;
    // stfs f12, 0x2c(r1)
    // stfs f11, 0x30(r1)
    // stfs f10, 0x34(r1)
    r3 = r30; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x2c(r1); // lfs
    // stfs f0, 0x180(r3)
    f0 = /* load */ f0, 0x30(r1); // lfs
    // stfs f0, 0x184(r3)
    f0 = /* load */ f0, 0x34(r1); // lfs
    // stfs f0, 0x188(r3)
    // .byte 0xe3, 0xe1, 0x00, 0x98
    f31 = /* load */ f31, 0x90(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0x88
    f30 = /* load */ f30, 0x80(r1); // lfd
    // .byte 0xe3, 0xa1, 0x00, 0x78
    f29 = /* load */ f29, 0x70(r1); // lfd
    // .byte 0xe3, 0x81, 0x00, 0x68
    f28 = /* load */ f28, 0x60(r1); // lfd
    // .byte 0xe3, 0x61, 0x00, 0x58
    f27 = /* load */ f27, 0x50(r1); // lfd
    r31 = /* load */ r31, 0x4c(r1); // lwz
    r30 = /* load */ r30, 0x48(r1); // lwz
    r0 = /* load */ r0, 0xa4(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0xa0
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 2)); // rlwinm.
    L_80588384:
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
}
