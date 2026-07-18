// Decompiled from StaticR.rel
// Address: 0x8058477c
// Size: 492 bytes (123 instructions)
// Stack frame: 0x0050
// Calls: 0x80555bf4, 0x80590a9c, 0x80590690, 0x80590e44, 0x8051af1c, 0x80584084, 0x80590e68, 0x80590a9c, 0x807960a0, 0x8059024c, 0x805907bc, 0x8078cb78, 0x807b5770, 0x80591964, 0x80555bf4

void sub_8058477c(void) {
    // stwu r1, -0x50(r1)
    // mflr r0
    // stw r0, 0x54(r1)
    r11 = r1 + 0x50; // addi
    sub_0x80555bf4();
    r31 = r3; // mr
    sub_0x80590a9c();
    r27 = r3; // mr
    r3 = r31; // mr
    sub_0x80590690();
    // cmpwi r3, 0
    L_805847cc:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_805847cc:
    r3 = r31; // mr
    sub_0x80590e44();
    // clrlwi r27, r3, 0x18
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1c, 0x1c)); // rlwinm.
    L_805847e4:
    r27 = 0; // li
    r3 = (uint32_t)0 << 16; // lis
    // clrlwi r4, r27, 0x18
    r3 = /* load */ r3, 0(r3); // lwz
    sub_0x8051af1c();
    r6 = /* load */ r6, 0(r3); // lwz
    r4 = r1 + 0x24; // addi
    r5 = r1 + 0x18; // addi
    f0 = /* load */ f0, 8(r6); // lfs
    f1 = /* load */ f1, 4(r6); // lfs
    f2 = /* load */ f2, 0(r6); // lfs
    // stfs f2, 0x24(r1)
    // stfs f1, 0x28(r1)
    // stfs f0, 0x2c(r1)
    r6 = /* load */ r6, 0(r3); // lwz
    r3 = r31; // mr
    f0 = /* load */ f0, 0x14(r6); // lfs
    f1 = /* load */ f1, 0x10(r6); // lfs
    f2 = /* load */ f2, 0xc(r6); // lfs
    // stfs f2, 0x18(r1)
    // stfs f1, 0x1c(r1)
    // stfs f0, 0x20(r1)
    sub_0x80584084();
    r3 = r31; // mr
    sub_0x80590e68();
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r4 = 0; // li
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = r3 + r0; // add
    sub_0x807960a0();
    r3 = r31; // mr
    sub_0x8059024c();
    r27 = r3; // mr
    r3 = r31; // mr
    sub_0x805907bc();
    r29 = 0; // li
    // stw r29, 8(r1)
    r5 = (uint32_t)0 << 16; // lis
    r6 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r27); // lwz
    r7 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 4(r27); // lwz
    r9 = (uint32_t)0 << 16; // lis
    // stw r0, 0x10(r1)
    r28 = r3; // mr
    f0 = /* load */ f0, 0(r5); // lfs
    r30 = 0x20e8 + ((uint32_t)0x20e8 << 16); // lis
    // stw r4, 0xc(r1)
    r4 = r27; // mr
    f2 = /* load */ f2, 0x10(r1); // lfs
    r5 = r1 + 0xc; // addi
    r0 = /* load */ r0, 8(r27); // lwz
    r8 = r1 + 8; // addi
    f0 = f2 + f0; // fadds
    f1 = /* load */ f1, 0(r6); // lfs
    r3 = /* load */ r3, 0(r9); // lwz
    r6 = r30 + 0xdff; // addi
    // stw r0, 0x14(r1)
    r27 = 0; // li
    // stfs f0, 0x10(r1)
    r9 = 0; // li
    r7 = /* load */ r7, 0(r7); // lwz
    sub_0x8078cb78();
    // cmpwi r3, 0
    L_80584930:
    r0 = /* load */ r0, 8(r1); // lwz
    r4 = r30 + 0xfff; // addi
    r0 = r0 & r4; // and.
    L_80584914:
    r3 = r1 + 8; // addi
    sub_0x807b5770();
    goto L_80584918;
    r3 = r29; // mr
    // cmpwi r3, 0
    L_80584930:
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lhz
    r27 = ((_rotl(r0, 0x18)) & _mask(0x1d, 0x1f)); // rlwinm
    r3 = r28; // mr
    // clrlwi r4, r27, 0x18
    sub_0x80591964();
    r3 = /* load */ r3, 0(r31); // lwz
    r11 = r1 + 0x50; // addi
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    // ori r0, r0, 0x200
    // stw r0, 0x14(r3)
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x54(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
