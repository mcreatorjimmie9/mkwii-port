// Decompiled from StaticR.rel
// Address: 0x80589158
// Size: 168 bytes (42 instructions)
// Stack frame: 0x0010
// Calls: indirect, indirect, indirect, indirect, indirect

void sub_80589158(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // cmpwi r3, 0
    L_805891e8:
    r12 = /* load */ r12, 0xc(r30); // lwz
    r3 = r30; // mr
    r12 = /* load */ r12, 0x20(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xc(r30); // lwz
    r3 = r30; // mr
    r4 = r31; // mr
    r12 = /* load */ r12, 0x28(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // cmpwi r3, 0
    L_805891e8:
    r12 = /* load */ r12, 0xc(r30); // lwz
    r3 = r30; // mr
    r12 = /* load */ r12, 0x24(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xc(r30); // lwz
    r3 = r30; // mr
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
