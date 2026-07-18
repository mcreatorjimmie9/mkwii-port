// Decompiled from StaticR.rel
// Address: 0x8058e1c8
// Size: 164 bytes (41 instructions)
// Stack frame: 0x0010
// Calls: 0x805982cc, 0x80595fb8, indirect, 0x805907d4, indirect, 0x80590a9c, 0x80590800, indirect

void sub_8058e1c8(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    r5 = r30; // mr
    r3 = /* load */ r3, 0x10(r3); // lwz
    r4 = r30 + 0x1c; // addi
    sub_0x805982cc();
    r3 = /* load */ r3, 0x10(r30); // lwz
    sub_0x80595fb8();
    r3 = /* load */ r3, 0x18(r30); // lwz
    r12 = /* load */ r12, 0x20(r3); // lwz
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r30; // mr
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = r30; // mr
    r5 = 0; // li
    r12 = /* load */ r12, 0x120(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r30; // mr
    sub_0x80590a9c();
    r31 = r3; // mr
    r3 = r30; // mr
    sub_0x80590800();
    r12 = /* load */ r12, 0(r3); // lwz
    // clrlwi r4, r31, 0x18
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
