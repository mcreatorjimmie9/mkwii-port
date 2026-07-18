// Decompiled from StaticR.rel
// Address: 0x805806a4
// Size: 212 bytes (53 instructions)
// Stack frame: 0x10
// Calls: 0x80580778, 0x80580778

void sub_805806a4(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */) {

    // mflr r0
    // lis r7, 0
    // mr r9, r5
    // stw r0, 0x14(r1)
    // li r8, 0
    // lwz r7, 0(r7)
    // lwz r5, 0xb70(r7)
    // li r7, 0
    r0 = r5 + -3;
    // cmplwi r0, 7
    if (7 > 0)
        goto L_805806e8;
    // li r5, 1
    r0 = r5 << r0;
    r0 = r0 & 0xc1;
    if (cr0 == 0)
        goto L_805806e8;
    // mr r7, r5
L_805806e8:
    // cmpwi r7, 0
    if (0 == 0)
        goto L_80580708;
    // mr r5, r4
    // mr r6, r9
    // li r4, 0x1c2
    sub_0x80580778();
    // mr r8, r3
    goto L_80580754;
L_80580708:
    // cmpwi r6, 0
    if (0 == 0)
        goto L_80580754;
    // cmplwi r6, 0xc
    if (0xc > 0)
        goto L_80580754;
    // lis r5, 0
    r0 = r6 + 0xb;
    // lwz r5, 0(r5)
    // lis r7, 0
    r7 = r7 + 0;
    // mr r6, r9
    // lbz r8, 0x24(r5)
    // mr r5, r4
    r0 = r0 - r8;
    // slwi r0, r0, 1
    // lhax r4, r7, r0
    r0 = r4 + 0x48;
    r4 = (s16)r0;
    sub_0x80580778();
    // mr r8, r3
L_80580754:
    // lwz r0, 0x14(r1)
    // mr r3, r8
    // mtlr r0
}
