// Decompiled from StaticR.rel
// Address: 0x8058db20
// Size: 80 bytes (20 instructions)
// Stack frame: 0x0010
// Calls: 0x8059148c, 0x805907bc, 0x80582f9c

void sub_8058db20(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x8059148c();
    r31 = r3; // mr
    r3 = r30; // mr
    sub_0x805907bc();
    r5 = /* load */ r5, 0xa3(r31); // lbz
    r4 = 1; // li
    r5 = (int8_t)r5; // extsb
    sub_0x80582f9c();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
