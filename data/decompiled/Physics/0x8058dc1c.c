// Decompiled from StaticR.rel
// Address: 0x8058dc1c
// Size: 48 bytes (12 instructions)
// Stack frame: 0x0010
// Calls: 0x80590d60, indirect

void sub_8058dc1c(void) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    sub_0x80590d60();
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
