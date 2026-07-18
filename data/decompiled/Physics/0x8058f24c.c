// Decompiled from StaticR.rel
// Address: 0x8058f24c
// Size: 84 bytes (21 instructions)
// Stack frame: 0x0020
// Calls: 0x8058ddfc

void sub_8058f24c(r3 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    r0 = /* load */ r0, 0x28(r1); // lwz
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    // stw r0, 8(r1)
    r0 = /* load */ r0, 0x2c(r1); // lwz
    // stw r0, 0xc(r1)
    r0 = /* load */ r0, 0x30(r1); // lwz
    // stw r0, 0x10(r1)
    sub_0x8058ddfc();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r31; // mr
    r4 = r4 + 0; // addi
    // stw r4, 0xc(r31)
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
