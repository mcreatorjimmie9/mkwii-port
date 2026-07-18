// Decompiled from StaticR.rel
// Address: 0x80580648
// Size: 92 bytes (23 instructions)
// Stack frame: 0x10
// Calls: 0x80590a9c, 0x80580778

void sub_80580648(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r5, 0(r4)
    // li r8, 0
    // mr r3, r31
    // li r4, 0x264
    // lwz r7, 0x68(r5)
    // li r5, 0
    // li r6, 1
    // lwzx r7, r7, r0
    // stw r8, 0x50(r7)
    sub_0x80580778();
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // mtlr r0
}
