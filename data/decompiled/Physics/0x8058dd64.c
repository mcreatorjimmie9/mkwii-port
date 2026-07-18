// Decompiled from StaticR.rel
// Address: 0x8058dd64
// Size: 60 bytes (15 instructions)
// Stack frame: 0x0010
// Calls: 0x805907bc, 0x80579ce4

void sub_8058dd64(r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 6)); // rlwinm.
    L_8058dd90:
    sub_0x805907bc();
    r4 = 1; // li
    sub_0x80579ce4();
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
