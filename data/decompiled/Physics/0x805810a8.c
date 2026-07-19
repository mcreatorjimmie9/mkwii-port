// Decompiled from StaticR.rel
// Address: 0x805810a8
// Size: 832 bytes (208 instructions)
// Stack frame: 0x10
// Calls: 0x80590434, 0x80590de4, 0x80590d60, 0x80590d60, 0x80590d60, 0x80569a30, 0x80590a9c, 0x806ac5a4, 0x80590d9c, 0x80590de4, 0x80590d60, 0x80590d60, 0x80590a9c, 0x806ac8a8, 0x80590a9c, 0x80590a9c, 0x80590a9c, 0x806acd64, 0x80591920

void sub_805810a8(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    // stw r30, 8(r1)
    // lha r4, 0x152(r3)
    r0 = r4 + -1;
    // sth r0, 0x152(r3)
    r0 = (s16)r0;
    if (cr0 >= 0)
        goto L_805810e4;
    // li r0, 0
    // sth r0, 0x152(r3)
    // li r0, 1
    goto L_805810e8;
L_805810e4:
    // li r0, 0
L_805810e8:
    // cmpwi r0, 0
    if (0 == 0)
        goto L_80581158;
    // mr r3, r31
    sub_0x80590434();
    // lbz r0, 0x3a(r3)
    // cmpwi r0, 1
    if (1 != 0)
        goto L_80581158;
    // mr r3, r31
    sub_0x80590de4();
    // cmpwi r3, 0xb
    if (0xb == 0)
        goto L_80581124;
    // lis r3, 0
    // lha r0, 0(r3)
    // sth r0, 0x152(r31)
    goto L_80581158;
L_80581124:
    // mr r3, r31
    sub_0x80590d60();
    // lis r4, 0
    // lwz r3, 0xc4(r3)
    // lha r0, 0(r4)
    // cmplw r3, r0
    if (r0 >= 0)
        goto L_80581158;
    // mr r3, r31
    sub_0x80590d60();
    // lwz r12, 0xc(r3)
    // lwz r12, 0x10(r12)
    // mtctr r12
    // bctrl 
L_80581158:
    // mr r3, r31
    sub_0x80590d60();
    sub_0x80569a30();
    // cmpwi r3, 0
    if (0 == 0)
        goto L_805811ac;
    // mr r3, r31
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806ac5a4();
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00040000; /* rlwinm */
    if (cr0 == 0)
        goto L_805811ac;
    // mr r3, r31
    // li r4, 0xb
    sub_0x80590d9c();
L_805811ac:
    // mr r3, r31
    sub_0x80590de4();
    // cmpwi r3, 0xb
    if (0xb != 0)
        goto L_80581384;
    // mr r3, r31
    sub_0x80590d60();
    // lis r4, 0
    // lwz r0, 0xc4(r3)
    // lha r3, 0(r4)
    // cmplw r3, r0
    if (r0 != 0)
        goto L_80581384;
    // mr r3, r31
    sub_0x80590d60();
    // lhz r0, 0xcc(r3)
    r0 = r0 & 0x00000002; /* rlwinm */
    if (cr0 != 0)
        goto L_80581350;
    // mr r3, r31
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806ac8a8();
    // lis r3, 0
    // li r4, 0
    // lwz r5, 0(r3)
    // lwz r3, 0xb70(r5)
    r3 = r3 + -3;
    // cmplwi r3, 7
    if (7 > 0)
        goto L_8058123c;
    // li r0, 1
    r0 = r0 << r3;
    r0 = r0 & 0xc1;
    if (cr0 == 0)
        goto L_8058123c;
    // li r4, 1
L_8058123c:
    // cmpwi r4, 0
    if (0 == 0)
        goto L_80581370;
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 0x14(r3)
    r0 = r0 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_80581370;
    // lwz r0, 0xb78(r5)
    // cmpwi r0, 1
    if (1 != 0)
        goto L_80581370;
    // mr r3, r31
    sub_0x80590a9c();
    // mr r30, r3
    // mr r3, r31
    sub_0x80590a9c();
    // lis r4, 0
    // lis r5, 0
    // lwz r4, 0(r4)
    // mr r0, r3
    // lwz r3, 0(r5)
    // lwz r5, 0xb70(r4)
    // cmpwi r5, 3
    if (3 != 0)
        goto L_805812ec;
    // lwz r4, 0xb78(r4)
    // cmpwi r4, 0
    if (0 != 0)
        goto L_805812c4;
    // lwz r3, 0x10(r3)
    // clrlwi r4, r0, 0x18
    // clrlwi r5, r30, 0x18
    // lwz r12, 0(r3)
    // lwz r12, 0x2c(r12)
    // mtctr r12
    // bctrl 
    goto L_80581370;
L_805812c4:
    // cmpwi r4, 1
    if (1 != 0)
        goto L_80581370;
    // lwz r3, 0x10(r3)
    // clrlwi r4, r0, 0x18
    // clrlwi r5, r30, 0x18
    // lwz r12, 0(r3)
    // lwz r12, 0x2c(r12)
    // mtctr r12
    // bctrl 
    goto L_80581370;
L_805812ec:
    // cmpwi r5, 9
    if (9 == 0)
        goto L_805812fc;
    // cmpwi r5, 0xa
    if (0xa != 0)
        goto L_80581370;
L_805812fc:
    // lwz r4, 0xb78(r4)
    // cmpwi r4, 0
    if (0 != 0)
        goto L_80581328;
    // lwz r3, 0x10(r3)
    // clrlwi r4, r0, 0x18
    // clrlwi r5, r30, 0x18
    // lwz r12, 0(r3)
    // lwz r12, 0x2c(r12)
    // mtctr r12
    // bctrl 
    goto L_80581370;
L_80581328:
    // cmpwi r4, 1
    if (1 != 0)
        goto L_80581370;
    // lwz r3, 0x10(r3)
    // clrlwi r4, r0, 0x18
    // clrlwi r5, r30, 0x18
    // lwz r12, 0(r3)
    // lwz r12, 0x2c(r12)
    // mtctr r12
    // bctrl 
    goto L_80581370;
L_80581350:
    // mr r3, r31
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806acd64();
L_80581370:
    // mr r3, r31
    sub_0x80591920();
    // li r0, 1
    // stb r0, 0x154(r31)
    goto L_8058138c;
L_80581384:
    // li r0, 0
    // stb r0, 0x154(r31)
L_8058138c:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
