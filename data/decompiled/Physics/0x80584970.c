// Decompiled from StaticR.rel
// Address: 0x80584970
// Size: 92 bytes (23 instructions)
// Stack frame: 0x0010
// Calls: 0x80584084, 0x80590e68, 0x80590a9c, 0x807960a0

void sub_80584970(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x80584084();
    r3 = r31; // mr
    sub_0x80590e68();
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r4 = 0; // li
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = r3 + r0; // add
    sub_0x807960a0();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
