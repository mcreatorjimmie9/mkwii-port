// Decompiled from StaticR.rel
// Address: 0x80587500
// Size: 208 bytes (52 instructions)
// Stack frame: 0x0010
// Calls: 0x80590a9c, 0x805907bc

void sub_80587500(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0xc(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    r0 = /* load */ r0, 0x38(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_805875b8:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x13, 0x13)); // rlwinm.
    L_805875b8:
    r3 = /* load */ r3, 0x290(r31); // lha
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0x20(r31); // lfs
    f0 = /* load */ f0, 0(r4); // lfs
    r3 = r3 + 1; // addi
    r0 = (int16_t)r3; // extsh
    f0 = f1 * f0; // fmuls
    // cmpwi r0, 0x46
    // sth r3, 0x290(r31)
    // stfs f0, 0x20(r31)
    L_805875b8:
    r3 = r31; // mr
    sub_0x805907bc();
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xd)); // rlwinm.
    L_805875a4:
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    // oris r0, r0, 4
    // stw r0, 0xc(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    // ori r0, r0, 0x1000
    // stw r0, 0x14(r3)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
