// Decompiled from StaticR.rel
// Address: 0x80581824
// Size: 328 bytes (82 instructions)
// Stack frame: 0x10
// Calls: 0x805910cc, 0x8056c7e4, 0x80591834

void sub_80581824(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    // stw r30, 8(r1)
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 8(r4)
    r0 = r0 & 0x00000100; /* rlwinm */
    if (cr0 == 0)
        goto L_80581890;
    // lha r4, 0x1a8(r3)
    // li r30, 0
    r0 = r4 + -1;
    // sth r0, 0x1a8(r3)
    r0 = (s16)r0;
    if (cr0 > 0)
        goto L_80581880;
    // lwz r3, 0(r3)
    // li r30, 1
    // lwz r3, 4(r3)
    // lwz r0, 8(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 8(r3)
L_80581880:
    // mr r3, r31
    sub_0x805910cc();
    // mr r4, r30
    sub_0x8056c7e4();
L_80581890:
    // lis r3, 0
    // lwz r3, 0(r3)
    // lwz r0, 0xb78(r3)
    // cmpwi r0, 0
    if (0 != 0)
        goto L_80581954;
    // lwz r5, 0(r31)
    // lwz r3, 4(r5)
    // lwz r4, 0x14(r3)
    r0 = r4 & 0x00010000; /* rlwinm */
    if (cr0 == 0)
        goto L_80581954;
    r0 = r4 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_80581954;
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_80581954;
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x00006000; /* rlwinm */
    if (cr0 != 0)
        goto L_80581954;
    // lha r4, 0x1ac(r31)
    // lis r3, 0
    r0 = r4 + 1;
    // sth r0, 0x1ac(r31)
    r4 = (s16)r0;
    // lha r0, 0(r3)
    // cmpw r4, r0
    if (r0 < 0)
        goto L_80581954;
    // lwz r3, 4(r5)
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x000c0000; /* rlwinm */
    if (cr0 != 0)
        goto L_80581918;
    // lwz r3, 4(r5)
    // lwz r0, 0xc(r3)
    r0 = r0 | 4;
    // stw r0, 0xc(r3)
L_80581918:
    // mr r3, r31
    // li r4, 6
    sub_0x80591834();
    // li r0, 0
    // sth r0, 0x1ac(r31)
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 0x14(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0x14(r3)
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 0x14(r3)
    r0 = r0 | 2;
    // stw r0, 0x14(r3)
L_80581954:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
