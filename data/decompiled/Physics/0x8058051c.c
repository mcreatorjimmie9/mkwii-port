// Decompiled from StaticR.rel
// Address: 0x8058051c
// Size: 208 bytes (52 instructions)
// Stack frame: 0x10
// Calls: 0x8059148c, 0x80580778, 0x80580778

void sub_8058051c(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    sub_0x8059148c();
    // lis r4, 0
    // lbz r6, 0xa4(r3)
    // lwz r4, 0(r4)
    // li r3, 0
    // li r5, 0
    // lwz r4, 0xb70(r4)
    r0 = r4 + -3;
    // cmplwi r0, 7
    if (7 > 0)
        goto L_8058056c;
    // li r4, 1
    r0 = r4 << r0;
    r0 = r0 & 0xc1;
    if (cr0 == 0)
        goto L_8058056c;
    // mr r5, r4
L_8058056c:
    // cmpwi r5, 0
    if (0 == 0)
        goto L_8058058c;
    // mr r3, r31
    // li r4, 0x1c2
    // li r5, 0
    // li r6, 0
    sub_0x80580778();
    goto L_805805d8;
L_8058058c:
    // cmpwi r6, 0
    if (0 == 0)
        goto L_805805d8;
    // cmplwi r6, 0xc
    if (0xc > 0)
        goto L_805805d8;
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
L_805805d8:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // mtlr r0
}
