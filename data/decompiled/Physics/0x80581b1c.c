// Decompiled from StaticR.rel
// Address: 0x80581b1c
// Size: 372 bytes (93 instructions)
// Stack frame: 0x0030
// Calls: 0x80591468, 0x80591468, 0x80590a80, 0x807cbd14, 0x80591468, 0x80591468, 0x80590a80, 0x807cbd14

void sub_80581b1c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    // stw r0, 0x34(r1)
    // stfd f31, 0x20(r1)
    // .byte 0xf3, 0xe1, 0x00, 0x28
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    // stw r30, 0x18(r1)
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    // stw r29, 0x14(r1)
    // stw r28, 0x10(r1)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm.
    L_80581bdc:
    sub_0x80591468();
    f2 = /* load */ f2, 0x50(r3); // lfs
    f0 = /* load */ f0, 0x2b8(r30); // lfs
    f1 = /* load */ f1, 0x2c0(r30); // lfs
    f31 = f2 - f0; // fsubs
    // .byte 0xfc, 0x01, 0xf8, 0x40
    L_80581b80:
    f31 = f1; // fmr
    r30 = /* load */ r30, 0x190(r31); // lbz
    r3 = r31; // mr
    sub_0x80591468();
    // stb r30, 0x54(r3)
    f0 = (float)f31; // frsp
    // stfs f0, 0x50(r3)
    r3 = r31; // mr
    sub_0x80590a80();
    f1 = (float)f31; // frsp
    sub_0x807cbd14();
    r3 = /* load */ r3, 0x18e(r31); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x18e(r31)
    r0 = (int16_t)r0; // extsh.
    L_80581c48:
    r3 = /* load */ r3, 0(r31); // lwz
    r0 = 0; // li
    r4 = /* load */ r4, 4(r3); // lwz
    r3 = /* load */ r3, 0xc(r4); // lwz
    r3 = ((_rotl(r3, 0)) & _mask(4, 2)); // rlwinm
    // stw r3, 0xc(r4)
    // sth r0, 0x18e(r31)
    goto L_80581c48;
    r28 = /* load */ r28, 0x190(r3); // lbz
    sub_0x80591468();
    r29 = /* load */ r29, 0x190(r31); // lbz
    f31 = /* load */ f31, 0x50(r3); // lfs
    // cmpwi r29, 0
    L_80581c24:
    f1 = /* load */ f1, 0x2bc(r30); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    f31 = f31 + f1; // fadds
    // .byte 0xfc, 0x00, 0xf8, 0x40
    L_80581c18:
    f31 = f0; // fmr
    r0 = 1; // li
    goto L_80581c1c;
    r0 = 0; // li
    r0 = __builtin_clz(r0); // cntlzw
    // srwi r28, r0, 5
    r3 = r31; // mr
    sub_0x80591468();
    // stb r29, 0x54(r3)
    // stfs f31, 0x50(r3)
    r3 = r31; // mr
    sub_0x80590a80();
    f1 = f31; // fmr
    sub_0x807cbd14();
    // stb r28, 0x190(r31)
    // .byte 0xe3, 0xe1, 0x00, 0x28
    r0 = /* load */ r0, 0x34(r1); // lwz
    f31 = /* load */ f31, 0x20(r1); // lfd
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r28 = /* load */ r28, 0x10(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
    r4 = /* load */ r4, 0(r3); // lwz
    r0 = 0; // li
    r5 = /* load */ r5, 4(r4); // lwz
    r4 = /* load */ r4, 0xc(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(4, 2)); // rlwinm
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r3)
}
