// Decompiled from StaticR.rel
// Address: 0x8058989c
// Size: 136 bytes (34 instructions)
// Stack frame: 0x0010
// Calls: 0x805901cc

void sub_8058989c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x805901cc();
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    // stw r3, 0xc(r30)
    r3 = r30; // mr
    // stb r0, 0x58(r30)
    // sth r0, 0x60(r30)
    // stw r31, 0x64(r30)
    // sth r0, 0xa6(r30)
    // stw r0, 0xa8(r30)
    // stw r0, 0xac(r30)
    // stw r0, 0xb0(r30)
    // stw r0, 0x14(r30)
    // stb r0, 0x54(r30)
    // stb r0, 0x55(r30)
    // sth r0, 0x56(r30)
    // stfs f0, 0x50(r30)
    // stw r0, 0x1c(r30)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
