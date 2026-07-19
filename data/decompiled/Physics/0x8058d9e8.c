// Decompiled from StaticR.rel
// Address: 0x8058d9e8
// Size: 132 bytes (33 instructions)
// Stack frame: 0x0010
// Calls: 0x8059148c, 0x805907bc, 0x805858ec

void sub_8058d9e8(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 0; // li
    r3 = /* load */ r3, 0xb70(r3); // lwz
    r0 = r3 + -3; // addi
    // cmplwi r0, 7
    L_8058da30:
    r3 = 1; // li
    r0 = r3 << r0; // slw
    // andi. r0, r0, 0xc1
    L_8058da30:
    r4 = r3; // mr
    // cmpwi r4, 0
    L_8058da54:
    r3 = r30; // mr
    sub_0x8059148c();
    r31 = r3; // mr
    r3 = r30; // mr
    sub_0x805907bc();
    r4 = /* load */ r4, 0xa5(r31); // lbz
    sub_0x805858ec();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
