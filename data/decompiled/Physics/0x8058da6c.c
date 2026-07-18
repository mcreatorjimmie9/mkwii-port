// Decompiled from StaticR.rel
// Address: 0x8058da6c
// Size: 36 bytes (9 instructions)
// Stack frame: 0x0010
// Calls: 0x805907bc, 0x8057f3d8

void sub_8058da6c(void) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    sub_0x805907bc();
    sub_0x8057f3d8();
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
