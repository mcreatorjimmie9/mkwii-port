// Decompiled from StaticR.rel
// Address: 0x80583424
// Size: 104 bytes (26 instructions)
// Stack frame: 0x0010
// Calls: 0x80590a9c

void sub_80583424(r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm.
    L_8058347c:
    r5 = /* load */ r5, 4(r5); // lwz
    r0 = 0; // li
    r4 = /* load */ r4, 0xc(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(4, 2)); // rlwinm
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r3)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 1; // li
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r4, 0x10d(r3)
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
