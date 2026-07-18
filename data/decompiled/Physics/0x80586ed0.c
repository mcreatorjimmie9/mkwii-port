// Decompiled from StaticR.rel
// Address: 0x80586ed0
// Size: 280 bytes (70 instructions)
// Stack frame: 0x0020
// Calls: 0x80537f4c

void sub_80586ed0(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    r5 = (uint32_t)0 << 16; // lis
    r4 = 2; // li
    // stw r31, 0xc(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 8(r1)
    r30 = r3; // mr
    f31 = /* load */ f31, 0x38(r31); // lfs
    r3 = /* load */ r3, 0(r5); // lwz
    sub_0x80537f4c();
    // cmpwi r3, 0
    L_80586f90:
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r4 = /* load */ r4, 8(r3); // lwz
    // andis. r0, r4, 0x204
    L_80586fb0:
    f1 = /* load */ f1, 0x28(r30); // lfs
    f0 = /* load */ f0, 0x6c(r31); // lfs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586f84:
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = ((_rotl(r3, 0)) & _mask(0xd, 0xd)); // rlwinm.
    L_80586f84:
    // clrlwi. r0, r3, 0x1e
    L_80586f84:
    // clrlwi. r0, r4, 0x1f
    L_80586f84:
    r0 = ((_rotl(r3, 0)) & _mask(0x19, 0x1a)); // rlwinm.
    L_80586f84:
    // clrlwi. r0, r3, 0x1f
    L_80586f70:
    f1 = /* load */ f1, 4(r31); // lfs
    goto L_80586f74;
    f1 = /* load */ f1, 0xc(r31); // lfs
    f0 = /* load */ f0, 0x6c(r31); // lfs
    f0 = f0 * f1; // fmuls
    // stfs f0, 0x224(r30)
    goto L_80586fb0;
    f0 = /* load */ f0, 0x28(r30); // lfs
    // stfs f0, 0x224(r30)
    goto L_80586fb0;
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x10(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x17, 0x17)); // rlwinm.
    L_80586fb0:
    f0 = /* load */ f0, 0(r31); // lfs
    // stfs f0, 0x224(r30)
    f31 = /* load */ f31, 0xfc(r31); // lfs
    f0 = /* load */ f0, 0x224(r30); // lfs
    f1 = /* load */ f1, 0x220(r30); // lfs
    f0 = f0 - f1; // fsubs
    f0 = f31 * f0; // fmuls
    f0 = f1 + f0; // fadds
    // stfs f0, 0x220(r30)
    // .byte 0xe3, 0xe1, 0x00, 0x18
    f31 = /* load */ f31, 0x10(r1); // lfd
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
