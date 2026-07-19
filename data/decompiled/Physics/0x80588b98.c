// Decompiled from StaticR.rel
// Address: 0x80588b98
// Size: 340 bytes (85 instructions)
// Stack frame: 0x0010
// Calls: 0x80590e98, 0x80591090, 0x80590e98, indirect

void sub_80588b98(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    f0 = /* load */ f0, 0(r4); // lfs
    // stw r31, 0xc(r1)
    r31 = 0; // li
    // stw r30, 8(r1)
    r30 = r3; // mr
    // sth r31, 0x118(r3)
    r5 = /* load */ r5, 0(r3); // lwz
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
    r3 = r30; // mr
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 8(r4)
    r12 = /* load */ r12, 0xc(r30); // lwz
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
