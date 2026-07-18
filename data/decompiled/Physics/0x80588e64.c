// Decompiled from StaticR.rel
// Address: 0x80588e64
// Size: 568 bytes (142 instructions)
// Stack frame: 0x0020
// Calls: none

void sub_80588e64(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */, r10 /* param */) {
    // stwu r1, -0x20(r1)
    r12 = (uint32_t)0 << 16; // lis
    r12 = r12 + 0; // addi
    r5 = (uint32_t)0 << 16; // lis
    // stw r31, 0x1c(r1)
    r5 = r5 + 0; // addi
    r0 = 3; // li
    f1 = /* load */ f1, 4(r12); // lfs
    // stw r30, 0x18(r1)
    r8 = r5 + 0x370; // addi
    f0 = /* load */ f0, 0xc(r12); // lfs
    r7 = r5 + 0x388; // addi
    // stw r29, 0x14(r1)
    r6 = r5 + 0x3b8; // addi
    r31 = 0; // li
    r30 = 0; // li
    // stw r28, 0x10(r1)
    r29 = 0; // li
    r28 = 0; // li
    r10 = 1; // li
    // stfs f1, 0x14(r3)
    // stfs f1, 0x18(r3)
    // stfs f0, 0x20(r3)
    // mtctr r0
    // clrlwi r0, r28, 0x18
    r11 = ((_rotl(r28, 1)) & _mask(0x17, 0x1e)); // rlwinm
    r0 = r10 << r0; // slw
    r5 = /* load */ r5, 0x10(r3); // lhz
    // clrlwi r9, r0, 0x10
    r11 = r3 + r11; // add
    r0 = r5 & r9; // and.
    L_80588f30:
    r0 = ((_rotl(r28, 2)) & _mask(0x16, 0x1d)); // rlwinm
    f0 = /* load */ f0, r8, r0; // lfsx
    f0 = f1 + f0; // fadds
    // stfs f0, 0x14(r3)
    f0 = /* load */ f0, r7, r0; // lfsx
    // stfs f0, 0x18(r3)
    f0 = /* load */ f0, r6, r0; // lfsx
    // stfs f0, 0x20(r3)
    r5 = /* load */ r5, 4(r11); // lha
    r0 = r5 + -1; // addi
    // sth r0, 4(r11)
    r0 = (int16_t)r0; // extsh.
    L_80588f2c:
    r0 = /* load */ r0, 0x10(r3); // lhz
    r30 = 1; // li
    r0 = r0 &~ r9; // andc
    // sth r0, 0x10(r3)
    goto L_80588f30;
    r29 = 1; // li
    r28 = r28 + 1; // addi
    r5 = /* load */ r5, 0x10(r3); // lhz
    // clrlwi r0, r28, 0x18
    r0 = r10 << r0; // slw
    r11 = ((_rotl(r28, 1)) & _mask(0x17, 0x1e)); // rlwinm
    // clrlwi r9, r0, 0x10
    r0 = r5 & r9; // and.
    r11 = r3 + r11; // add
    L_80588fa0:
    r0 = ((_rotl(r28, 2)) & _mask(0x16, 0x1d)); // rlwinm
    f0 = /* load */ f0, r8, r0; // lfsx
    f0 = f1 + f0; // fadds
    // stfs f0, 0x14(r3)
    f0 = /* load */ f0, r7, r0; // lfsx
    // stfs f0, 0x18(r3)
    f0 = /* load */ f0, r6, r0; // lfsx
    // stfs f0, 0x20(r3)
    r5 = /* load */ r5, 4(r11); // lha
    r0 = r5 + -1; // addi
    // sth r0, 4(r11)
    r0 = (int16_t)r0; // extsh.
    L_80588f9c:
    r0 = /* load */ r0, 0x10(r3); // lhz
    r30 = 1; // li
    r0 = r0 &~ r9; // andc
    // sth r0, 0x10(r3)
    goto L_80588fa0;
    r29 = 1; // li
    r28 = r28 + 1; // addi
    L_80588ec4:
    f1 = /* load */ f1, 0x14(r3); // lfs
    f0 = /* load */ f0, 4(r12); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80588fc8:
    f1 = /* load */ f1, 0x20(r3); // lfs
    f0 = /* load */ f0, 0(r12); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80588fcc:
    r31 = 1; // li
    // cmpwi r30, 0
    L_80588fe4:
    // cmpwi r29, 0
    L_80588fe4:
    r0 = 1; // li
    // stb r0, 0(r4)
    r3 = r31; // mr
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r28 = /* load */ r28, 0x10(r1); // lwz
    // addi r1, r1, 0x20
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctr 
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctr 
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0xb0(r3); // lfs
    f0 = /* load */ f0, 0(r4); // lfs
    r5 = 1; // li
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80589058:
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0x20(r3); // lfs
    f0 = /* load */ f0, 0(r4); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    // mfcr r0
    r0 = ((_rotl(r0, 1)) & _mask(0x1f, 0x1f)); // rlwinm.
    L_80589058:
    r5 = 0; // li
    r0 = __builtin_clz(r5); // cntlzw
    // srwi r3, r0, 5
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lha
    r4 = /* load */ r4, 0(r3); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r3); // lha
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80589094:
    r3 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r3); // lha
    // clrlwi r3, r5, 0x10
}
