// Decompiled from StaticR.rel
// Address: 0x805899cc
// Size: 1496 bytes (374 instructions)
// Stack frame: 0x0090
// Calls: 0x80555bf4, 0x80537f4c, 0x80590a9c, 0x80656bfc, 0x80590a9c, 0x80590a9c, 0x80656884, 0x80590a9c, 0x80656884, 0x80589fa4, 0x8058be60, 0x8058b1d8, 0x8058d5b0, 0x8058b4d4, 0x80520c4c, 0x80520d50, 0x80520e50, 0x80590434, indirect, 0x80590adc, 0x805907bc, 0x8059024c, 0x805907bc, 0x8059040c, 0x8059040c, 0x80555bf4, 0x8059040c, 0x80590a9c, 0x8058ba38, 0x80590a9c, 0x805907a4, 0x80597974, 0x8059024c, 0x8059040c, 0x80555bf4

void sub_805899cc(void) {
    // stwu r1, -0x90(r1)
    // mflr r0
    // stw r0, 0x94(r1)
    // stfd f31, 0x80(r1)
    // xsmsubasp f31, f1, f0
    r11 = r1 + 0x80; // addi
    sub_0x80555bf4();
    r4 = (uint32_t)0 << 16; // lis
    r29 = r3; // mr
    r31 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r4); // lwz
    r31 = r31 + 0; // addi
    r4 = 2; // li
    sub_0x80537f4c();
    // cmpwi r3, 0
    L_80589f3c:
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x13, 0x13)); // rlwinm.
    L_80589f3c:
    r4 = (uint32_t)0 << 16; // lis
    r3 = r29; // mr
    r28 = /* load */ r28, 0(r4); // lwz
    sub_0x80590a9c();
    // clrlwi r4, r3, 0x18
    r3 = r28; // mr
    sub_0x80656bfc();
    // cmpwi r3, 0
    L_80589f3c:
    r5 = /* load */ r5, 0x64(r29); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r30 = 0; // li
    r4 = 0; // li
    r0 = /* load */ r0, 0x14(r5); // lwz
    // stw r0, 0x10(r5)
    r0 = /* load */ r0, 0x1c(r5); // lwz
    // stw r0, 0x18(r5)
    r0 = /* load */ r0, 0x24(r5); // lwz
    // stw r0, 0x20(r5)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 0xb70(r3); // lwz
    r0 = r3 + -3; // addi
    // cmplwi r0, 7
    L_80589a94:
    r3 = 1; // li
    r0 = r3 << r0; // slw
    // andi. r0, r0, 0xc1
    L_80589a94:
    r4 = r3; // mr
    // cmpwi r4, 0
    L_80589ad4:
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0xc(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    r0 = /* load */ r0, 0x38(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80589ad0:
    r0 = /* load */ r0, 0x60(r29); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_80589ad4:
    r30 = 1; // li
    // cmpwi r30, 0
    L_80589bec:
    r28 = (uint32_t)0 << 16; // lis
    r3 = r29; // mr
    r27 = /* load */ r27, 0(r28); // lwz
    sub_0x80590a9c();
    // clrlwi r4, r3, 0x18
    r3 = r27; // mr
    sub_0x80656884();
    r0 = /* load */ r0, 0x10(r29); // lwz
    // cmplw r3, r0
    L_80589bec:
    r27 = /* load */ r27, 0(r28); // lwz
    r3 = r29; // mr
    sub_0x80590a9c();
    // clrlwi r4, r3, 0x18
    r3 = r27; // mr
    sub_0x80656884();
    // stw r3, 0x10(r29)
    r0 = 0; // li
    r3 = r29; // mr
    // stw r0, 0x1c(r29)
    sub_0x80589fa4();
    r0 = /* load */ r0, 0xa6(r29); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80589c80:
    r4 = /* load */ r4, 0x64(r29); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0xa8(r29); // lwz
    // stw r0, 0x14(r4)
    r4 = /* load */ r4, 0x64(r29); // lwz
    r0 = /* load */ r0, 0xac(r29); // lwz
    // stw r0, 0x1c(r4)
    r4 = /* load */ r4, 0x64(r29); // lwz
    r0 = /* load */ r0, 0xb0(r29); // lwz
    // stw r0, 0x24(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb74(r3); // lwz
    // cmpwi r0, 6
    L_80589b9c:
    r0 = /* load */ r0, 0x54(r29); // lbz
    // cmpwi r0, 0
    L_80589b9c:
    r3 = /* load */ r3, 0x64(r29); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    // stw r0, 0x10(r3)
    r0 = /* load */ r0, 0x1c(r3); // lwz
    // stw r0, 0x18(r3)
    r0 = /* load */ r0, 0x24(r3); // lwz
    // stw r0, 0x20(r3)
    r3 = /* load */ r3, 0x14(r29); // lwz
    r4 = 1; // li
    r0 = /* load */ r0, 0x10(r29); // lwz
    // stb r4, 0x54(r29)
    r27 = r3 - r0; // subf.
    // stw r0, 0x14(r29)
    // stw r27, 0x18(r29)
    L_80589be0:
    r3 = r29; // mr
    sub_0x8058be60();
    r3 = r29; // mr
    sub_0x8058b1d8();
    r3 = /* load */ r3, 0x64(r29); // lwz
    sub_0x8058d5b0();
    r3 = r29; // mr
    r4 = r27; // mr
    sub_0x8058b4d4();
    f0 = /* load */ f0, 0(r31); // lfs
    // stfs f0, 0x48(r29)
    goto L_80589c80;
    r3 = /* load */ r3, 0x1c(r29); // lwz
    r0 = r3 + 1; // addi
    // stw r0, 0x1c(r29)
    // cmplwi r0, 0x78
    L_80589c80:
    r4 = (uint32_t)0 << 16; // lis
    r3 = r1 + 0x38; // addi
    r4 = r4 + 0; // addi
    // stw r4, 0x38(r1)
    sub_0x80520c4c();
    r28 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r28); // lfs
    r3 = r1 + 0x38; // addi
    // sth r0, 0x3c(r1)
    f0 = (int)f0; // fctiwz
    // stfd f0, 0x50(r1)
    r4 = /* load */ r4, 0x54(r1); // lwz
    // clrlwi r4, r4, 0x18
    sub_0x80520d50();
    f0 = /* load */ f0, 0(r28); // lfs
    r3 = r1 + 0x38; // addi
    f0 = (int)f0; // fctiwz
    // stfd f0, 0x58(r1)
    r4 = /* load */ r4, 0x5c(r1); // lwz
    // clrlwi r4, r4, 0x18
    sub_0x80520e50();
    r0 = /* load */ r0, 0x4c(r1); // lbz
    r3 = r29; // mr
    // ori r0, r0, 0x80
    // stb r0, 0x4c(r1)
    sub_0x80590434();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = r1 + 0x38; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r0 = /* load */ r0, 0x54(r29); // lbz
    // cmpwi r0, 0
    L_80589f84:
    // cmpwi r30, 0
    L_80589f84:
    r0 = /* load */ r0, 0x55(r29); // lbz
    // cmpwi r0, 0
    L_80589cc0:
    r3 = /* load */ r3, 0x56(r29); // lha
    r0 = r3 + 1; // addi
    // sth r0, 0x56(r29)
    r0 = (int16_t)r0; // extsh
    // cmpwi r0, 0x190
    L_80589cc0:
    r0 = 0x190; // li
    // sth r0, 0x56(r29)
    r0 = /* load */ r0, 0x60(r29); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80589da8:
    r3 = (uint32_t)0 << 16; // lis
    r4 = 0; // li
    r5 = /* load */ r5, 0(r3); // lwz
    r3 = /* load */ r3, 0xb70(r5); // lwz
    r3 = r3 + -3; // addi
    // cmplwi r3, 7
    L_80589cfc:
    r0 = 1; // li
    r0 = r0 << r3; // slw
    // andi. r0, r0, 0xc1
    L_80589cfc:
    r4 = 1; // li
    // cmpwi r4, 0
    L_80589da8:
    r0 = /* load */ r0, 0xb78(r5); // lwz
    // cmpwi r0, 0
    L_80589da8:
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x11, 0x11)); // rlwinm.
    L_80589da8:
    r3 = /* load */ r3, 0x5c(r29); // lwz
    r0 = r3 + 1; // addi
    // stw r0, 0x5c(r29)
    // cmplwi r0, 0x1f4
    L_80589da8:
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r4 = ((_rotl(r0, 0)) & _mask(0x13, 0x13)); // rlwinm.
    L_80589da8:
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xc)); // rlwinm.
    L_80589da8:
    r0 = __builtin_clz(r4); // cntlzw
    r3 = r29; // mr
    // srwi r4, r0, 5
    r5 = 0; // li
    r6 = 1; // li
    r7 = 0; // li
    sub_0x80590adc();
    r0 = /* load */ r0, 0x60(r29); // lhz
    r3 = 0; // li
    // stw r3, 0x5c(r29)
    r3 = r29; // mr
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    r4 = /* load */ r4, 0(r29); // lwz
    // sth r0, 0x60(r29)
    f31 = /* load */ f31, 4(r31); // lfs
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xd, 0xb)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x805907bc();
    // stfs f31, 0x160(r3)
    r0 = /* load */ r0, 0xa6(r29); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x15)); // rlwinm.
    L_80589ef4:
    r3 = r29; // mr
    sub_0x8059024c();
    r5 = /* load */ r5, 0(r3); // lwz
    // stw r5, 0x28(r1)
    r4 = /* load */ r4, 4(r3); // lwz
    f0 = /* load */ f0, 0x68(r29); // lfs
    f4 = /* load */ f4, 0x28(r1); // lfs
    // stw r4, 0x2c(r1)
    f2 = f0 - f4; // fsubs
    r0 = /* load */ r0, 8(r3); // lwz
    f3 = /* load */ f3, 0x20(r31); // lfs
    r3 = r29; // mr
    // stw r0, 0x30(r1)
    f0 = /* load */ f0, 0x6c(r29); // lfs
    f7 = /* load */ f7, 0x2c(r1); // lfs
    f1 = f2 * f3; // fmuls
    // stfs f2, 8(r1)
    f6 = f0 - f7; // fsubs
    f0 = /* load */ f0, 0x70(r29); // lfs
    f2 = f4 + f1; // fadds
    f5 = /* load */ f5, 0x30(r1); // lfs
    // stfs f1, 8(r1)
    f4 = f0 - f5; // fsubs
    f0 = f6 * f3; // fmuls
    // stfs f2, 0x28(r1)
    f3 = f4 * f3; // fmuls
    // stfs f0, 0xc(r1)
    f1 = f7 + f0; // fadds
    // stfs f3, 0x10(r1)
    f0 = f5 + f3; // fadds
    // stfs f1, 0x2c(r1)
    // stfs f0, 0x30(r1)
    sub_0x805907bc();
    f0 = /* load */ f0, 0(r31); // lfs
    // stfs f0, 0x20(r3)
    r3 = r29; // mr
    sub_0x8059040c();
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r4); // lfs
    r4 = r4 + 0; // addi
    // stfs f0, 0x74(r3)
    f0 = /* load */ f0, 4(r4); // lfs
    // stfs f0, 0x78(r3)
    f0 = /* load */ f0, 8(r4); // lfs
    // stfs f0, 0x7c(r3)
    r3 = r29; // mr
    sub_0x8059040c();
    f1 = /* load */ f1, 0x20(r31); // lfs
    r4 = r29 + 0x8c; // addi
    r5 = r1 + 0x18; // addi
    r3 = r3 + 0xf0; // addi
    sub_0x80555bf4();
    r3 = r29; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x18(r1); // lfs
    // stfs f0, 0xf0(r3)
    f0 = /* load */ f0, 0x1c(r1); // lfs
    // stfs f0, 0xf4(r3)
    f0 = /* load */ f0, 0x20(r1); // lfs
    // stfs f0, 0xf8(r3)
    f0 = /* load */ f0, 0x24(r1); // lfs
    // stfs f0, 0xfc(r3)
    r3 = r29; // mr
    f0 = /* load */ f0, 0x18(r1); // lfs
    // stfs f0, 0x2c(r29)
    f0 = /* load */ f0, 0x1c(r1); // lfs
    // stfs f0, 0x30(r29)
    f0 = /* load */ f0, 0x20(r1); // lfs
    // stfs f0, 0x34(r29)
    f0 = /* load */ f0, 0x24(r1); // lfs
    // stfs f0, 0x38(r29)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 1; // li
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r4, 0x69(r3)
    goto L_80589efc;
    r3 = r29; // mr
    sub_0x8058ba38();
    r0 = /* load */ r0, 0xa6(r29); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x14, 0x14)); // rlwinm.
    L_80589f2c:
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 1; // li
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r4, 0x6a(r3)
    r3 = r29; // mr
    sub_0x805907a4();
    sub_0x80597974();
    goto L_80589f84;
    r3 = r29; // mr
    sub_0x8059024c();
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x3c(r29)
    f0 = /* load */ f0, 4(r3); // lfs
    // stfs f0, 0x40(r29)
    f0 = /* load */ f0, 8(r3); // lfs
    r3 = r29; // mr
    // stfs f0, 0x44(r29)
    sub_0x8059040c();
    f0 = /* load */ f0, 0xf0(r3); // lfs
    // stfs f0, 0x2c(r29)
    f0 = /* load */ f0, 0xf4(r3); // lfs
    // stfs f0, 0x30(r29)
    f0 = /* load */ f0, 0xf8(r3); // lfs
    // stfs f0, 0x34(r29)
    f0 = /* load */ f0, 0xfc(r3); // lfs
    // stfs f0, 0x38(r29)
    // .byte 0xe3, 0xe1, 0x00, 0x88
    r11 = r1 + 0x80; // addi
    f31 = /* load */ f31, 0x80(r1); // lfd
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x94(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x90
}
