// Decompiled from StaticR.rel
// Address: 0x8058ca68
// Size: 76 bytes (19 instructions)
// Stack frame: 0x0010
// Calls: 0x805901cc

void sub_8058ca68(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x805901cc();
    r4 = (uint32_t)0 << 16; // lis
    // stw r31, 0x10(r30)
    r4 = r4 + 0; // addi
    r3 = r30; // mr
    // stw r4, 0xc(r30)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
