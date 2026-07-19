// Decompiled from StaticR.rel
// Address: 0x8058c0cc
// Size: 80 bytes (20 instructions)
// Stack frame: 0x0020
// Calls: 0x805907bc

void sub_8058c0cc(void) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    f31 = /* load */ f31, 0x88(r3); // lfs
    sub_0x805907bc();
    f2 = /* load */ f2, 0x9c(r3); // lfs
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r4); // lfs
    f1 = f31 - f2; // fsubs
    f0 = f0 * f1; // fmuls
    f0 = f2 + f0; // fadds
    // stfs f0, 0x9c(r3)
    // .byte 0xe3, 0xe1, 0x00, 0x18
    f31 = /* load */ f31, 0x10(r1); // lfd
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
