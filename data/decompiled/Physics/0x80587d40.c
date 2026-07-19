// Decompiled from StaticR.rel
// Address: 0x80587d40
// Size: 100 bytes (25 instructions)
// Stack frame: 0x0010
// Calls: 0x805784d4

void sub_80587d40(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x805784d4();
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x294(r31)
    // stfs f0, 0x298(r31)
    // stfs f0, 0x29c(r31)
    // stfs f0, 0x2a0(r31)
    // stfs f0, 0x2a4(r31)
    // stw r0, 0x2a8(r31)
    // stb r0, 0x2ac(r31)
    // stw r0, 0x2b0(r31)
    // sth r0, 0x2b4(r31)
    // sth r0, 0x2b6(r31)
    // sth r0, 0x2bc(r31)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
