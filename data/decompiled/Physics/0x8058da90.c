// Decompiled from StaticR.rel
// Address: 0x8058da90
// Size: 84 bytes (21 instructions)
// Stack frame: 0x0010
// Calls: 0x8059148c, 0x80595c9c

void sub_8058da90(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xb, 0xb)); // rlwinm.
    L_8058dad0:
    sub_0x8059148c();
    r5 = /* load */ r5, 0(r31); // lwz
    r4 = /* load */ r4, 0xa0(r3); // lbz
    r3 = /* load */ r3, 4(r5); // lwz
    r4 = (int8_t)r4; // extsb
    sub_0x80595c9c();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
