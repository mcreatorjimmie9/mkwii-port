// Decompiled from StaticR.rel
// Address: 0x8058d4e0
// Size: 60 bytes (15 instructions)
// Stack frame: 0x0010
// Calls: 0x805901cc

void sub_8058d4e0(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x805901cc();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r31; // mr
    r4 = r4 + 0; // addi
    // stw r4, 0xc(r31)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
