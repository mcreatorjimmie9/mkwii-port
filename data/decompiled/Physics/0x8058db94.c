// Decompiled from StaticR.rel
// Address: 0x8058db94
// Size: 136 bytes (34 instructions)
// Stack frame: 0x0010
// Calls: 0x805907bc, 0x805819a8, 0x80590a9c, 0x806b4d40, 0x80590a9c, 0x807967e8

void sub_8058db94(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r4 = /* load */ r4, 0(r4); // lwz
    r0 = /* load */ r0, 0xb78(r4); // lwz
    // cmpwi r0, 0
    L_8058dbc4:
    sub_0x805907bc();
    sub_0x805819a8();
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806b4d40();
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = r3 + r0; // add
    sub_0x807967e8();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
