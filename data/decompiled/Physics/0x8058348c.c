// Decompiled from StaticR.rel
// Address: 0x8058348c
// Size: 460 bytes (115 instructions)
// Stack frame: 0x0010
// Calls: 0x80590e98, 0x80591090, 0x80590e98, 0x805b6c90, 0x805766b8

void sub_8058348c(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x15)); // rlwinm.
    L_805834c8:
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 0x10(r4); // lwz
    // ori r0, r0, 0x80
    // stw r0, 0x10(r4)
    r31 = 0; // li
    // sth r31, 0x118(r3)
    r4 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r3); // lwz
    f0 = /* load */ f0, 0(r4); // lfs
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 4(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 8(r4)
    // sth r31, 0x102(r3)
    r4 = /* load */ r4, 0(r3); // lwz
    // stfs f0, 0x1b0(r3)
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 0)); // rlwinm
    // stw r0, 4(r4)
    sub_0x80590e98();
    // sth r31, 0x1c4(r30)
    r3 = r30; // mr
    r6 = /* load */ r6, 0(r30); // lwz
    r4 = 4; // li
    r5 = 0; // li
    r7 = /* load */ r7, 4(r6); // lwz
    r6 = 1; // li
    r0 = /* load */ r0, 4(r7); // lwz
    // clrlwi r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591090();
    // sth r31, 0x12c(r30)
    r3 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r30); // lwz
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x13, 0x11)); // rlwinm
    // stw r0, 8(r4)
    r0 = /* load */ r0, 0x254(r30); // lhz
    // sth r31, 0x14c(r30)
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    r4 = /* load */ r4, 0(r30); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // sth r31, 0x14e(r30)
    // sth r31, 0x150(r30)
    // sth r0, 0x254(r30)
    // stw r31, 0xec(r30)
    // stfs f0, 0xf0(r30)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // stw r0, 0xc(r4)
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0x1e)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x80590e98();
    // sth r31, 0x148(r30)
    r4 = 0; // li
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 8(r3)
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    // stw r0, 0xc(r3)
    r3 = /* load */ r3, 0x25c(r30); // lwz
    sub_0x805b6c90();
    r3 = /* load */ r3, 0x258(r30); // lwz
    sub_0x805766b8();
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 2)); // rlwinm
    // stw r0, 8(r3)
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x13)); // rlwinm
    // stw r0, 0xc(r3)
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 4)); // rlwinm
    // stw r0, 0xc(r3)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
