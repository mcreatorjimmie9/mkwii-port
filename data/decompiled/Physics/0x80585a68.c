// Decompiled from StaticR.rel
// Address: 0x80585a68
// Size: 120 bytes (30 instructions)
// Stack frame: 0x0010
// Calls: 0x80591658, 0x805b7964

void sub_80585a68(r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 4)); // rlwinm.
    L_80585a90:
    sub_0x80591658();
    sub_0x805b7964();
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 2)); // rlwinm
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x13)); // rlwinm
    // stw r0, 0xc(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(6, 4)); // rlwinm
    // stw r0, 0xc(r3)
}
