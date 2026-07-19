// Decompiled from StaticR.rel
// Address: 0x805894c0
// Size: 148 bytes (37 instructions)
// Stack frame: 0x0010
// Calls: 0x805907e0, 0x808677c4, 0x80591498

void sub_805894c0(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    r7 = 0; // li
    // stw r0, 0x14(r1)
    r0 = 1; // li
    f0 = /* load */ f0, 0(r4); // lfs
    r6 = (uint32_t)0 << 16; // lis
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r5 = /* load */ r5, 0(r3); // lwz
    r8 = /* load */ r8, 4(r5); // lwz
    r5 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 4(r8); // lwz
    // oris r4, r4, 0x2000
    // stw r4, 4(r8)
    // stw r7, 0x2a8(r3)
    // stb r0, 0x2ac(r3)
    f1 = /* load */ f1, 0(r6); // lfs
    // stfs f1, 0x2a4(r3)
    // sth r7, 0x2b4(r3)
    r0 = /* load */ r0, 0(r5); // lha
    // sth r0, 0x2b6(r3)
    // stfs f0, 0x2b8(r3)
    // sth r7, 0x2bc(r3)
    sub_0x805907e0();
    sub_0x808677c4();
    r3 = r31; // mr
    sub_0x80591498();
    r0 = /* load */ r0, 0x14(r3); // lwz
    // xori r0, r0, 0x800
    // stw r0, 0x14(r3)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
