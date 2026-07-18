// Decompiled from StaticR.rel
// Address: 0x80581c90
// Size: 1180 bytes (295 instructions)
// Stack frame: 0x0020
// Calls: 0x80590a9c, 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x8059045c, 0x805910cc, 0x8056c7d4, 0x80590a9c, 0x806b4d40, 0x80591834, 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x8059045c

void sub_80581c90(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x18(r1)
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    r4 = /* load */ r4, 0(r3); // lwz
    r5 = /* load */ r5, 4(r4); // lwz
    r6 = /* load */ r6, 0xc(r5); // lwz
    r0 = ((_rotl(r6, 0)) & _mask(0x11, 0x11)); // rlwinm.
    L_80581f64:
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 1; // li
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r4, 0x6a(r3)
    r3 = /* load */ r3, 0(r29); // lwz
    r5 = /* load */ r5, 4(r3); // lwz
    r6 = /* load */ r6, 4(r5); // lwz
    r0 = ((_rotl(r6, 0)) & _mask(0xd, 0xd)); // rlwinm.
    L_80581f10:
    r0 = /* load */ r0, 0x236(r29); // lha
    // cmpwi r0, 0
    L_80581e50:
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r4 = /* load */ r4, 0xc(r5); // lwz
    r0 = r3 + 0x100; // addi
    r0 = r4 & r0; // and.
    r3 = 0; // li
    L_80581d40:
    r0 = ((_rotl(r6, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80581d40:
    r0 = /* load */ r0, 0x14(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80581d40:
    r0 = /* load */ r0, 8(r5); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80581d44:
    r3 = 1; // li
    // cmpwi r3, 0
    L_80581e58:
    r30 = /* load */ r30, 0x240(r31); // lha
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5d24();
    r3 = r29; // mr
    sub_0x805907d4();
    sub_0x80708a6c();
    r0 = /* load */ r0, 0x118(r29); // lhz
    r3 = 0; // li
    // clrlwi. r0, r0, 0x1f
    L_80581d98:
    r0 = /* load */ r0, 0x10c(r29); // lha
    // cmpw r30, r0
    L_80581db4:
    r0 = /* load */ r0, 0x118(r29); // lhz
    r3 = 1; // li
    // sth r30, 0x10c(r29)
    // ori r0, r0, 1
    // sth r0, 0x118(r29)
    f0 = /* load */ f0, 0x3a0(r31); // lfs
    // stfs f0, 0x124(r29)
    // cmpwi r3, 0
    L_80581e2c:
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = r29; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // oris r0, r0, 0x10
    // stw r0, 4(r4)
    f1 = /* load */ f1, 0x124(r29); // lfs
    sub_0x80590e80();
    r3 = r29; // mr
    r4 = 6; // li
    sub_0x805907f0();
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    // clrlwi r4, r30, 0x10
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5ea0();
    r3 = r29; // mr
    sub_0x80590a80();
    sub_0x807cbb5c();
    r3 = r29; // mr
    r4 = 4; // li
    r5 = 0; // li
    r6 = 1; // li
    sub_0x80591084();
    r0 = /* load */ r0, 0x240(r31); // lha
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r4); // lfs
    r3 = r29; // mr
    // sth r0, 0x23a(r29)
    r4 = 3; // li
    r5 = 1; // li
    sub_0x8059045c();
    goto L_80581e58;
    r0 = /* load */ r0, 0x258(r31); // lha
    // sth r0, 0x238(r29)
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x12, 0x10)); // rlwinm
    // stw r0, 0xc(r4)
    r0 = /* load */ r0, 0x254(r29); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x10, 0x1e)); // rlwinm
    // sth r0, 0x254(r29)
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb78(r3); // lwz
    // cmpwi r0, 0
    L_80581ee4:
    r3 = /* load */ r3, 0xb70(r3); // lwz
    r4 = 0; // li
    r0 = r3 + -3; // addi
    // cmplwi r0, 7
    L_80581eb4:
    r3 = 1; // li
    r0 = r3 << r0; // slw
    // andi. r0, r0, 0xc1
    L_80581eb4:
    r4 = r3; // mr
    // cmpwi r4, 0
    L_80581ee4:
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = r29; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    // ori r0, r0, 0x100
    // stw r0, 8(r4)
    r0 = /* load */ r0, 0x124(r31); // lha
    // sth r0, 0x1a8(r29)
    sub_0x805910cc();
    sub_0x8056c7d4();
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806b4d40();
    r3 = r29; // mr
    r4 = 1; // li
    sub_0x80591834();
    r3 = /* load */ r3, 0x236(r29); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x236(r29)
    r0 = (int16_t)r0; // extsh.
    L_80581f2c:
    r0 = 0; // li
    // sth r0, 0x236(r29)
    r0 = /* load */ r0, 0x254(r29); // lhz
    // clrlwi. r0, r0, 0x1f
    L_805820f4:
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x17, 0x17)); // rlwinm.
    L_805820f4:
    r3 = /* load */ r3, 0x258(r31); // lha
    r0 = /* load */ r0, 0x254(r29); // lhz
    // sth r3, 0x236(r29)
    r0 = ((_rotl(r0, 0)) & _mask(0x10, 0x1e)); // rlwinm
    // sth r0, 0x254(r29)
    goto L_805820f4;
    r0 = /* load */ r0, 0x238(r3); // lha
    // cmpwi r0, 0
    L_805820e4:
    r7 = /* load */ r7, 4(r5); // lwz
    r0 = ((_rotl(r7, 0)) & _mask(0x17, 0x17)); // rlwinm.
    L_805820c4:
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r4 = 0; // li
    r0 = r3 + 0x100; // addi
    r0 = r6 & r0; // and.
    L_80581fb0:
    r0 = ((_rotl(r7, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80581fb0:
    r0 = /* load */ r0, 0x14(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80581fb0:
    r0 = /* load */ r0, 8(r5); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80581fb4:
    r4 = 1; // li
    // cmpwi r4, 0
    L_805820bc:
    r30 = /* load */ r30, 0x240(r31); // lha
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5d24();
    r3 = r29; // mr
    sub_0x805907d4();
    sub_0x80708a6c();
    r0 = /* load */ r0, 0x118(r29); // lhz
    r3 = 0; // li
    // clrlwi. r0, r0, 0x1f
    L_80582008:
    r0 = /* load */ r0, 0x10c(r29); // lha
    // cmpw r30, r0
    L_80582024:
    r0 = /* load */ r0, 0x118(r29); // lhz
    r3 = 1; // li
    // sth r30, 0x10c(r29)
    // ori r0, r0, 1
    // sth r0, 0x118(r29)
    f0 = /* load */ f0, 0x3a0(r31); // lfs
    // stfs f0, 0x124(r29)
    // cmpwi r3, 0
    L_8058209c:
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = r29; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // oris r0, r0, 0x10
    // stw r0, 4(r4)
    f1 = /* load */ f1, 0x124(r29); // lfs
    sub_0x80590e80();
    r3 = r29; // mr
    r4 = 6; // li
    sub_0x805907f0();
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    // clrlwi r4, r30, 0x10
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5ea0();
    r3 = r29; // mr
    sub_0x80590a80();
    sub_0x807cbb5c();
    r3 = r29; // mr
    r4 = 4; // li
    r5 = 0; // li
    r6 = 1; // li
    sub_0x80591084();
    r0 = /* load */ r0, 0x240(r31); // lha
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r4); // lfs
    r3 = r29; // mr
    // sth r0, 0x23a(r29)
    r4 = 3; // li
    r5 = 1; // li
    sub_0x8059045c();
    r0 = 0; // li
    // sth r0, 0x238(r29)
    r3 = /* load */ r3, 0x238(r29); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x238(r29)
    r0 = (int16_t)r0; // extsh.
    L_805820f4:
    r0 = 0; // li
    // sth r0, 0x238(r29)
    goto L_805820f4;
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xf, 0xd)); // rlwinm
    // stw r0, 8(r3)
    r3 = /* load */ r3, 0x23a(r29); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x23a(r29)
    r0 = (int16_t)r0; // extsh.
    L_80582110:
    r0 = 0; // li
    // sth r0, 0x23a(r29)
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
