// Decompiled from StaticR.rel
// Address: 0x80585b38
// Size: 1476 bytes (369 instructions)
// Stack frame: 0x00c0
// Calls: 0x80516bc4, 0x805907bc, 0x805aa328, 0x805907bc, 0x8053954c, 0x80555bf4, 0x80555bf4, 0x805907bc, 0x805907bc, 0x80555bf4, 0x8059040c, 0x80555bf4, 0x80555bf4, 0x8059040c, 0x8059040c, 0x805860fc, 0x805907bc, 0x805907bc, 0x805907bc, 0x80555bf4, 0x80590d38, 0x80555bf4, 0x805aa328, 0x8053954c, 0x80555bf4, 0x80555bf4, 0x805907bc

void sub_80585b38(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0xc0(r1)
    // mflr r0
    // stw r0, 0xc4(r1)
    // stfd f31, 0xb0(r1)
    // xxsel vs31, vs1, vs0, v2
    // stfd f30, 0xa0(r1)
    // .byte 0xf3, 0xc1, 0x00, 0xa8
    // stfd f29, 0x90(r1)
    // xscmpgedp vs29, f1, f0
    // stw r31, 0x8c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x88(r1)
    r30 = r3; // mr
    // stw r29, 0x84(r1)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r5 = /* load */ r5, 8(r4); // lwz
    // clrlwi. r0, r5, 0x1f
    L_805860c8:
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 4)); // rlwinm.
    L_805860c8:
    r0 = ((_rotl(r5, 0)) & _mask(3, 3)); // rlwinm.
    L_80585ec4:
    r4 = (uint32_t)0 << 16; // lis
    r3 = r1 + 0x68; // addi
    r4 = r4 + 0; // addi
    sub_0x80516bc4();
    r3 = r30; // mr
    sub_0x805907bc();
    r5 = r3; // mr
    r3 = r1 + 0x68; // addi
    r4 = r3; // mr
    r6 = 1; // li
    r5 = r5 + 0x44; // addi
    sub_0x805aa328();
    r3 = r30; // mr
    sub_0x805907bc();
    r5 = r3 + 0x68; // addi
    f2 = /* load */ f2, 0x68(r3); // lfs
    f3 = /* load */ f3, 0x68(r1); // lfs
    r3 = r1 + 0x14; // addi
    f1 = /* load */ f1, 0x6c(r1); // lfs
    r4 = r1 + 0x68; // addi
    f0 = /* load */ f0, 4(r5); // lfs
    f2 = f3 * f2; // fmuls
    f3 = /* load */ f3, 0x70(r1); // lfs
    f0 = f1 * f0; // fmuls
    f1 = /* load */ f1, 8(r5); // lfs
    f1 = f3 * f1; // fmuls
    f0 = f2 + f0; // fadds
    f31 = f1 + f0; // fadds
    sub_0x8053954c();
    f1 = /* load */ f1, 0x14(r1); // lfs
    f0 = /* load */ f0, 0x18(r1); // lfs
    f1 = f1 * f1; // fmuls
    f2 = /* load */ f2, 0x1c(r1); // lfs
    f0 = f0 * f0; // fmuls
    f2 = f2 * f2; // fmuls
    f0 = f1 + f0; // fadds
    f1 = f2 + f0; // fadds
    sub_0x80555bf4();
    f2 = f31; // fmr
    sub_0x80555bf4();
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80585c4c:
    goto L_80585c50;
    f1 = -f1; // fneg
    f0 = /* load */ f0, 0x58(r31); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f29 = /* load */ f29, 0(r3); // lfs
    r3 = r30; // mr
    f30 = f0 * f1; // fmuls
    f31 = /* load */ f31, 4(r31); // lfs
    sub_0x805907bc();
    r5 = (uint32_t)0 << 16; // lis
    f3 = /* load */ f3, 0x44(r3); // lfs
    r4 = r5 + 0; // addi
    f2 = /* load */ f2, 0(r5); // lfs
    f1 = /* load */ f1, 0x48(r3); // lfs
    f0 = /* load */ f0, 4(r4); // lfs
    f2 = f3 * f2; // fmuls
    f4 = /* load */ f4, 0x4c(r3); // lfs
    f1 = f1 * f0; // fmuls
    f3 = /* load */ f3, 8(r4); // lfs
    f0 = /* load */ f0, 0xe4(r31); // lfs
    f3 = f4 * f3; // fmuls
    f1 = f2 + f1; // fadds
    f1 = f3 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80585cbc:
    f1 = /* load */ f1, 0x1c(r31); // lfs
    f0 = /* load */ f0, 0x74(r31); // lfs
    f29 = f29 * f1; // fmuls
    f31 = f31 * f0; // fmuls
    // .byte 0xfc, 0x1e, 0xe8, 0x40
    L_80585e44:
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb68(r3); // lwz
    // cmpwi r0, 0xf
    r4 = (uint32_t)0 << 16; // lis
    r3 = r30; // mr
    f1 = /* load */ f1, 0(r4); // lfs
    r29 = r4 + 0; // addi
    f0 = /* load */ f0, 0xc(r29); // lfs
    f1 = f30 - f1; // fsubs
    f29 = f0 * f1; // fmuls
    sub_0x805907bc();
    f0 = /* load */ f0, 0xb4(r3); // lfs
    r3 = r1 + 0x58; // addi
    f1 = /* load */ f1, 0(r31); // lfs
    f5 = f29 * f0; // fmuls
    f4 = /* load */ f4, 8(r29); // lfs
    f2 = /* load */ f2, 0x54(r31); // lfs
    f3 = f1; // fmr
    f0 = /* load */ f0, 0x10(r30); // lfs
    f4 = f4 + f5; // fadds
    f4 = f4 * f31; // fmuls
    f2 = f2 * f4; // fmuls
    f2 = f2 * f0; // fmuls
    sub_0x80555bf4();
    r3 = r30; // mr
    sub_0x8059040c();
    r4 = r3; // mr
    f10 = /* load */ f10, 0xfc(r3); // lfs
    f0 = /* load */ f0, 0x64(r1); // lfs
    r3 = r1 + 0x48; // addi
    f31 = /* load */ f31, 0xf0(r4); // lfs
    f13 = /* load */ f13, 0x58(r1); // lfs
    f7 = f10 * f0; // fmuls
    f12 = /* load */ f12, 0xf4(r4); // lfs
    f5 = f31 * f0; // fmuls
    f11 = /* load */ f11, 0x5c(r1); // lfs
    f4 = f10 * f13; // fmuls
    f9 = /* load */ f9, 0xf8(r4); // lfs
    f8 = /* load */ f8, 0x60(r1); // lfs
    f6 = f31 * f13; // fmuls
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
    sub_0x80555bf4();
    r3 = r1 + 0x48; // addi
    sub_0x80555bf4();
    r3 = r30; // mr
    sub_0x8059040c();
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r4); // lfs
    r4 = r4 + 0; // addi
    // stfs f0, 0xa4(r3)
    f0 = /* load */ f0, 4(r4); // lfs
    // stfs f0, 0xa8(r3)
    f0 = /* load */ f0, 8(r4); // lfs
    // stfs f0, 0xac(r3)
    r3 = r30; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x48(r1); // lfs
    // stfs f0, 0x100(r3)
    f3 = (float)f0; // frsp
    f0 = /* load */ f0, 0x4c(r1); // lfs
    // stfs f0, 0x104(r3)
    f2 = (float)f0; // frsp
    f0 = /* load */ f0, 0x50(r1); // lfs
    // stfs f0, 0x108(r3)
    f1 = (float)f0; // frsp
    f0 = /* load */ f0, 0x54(r1); // lfs
    // stfs f0, 0x10c(r3)
    f0 = (float)f0; // frsp
    // stfs f3, 0xf0(r3)
    // stfs f2, 0xf4(r3)
    // stfs f1, 0xf8(r3)
    // stfs f0, 0xfc(r3)
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xd, 0xb)); // rlwinm
    // stw r0, 4(r4)
    sub_0x805860fc();
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x14, 0x14)); // rlwinm.
    L_805860c8:
    // cmpwi r3, 0
    L_805860c8:
    r3 = r30; // mr
    sub_0x805907bc();
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 2)); // rlwinm
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x13)); // rlwinm
    // stw r0, 0xc(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 4)); // rlwinm
    // stw r0, 0xc(r3)
    goto L_805860c8;
    r0 = ((_rotl(r5, 0)) & _mask(4, 4)); // rlwinm.
    L_805860c8:
    // andi. r0, r5, 0x1600
    L_805860c8:
    sub_0x805907bc();
    r4 = /* load */ r4, 0x68(r3); // lwz
    r0 = /* load */ r0, 0x6c(r3); // lwz
    // stw r0, 0x3c(r1)
    // stw r4, 0x38(r1)
    r0 = /* load */ r0, 0x70(r3); // lwz
    r3 = r30; // mr
    // stw r0, 0x40(r1)
    sub_0x805907bc();
    r4 = /* load */ r4, 0x44(r3); // lwz
    r0 = /* load */ r0, 0x48(r3); // lwz
    // stw r0, 0x30(r1)
    f3 = /* load */ f3, 0(r31); // lfs
    // stw r4, 0x2c(r1)
    f0 = f3 * f3; // fmuls
    r0 = /* load */ r0, 0x4c(r3); // lwz
    f1 = /* load */ f1, 0x2c(r1); // lfs
    // stw r0, 0x34(r1)
    f1 = f1 * f1; // fmuls
    f2 = /* load */ f2, 0x34(r1); // lfs
    // stfs f3, 0x30(r1)
    f2 = f2 * f2; // fmuls
    f0 = f1 + f0; // fadds
    f1 = f2 + f0; // fadds
    sub_0x80555bf4();
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805860c8:
    r3 = r30; // mr
    sub_0x80590d38();
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805860c8:
    r3 = r1 + 0x2c; // addi
    sub_0x80555bf4();
    r3 = r1 + 0x38; // addi
    r5 = r1 + 0x2c; // addi
    r4 = r3; // mr
    r6 = 1; // li
    sub_0x805aa328();
    f1 = /* load */ f1, 0x3c(r1); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805860c8:
    r3 = (uint32_t)0 << 16; // lis
    f2 = /* load */ f2, 0x38(r1); // lfs
    r4 = r3 + 0; // addi
    f3 = /* load */ f3, 0(r3); // lfs
    f1 = /* load */ f1, 4(r4); // lfs
    r3 = r1 + 8; // addi
    f0 = /* load */ f0, 0x3c(r1); // lfs
    f2 = f3 * f2; // fmuls
    f3 = /* load */ f3, 8(r4); // lfs
    r5 = r1 + 0x38; // addi
    f0 = f1 * f0; // fmuls
    f1 = /* load */ f1, 0x40(r1); // lfs
    f1 = f3 * f1; // fmuls
    f0 = f2 + f0; // fadds
    f31 = f1 + f0; // fadds
    sub_0x8053954c();
    f1 = /* load */ f1, 8(r1); // lfs
    f0 = /* load */ f0, 0xc(r1); // lfs
    f1 = f1 * f1; // fmuls
    f2 = /* load */ f2, 0x10(r1); // lfs
    f0 = f0 * f0; // fmuls
    f2 = f2 * f2; // fmuls
    f0 = f1 + f0; // fadds
    f1 = f2 + f0; // fadds
    sub_0x80555bf4();
    f2 = f31; // fmr
    sub_0x80555bf4();
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0x3c(r1); // lfs
    r4 = r3 + 0; // addi
    f7 = /* load */ f7, 0(r3); // lfs
    f2 = /* load */ f2, 8(r4); // lfs
    r3 = r30; // mr
    f4 = /* load */ f4, 0x38(r1); // lfs
    f6 = f7 * f0; // fmuls
    f5 = /* load */ f5, 4(r4); // lfs
    f0 = f2 * f0; // fmuls
    f3 = f2 * f4; // fmuls
    f1 = /* load */ f1, 0x40(r1); // lfs
    f4 = f5 * f4; // fmuls
    f2 = f7 * f1; // fmuls
    f1 = f5 * f1; // fmuls
    f4 = f6 - f4; // fsubs
    f2 = f3 - f2; // fsubs
    f0 = f1 - f0; // fsubs
    // stfs f4, 0x28(r1)
    // stfs f0, 0x20(r1)
    // stfs f2, 0x24(r1)
    sub_0x805907bc();
    f3 = /* load */ f3, 0x20(r1); // lfs
    f2 = /* load */ f2, 0x44(r3); // lfs
    f1 = /* load */ f1, 0x24(r1); // lfs
    f0 = /* load */ f0, 0x48(r3); // lfs
    f2 = f3 * f2; // fmuls
    f4 = /* load */ f4, 0x28(r1); // lfs
    f1 = f1 * f0; // fmuls
    f3 = /* load */ f3, 0x4c(r3); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    f3 = f4 * f3; // fmuls
    f1 = f2 + f1; // fadds
    f1 = f3 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586090:
    f0 = /* load */ f0, 4(r31); // lfs
    goto L_80586094;
    f0 = /* load */ f0, 0xc(r31); // lfs
    // stfs f0, 0x10(r30)
    r0 = 0; // li
    r3 = /* load */ r3, 0(r30); // lwz
    r4 = /* load */ r4, 4(r3); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r3 = ((_rotl(r3, 0)) & _mask(0xd, 0xb)); // rlwinm
    // stw r3, 4(r4)
    r3 = /* load */ r3, 0(r30); // lwz
    r4 = /* load */ r4, 4(r3); // lwz
    r3 = /* load */ r3, 8(r4); // lwz
    // oris r3, r3, 0x1000
    // stw r3, 8(r4)
    // stw r0, 0x14(r30)
    // .byte 0xe3, 0xe1, 0x00, 0xb8
    f31 = /* load */ f31, 0xb0(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0xa8
    f30 = /* load */ f30, 0xa0(r1); // lfd
    // .byte 0xe3, 0xa1, 0x00, 0x98
    f29 = /* load */ f29, 0x90(r1); // lfd
    r31 = /* load */ r31, 0x8c(r1); // lwz
    r30 = /* load */ r30, 0x88(r1); // lwz
    r0 = /* load */ r0, 0xc4(r1); // lwz
    r29 = /* load */ r29, 0x84(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0xc0
}
