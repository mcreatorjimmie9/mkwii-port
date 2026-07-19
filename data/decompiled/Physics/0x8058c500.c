// Decompiled from StaticR.rel
// Address: 0x8058c500
// Size: 572 bytes (143 instructions)
// Stack frame: 0x0020
// Calls: 0x80590adc, 0x805907bc

void sub_8058c500(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r0 = /* load */ r0, 0x60(r3); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_8058c608:
    r4 = (uint32_t)0 << 16; // lis
    r5 = 0; // li
    r6 = /* load */ r6, 0(r4); // lwz
    r4 = /* load */ r4, 0xb70(r6); // lwz
    r4 = r4 + -3; // addi
    // cmplwi r4, 7
    L_8058c558:
    r0 = 1; // li
    r0 = r0 << r4; // slw
    // andi. r0, r0, 0xc1
    L_8058c558:
    r5 = 1; // li
    // cmpwi r5, 0
    L_8058c608:
    r0 = /* load */ r0, 0xb78(r6); // lwz
    // cmpwi r0, 0
    L_8058c608:
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 0x14(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x11, 0x11)); // rlwinm.
    L_8058c608:
    r4 = /* load */ r4, 0x5c(r3); // lwz
    r0 = r4 + 1; // addi
    // stw r0, 0x5c(r3)
    // cmplwi r0, 0x1f4
    L_8058c608:
    r3 = /* load */ r3, 4(r5); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r4 = ((_rotl(r0, 0)) & _mask(0x13, 0x13)); // rlwinm.
    L_8058c608:
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xc)); // rlwinm.
    L_8058c608:
    r0 = __builtin_clz(r4); // cntlzw
    r3 = r31; // mr
    // srwi r4, r0, 5
    r5 = 0; // li
    r6 = 1; // li
    r7 = 0; // li
    sub_0x80590adc();
    r0 = /* load */ r0, 0x60(r31); // lhz
    r3 = 0; // li
    // stw r3, 0x5c(r31)
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    r5 = /* load */ r5, 0(r31); // lwz
    // sth r0, 0x60(r31)
    r3 = r31; // mr
    f31 = /* load */ f31, 0(r4); // lfs
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xd, 0xb)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x805907bc();
    // stfs f31, 0x160(r3)
    // .byte 0xe3, 0xe1, 0x00, 0x18
    r0 = /* load */ r0, 0x24(r1); // lwz
    f31 = /* load */ f31, 0x10(r1); // lfd
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
    r6 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 4(r3); // lfs
    f0 = /* load */ f0, 0(r6); // lfs
    r6 = r5; // mr
    r5 = r4; // mr
    r3 = (uint32_t)0 << 16; // lis
    f1 = f1 - f0; // fsubs
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = 2; // li
    r4 = 0x17; // li
    f1 = f0 + f1; // fadds
    goto L_8052f1b8;
    r3 = 0x19; // li
    r6 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 4(r3); // lfs
    f0 = /* load */ f0, 0(r6); // lfs
    r6 = r5; // mr
    r5 = r4; // mr
    r3 = (uint32_t)0 << 16; // lis
    f1 = f1 - f0; // fsubs
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = 4; // li
    r4 = 0xf; // li
    f1 = f0 + f1; // fadds
    goto L_8052f1b8;
    r3 = 0x13; // li
    r6 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 4(r3); // lfs
    f0 = /* load */ f0, 0(r6); // lfs
    r6 = r5; // mr
    r5 = r4; // mr
    r3 = (uint32_t)0 << 16; // lis
    f1 = f1 - f0; // fsubs
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = 4; // li
    r4 = 0xf; // li
    f1 = f0 + f1; // fadds
    goto L_8052f1b8;
    r3 = 0x13; // li
    r6 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 4(r3); // lfs
    f0 = /* load */ f0, 0(r6); // lfs
    r6 = r5; // mr
    r5 = r4; // mr
    r3 = (uint32_t)0 << 16; // lis
    f1 = f1 - f0; // fsubs
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = 2; // li
    r4 = 0xf; // li
    f1 = f0 + f1; // fadds
    goto L_8052f1b8;
    r3 = 0x11; // li
    r6 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 4(r3); // lfs
    f0 = /* load */ f0, 0(r6); // lfs
    r6 = r5; // mr
    r5 = r4; // mr
    r3 = (uint32_t)0 << 16; // lis
    f1 = f1 - f0; // fsubs
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = 5; // li
    r4 = 0x17; // li
    f1 = f0 + f1; // fadds
    goto L_8052f1b8;
    r3 = 0x1c; // li
}
