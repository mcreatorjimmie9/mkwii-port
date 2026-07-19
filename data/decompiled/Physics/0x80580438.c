// Decompiled from StaticR.rel
// Address: 0x80580438
// Size: 228 bytes (57 instructions)
// Stack frame: 0x10
// Calls: 0x80590a9c, 0x80580778, 0x80580778

void sub_80580438(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    sub_0x80590a9c();
    // lis r5, 0
    // lis r4, 0
    // lwz r5, 0(r5)
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r4, 0(r4)
    // li r3, 0
    // lwz r6, 0xc(r5)
    // li r5, 0
    // lwz r4, 0xb70(r4)
    // lwzx r6, r6, r0
    r0 = r4 + -3;
    // cmplwi r0, 7
    // lbz r6, 0x20(r6)
    if (7 > 0)
        goto L_8058049c;
    // li r4, 1
    r0 = r4 << r0;
    r0 = r0 & 0xc1;
    if (cr0 == 0)
        goto L_8058049c;
    // mr r5, r4
L_8058049c:
    // cmpwi r5, 0
    if (0 == 0)
        goto L_805804bc;
    // mr r3, r31
    // li r4, 0x1c2
    // li r5, 0
    // li r6, 0
    sub_0x80580778();
    goto L_80580508;
L_805804bc:
    // cmpwi r6, 0
    if (0 == 0)
        goto L_80580508;
    // cmplwi r6, 0xc
    if (0xc > 0)
        goto L_80580508;
    // lis r3, 0
    r0 = r6 + 0xb;
    // lwz r5, 0(r3)
    // lis r4, 0
    r4 = r4 + 0;
    // mr r3, r31
    // lbz r7, 0x24(r5)
    // li r5, 0
    // li r6, 0
    r0 = r0 - r7;
    // slwi r0, r0, 1
    // lhax r4, r4, r0
    r0 = r4 + 0x48;
    r4 = (s16)r0;
    sub_0x80580778();
L_80580508:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // mtlr r0
}
