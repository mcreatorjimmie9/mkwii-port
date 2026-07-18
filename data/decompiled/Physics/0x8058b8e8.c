// Decompiled from StaticR.rel
// Address: 0x8058b8e8
// Size: 336 bytes (84 instructions)
// Stack frame: 0x0060
// Calls: 0x805908b4, 0x80520e18, 0x80590d38, 0x80590d38, 0x805907bc, 0x80590d38, 0x805907bc

void sub_8058b8e8(r3 /* param */) {
    // stwu r1, -0x60(r1)
    // mflr r0
    // stw r0, 0x64(r1)
    // stfd f31, 0x50(r1)
    // xscmpgtdp vs31, f1, f0
    // stfd f30, 0x40(r1)
    // xsmaddmsp f30, f1, f0
    // stfd f29, 0x30(r1)
    // xxsel vs29, vs1, vs0, v0
    // stfd f28, 0x20(r1)
    // .byte 0xf3, 0x81, 0x00, 0x28
    // stfd f27, 0x10(r1)
    // xscmpeqdp vs27, f1, f0
    // stw r31, 0xc(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x805908b4();
    f31 = /* load */ f31, 0x4c(r3); // lfs
    r3 = /* load */ r3, 0x9c(r30); // lbz
    sub_0x80520e18();
    f0 = -f1; // fneg
    f30 = /* load */ f30, 0x5c(r31); // lfs
    f29 = /* load */ f29, 0x60(r31); // lfs
    r3 = r30; // mr
    f28 = /* load */ f28, 0x64(r31); // lfs
    f31 = f0 * f31; // fmuls
    f27 = /* load */ f27, 0x1c(r31); // lfs
    sub_0x80590d38();
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_8058b9f4:
    r3 = r30; // mr
    sub_0x80590d38();
    // .byte 0xfc, 0x01, 0xe8, 0x40
    L_8058b9a8:
    r3 = r30; // mr
    sub_0x805907bc();
    f2 = /* load */ f2, 0x20(r3); // lfs
    f1 = f31 * f30; // fmuls
    f0 = /* load */ f0, 4(r31); // lfs
    f2 = f2 / f29; // fdivs
    f0 = f0 - f30; // fsubs
    f0 = f31 * f0; // fmuls
    f0 = f2 * f0; // fmuls
    f31 = f1 + f0; // fadds
    goto L_8058b9f4;
    r3 = r30; // mr
    sub_0x80590d38();
    // .byte 0xfc, 0x01, 0xe0, 0x40
    L_8058b9f0:
    r3 = r30; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x20(r3); // lfs
    f3 = f28 - f29; // fsubs
    f2 = /* load */ f2, 4(r31); // lfs
    f1 = f31 * f27; // fmuls
    f4 = f0 - f29; // fsubs
    f0 = f2 - f27; // fsubs
    f3 = f4 / f3; // fdivs
    f2 = f2 - f3; // fsubs
    f0 = f31 * f0; // fmuls
    f0 = f2 * f0; // fmuls
    f31 = f1 + f0; // fadds
    goto L_8058b9f4;
    f31 = f31 * f27; // fmuls
    f1 = f31; // fmr
    // .byte 0xe3, 0xe1, 0x00, 0x58
    f31 = /* load */ f31, 0x50(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0x48
    f30 = /* load */ f30, 0x40(r1); // lfd
    // .byte 0xe3, 0xa1, 0x00, 0x38
    f29 = /* load */ f29, 0x30(r1); // lfd
    // .byte 0xe3, 0x81, 0x00, 0x28
    f28 = /* load */ f28, 0x20(r1); // lfd
    // .byte 0xe3, 0x61, 0x00, 0x18
    f27 = /* load */ f27, 0x10(r1); // lfd
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    r0 = /* load */ r0, 0x64(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x60
}
