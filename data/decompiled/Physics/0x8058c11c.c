// Decompiled from StaticR.rel
// Address: 0x8058c11c
// Size: 764 bytes (191 instructions)
// Stack frame: 0x0030
// Calls: 0x8059040c, 0x805b06fc, 0x805907bc, 0x80585308, 0x80590278, 0x8059040c, 0x805907bc, 0x805907bc, 0x805907bc, 0x805907bc, 0x805907bc, 0x805907bc, 0x805907bc, 0x805907bc, 0x80579f20, 0x805907a4, 0x80597974, 0x805903ec, 0x8059024c, 0x805907bc, 0x80584688, 0x8059156c, 0x8078a184, 0x805906f4, 0x80598c24, 0x8059031c, 0x80590a9c, 0x80590a9c

void sub_8058c11c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    // stw r0, 0x34(r1)
    // stfd f31, 0x20(r1)
    // .byte 0xf3, 0xe1, 0x00, 0x28
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    // stw r30, 0x18(r1)
    // stw r29, 0x14(r1)
    // stw r28, 0x10(r1)
    r28 = r4; // mr
    sub_0x8059040c();
    sub_0x805b06fc();
    r3 = r31; // mr
    sub_0x805907bc();
    sub_0x80585308();
    f0 = /* load */ f0, 0(r28); // lfs
    r4 = (uint32_t)0 << 16; // lis
    // stfs f0, 0x3c(r31)
    r3 = r31; // mr
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = r28; // mr
    f0 = /* load */ f0, 4(r28); // lfs
    // stfs f0, 0x40(r31)
    f0 = /* load */ f0, 8(r28); // lfs
    // stfs f0, 0x44(r31)
    // stfs f1, 0x28(r31)
    // stfs f1, 0x24(r31)
    // stfs f1, 0x20(r31)
    f0 = /* load */ f0, 0x24(r28); // lfs
    // stfs f0, 0x2c(r31)
    f0 = /* load */ f0, 0x28(r28); // lfs
    // stfs f0, 0x30(r31)
    f0 = /* load */ f0, 0x2c(r28); // lfs
    // stfs f0, 0x34(r31)
    f0 = /* load */ f0, 0x30(r28); // lfs
    // stfs f0, 0x38(r31)
    // stfs f1, 0x4c(r31)
    sub_0x80590278();
    r3 = r31; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x24(r28); // lfs
    // stfs f0, 0x100(r3)
    f3 = (float)f0; // frsp
    f0 = /* load */ f0, 0x28(r28); // lfs
    // stfs f0, 0x104(r3)
    f2 = (float)f0; // frsp
    f0 = /* load */ f0, 0x2c(r28); // lfs
    // stfs f0, 0x108(r3)
    f1 = (float)f0; // frsp
    f0 = /* load */ f0, 0x30(r28); // lfs
    // stfs f0, 0x10c(r3)
    f0 = (float)f0; // frsp
    // stfs f3, 0xf0(r3)
    // stfs f2, 0xf4(r3)
    // stfs f1, 0xf8(r3)
    // stfs f0, 0xfc(r3)
    r3 = r31; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0xc(r28); // lfs
    r30 = r3; // mr
    // stfs f0, 0x50(r3)
    f0 = /* load */ f0, 0x10(r28); // lfs
    // stfs f0, 0x54(r3)
    f0 = /* load */ f0, 0x14(r28); // lfs
    // stfs f0, 0x58(r3)
    r3 = r31; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x50(r30); // lfs
    r29 = r3; // mr
    // stfs f0, 0x5c(r3)
    f0 = /* load */ f0, 0x54(r30); // lfs
    // stfs f0, 0x60(r3)
    f0 = /* load */ f0, 0x58(r30); // lfs
    // stfs f0, 0x64(r3)
    r3 = r31; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x5c(r29); // lfs
    // stfs f0, 0x80(r3)
    f0 = /* load */ f0, 0x60(r29); // lfs
    // stfs f0, 0x84(r3)
    f0 = /* load */ f0, 0x64(r29); // lfs
    // stfs f0, 0x88(r3)
    r3 = r31; // mr
    f31 = /* load */ f31, 0x20(r28); // lfs
    sub_0x805907bc();
    // stfs f31, 0x9c(r3)
    r3 = r31; // mr
    f31 = /* load */ f31, 0x18(r28); // lfs
    sub_0x805907bc();
    // stfs f31, 0x20(r3)
    r3 = r31; // mr
    sub_0x805907bc();
    r29 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r29); // lfs
    r30 = r29 + 0; // addi
    // stfs f0, 0x38(r3)
    f0 = /* load */ f0, 4(r30); // lfs
    // stfs f0, 0x3c(r3)
    f0 = /* load */ f0, 8(r30); // lfs
    // stfs f0, 0x40(r3)
    r3 = r31; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0(r29); // lfs
    // stfs f0, 0x44(r3)
    f0 = /* load */ f0, 4(r30); // lfs
    // stfs f0, 0x48(r3)
    f0 = /* load */ f0, 8(r30); // lfs
    // stfs f0, 0x4c(r3)
    r3 = r31; // mr
    sub_0x805907bc();
    sub_0x80579f20();
    r3 = r31; // mr
    sub_0x805907a4();
    sub_0x80597974();
    r3 = r31; // mr
    sub_0x805903ec();
    r4 = /* load */ r4, 4(r3); // lwz
    f0 = /* load */ f0, 0x68(r4); // lfs
    // stfs f0, 0x18(r3)
    f0 = /* load */ f0, 0x6c(r4); // lfs
    // stfs f0, 0x1c(r3)
    f0 = /* load */ f0, 0x70(r4); // lfs
    // stfs f0, 0x20(r3)
    r4 = /* load */ r4, 4(r3); // lwz
    f0 = /* load */ f0, 0xd4(r4); // lfs
    // stfs f0, 0xf0(r3)
    f0 = /* load */ f0, 0xd8(r4); // lfs
    // stfs f0, 0xf4(r3)
    f0 = /* load */ f0, 0xdc(r4); // lfs
    // stfs f0, 0xf8(r3)
    r3 = r31; // mr
    sub_0x8059024c();
    r29 = r3; // mr
    r3 = r31; // mr
    sub_0x805907bc();
    r4 = r29; // mr
    sub_0x80584688();
    r3 = r31; // mr
    sub_0x8059156c();
    sub_0x8078a184();
    r29 = 0; // li
    goto L_8058c36c;
    r3 = r31; // mr
    r4 = r29; // mr
    sub_0x805906f4();
    sub_0x80598c24();
    r29 = r29 + 1; // addi
    r3 = r31; // mr
    sub_0x8059031c();
    // clrlwi r0, r3, 0x10
    // cmpw r29, r0
    L_8058c358:
    r30 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0(r30); // lwz
    // cmpwi r0, 0
    L_8058c3ac:
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = /* load */ r4, 0(r30); // lwz
    // clrlwi r0, r3, 0x18
    r5 = 1; // li
    r3 = r4 + r0; // add
    // stb r5, 0x4ec(r3)
    r30 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0(r30); // lwz
    // cmpwi r0, 0
    L_8058c3d8:
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = /* load */ r4, 0(r30); // lwz
    // clrlwi r0, r3, 0x18
    r5 = 1; // li
    r3 = r4 + r0; // add
    // stb r5, 0x1f68(r3)
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r3); // lfs
    // stb r0, 0x55(r31)
    // sth r0, 0x56(r31)
    // stfs f0, 0x50(r31)
    // .byte 0xe3, 0xe1, 0x00, 0x28
    f31 = /* load */ f31, 0x20(r1); // lfd
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r28 = /* load */ r28, 0x10(r1); // lwz
    r0 = /* load */ r0, 0x34(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
