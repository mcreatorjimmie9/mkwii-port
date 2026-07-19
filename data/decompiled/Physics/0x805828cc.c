// Decompiled from StaticR.rel
// Address: 0x805828cc
// Size: 1292 bytes (323 instructions)
// Stack frame: 0x0020
// Calls: 0x80590a9c, 0x806b5188, 0x80590a9c, 0x806b5188, 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x8059045c, 0x80591800, 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x8059045c, 0x80591800

void sub_805828cc(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // stw r30, 0x18(r1)
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xf, 0xf)); // rlwinm.
    L_80582950:
    r4 = /* load */ r4, 0x150(r3); // lha
    r0 = r4 + -1; // addi
    // sth r0, 0x150(r3)
    r0 = (int16_t)r0; // extsh.
    L_80582934:
    r0 = /* load */ r0, 0x254(r3); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x1a, 0x1a)); // rlwinm.
    L_80582950:
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80582950:
    r4 = /* load */ r4, 0(r3); // lwz
    r0 = 0; // li
    r5 = /* load */ r5, 4(r4); // lwz
    r4 = /* load */ r4, 8(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(0x10, 0xe)); // rlwinm
    // stw r4, 8(r5)
    // sth r0, 0x150(r3)
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 6)); // rlwinm.
    L_805829d0:
    r4 = /* load */ r4, 0x14c(r3); // lha
    r5 = /* load */ r5, 0x248(r30); // lha
    r4 = r4 + 1; // addi
    r0 = (int16_t)r4; // extsh
    // sth r4, 0x14c(r3)
    // cmpw r5, r0
    L_8058298c:
    // sth r5, 0x14c(r3)
    r0 = 1; // li
    goto L_80582990;
    r0 = 0; // li
    // cmpwi r0, 0
    L_80582d78:
    r0 = /* load */ r0, 0x254(r3); // lhz
    // ori r0, r0, 4
    // sth r0, 0x254(r3)
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806b5188();
    r0 = 0; // li
    // sth r0, 0x14e(r29)
    goto L_80582d78;
    r4 = /* load */ r4, 0x254(r3); // lhz
    r31 = 0; // li
    // sth r31, 0x14c(r3)
    r0 = ((_rotl(r4, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_80582d78:
    r0 = ((_rotl(r4, 0)) & _mask(0x1a, 0x1a)); // rlwinm.
    L_80582bd0:
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806b5188();
    r3 = /* load */ r3, 0x14e(r29); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x14e(r29)
    r0 = (int16_t)r0; // extsh.
    L_80582a54:
    r0 = /* load */ r0, 0x254(r29); // lhz
    // sth r31, 0x14e(r29)
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    r3 = /* load */ r3, 0(r29); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // sth r0, 0x254(r29)
    r0 = /* load */ r0, 0x246(r30); // lha
    // sth r0, 0x150(r29)
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // oris r0, r0, 1
    // stw r0, 8(r3)
    goto L_80582d78;
    r3 = /* load */ r3, 0(r29); // lwz
    r5 = /* load */ r5, 4(r3); // lwz
    r6 = /* load */ r6, 4(r5); // lwz
    // clrlwi. r0, r6, 0x1f
    L_80582d78:
    r0 = ((_rotl(r6, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80582d78:
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r4 = /* load */ r4, 0xc(r5); // lwz
    r0 = r3 + 0x100; // addi
    r0 = r4 & r0; // and.
    L_80582aa4:
    r0 = ((_rotl(r6, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80582aa4:
    r0 = /* load */ r0, 0x14(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80582aa4:
    r0 = /* load */ r0, 8(r5); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80582aa8:
    r31 = 1; // li
    // cmpwi r31, 0
    L_80582bb4:
    r31 = /* load */ r31, 0x242(r30); // lha
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
    L_80582afc:
    r0 = /* load */ r0, 0x10c(r29); // lha
    // cmpw r31, r0
    L_80582b18:
    r0 = /* load */ r0, 0x118(r29); // lhz
    r3 = 1; // li
    // sth r31, 0x10c(r29)
    // ori r0, r0, 1
    // sth r0, 0x118(r29)
    f0 = /* load */ f0, 0x3a0(r30); // lfs
    // stfs f0, 0x124(r29)
    // cmpwi r3, 0
    L_80582b90:
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
    // clrlwi r4, r31, 0x10
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
    r4 = (uint32_t)0 << 16; // lis
    r3 = r29; // mr
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 3; // li
    r5 = 1; // li
    sub_0x8059045c();
    r3 = r29; // mr
    r4 = 0x1e; // li
    sub_0x80591800();
    r0 = /* load */ r0, 0x254(r29); // lhz
    r3 = 0; // li
    // sth r3, 0x14e(r29)
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // sth r0, 0x254(r29)
    goto L_80582d78;
    r5 = /* load */ r5, 4(r5); // lwz
    r6 = /* load */ r6, 4(r5); // lwz
    // clrlwi. r0, r6, 0x1f
    L_80582d48:
    r0 = ((_rotl(r6, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80582d48:
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r4 = /* load */ r4, 0xc(r5); // lwz
    r0 = r3 + 0x100; // addi
    r0 = r4 & r0; // and.
    L_80582c1c:
    r0 = ((_rotl(r6, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80582c1c:
    r0 = /* load */ r0, 0x14(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80582c1c:
    r0 = /* load */ r0, 8(r5); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80582c20:
    r31 = 1; // li
    // cmpwi r31, 0
    L_80582d2c:
    r31 = /* load */ r31, 0x242(r30); // lha
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
    L_80582c74:
    r0 = /* load */ r0, 0x10c(r29); // lha
    // cmpw r31, r0
    L_80582c90:
    r0 = /* load */ r0, 0x118(r29); // lhz
    r3 = 1; // li
    // sth r31, 0x10c(r29)
    // ori r0, r0, 1
    // sth r0, 0x118(r29)
    f0 = /* load */ f0, 0x3a0(r30); // lfs
    // stfs f0, 0x124(r29)
    // cmpwi r3, 0
    L_80582d08:
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
    // clrlwi r4, r31, 0x10
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
    r4 = (uint32_t)0 << 16; // lis
    r3 = r29; // mr
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 3; // li
    r5 = 1; // li
    sub_0x8059045c();
    r3 = r29; // mr
    r4 = 0x1e; // li
    sub_0x80591800();
    r0 = /* load */ r0, 0x254(r29); // lhz
    r3 = 0; // li
    // sth r3, 0x14e(r29)
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // sth r0, 0x254(r29)
    goto L_80582d78;
    r4 = /* load */ r4, 0x244(r30); // lha
    r0 = /* load */ r0, 0x254(r3); // lhz
    // sth r4, 0x14e(r3)
    // ori r0, r0, 0x20
    r4 = /* load */ r4, 0(r3); // lwz
    // sth r0, 0x254(r3)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    // oris r0, r0, 1
    // stw r0, 8(r4)
    r0 = /* load */ r0, 0x244(r30); // lha
    // sth r0, 0x150(r3)
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
    r0 = 0; // li
    // sth r0, 0x118(r3)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 4(r3)
    r5 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r3); // lwz
    f0 = /* load */ f0, 0(r5); // lfs
    // stfs f0, 0x1b0(r3)
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 0)); // rlwinm
    // stw r0, 4(r3)
}
