// Decompiled from StaticR.rel
// Address: 0x8058dcdc
// Size: 68 bytes (17 instructions)
// Stack frame: 0x0010
// Calls: 0x805907bc, 0x805849cc

void sub_8058dcdc(r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_8058dd10:
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = 1; // li
    // stw r0, 0x80(r4)
    sub_0x805907bc();
    sub_0x805849cc();
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
