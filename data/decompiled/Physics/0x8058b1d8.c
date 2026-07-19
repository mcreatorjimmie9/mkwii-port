// Decompiled from StaticR.rel
// Address: 0x8058b1d8
// Size: 764 bytes (191 instructions)
// Stack frame: 0x0050
// Calls: 0x8059024c, 0x80520c4c, 0x805907bc, 0x805907bc, 0x805907bc, 0x805907bc, 0x80520d50, 0x80520e50, 0x80590d38, 0x805907bc, 0x805832e4, 0x80590434, indirect

void sub_8058b1d8(r3 /* param */) {
    // stwu r1, -0x50(r1)
    // mflr r0
    // stw r0, 0x54(r1)
    // stw r31, 0x4c(r1)
    // stw r30, 0x48(r1)
    r30 = r3; // mr
    // stw r29, 0x44(r1)
    sub_0x8059024c();
    r6 = /* load */ r6, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 4(r3); // lwz
    r4 = r4 + 0; // addi
    r0 = /* load */ r0, 8(r3); // lwz
    r3 = r1 + 0x18; // addi
    // stw r6, 8(r1)
    // stw r5, 0xc(r1)
    // stw r0, 0x10(r1)
    // stw r4, 0x18(r1)
    sub_0x80520c4c();
    r31 = /* load */ r31, 0xa6(r30); // lhz
    r0 = 0; // li
    r3 = ((_rotl(r31, 0)) & _mask(0x10, 0x10)); // rlwinm.
    L_8058b244:
    r3 = /* load */ r3, 0x60(r30); // lhz
    // ori r3, r3, 4
    // sth r3, 0x60(r30)
    goto L_8058b250;
    r3 = /* load */ r3, 0x60(r30); // lhz
    r3 = ((_rotl(r3, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    // sth r3, 0x60(r30)
    // clrlwi. r3, r31, 0x1f
    L_8058b25c:
    // ori r0, r0, 1
    r3 = ((_rotl(r31, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_8058b26c:
    // ori r0, r0, 2
    // clrlwi r0, r0, 0x10
    r3 = ((_rotl(r31, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_8058b27c:
    // ori r0, r0, 8
    // clrlwi r0, r0, 0x10
    r3 = ((_rotl(r31, 0)) & _mask(0x1c, 0x1c)); // rlwinm.
    L_8058b298:
    r3 = /* load */ r3, 0(r30); // lwz
    r4 = /* load */ r4, 4(r3); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    // ori r3, r3, 8
    // stw r3, 4(r4)
    r3 = ((_rotl(r31, 0)) & _mask(0x13, 0x13)); // rlwinm.
    r3 = /* load */ r3, 0(r30); // lwz
    r4 = /* load */ r4, 4(r3); // lwz
    L_8058b2b8:
    r3 = /* load */ r3, 0xc(r4); // lwz
    // oris r3, r3, 0x2000
    // stw r3, 0xc(r4)
    goto L_8058b2c4;
    r3 = /* load */ r3, 0xc(r4); // lwz
    r3 = ((_rotl(r3, 0)) & _mask(3, 1)); // rlwinm
    // stw r3, 0xc(r4)
    r3 = ((_rotl(r31, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    r3 = /* load */ r3, 0(r30); // lwz
    r4 = /* load */ r4, 4(r3); // lwz
    L_8058b2e4:
    r3 = /* load */ r3, 4(r4); // lwz
    // ori r3, r3, 0x10
    // stw r3, 4(r4)
    goto L_8058b2f0;
    r3 = /* load */ r3, 4(r4); // lwz
    r3 = ((_rotl(r3, 0)) & _mask(0x1c, 0x1a)); // rlwinm
    // stw r3, 4(r4)
    // sth r0, 0x1c(r1)
    r3 = r30; // mr
    r29 = 0; // li
    sub_0x805907bc();
    r0 = ((_rotl(r31, 0)) & _mask(0x17, 0x17)); // rlwinm.
    // stw r29, 0xcc(r3)
    L_8058b320:
    r3 = r30; // mr
    r31 = 1; // li
    sub_0x805907bc();
    // stw r31, 0xcc(r3)
    goto L_8058b338;
    r0 = ((_rotl(r31, 0)) & _mask(0x16, 0x16)); // rlwinm.
    L_8058b338:
    r3 = r30; // mr
    r31 = -1; // li
    sub_0x805907bc();
    // stw r31, 0xcc(r3)
    r0 = /* load */ r0, 0xa2(r30); // lbz
    r3 = r30; // mr
    r31 = (int8_t)r0; // extsb
    sub_0x805907bc();
    // sth r31, 0xfc(r3)
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    r5 = (uint32_t)0 << 16; // lis
    r3 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0x9c(r30); // lbz
    // stw r4, 0x34(r1)
    f2 = /* load */ f2, 0(r5); // lfd
    // stw r0, 0x30(r1)
    f0 = /* load */ f0, 0(r3); // lfs
    f1 = /* load */ f1, 0x30(r1); // lfd
    f1 = f1 - f2; // fsubs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    L_8058b38c:
    r3 = r1 + 0x18; // addi
    sub_0x80520d50();
    r4 = /* load */ r4, 0x9d(r30); // lbz
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    // stw r4, 0x34(r1)
    r5 = (uint32_t)0 << 16; // lis
    r3 = (uint32_t)0 << 16; // lis
    f2 = /* load */ f2, 0(r5); // lfd
    // stw r0, 0x30(r1)
    f0 = /* load */ f0, 0(r3); // lfs
    f1 = /* load */ f1, 0x30(r1); // lfd
    f1 = f1 - f2; // fsubs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    L_8058b3cc:
    r3 = r1 + 0x18; // addi
    sub_0x80520e50();
    r3 = r30; // mr
    sub_0x80590d38();
    f2 = /* load */ f2, 0x80(r30); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    f1 = f1 - f2; // fsubs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_8058b434:
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1c)); // rlwinm.
    L_8058b434:
    r4 = /* load */ r4, 0x18(r30); // lwz
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    r5 = (uint32_t)0 << 16; // lis
    r3 = (uint32_t)0 << 16; // lis
    // xoris r4, r4, 0x8000
    // stw r4, 0x34(r1)
    f2 = /* load */ f2, 0(r5); // lfd
    // stw r0, 0x30(r1)
    f0 = /* load */ f0, 0(r3); // lfs
    f1 = /* load */ f1, 0x30(r1); // lfd
    f1 = f1 - f2; // fsubs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_8058b484:
    r0 = /* load */ r0, 0x60(r30); // lhz
    r4 = 1; // li
    r3 = /* load */ r3, 0(r30); // lwz
    // ori r0, r0, 1
    // sth r0, 0x60(r30)
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    // andis. r0, r0, 0x8410
    L_8058b468:
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_8058b468:
    r4 = 0; // li
    // cmpwi r4, 0
    L_8058b490:
    r3 = r30; // mr
    sub_0x805907bc();
    r4 = 0; // li
    sub_0x805832e4();
    goto L_8058b490;
    r0 = /* load */ r0, 0x60(r30); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x10, 0x1e)); // rlwinm
    // sth r0, 0x60(r30)
    r0 = /* load */ r0, 0x2c(r1); // lbz
    r3 = r30; // mr
    // ori r0, r0, 0x80
    // stb r0, 0x2c(r1)
    sub_0x80590434();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = r1 + 0x18; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r0 = /* load */ r0, 0x54(r1); // lwz
    r31 = /* load */ r31, 0x4c(r1); // lwz
    r30 = /* load */ r30, 0x48(r1); // lwz
    r29 = /* load */ r29, 0x44(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
