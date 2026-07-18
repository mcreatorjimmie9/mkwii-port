// Decompiled from StaticR.rel
// Address: 0x8058966c
// Size: 152 bytes (38 instructions)
// Stack frame: 0x0010
// Calls: 0x805914a8, indirect, 0x805914a8, indirect

void sub_8058966c(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x805914a8();
    r0 = /* load */ r0, 0x1c(r3); // lwz
    r4 = /* load */ r4, 0x18(r3); // lwz
    r0 = ((_rotl(r0, 0x15)) & _mask(0x1f, 0x1f)); // rlwinm
    r3 = ((_rotl(r4, 0x15)) & _mask(0x1f, 0x1f)); // rlwinm
    // cmplw r3, r0
    L_805896b0:
    r12 = /* load */ r12, 0xc(r31); // lwz
    r3 = r31; // mr
    r12 = /* load */ r12, 0x6c(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r31; // mr
    sub_0x805914a8();
    r0 = /* load */ r0, 0x1c(r3); // lwz
    r4 = /* load */ r4, 0x18(r3); // lwz
    r0 = ((_rotl(r0, 0x14)) & _mask(0x1f, 0x1f)); // rlwinm
    r3 = ((_rotl(r4, 0x14)) & _mask(0x1f, 0x1f)); // rlwinm
    // cmplw r3, r0
    L_805896e4:
    r12 = /* load */ r12, 0xc(r31); // lwz
    r3 = r31; // mr
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
    f1 = /* load */ f1, 0x294(r3); // lfs
}
