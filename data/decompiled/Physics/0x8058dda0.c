// Decompiled from StaticR.rel
// Address: 0x8058dda0
// Size: 92 bytes (23 instructions)
// Stack frame: 0x0010
// Calls: 0x805907bc, 0x805813a4, 0x8059148c

void sub_8058dda0(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r4 = /* load */ r4, 0(r4); // lwz
    r0 = /* load */ r0, 0xb78(r4); // lwz
    // cmpwi r0, 0
    L_8058dde8:
    sub_0x805907bc();
    r4 = 0; // li
    sub_0x805813a4();
    r3 = r31; // mr
    sub_0x8059148c();
    r0 = /* load */ r0, 0x60(r3); // lhz
    // ori r0, r0, 2
    // sth r0, 0x60(r3)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
