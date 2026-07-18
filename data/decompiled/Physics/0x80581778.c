// Decompiled from StaticR.rel
// Address: 0x80581778
// Size: 172 bytes (43 instructions)
// Stack frame: 0x10
// Calls: 0x805910cc, 0x8056c7d4

void sub_80581778(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // lwz r5, 0(r3)
    // lwz r4, 4(r5)
    // lwz r0, 0x14(r4)
    r0 = r0 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_805817b4;
    // lwz r5, 4(r5)
    // li r0, 0
    // lwz r4, 0x14(r5)
    r4 = r4 | 1;
    r4 = r4 | 0x80;
    // stw r4, 0x14(r5)
    // sth r0, 0x1ac(r3)
L_805817b4:
    // lis r4, 0
    // li r5, 0
    // lwz r4, 0(r4)
    // lwz r4, 0xb70(r4)
    r0 = r4 + -3;
    // cmplwi r0, 7
    if (7 > 0)
        goto L_805817e4;
    // li r4, 1
    r0 = r4 << r0;
    r0 = r0 & 0xc1;
    if (cr0 == 0)
        goto L_805817e4;
    // mr r5, r4
L_805817e4:
    // cmpwi r5, 0
    if (0 == 0)
        goto L_80581814;
    // lwz r5, 0(r3)
    // lis r4, 0
    // lwz r5, 4(r5)
    // lwz r0, 8(r5)
    r0 = r0 | 0x100;
    // stw r0, 8(r5)
    // lha r0, 0(r4)
    // sth r0, 0x1a8(r3)
    sub_0x805910cc();
    sub_0x8056c7d4();
L_80581814:
    // lwz r0, 0x14(r1)
    // mtlr r0
}
