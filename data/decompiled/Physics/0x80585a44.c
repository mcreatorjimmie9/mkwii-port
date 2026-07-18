// Decompiled from StaticR.rel
// Address: 0x80585a44
// Size: 36 bytes (9 instructions)
// Stack frame: 0x0010
// Calls: 0x80591658, 0x805b7490

void sub_80585a44(void) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    sub_0x80591658();
    sub_0x805b7490();
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
