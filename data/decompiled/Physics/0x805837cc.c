// Decompiled from StaticR.rel
// Address: 0x805837cc
// Size: 956 bytes (239 instructions)
// Stack frame: 0x0030
// Calls: 0x80590e98, 0x80591090, 0x80590e98, 0x805907d4, indirect, 0x805b4e74, 0x805907d4, indirect, 0x805b4f48, 0x80590a9c, 0x80795f64, 0x805907a4, 0x80598378, 0x805b4f48, 0x805b4cf0, 0x80591078, 0x805b6c90, 0x805907bc, 0x805766b8, 0x8057e348, 0x80590a9c, 0x805916a4, 0x80591090

void sub_805837cc(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    // stw r0, 0x34(r1)
    // stw r31, 0x2c(r1)
    r31 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r31); // lfs
    // stw r30, 0x28(r1)
    r30 = 0; // li
    // stw r29, 0x24(r1)
    r29 = r3; // mr
    // sth r30, 0x118(r3)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 4(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 8(r4)
    // sth r30, 0x102(r3)
    r4 = /* load */ r4, 0(r3); // lwz
    // stfs f0, 0x1b0(r3)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 0)); // rlwinm
    // stw r0, 4(r4)
    sub_0x80590e98();
    // sth r30, 0x1c4(r29)
    r3 = r29; // mr
    r6 = /* load */ r6, 0(r29); // lwz
    r4 = 4; // li
    r5 = 0; // li
    r7 = /* load */ r7, 4(r6); // lwz
    r6 = 1; // li
    r0 = /* load */ r0, 4(r7); // lwz
    // clrlwi r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591090();
    // sth r30, 0x12c(r29)
    r3 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r29); // lwz
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = r29; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x13, 0x11)); // rlwinm
    // stw r0, 8(r4)
    r0 = /* load */ r0, 0x254(r29); // lhz
    // sth r30, 0x14c(r29)
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    r4 = /* load */ r4, 0(r29); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // sth r30, 0x14e(r29)
    // sth r30, 0x150(r29)
    // sth r0, 0x254(r29)
    // stw r30, 0xec(r29)
    // stfs f0, 0xf0(r29)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // stw r0, 0xc(r4)
    r4 = /* load */ r4, 0(r29); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0x1e)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x80590e98();
    // sth r30, 0x148(r29)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 8(r3)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    // stw r0, 0xc(r3)
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xf, 0xf)); // rlwinm.
    L_80583958:
    r4 = /* load */ r4, 4(r4); // lwz
    r3 = r29; // mr
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x10, 0xd)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = 0x1a5; // li
    f1 = /* load */ f1, 0(r31); // lfs
    r12 = /* load */ r12, 0xe0(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = /* load */ r3, 0x260(r29); // lwz
    sub_0x805b4e74();
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = r29; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 0x116; // li
    r12 = /* load */ r12, 0xe0(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r31 = 0; // li
    // sth r31, 0x18c(r29)
    r3 = /* load */ r3, 0x260(r29); // lwz
    r4 = 0; // li
    sub_0x805b4f48();
    r30 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r29); // lwz
    f0 = /* load */ f0, 0(r30); // lfs
    r3 = r29; // mr
    // stfs f0, 0x178(r29)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x11, 0xf)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = r3 + r0; // add
    sub_0x80795f64();
    // sth r31, 0x194(r29)
    r3 = r29; // mr
    sub_0x805907a4();
    f1 = /* load */ f1, 0(r30); // lfs
    sub_0x80598378();
    r0 = /* load */ r0, 0x196(r29); // lbz
    // cmpwi r0, 0
    L_80583a1c:
    r3 = /* load */ r3, 0x260(r29); // lwz
    r4 = 1; // li
    sub_0x805b4f48();
    r0 = 1; // li
    // stb r0, 0x196(r29)
    r4 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0x260(r29); // lwz
    f0 = /* load */ f0, 0(r4); // lfs
    // stfs f0, 0x17c(r29)
    sub_0x805b4cf0();
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0)); // rlwinm.
    L_80583a5c:
    r4 = /* load */ r4, 4(r4); // lwz
    r3 = r29; // mr
    r0 = /* load */ r0, 8(r4); // lwz
    // clrlwi r0, r0, 1
    // stw r0, 8(r4)
    sub_0x80591078();
    r3 = /* load */ r3, 0x25c(r29); // lwz
    r4 = 0; // li
    sub_0x805b6c90();
    r3 = r29; // mr
    sub_0x805907bc();
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 2)); // rlwinm
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x13)); // rlwinm
    // stw r0, 0xc(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 4)); // rlwinm
    // stw r0, 0xc(r3)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x19)); // rlwinm.
    L_80583ac8:
    r3 = /* load */ r3, 0x258(r29); // lwz
    sub_0x805766b8();
    r3 = r29; // mr
    sub_0x8057e348();
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm.
    L_80583b20:
    r5 = /* load */ r5, 4(r4); // lwz
    r0 = 0; // li
    r3 = r29; // mr
    r4 = /* load */ r4, 0xc(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(4, 2)); // rlwinm
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r29)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 1; // li
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r4, 0x10d(r3)
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = r29; // mr
    r5 = /* load */ r5, 4(r4); // lwz
    r4 = r1 + 8; // addi
    r0 = /* load */ r0, 8(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(7, 5)); // rlwinm
    // stw r0, 8(r5)
    // stfs f0, 8(r1)
    // stfs f0, 0xc(r1)
    // stfs f0, 0x10(r1)
    sub_0x805916a4();
    r3 = r29; // mr
    r4 = 9; // li
    r5 = 1; // li
    r6 = 0; // li
    sub_0x80591090();
    r0 = /* load */ r0, 0x34(r1); // lwz
    r31 = /* load */ r31, 0x2c(r1); // lwz
    r30 = /* load */ r30, 0x28(r1); // lwz
    r29 = /* load */ r29, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
