// Decompiled from StaticR.rel
// Address: 0x8058fb6c
// Size: 680 bytes (170 instructions)
// Stack frame: 0x0050
// Calls: 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x8066b9d8, 0x80555bf4, 0x80591a34, 0x8056d050, 0x805b494c, 0x8059291c, 0x80595d44, 0x8058f5f4, 0x8058f860, 0x805907a4, 0x80732468

void sub_8058fb6c(r3 /* param */) {
    // stwu r1, -0x50(r1)
    // mflr r0
    // stw r0, 0x54(r1)
    // stmw r25, 0x34(r1)
    r31 = r3; // mr
    sub_0x80555bf4();
    r3 = (uint32_t)0 << 16; // lis
    r27 = r31 + 0x10; // addi
    r3 = r3 + 0; // addi
    // stw r3, 0(r31)
    r3 = r27; // mr
    sub_0x80555bf4();
    r3 = (uint32_t)0 << 16; // lis
    r5 = 0; // li
    r3 = r3 + 0; // addi
    // stw r3, 0(r27)
    r4 = (uint32_t)0 << 16; // lis
    // stw r5, 0x28(r31)
    // stw r5, 0x2c(r31)
    // stw r5, 0x30(r31)
    // stw r5, 0x34(r31)
    r3 = /* load */ r3, 0(r4); // lwz
    r0 = /* load */ r0, 0x24(r3); // lbz
    // stb r0, 0x24(r31)
    r3 = /* load */ r3, 0(r4); // lwz
    r0 = /* load */ r0, 0xb70(r3); // lwz
    // cmpwi r0, 7
    L_8058fbe8:
    // cmpwi r0, 0xa
    L_8058fbe8:
    r5 = 1; // li
    // cmpwi r5, 0
    L_8058fc70:
    r3 = /* load */ r3, 0x24(r31); // lbz
    sub_0x80555bf4();
    // stw r3, 0x2c(r31)
    r3 = /* load */ r3, 0x24(r31); // lbz
    sub_0x80555bf4();
    // stw r3, 0x30(r31)
    r4 = 0; // li
    goto L_8058fc60;
    // clrlwi r3, r4, 0x18
    r6 = ((_rotl(r4, 3)) & _mask(0x18, 0x1c)); // rlwinm
    // cmplwi r3, 8
    r5 = 0; // li
    L_8058fc34:
    r0 = r3 + -8; // addi
    r5 = 2; // li
    r6 = ((_rotl(r0, 3)) & _mask(0x18, 0x1c)); // rlwinm
    goto L_8058fc48;
    // cmplwi r3, 4
    L_8058fc48:
    r0 = r3 + -4; // addi
    r5 = 1; // li
    r6 = ((_rotl(r0, 3)) & _mask(0x18, 0x1c)); // rlwinm
    r3 = /* load */ r3, 0x2c(r31); // lwz
    // clrlwi r0, r4, 0x18
    r4 = r4 + 1; // addi
    // stbx r5, r3, r0
    r3 = /* load */ r3, 0x30(r31); // lwz
    // stbx r6, r3, r0
    r0 = /* load */ r0, 0x24(r31); // lbz
    // clrlwi r3, r4, 0x18
    // cmplw r3, r0
    L_8058fc10:
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb70(r3); // lwz
    // cmpwi r0, 0xb
    L_8058fc8c:
    // cmpwi r0, 0xc
    L_8058fc98:
    r0 = /* load */ r0, 0x28(r31); // lwz
    // ori r0, r0, 2
    // stw r0, 0x28(r31)
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb68(r3); // lwz
    // cmpwi r0, 0x23
    L_8058fcb8:
    r0 = /* load */ r0, 0x28(r31); // lwz
    // ori r0, r0, 0x10
    // stw r0, 0x28(r31)
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb68(r3); // lwz
    // cmpwi r0, 0x14
    L_8058fcd8:
    r0 = /* load */ r0, 0x28(r31); // lwz
    // ori r0, r0, 4
    // stw r0, 0x28(r31)
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb68(r3); // lwz
    // cmpwi r0, 0x12
    L_8058fcf8:
    r0 = /* load */ r0, 0x28(r31); // lwz
    // ori r0, r0, 8
    // stw r0, 0x28(r31)
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb90(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_8058fd58:
    r0 = /* load */ r0, 0xb70(r3); // lwz
    // cmpwi r0, 4
    L_8058fd58:
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    // stb r0, 8(r1)
    r4 = r1 + 8; // addi
    r3 = /* load */ r3, 0(r3); // lwz
    // stw r0, 0xc(r1)
    sub_0x8066b9d8();
    // cmpwi r3, 0
    L_8058fd58:
    r3 = /* load */ r3, 0xc(r1); // lwz
    r0 = /* load */ r0, 0x20(r3); // lhz
    // cmplwi r0, 1
    L_8058fd58:
    r0 = /* load */ r0, 0x28(r31); // lwz
    // ori r0, r0, 0x20
    // stw r0, 0x28(r31)
    r0 = /* load */ r0, 0x24(r31); // lbz
    // slwi r3, r0, 2
    sub_0x80555bf4();
    // stw r3, 0x20(r31)
    sub_0x80591a34();
    sub_0x8056d050();
    sub_0x805b494c();
    sub_0x8059291c();
    sub_0x80595d44();
    r26 = 0; // li
    r27 = (uint32_t)0 << 16; // lis
    r28 = 0x12; // li
    r29 = 0; // li
    r30 = (uint32_t)0 << 16; // lis
    goto L_8058fdec;
    // clrlwi r3, r26, 0x18
    r0 = /* load */ r0, 0(r27); // lwz
    // mulli r4, r3, 0xf0
    r5 = r0 + r4; // add
    r4 = /* load */ r4, 0x30(r5); // lwz
    r5 = /* load */ r5, 0x34(r5); // lwz
    // srawi r6, r4, 0x1f
    r0 = r28 - r4; // subfc
    r6 = r6 + r29; // adde
    sub_0x8058f5f4();
    r25 = r3; // mr
    sub_0x8058f860();
    r4 = /* load */ r4, 0x20(r31); // lwz
    r0 = ((_rotl(r26, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = r25; // mr
    // stwx r25, r4, r0
    sub_0x805907a4();
    r4 = r3; // mr
    r3 = /* load */ r3, 0(r30); // lwz
    r4 = /* load */ r4, 0x20(r4); // lwz
    sub_0x80732468();
    r26 = r26 + 1; // addi
    r0 = /* load */ r0, 0x24(r31); // lbz
    // clrlwi r3, r26, 0x18
    // cmplw r3, r0
    L_8058fd94:
    r3 = r31; // mr
    // lmw r25, 0x34(r1)
    r0 = /* load */ r0, 0x54(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
