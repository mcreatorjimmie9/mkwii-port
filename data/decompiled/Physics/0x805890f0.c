// Decompiled from StaticR.rel
// Address: 0x805890f0
// Size: 104 bytes (26 instructions)
// Stack frame: 0x0010
// Calls: indirect, indirect, indirect

void sub_805890f0(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r0 = 0; // li
    // stw r0, 0x10(r31)
    r3 = r31; // mr
    r12 = /* load */ r12, 0xc(r31); // lwz
    r12 = /* load */ r12, 0x18(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xc(r31); // lwz
    r3 = r31; // mr
    r12 = /* load */ r12, 0x1c(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
