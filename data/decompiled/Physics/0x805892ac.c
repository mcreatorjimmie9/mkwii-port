// Decompiled from StaticR.rel
// Address: 0x805892ac
// Size: 156 bytes (39 instructions)
// Stack frame: 0x0010
// Calls: 0x80590a9c, 0x806aa37c, 0x805907f0, 0x805907d4, indirect, 0x805907d4, indirect

void sub_805892ac(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806aa37c();
    r3 = r30; // mr
    r4 = 7; // li
    sub_0x805907f0();
    r3 = r30; // mr
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r31 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r31); // lfs
    r4 = 0x1a8; // li
    r12 = /* load */ r12, 0xe0(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r30; // mr
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = 0x1a9; // li
    f1 = /* load */ f1, 0(r31); // lfs
    r12 = /* load */ r12, 0xe0(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
