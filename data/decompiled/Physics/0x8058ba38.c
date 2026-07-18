// Decompiled from StaticR.rel
// Address: 0x8058ba38
// Size: 1000 bytes (250 instructions)
// Stack frame: 0x0070
// Calls: 0x80555bf4, 0x80555bf4, 0x805907d4, indirect, 0x805907bc, 0x805aa50c, 0x8059040c, 0x8059088c, 0x805907bc, 0x805907bc, 0x80555bf4, 0x80555bf4, 0x8059040c, 0x80555bf4, 0x8059040c, 0x805907bc

void sub_8058ba38(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x70(r1)
    // mflr r0
    // stw r0, 0x74(r1)
    // stfd f31, 0x60(r1)
    // .byte 0xf3, 0xe1, 0x00, 0x68
    // stfd f30, 0x50(r1)
    // xscmpgtdp vs30, f1, f0
    // stw r31, 0x4c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x48(r1)
    r30 = r3; // mr
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x15)); // rlwinm.
    L_8058bdf8:
    r0 = /* load */ r0, 0x60(r3); // lhz
    // clrlwi. r0, r0, 0x1f
    L_8058ba90:
    f4 = /* load */ f4, 0x68(r31); // lfs
    goto L_8058ba94;
    f4 = /* load */ f4, 0x20(r31); // lfs
    f1 = /* load */ f1, 0x20(r3); // lfs
    f0 = /* load */ f0, 8(r31); // lfs
    f1 = f4 * f1; // fmuls
    // stfs f1, 0x38(r1)
    f2 = f1 * f1; // fmuls
    f1 = /* load */ f1, 0x24(r3); // lfs
    f1 = f4 * f1; // fmuls
    // stfs f1, 0x3c(r1)
    f1 = f1 * f1; // fmuls
    f3 = /* load */ f3, 0x28(r3); // lfs
    f3 = f4 * f3; // fmuls
    f1 = f2 + f1; // fadds
    // stfs f3, 0x40(r1)
    f2 = f3 * f3; // fmuls
    f1 = f2 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    // mfcr r0
    r0 = ((_rotl(r0, 3)) & _mask(0x1f, 0x1f)); // rlwinm.
    L_8058bb34:
    r0 = /* load */ r0, 0x60(r3); // lhz
    // clrlwi. r0, r0, 0x1f
    L_8058baf8:
    f31 = /* load */ f31, 0x6c(r31); // lfs
    goto L_8058bafc;
    f31 = /* load */ f31, 0x18(r31); // lfs
    r3 = r1 + 0x38; // addi
    sub_0x80555bf4();
    // .byte 0xfc, 0x1f, 0x08, 0x40
    L_8058bb10:
    f1 = f31; // fmr
    f3 = /* load */ f3, 0x38(r1); // lfs
    f2 = /* load */ f2, 0x3c(r1); // lfs
    f0 = /* load */ f0, 0x40(r1); // lfs
    f3 = f3 * f1; // fmuls
    f2 = f2 * f1; // fmuls
    f0 = f0 * f1; // fmuls
    // stfs f3, 0x38(r1)
    // stfs f2, 0x3c(r1)
    // stfs f0, 0x40(r1)
    f1 = /* load */ f1, 0x38(r1); // lfs
    f0 = /* load */ f0, 0x3c(r1); // lfs
    f2 = f1 * f1; // fmuls
    f3 = /* load */ f3, 0x40(r1); // lfs
    f1 = f0 * f0; // fmuls
    f0 = /* load */ f0, 8(r31); // lfs
    f3 = f3 * f3; // fmuls
    f1 = f2 + f1; // fadds
    f1 = f3 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    // mfcr r0
    r0 = ((_rotl(r0, 3)) & _mask(0x1f, 0x1f)); // rlwinm.
    L_8058bb94:
    sub_0x80555bf4();
    f0 = /* load */ f0, 0x70(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_8058bb94:
    r3 = r30; // mr
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r12 = /* load */ r12, 0x100(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    f1 = /* load */ f1, 0x20(r30); // lfs
    r3 = r30; // mr
    f0 = /* load */ f0, 0x38(r1); // lfs
    f2 = /* load */ f2, 0x24(r30); // lfs
    f0 = f1 - f0; // fsubs
    f1 = /* load */ f1, 0x28(r30); // lfs
    // stfs f0, 0x20(r30)
    f0 = /* load */ f0, 0x3c(r1); // lfs
    f0 = f2 - f0; // fsubs
    // stfs f0, 0x24(r30)
    f0 = /* load */ f0, 0x40(r1); // lfs
    f0 = f1 - f0; // fsubs
    // stfs f0, 0x28(r30)
    sub_0x805907bc();
    r5 = r3; // mr
    r3 = r1 + 0x38; // addi
    r4 = r3; // mr
    r5 = r5 + 0x38; // addi
    sub_0x805aa50c();
    r3 = r30; // mr
    sub_0x8059040c();
    f1 = /* load */ f1, 0x68(r3); // lfs
    f0 = /* load */ f0, 0x38(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x68(r3)
    f1 = /* load */ f1, 0x6c(r3); // lfs
    f0 = /* load */ f0, 0x3c(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x6c(r3)
    f1 = /* load */ f1, 0x70(r3); // lfs
    f0 = /* load */ f0, 0x40(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x70(r3)
    r3 = r30; // mr
    sub_0x8059088c();
    f1 = /* load */ f1, 0x3c(r3); // lfs
    f0 = /* load */ f0, 0x38(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x3c(r3)
    f1 = /* load */ f1, 0x40(r3); // lfs
    f0 = /* load */ f0, 0x3c(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x40(r3)
    f1 = /* load */ f1, 0x44(r3); // lfs
    f0 = /* load */ f0, 0x40(r1); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x44(r3)
    r3 = r30; // mr
    sub_0x805907bc();
    r0 = /* load */ r0, 0x60(r30); // lhz
    f31 = /* load */ f31, 0x20(r3); // lfs
    // clrlwi. r0, r0, 0x1f
    L_8058bc70:
    f1 = /* load */ f1, 0x68(r31); // lfs
    goto L_8058bc74;
    f1 = /* load */ f1, 0x20(r31); // lfs
    f0 = /* load */ f0, 0x4c(r30); // lfs
    r3 = r30; // mr
    f30 = f0 * f1; // fmuls
    f0 = f0 - f30; // fsubs
    // stfs f0, 0x4c(r30)
    sub_0x805907bc();
    f0 = f31 + f30; // fadds
    // stfs f0, 0x20(r3)
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // clrlwi. r0, r0, 0x1f
    L_8058bdd4:
    f30 = /* load */ f30, 0x20(r31); // lfs
    f1 = /* load */ f1, 0x48(r30); // lfs
    f0 = /* load */ f0, 4(r31); // lfs
    f1 = f1 + f30; // fadds
    // stfs f1, 0x48(r30)
    // .byte 0xfc, 0x00, 0x08, 0x40
    L_8058bcd0:
    // stfs f0, 0x48(r30)
    r0 = 1; // li
    goto L_8058bcd4;
    r0 = 0; // li
    // cmpwi r0, 0
    L_8058bdd4:
    f2 = /* load */ f2, 0(r31); // lfs
    r3 = r1 + 0x28; // addi
    f1 = /* load */ f1, 4(r31); // lfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    sub_0x80555bf4();
    f1 = f30; // fmr
    r3 = r1 + 0x28; // addi
    r4 = r30 + 0x2c; // addi
    r5 = r1 + 0x18; // addi
    sub_0x80555bf4();
    r3 = r30; // mr
    sub_0x8059040c();
    r4 = r3; // mr
    f10 = /* load */ f10, 0xfc(r3); // lfs
    f0 = /* load */ f0, 0x24(r1); // lfs
    r3 = r1 + 8; // addi
    f31 = /* load */ f31, 0xf0(r4); // lfs
    f13 = /* load */ f13, 0x18(r1); // lfs
    f7 = f10 * f0; // fmuls
    f12 = /* load */ f12, 0xf4(r4); // lfs
    f5 = f31 * f0; // fmuls
    f11 = /* load */ f11, 0x1c(r1); // lfs
    f4 = f10 * f13; // fmuls
    f9 = /* load */ f9, 0xf8(r4); // lfs
    f8 = /* load */ f8, 0x20(r1); // lfs
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
    r3 = r30; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 8(r1); // lfs
    // stfs f0, 0xf0(r3)
    f0 = /* load */ f0, 0xc(r1); // lfs
    // stfs f0, 0xf4(r3)
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f0, 0xf8(r3)
    f0 = /* load */ f0, 0x14(r1); // lfs
    // stfs f0, 0xfc(r3)
    f31 = /* load */ f31, 0x88(r30); // lfs
    r3 = r30; // mr
    sub_0x805907bc();
    f2 = /* load */ f2, 0x9c(r3); // lfs
    f0 = /* load */ f0, 0x58(r31); // lfs
    f1 = f31 - f2; // fsubs
    f0 = f0 * f1; // fmuls
    f0 = f2 + f0; // fadds
    // stfs f0, 0x9c(r3)
    // .byte 0xe3, 0xe1, 0x00, 0x68
    f31 = /* load */ f31, 0x60(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0x58
    f30 = /* load */ f30, 0x50(r1); // lfd
    r31 = /* load */ r31, 0x4c(r1); // lwz
    r0 = /* load */ r0, 0x74(r1); // lwz
    r30 = /* load */ r30, 0x48(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x70
}
