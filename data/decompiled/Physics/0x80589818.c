// Decompiled from StaticR.rel
// Address: 0x80589818
// Size: 132 bytes (33 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4

void sub_80589818(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    L_80589840:
    // cmpwi r4, 0
    L_80589840:
    sub_0x80555bf4();
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xe, 0xc)); // rlwinm
    // stw r0, 8(r3)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r3 = ((_rotl(r0, 0xe)) & _mask(0x1f, 0x1f)); // rlwinm
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // oris r0, r0, 4
    // stw r0, 8(r3)
}
