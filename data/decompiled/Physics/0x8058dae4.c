// Decompiled from StaticR.rel
// Address: 0x8058dae4
// Size: 60 bytes (15 instructions)
// Stack frame: 0x0010
// Calls: 0x805907bc, 0x805890f0

void sub_8058dae4(r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xd, 0xd)); // rlwinm.
    L_8058db10:
    sub_0x805907bc();
    r3 = r3 + 0x264; // addi
    sub_0x805890f0();
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
