// Decompiled from StaticR.rel
// Address: 0x80589554
// Size: 88 bytes (22 instructions)
// Stack frame: 0x0010
// Calls: 0x80591498

void sub_80589554(r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    r0 = 0; // li
    f0 = /* load */ f0, 0(r4); // lfs
    r5 = /* load */ r5, 0(r3); // lwz
    r5 = /* load */ r5, 4(r5); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(3, 1)); // rlwinm
    // stw r4, 4(r5)
    // stb r0, 0x2ac(r3)
    // stfs f0, 0x2b8(r3)
    // sth r0, 0x2bc(r3)
    sub_0x80591498();
    r0 = /* load */ r0, 0x14(r3); // lwz
    // xori r0, r0, 0x1000
    // stw r0, 0x14(r3)
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
