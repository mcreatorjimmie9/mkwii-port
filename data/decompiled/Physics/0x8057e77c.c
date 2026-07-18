// Decompiled from StaticR.rel
// Address: 0x8057e77c
// Size: 136 bytes (34 instructions)
// Stack frame: 0x10
// Calls: 0x80582f9c

void sub_8057e77c(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // cmpwi r4, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    if (0 != 0)
        goto L_8057e7a4;
    // li r4, 0
    // li r5, 0
    sub_0x80582f9c();
L_8057e7a4:
    // li r4, 0
    // stw r4, 0xcc(r31)
    // lwz r3, 0(r31)
    // stw r4, 0xd0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r3)
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r3)
    // lhz r0, 0x254(r31)
    // sth r4, 0xfc(r31)
    r0 = r0 | 2;
    // sth r4, 0x100(r31)
    // sth r4, 0xfe(r31)
    // sth r0, 0x254(r31)
    // lwz r31, 0xc(r1)
    // lwz r0, 0x14(r1)
    // mtlr r0
}
