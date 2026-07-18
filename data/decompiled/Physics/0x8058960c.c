// Decompiled from StaticR.rel
// Address: 0x8058960c
// Size: 96 bytes (24 instructions)
// Stack frame: 0x0010
// Calls: 0x805914a8

void sub_8058960c(r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = 0; // li
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xc)); // rlwinm.
    L_80589654:
    sub_0x805914a8();
    r0 = /* load */ r0, 0x1c(r3); // lwz
    r4 = /* load */ r4, 0x18(r3); // lwz
    r0 = ((_rotl(r0, 0x19)) & _mask(0x1f, 0x1f)); // rlwinm
    r3 = ((_rotl(r4, 0x19)) & _mask(0x1f, 0x1f)); // rlwinm
    // cmplw r3, r0
    L_80589654:
    r31 = 1; // li
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
