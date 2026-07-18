// Decompiled from StaticR.rel
// Address: 0x80586fe8
// Size: 1304 bytes (326 instructions)
// Stack frame: 0x0070
// Calls: 0x80555bf4, 0x80590a9c, 0x805906b8, 0x80590e00, 0x80590140, 0x80590a9c, 0x80590a9c, 0x805906b8, 0x80590e00, 0x8059024c, 0x805907bc, 0x8059024c, 0x80590a8c, 0x80572c48, 0x8059024c, 0x8059024c, 0x80555bf4, 0x80590aac, 0x805907bc, 0x805907e0, 0x808679e8, 0x805907d4, indirect, 0x8059045c, 0x805907f0, 0x80590e00, 0x805907d4, indirect, 0x80555bf4

void sub_80586fe8(void) {
    // stwu r1, -0x70(r1)
    // mflr r0
    // stw r0, 0x74(r1)
    // stfd f31, 0x60(r1)
    // .byte 0xf3, 0xe1, 0x00, 0x68
    // stfd f30, 0x50(r1)
    // xscmpgtdp vs30, f1, f0
    r11 = r1 + 0x50; // addi
    sub_0x80555bf4();
    r4 = (uint32_t)0 << 16; // lis
    r30 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r4); // lwz
    r29 = r3; // mr
    r30 = r30 + 0; // addi
    r0 = /* load */ r0, 0x38(r4); // lwz
    r28 = __builtin_clz(r0); // cntlzw
    sub_0x80590a9c();
    // clrlwi r0, r3, 0x18
    // cmplw r0, r28
    L_805872b0:
    r3 = r29; // mr
    sub_0x805906b8();
    // cmpwi r3, 0
    L_805872b0:
    r31 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r31); // lwz
    r0 = /* load */ r0, 0x28(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_805872b0:
    r3 = /* load */ r3, 0(r29); // lwz
    r4 = /* load */ r4, 4(r3); // lwz
    r3 = /* load */ r3, 0xc(r4); // lwz
    r0 = ((_rotl(r3, 0)) & _mask(4, 4)); // rlwinm
    r0 = _rlwimi(r0, r3, 0, 0x1e, 0x1e); // rlwimi.
    L_805872b0:
    r0 = /* load */ r0, 8(r4); // lwz
    r26 = 0; // li
    // clrlwi. r0, r0, 0x1f
    L_80587264:
    r3 = r29; // mr
    sub_0x80590e00();
    f0 = /* load */ f0, 0x280(r30); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0gt, cr0eq
    L_80587264:
    r25 = 0; // li
    goto L_80587250;
    r3 = /* load */ r3, 0(r31); // lwz
    // clrlwi r4, r25, 0x18
    sub_0x80590140();
    r27 = r3; // mr
    r3 = r29; // mr
    sub_0x80590a9c();
    // clrlwi r28, r3, 0x18
    r3 = r27; // mr
    sub_0x80590a9c();
    // clrlwi r0, r3, 0x18
    // cmplw r0, r28
    L_8058724c:
    r3 = r27; // mr
    sub_0x805906b8();
    // cmpwi r3, 0
    L_8058724c:
    r3 = r27; // mr
    sub_0x80590e00();
    f0 = /* load */ f0, 0x280(r30); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0gt, cr0eq
    L_8058724c:
    r3 = r27; // mr
    sub_0x8059024c();
    r28 = r3; // mr
    r3 = r27; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x284(r30); // lfs
    f1 = /* load */ f1, 0x5c(r3); // lfs
    f2 = -f0; // fneg
    f0 = /* load */ f0, 0(r28); // lfs
    f1 = f2 * f1; // fmuls
    f0 = f0 + f1; // fadds
    // stfs f0, 0x18(r1)
    f1 = /* load */ f1, 0x60(r3); // lfs
    f0 = /* load */ f0, 4(r28); // lfs
    f1 = f2 * f1; // fmuls
    f0 = f0 + f1; // fadds
    // stfs f0, 0x1c(r1)
    f1 = /* load */ f1, 0x64(r3); // lfs
    r3 = r29; // mr
    f0 = /* load */ f0, 8(r28); // lfs
    f1 = f2 * f1; // fmuls
    f0 = f0 + f1; // fadds
    // stfs f0, 0x20(r1)
    sub_0x8059024c();
    r28 = r3; // mr
    r3 = r29; // mr
    sub_0x80590a8c();
    f2 = /* load */ f2, 0x284(r30); // lfs
    r5 = r28; // mr
    r3 = r1 + 0x24; // addi
    r4 = r1 + 8; // addi
    r6 = r1 + 0x18; // addi
    sub_0x80572c48();
    // cmpwi r3, 0
    L_8058724c:
    r3 = r29; // mr
    sub_0x8059024c();
    r28 = r3; // mr
    r3 = r27; // mr
    sub_0x8059024c();
    f2 = /* load */ f2, 0(r3); // lfs
    f0 = /* load */ f0, 0(r28); // lfs
    f1 = /* load */ f1, 4(r3); // lfs
    f5 = f2 - f0; // fsubs
    f0 = /* load */ f0, 4(r28); // lfs
    f2 = /* load */ f2, 8(r3); // lfs
    f4 = f1 - f0; // fsubs
    f0 = /* load */ f0, 8(r28); // lfs
    f1 = f5 * f5; // fmuls
    f3 = f2 - f0; // fsubs
    // stfs f5, 0xc(r1)
    f0 = f4 * f4; // fmuls
    // stfs f4, 0x10(r1)
    f2 = f3 * f3; // fmuls
    f0 = f1 + f0; // fadds
    // stfs f3, 0x14(r1)
    f1 = f2 + f0; // fadds
    sub_0x80555bf4();
    f31 = f1; // fmr
    r3 = r27; // mr
    sub_0x80590aac();
    // cmpwi r3, 0
    L_80587200:
    f30 = /* load */ f30, 0x288(r30); // lfs
    goto L_80587204;
    f30 = /* load */ f30, 0x28c(r30); // lfs
    r3 = r27; // mr
    sub_0x805907bc();
    f4 = /* load */ f4, 0x5c(r3); // lfs
    f0 = f31 * f30; // fmuls
    f3 = /* load */ f3, 0xc(r1); // lfs
    f2 = /* load */ f2, 0x60(r3); // lfs
    f1 = /* load */ f1, 0x10(r1); // lfs
    f3 = f4 * f3; // fmuls
    f4 = /* load */ f4, 0x64(r3); // lfs
    f1 = f2 * f1; // fmuls
    f2 = /* load */ f2, 0x14(r1); // lfs
    f2 = f4 * f2; // fmuls
    f1 = f3 + f1; // fadds
    f1 = f2 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_8058724c:
    r26 = 1; // li
    goto L_80587264;
    r25 = r25 + 1; // addi
    r3 = /* load */ r3, 0(r31); // lwz
    // clrlwi r4, r25, 0x18
    r0 = /* load */ r0, 0x24(r3); // lbz
    // cmplw r4, r0
    L_805870a4:
    // cmpwi r26, 0
    L_80587284:
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    // ori r0, r0, 1
    // stw r0, 0xc(r3)
    goto L_805874d8;
    r0 = 0; // li
    // stw r0, 0xec(r29)
    r3 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r29); // lwz
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0x1e)); // rlwinm
    // stw r0, 0xc(r3)
    // stfs f0, 0xf0(r29)
    goto L_805874d8;
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r3 = /* load */ r3, 0xc(r3); // lwz
    // clrlwi. r0, r3, 0x1f
    L_80587430:
    f1 = /* load */ f1, 0xf0(r29); // lfs
    f0 = /* load */ f0, 0x294(r30); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0xf0(r29)
    f1 = /* load */ f1, 0x298(r30); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805872e4:
    // stfs f1, 0xf0(r29)
    r3 = r29; // mr
    sub_0x805907e0();
    sub_0x808679e8();
    r3 = r29; // mr
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 0x1a6; // li
    r12 = /* load */ r12, 0xe8(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = /* load */ r3, 0xec(r29); // lwz
    r3 = r3 + 1; // addi
    // stw r3, 0xec(r29)
    r0 = /* load */ r0, 0x290(r30); // lha
    // cmplw r3, r0
    L_805874d8:
    r7 = /* load */ r7, 0(r29); // lwz
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r0 = r3 + 0x100; // addi
    r4 = 1; // li
    r8 = /* load */ r8, 4(r7); // lwz
    r5 = 1; // li
    r6 = 1; // li
    r3 = /* load */ r3, 0xc(r8); // lwz
    r0 = r3 & r0; // and.
    L_80587364:
    r0 = /* load */ r0, 4(r8); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80587364:
    r6 = 0; // li
    // cmpwi r6, 0
    L_8058737c:
    r0 = /* load */ r0, 0x14(r8); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_8058737c:
    r5 = 0; // li
    // cmpwi r5, 0
    L_80587394:
    r0 = /* load */ r0, 8(r8); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80587394:
    r4 = 0; // li
    // cmpwi r4, 0
    L_805874d8:
    r7 = /* load */ r7, 4(r7); // lwz
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
    r0 = 0; // li
    r6 = /* load */ r6, 0xc(r7); // lwz
    r3 = r29; // mr
    r4 = 3; // li
    r5 = 1; // li
    r6 = ((_rotl(r6, 0)) & _mask(0, 0x1e)); // rlwinm
    // stw r6, 0xc(r7)
    r6 = /* load */ r6, 0(r29); // lwz
    r7 = /* load */ r7, 4(r6); // lwz
    r6 = /* load */ r6, 0xc(r7); // lwz
    // ori r6, r6, 2
    // stw r6, 0xc(r7)
    // stw r0, 0xec(r29)
    f0 = /* load */ f0, 0x29c(r30); // lfs
    // stfs f0, 0xf0(r29)
    sub_0x8059045c();
    r3 = r29; // mr
    r4 = 6; // li
    sub_0x805907f0();
    r3 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r3); // lwz
    r3 = /* load */ r3, 0(r4); // lwz
    r0 = /* load */ r0, 0xb70(r5); // lwz
    // cmpwi r0, 4
    L_805874d8:
    r0 = /* load */ r0, 0xb9e(r5); // lhz
    // cmpwi r0, 0xd
    L_805874d8:
    r4 = /* load */ r4, 0x10(r3); // lwz
    r3 = /* load */ r3, 8(r4); // lwz
    r0 = r3 + 1; // addi
    // stw r0, 8(r4)
    goto L_805874d8;
    r0 = ((_rotl(r3, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80587450:
    r3 = /* load */ r3, 0xec(r29); // lwz
    r3 = r3 + 1; // addi
    // stw r3, 0xec(r29)
    r0 = /* load */ r0, 0x2a0(r30); // lha
    // cmplw r3, r0
    L_80587478:
    r3 = r29; // mr
    sub_0x80590e00();
    f0 = /* load */ f0, 0x280(r30); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80587478:
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // clrlwi. r0, r0, 0x1f
    L_805874a0:
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r3); // lfs
    // stw r0, 0xec(r29)
    r3 = /* load */ r3, 0(r29); // lwz
    // stfs f0, 0xf0(r29)
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // stw r0, 0xc(r3)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_805874d8:
    r3 = r29; // mr
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 0x1a7; // li
    r12 = /* load */ r12, 0xe8(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // .byte 0xe3, 0xe1, 0x00, 0x68
    f31 = /* load */ f31, 0x60(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0x58
    r11 = r1 + 0x50; // addi
    f30 = /* load */ f30, 0x50(r1); // lfd
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x74(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x70
}
