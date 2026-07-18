// Decompiled from StaticR.rel
// Address: 0x8058be20
// Size: 64 bytes (16 instructions)
// Stack frame: 0x0010
// Calls: 0x8070282c, 0x80555bf4

void sub_8058be20(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r3 = r3 + 0x94; // addi
    sub_0x8070282c();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r31; // mr
    r4 = r4 + 0; // addi
    sub_0x80555bf4();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
