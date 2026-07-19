// Decompiled from StaticR.rel
// Address: 0x8058ee88
// Size: 108 bytes (27 instructions)
// Stack frame: 0x0030
// Calls: 0x80590a9c, 0x80537ff8, 0x805907bc, 0x80584084, 0x805907bc, 0x80584688

void sub_8058ee88(r3 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    // stw r0, 0x34(r1)
    // stw r31, 0x2c(r1)
    r31 = r3; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = r3; // mr
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = r1 + 0x14; // addi
    r5 = r1 + 8; // addi
    // clrlwi r6, r0, 0x18
    sub_0x80537ff8();
    r3 = r31; // mr
    sub_0x805907bc();
    r4 = r1 + 0x14; // addi
    r5 = r1 + 8; // addi
    sub_0x80584084();
    r3 = r31; // mr
    sub_0x805907bc();
    r4 = r1 + 0x14; // addi
    sub_0x80584688();
    r0 = /* load */ r0, 0x34(r1); // lwz
    r31 = /* load */ r31, 0x2c(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
