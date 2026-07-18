// Decompiled from StaticR.rel
// Address: 0x8058df30
// Size: 112 bytes (28 instructions)
// Stack frame: 0x0010
// Calls: 0x805907d4, indirect, 0x80555bf4

void sub_8058df30(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    L_8058df84:
    r4 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    // stw r4, 0xc(r3)
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r12 = /* load */ r12, 0x124(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // cmpwi r31, 0
    L_8058df84:
    r3 = r30; // mr
    sub_0x80555bf4();
    r3 = r30; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
