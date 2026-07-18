// Decompiled from StaticR.rel
// Address: 0x8058ae20
// Size: 112 bytes (28 instructions)
// Stack frame: 0x0020
// Calls: indirect, 0x8052f094

void sub_8058ae20(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = r5; // mr
    // stw r30, 0x18(r1)
    r30 = r4; // mr
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    r12 = /* load */ r12, 0(r3); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r30; // mr
    r6 = r31; // mr
    r3 = r29 + 4; // addi
    r7 = 2; // li
    sub_0x8052f094();
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
    r3 = 0x10; // li
}
