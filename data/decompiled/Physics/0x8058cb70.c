// Decompiled from StaticR.rel
// Address: 0x8058cb70
// Size: 2204 bytes (551 instructions)
// Stack frame: 0x0120
// Calls: 0x8059024c, 0x805907bc, 0x805907bc, 0x805907bc, 0x805907bc, 0x8059040c, 0x8059040c, 0x80590434, 0x80590434, 0x805907bc, 0x80590a9c, 0x805907bc, 0x805907bc, 0x80590e20, indirect, indirect, indirect, indirect, indirect, indirect, 0x8052f1b8, 0x8052f1b8, 0x8052f1b8, indirect, indirect, indirect, 0x8052f1b8, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c, indirect, 0x8052ef5c

void sub_8058cb70(r3 /* param */) {
    // stwu r1, -0x120(r1)
    // mflr r0
    // stw r0, 0x124(r1)
    // stw r31, 0x11c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x118(r1)
    // stw r29, 0x114(r1)
    r29 = r3; // mr
    // stw r28, 0x110(r1)
    sub_0x8059024c();
    r4 = (uint32_t)0 << 16; // lis
    r30 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    // stw r4, 0xe8(r1)
    r30 = r30 + 0; // addi
    // stw r30, 0xec(r1)
    r4 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0xf0(r1)
    // stw r4, 0xec(r1)
    // stw r30, 0xf4(r1)
    f0 = /* load */ f0, 4(r3); // lfs
    // stfs f0, 0xf8(r1)
    // stw r4, 0xf4(r1)
    // stw r30, 0xfc(r1)
    f0 = /* load */ f0, 8(r3); // lfs
    r3 = r29; // mr
    // stfs f0, 0x100(r1)
    // stw r4, 0xfc(r1)
    sub_0x805907bc();
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r5 = r5 + 0; // addi
    // stw r5, 0xcc(r1)
    r4 = r4 + 0; // addi
    // stw r30, 0xd0(r1)
    f0 = /* load */ f0, 0x5c(r3); // lfs
    // stfs f0, 0xd4(r1)
    // stw r4, 0xd0(r1)
    // stw r30, 0xd8(r1)
    f0 = /* load */ f0, 0x60(r3); // lfs
    // stfs f0, 0xdc(r1)
    // stw r4, 0xd8(r1)
    // stw r30, 0xe0(r1)
    f0 = /* load */ f0, 0x64(r3); // lfs
    r3 = r29; // mr
    // stfs f0, 0xe4(r1)
    // stw r4, 0xe0(r1)
    sub_0x805907bc();
    f0 = /* load */ f0, 0x20(r3); // lfs
    r28 = (uint32_t)0 << 16; // lis
    r28 = r28 + 0; // addi
    // stfs f0, 0xac(r1)
    r3 = r29; // mr
    // stw r28, 0xa8(r1)
    sub_0x805907bc();
    f0 = /* load */ f0, 0x18(r3); // lfs
    r3 = r29; // mr
    // stfs f0, 0xa4(r1)
    // stw r28, 0xa0(r1)
    sub_0x805907bc();
    f0 = /* load */ f0, 0x9c(r3); // lfs
    r4 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    // stfs f0, 0x9c(r1)
    r3 = r29; // mr
    // stw r4, 0x98(r1)
    sub_0x8059040c();
    r4 = (uint32_t)0 << 16; // lis
    r28 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    // stw r4, 0xb0(r1)
    r28 = r28 + 0; // addi
    // stw r30, 0xb4(r1)
    f0 = /* load */ f0, 0xf0(r3); // lfs
    // stfs f0, 0xb8(r1)
    // stw r28, 0xb4(r1)
    // stw r30, 0xbc(r1)
    f0 = /* load */ f0, 0xf4(r3); // lfs
    // stfs f0, 0xc0(r1)
    // stw r28, 0xbc(r1)
    // stw r30, 0xc4(r1)
    f0 = /* load */ f0, 0xf8(r3); // lfs
    r3 = r29; // mr
    // stfs f0, 0xc8(r1)
    // stw r28, 0xc4(r1)
    sub_0x8059040c();
    // stw r30, 0x90(r1)
    f0 = /* load */ f0, 0xfc(r3); // lfs
    r3 = r29; // mr
    // stfs f0, 0x94(r1)
    // stw r28, 0x90(r1)
    sub_0x80590434();
    r0 = /* load */ r0, 0x38(r3); // lbz
    r28 = (uint32_t)0 << 16; // lis
    r28 = r28 + 0; // addi
    // stb r0, 0x8c(r1)
    r3 = r29; // mr
    // stw r28, 0x88(r1)
    sub_0x80590434();
    r0 = /* load */ r0, 0x39(r3); // lbz
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    r6 = (uint32_t)0 << 16; // lis
    // stb r0, 0x84(r1)
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r6 = r6 + 0; // addi
    // stw r28, 0x80(r1)
    r5 = r5 + 0; // addi
    r4 = r4 + 0; // addi
    r3 = r29; // mr
    // stw r30, 0x78(r1)
    r0 = /* load */ r0, 0x55(r29); // lbz
    // stb r0, 0x7c(r1)
    // stw r6, 0x78(r1)
    // stw r30, 0x70(r1)
    r0 = /* load */ r0, 0x54(r29); // lbz
    // stb r0, 0x74(r1)
    // stw r5, 0x70(r1)
    // stw r30, 0x68(r1)
    r0 = /* load */ r0, 0x56(r29); // lbz
    // stb r0, 0x6c(r1)
    // stw r6, 0x68(r1)
    // stw r30, 0x60(r1)
    r0 = /* load */ r0, 0x57(r29); // lbz
    // stb r0, 0x64(r1)
    // stw r4, 0x60(r1)
    sub_0x805907bc();
    r0 = /* load */ r0, 0xfc(r3); // lha
    r4 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    // stb r0, 0x5c(r1)
    r3 = r29; // mr
    // stw r4, 0x58(r1)
    // stw r30, 0x50(r1)
    r0 = /* load */ r0, 0x58(r29); // lbz
    // stb r0, 0x54(r1)
    // stw r4, 0x50(r1)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r6 = (uint32_t)0 << 16; // lis
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0xc(r3); // lwz
    r6 = r6 + 0; // addi
    r5 = r5 + 0; // addi
    r4 = r4 + 0; // addi
    r7 = /* load */ r7, r3, r0; // lwzx
    r3 = r29; // mr
    r0 = /* load */ r0, 0x20(r7); // lbz
    // stb r0, 0x4c(r1)
    // stw r6, 0x48(r1)
    // stw r5, 0x40(r1)
    r0 = /* load */ r0, 0x5a(r29); // lbz
    // stb r0, 0x44(r1)
    // stw r4, 0x40(r1)
    r4 = /* load */ r4, 0(r29); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // clrlwi r30, r0, 0x19
    // ori r30, r30, 0x80
    sub_0x805907bc();
    r0 = /* load */ r0, 0xcc(r3); // lwz
    // cmpwi r0, 1
    L_8058ce24:
    // ori r0, r30, 0x100
    // clrlwi r30, r0, 0x10
    goto L_8058ce40;
    r3 = r29; // mr
    sub_0x805907bc();
    r0 = /* load */ r0, 0xcc(r3); // lwz
    // cmpwi r0, -1
    L_8058ce40:
    // ori r0, r30, 0x200
    // clrlwi r30, r0, 0x10
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r4 = /* load */ r4, 0xc(r3); // lwz
    r0 = ((_rotl(r4, 0)) & _mask(0x12, 0x12)); // rlwinm.
    L_8058ce5c:
    // ori r0, r30, 0x400
    // clrlwi r30, r0, 0x10
    r0 = ((_rotl(r4, 0)) & _mask(0x11, 0x11)); // rlwinm.
    L_8058ce6c:
    // ori r0, r30, 0x800
    // clrlwi r30, r0, 0x10
    r0 = ((_rotl(r4, 0)) & _mask(2, 2)); // rlwinm.
    L_8058ce7c:
    // ori r0, r30, 0x1000
    // clrlwi r30, r0, 0x10
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_8058cecc:
    r3 = r29; // mr
    sub_0x80590e20();
    // cmpwi r3, 0
    L_8058cecc:
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 0x24(r3); // lwz
    // cmpwi r3, 0
    L_8058cecc:
    r3 = /* load */ r3, 0x334(r3); // lhz
    r0 = ((_rotl(r3, 0)) & _mask(0x1c, 0x1c)); // rlwinm.
    L_8058cebc:
    // ori r0, r30, 0x2000
    // clrlwi r30, r0, 0x10
    r0 = ((_rotl(r3, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_8058cecc:
    // ori r0, r30, 0x4000
    // clrlwi r30, r0, 0x10
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x11, 0x11)); // rlwinm.
    L_8058cee8:
    // ori r0, r30, 0x8000
    // clrlwi r30, r0, 0x10
    r3 = (uint32_t)0 << 16; // lis
    r6 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    // stw r3, 0x38(r1)
    r6 = r6 + 0; // addi
    r12 = /* load */ r12, 0xec(r1); // lwz
    // sth r30, 0x3c(r1)
    r3 = r1 + 0xec; // addi
    r4 = r29 + 0x14; // addi
    r5 = 0; // li
    r7 = /* load */ r7, 0x10(r29); // lwz
    r0 = /* load */ r0, 0x10(r7); // lwz
    // stw r0, 0x34(r1)
    // stw r6, 0x30(r1)
    r0 = /* load */ r0, 0x14(r7); // lwz
    // stw r0, 0x2c(r1)
    // stw r6, 0x28(r1)
    r0 = /* load */ r0, 0x18(r7); // lwz
    // stw r0, 0x24(r1)
    // stw r6, 0x20(r1)
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xf4(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xf4; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xfc(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xfc; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xd0(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xd0; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xd8(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xd8; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xe0(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xe0; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    f2 = /* load */ f2, 0xac(r1); // lfs
    r6 = r3; // mr
    f1 = /* load */ f1, 8(r31); // lfs
    r5 = r29 + 0x14; // addi
    f0 = /* load */ f0, 4(r31); // lfs
    r3 = 4; // li
    f1 = f2 - f1; // fsubs
    r4 = 0xf; // li
    f1 = f0 + f1; // fadds
    sub_0x8052f1b8();
    f2 = /* load */ f2, 0xa4(r1); // lfs
    r6 = r3; // mr
    f1 = /* load */ f1, 8(r31); // lfs
    r5 = r29 + 0x14; // addi
    f0 = /* load */ f0, 4(r31); // lfs
    r3 = 4; // li
    f1 = f2 - f1; // fsubs
    r4 = 0xf; // li
    f1 = f0 + f1; // fadds
    sub_0x8052f1b8();
    f2 = /* load */ f2, 0x9c(r1); // lfs
    r6 = r3; // mr
    f1 = /* load */ f1, 0xc(r31); // lfs
    r5 = r29 + 0x14; // addi
    f0 = /* load */ f0, 4(r31); // lfs
    r3 = 4; // li
    f1 = f2 - f1; // fsubs
    r4 = 0xf; // li
    f1 = f0 + f1; // fadds
    sub_0x8052f1b8();
    r12 = /* load */ r12, 0xb4(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xb4; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xbc(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xbc; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xc4(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0xc4; // addi
    r4 = r29 + 0x14; // addi
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    f2 = /* load */ f2, 0x94(r1); // lfs
    r6 = r3; // mr
    f1 = /* load */ f1, 0x10(r31); // lfs
    r5 = r29 + 0x14; // addi
    f0 = /* load */ f0, 4(r31); // lfs
    r3 = 2; // li
    f1 = f2 - f1; // fsubs
    r4 = 0x17; // li
    f1 = f0 + f1; // fadds
    sub_0x8052f1b8();
    r0 = /* load */ r0, 0x8c(r1); // lbz
    r28 = r3; // mr
    r12 = /* load */ r12, 0x88(r1); // lwz
    r3 = r1 + 0x88; // addi
    r4 = (int8_t)r0; // extsb
    // srawi r0, r4, 0x1f
    // addic r0, r4, 0x80
    // stb r0, 0x11(r1)
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0x11; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x84(r1); // lbz
    r28 = r3; // mr
    r12 = /* load */ r12, 0x80(r1); // lwz
    r3 = r1 + 0x80; // addi
    r4 = (int8_t)r0; // extsb
    // srawi r0, r4, 0x1f
    // addic r0, r4, 0x80
    // stb r0, 0x10(r1)
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0x10; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x3c(r1); // lhz
    r28 = r3; // mr
    // sth r0, 0x12(r1)
    r3 = r1 + 0x38; // addi
    r12 = /* load */ r12, 0x38(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0x12; // addi
    r5 = r29 + 0x14; // addi
    r7 = 2; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x34(r1); // lwz
    r28 = r3; // mr
    // stw r0, 0x1c(r1)
    r3 = r1 + 0x30; // addi
    r12 = /* load */ r12, 0x30(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0x1c; // addi
    r5 = r29 + 0x14; // addi
    r7 = 4; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x2c(r1); // lwz
    r28 = r3; // mr
    // stw r0, 0x18(r1)
    r3 = r1 + 0x28; // addi
    r12 = /* load */ r12, 0x28(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0x18; // addi
    r5 = r29 + 0x14; // addi
    r7 = 4; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x7c(r1); // lbz
    r28 = r3; // mr
    // stb r0, 0xf(r1)
    r3 = r1 + 0x78; // addi
    r12 = /* load */ r12, 0x78(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0xf; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x74(r1); // lbz
    r28 = r3; // mr
    // stb r0, 0xe(r1)
    r3 = r1 + 0x70; // addi
    r12 = /* load */ r12, 0x70(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0xe; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x6c(r1); // lbz
    r28 = r3; // mr
    // stb r0, 0xd(r1)
    r3 = r1 + 0x68; // addi
    r12 = /* load */ r12, 0x68(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0xd; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x64(r1); // lbz
    r28 = r3; // mr
    // stb r0, 0xc(r1)
    r3 = r1 + 0x60; // addi
    r12 = /* load */ r12, 0x60(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0xc; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x5c(r1); // lbz
    r28 = r3; // mr
    // stb r0, 0xb(r1)
    r3 = r1 + 0x58; // addi
    r12 = /* load */ r12, 0x58(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0xb; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x54(r1); // lbz
    r28 = r3; // mr
    // stb r0, 0xa(r1)
    r3 = r1 + 0x50; // addi
    r12 = /* load */ r12, 0x50(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0xa; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x4c(r1); // lbz
    r28 = r3; // mr
    // stb r0, 9(r1)
    r3 = r1 + 0x48; // addi
    r12 = /* load */ r12, 0x48(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 9; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x44(r1); // lbz
    r28 = r3; // mr
    // stb r0, 8(r1)
    r3 = r1 + 0x40; // addi
    r12 = /* load */ r12, 0x40(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 8; // addi
    r5 = r29 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x24(r1); // lwz
    r28 = r3; // mr
    // stw r0, 0x14(r1)
    r3 = r1 + 0x20; // addi
    r12 = /* load */ r12, 0x20(r1); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r6 = r28; // mr
    r3 = r1 + 0x14; // addi
    r5 = r29 + 0x14; // addi
    r7 = 4; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x124(r1); // lwz
    r31 = /* load */ r31, 0x11c(r1); // lwz
    r30 = /* load */ r30, 0x118(r1); // lwz
    r29 = /* load */ r29, 0x114(r1); // lwz
    r28 = /* load */ r28, 0x110(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x120
}
