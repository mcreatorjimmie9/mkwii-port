// Decompiled from StaticR.rel
// Address: 0x8058c804
// Size: 100 bytes (25 instructions)
// Stack frame: 0x0020
// Calls: indirect, 0x8052ef5c

void sub_8058c804(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = r5; // mr
    // stw r30, 0x18(r1)
    r30 = r4; // mr
    r0 = /* load */ r0, 4(r3); // lbz
    // stb r0, 8(r1)
    r12 = /* load */ r12, 0(r3); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r30; // mr
    r6 = r31; // mr
    r3 = r1 + 8; // addi
    r7 = 1; // li
    sub_0x8052ef5c();
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
