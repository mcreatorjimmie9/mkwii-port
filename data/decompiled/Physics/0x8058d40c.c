// Decompiled from StaticR.rel
// Address: 0x8058d40c
// Size: 72 bytes (18 instructions)
// Stack frame: 0x0010
// Calls: 0x805901cc

void sub_8058d40c(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x805901cc();
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    r3 = r3 + 0; // addi
    // stw r3, 0xc(r31)
    r3 = r31; // mr
    // stw r0, 0x14(r31)
    // stw r0, 0x10(r31)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
