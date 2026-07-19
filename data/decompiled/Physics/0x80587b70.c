// Decompiled from StaticR.rel
// Address: 0x80587b70
// Size: 72 bytes (18 instructions)
// Stack frame: 0x0010
// Calls: 0x80577fc4

void sub_80587b70(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x80577fc4();
    r3 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    r4 = r4 + 0; // addi
    // stw r4, 0xc(r31)
    r3 = r31; // mr
    // stfs f0, 0x294(r31)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
