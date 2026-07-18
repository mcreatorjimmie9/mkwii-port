// Decompiled from StaticR.rel
// Address: 0x80584374
// Size: 788 bytes (197 instructions)
// Stack frame: 0x0060
// Calls: 0x80555bf4, 0x80590a9c, 0x80537f38, 0x80590a9c, 0x8051ad5c, 0x80590a9c, 0x806ae7dc, 0x80584084, 0x80590e68, 0x80590a9c, 0x807960a0, 0x8078cb78, 0x807b5770, 0x80591964, 0x80590a9c, 0x80720b68, 0x80590a9c, 0x80590a9c, 0x80590a9c, 0x80591100, 0x807287e4, 0x8051712c, 0x80590a9c, 0x807b17d8, 0x805907d4, 0x80708a04, 0x80555bf4

void sub_80584374(void) {
    // stwu r1, -0x60(r1)
    // mflr r0
    // stw r0, 0x64(r1)
    r11 = r1 + 0x60; // addi
    sub_0x80555bf4();
    r31 = (uint32_t)0 << 16; // lis
    r29 = r3; // mr
    r31 = r31 + 0; // addi
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = r3; // mr
    r3 = /* load */ r3, 0(r4); // lwz
    // clrlwi r4, r0, 0x18
    sub_0x80537f38();
    r30 = r3; // mr
    r3 = r29; // mr
    sub_0x80590a9c();
    r0 = r3; // mr
    r3 = r30; // mr
    r4 = r1 + 0x30; // addi
    // clrlwi r5, r0, 0x18
    sub_0x8051ad5c();
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = r29; // mr
    r5 = /* load */ r5, 0x30(r1); // lwz
    f0 = /* load */ f0, 0x14(r4); // lfs
    f1 = /* load */ f1, 0x10(r4); // lfs
    f2 = /* load */ f2, 0xc(r4); // lfs
    r4 = /* load */ r4, 0x34(r1); // lwz
    r0 = /* load */ r0, 0x38(r1); // lwz
    // stfs f2, 0x24(r1)
    // stfs f1, 0x28(r1)
    // stfs f0, 0x2c(r1)
    // stw r5, 0x18(r1)
    // stw r4, 0x1c(r1)
    // stw r0, 0x20(r1)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = r1 + 0x30; // addi
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806ae7dc();
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r31); // lfs
    f1 = /* load */ f1, 0(r4); // lfs
    r3 = r29; // mr
    f2 = /* load */ f2, 0x34(r1); // lfs
    r4 = r1 + 0x30; // addi
    // stfs f0, 0x2c(r1)
    r5 = r1 + 0x24; // addi
    f1 = f2 + f1; // fadds
    // stfs f0, 0x24(r1)
    // stfs f1, 0x34(r1)
    sub_0x80584084();
    r3 = r29; // mr
    sub_0x80590e68();
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r4 = 0; // li
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = r3 + r0; // add
    sub_0x807960a0();
    r0 = /* load */ r0, 0x1c(r1); // lwz
    r3 = (uint32_t)0 << 16; // lis
    // stw r0, 0x10(r1)
    r27 = 0; // li
    r7 = /* load */ r7, 0x18(r1); // lwz
    r6 = (uint32_t)0 << 16; // lis
    f2 = /* load */ f2, 0x10(r1); // lfs
    r28 = 0x20e8 + ((uint32_t)0x20e8 << 16); // lis
    f0 = /* load */ f0, 0xd4(r31); // lfs
    r4 = r1 + 0x18; // addi
    r0 = /* load */ r0, 0x20(r1); // lwz
    r5 = r1 + 0xc; // addi
    f0 = f2 + f0; // fadds
    f1 = /* load */ f1, 0xd0(r31); // lfs
    // stw r7, 0xc(r1)
    r8 = r1 + 8; // addi
    r7 = /* load */ r7, 0(r6); // lwz
    r6 = r28 + 0xdff; // addi
    // stw r27, 8(r1)
    r31 = 0; // li
    r3 = /* load */ r3, 0(r3); // lwz
    r9 = 0; // li
    // stw r0, 0x14(r1)
    // stfs f0, 0x10(r1)
    sub_0x8078cb78();
    // cmpwi r3, 0
    L_80584528:
    r0 = /* load */ r0, 8(r1); // lwz
    r4 = r28 + 0xfff; // addi
    r0 = r0 & r4; // and.
    L_8058450c:
    r3 = r1 + 8; // addi
    sub_0x807b5770();
    goto L_80584510;
    r3 = r27; // mr
    // cmpwi r3, 0
    L_80584528:
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lhz
    r31 = ((_rotl(r0, 0x18)) & _mask(0x1d, 0x1f)); // rlwinm
    r3 = r29; // mr
    // clrlwi r4, r31, 0x18
    sub_0x80591964();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r29; // mr
    r27 = /* load */ r27, 0(r4); // lwz
    sub_0x80590a9c();
    r0 = r3; // mr
    r3 = r27; // mr
    r5 = r30; // mr
    // clrlwi r4, r0, 0x18
    sub_0x80720b68();
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = r29; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r29); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    // ori r0, r0, 0x2000
    // stw r0, 0xc(r4)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r28 = 1; // li
    r31 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r28, 0x69(r3)
    r0 = /* load */ r0, 0(r31); // lwz
    // cmpwi r0, 0
    L_805845cc:
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = /* load */ r4, 0(r31); // lwz
    // clrlwi r0, r3, 0x18
    r3 = r4 + r0; // add
    // stb r28, 0x4ec(r3)
    r31 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0(r31); // lwz
    // cmpwi r0, 0
    L_805845f8:
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = /* load */ r4, 0(r31); // lwz
    // clrlwi r0, r3, 0x18
    r5 = 1; // li
    r3 = r4 + r0; // add
    // stb r5, 0x1f68(r3)
    r3 = r29; // mr
    sub_0x80591100();
    r4 = r30; // mr
    sub_0x807287e4();
    r27 = /* load */ r27, 0x29(r30); // lbz
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r4 = r27; // mr
    sub_0x8051712c();
    // cmpwi r3, 0
    L_80584654:
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r4 = r27; // mr
    r3 = /* load */ r3, 0x14(r3); // lwz
    r5 = 1; // li
    r3 = r3 + r0; // add
    r3 = r3 + 0x44; // addi
    sub_0x807b17d8();
    r27 = /* load */ r27, 0x2c(r30); // lha
    // cmpwi r27, 0
    L_80584670:
    r3 = r29; // mr
    sub_0x805907d4();
    r4 = r27 + -1; // addi
    sub_0x80708a04();
    r11 = r1 + 0x60; // addi
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x64(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x60
}
