// Decompiled from StaticR.rel
// Address: 0x80582dd8
// Size: 92 bytes (23 instructions)
// Stack frame: 0x0010
// Calls: 0x80590e98, 0x80591090

void sub_80582dd8(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x80590e98();
    r0 = 0; // li
    // sth r0, 0x1c4(r31)
    r6 = /* load */ r6, 0(r31); // lwz
    r3 = r31; // mr
    r4 = 4; // li
    r5 = 0; // li
    r7 = /* load */ r7, 4(r6); // lwz
    r6 = 1; // li
    r0 = /* load */ r0, 4(r7); // lwz
    // clrlwi r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591090();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
