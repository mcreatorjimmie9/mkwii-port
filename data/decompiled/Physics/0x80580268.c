// Decompiled from StaticR.rel
// Address: 0x80580268
// Size: 464 bytes (116 instructions)
// Stack frame: 0x10
// Calls: 0x80590a9c, 0x805907d4, 0x805b4e74, 0x805907f0, 0x805907d4, 0x8070ec70, 0x80590fd0, 0x80591800

void sub_80580268(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {

    // mflr r0
    // lis r4, 0x80c
    // li r5, 1
    // stw r0, 0x14(r1)
    r0 = r4 + 0x100;
    // stw r31, 0xc(r1)
    // mr r31, r3
    // lwz r6, 0(r3)
    // lwz r7, 4(r6)
    // lwz r4, 0xc(r7)
    r0 = r4 & r0;
    if (cr0 != 0)
        goto L_805802ac;
    // lwz r0, 8(r7)
    // clrlwi. r0, r0, 0x1f
    if (cr0 != 0)
        goto L_805802ac;
    // li r5, 0
L_805802ac:
    // cmpwi r5, 0
    if (0 != 0)
        goto L_805803dc;
    // lwz r5, 4(r6)
    // lis r4, 0
    // lwz r0, 8(r5)
    r0 = r0 | 0x8000;
    // stw r0, 8(r5)
    // lha r0, 0(r4)
    // sth r0, 0x18a(r3)
    // lha r0, 0x148(r3)
    // lha r4, 0(r4)
    // cmpw r4, r0
    if (r0 <= 0)
        goto L_805802e4;
    // sth r4, 0x148(r3)
L_805802e4:
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 8(r4)
    r0 = r0 | 0x80;
    // stw r0, 8(r4)
    // lwz r5, 0(r3)
    // lwz r4, 4(r5)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x10000000; /* rlwinm */
    if (cr0 == 0)
        goto L_80580348;
    // lwz r5, 4(r5)
    // li r0, 0
    // lwz r4, 0xc(r5)
    r4 = r4 & 0x00000000; /* rlwinm */
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r3)
    // mr r3, r31
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // li r4, 1
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    // stb r4, 0x10d(r3)
L_80580348:
    // lwz r4, 0(r31)
    // lwz r3, 4(r4)
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x00010000; /* rlwinm */
    if (cr0 == 0)
        goto L_80580398;
    // lwz r4, 4(r4)
    // mr r3, r31
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0xc(r4)
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // lis r4, 0
    // lfs f1, 0(r4)
    // li r4, 0x1a5
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // lwz r3, 0x260(r31)
    sub_0x805b4e74();
L_80580398:
    // mr r3, r31
    // li r4, 2
    sub_0x805907f0();
    // mr r3, r31
    sub_0x805907d4();
    // lbz r0, 0xe0(r3)
    // cmpwi r0, 0
    if (0 == 0)
        goto L_805803c8;
    // lis r3, 0
    // li r4, 1
    // lwz r3, 0(r3)
    sub_0x8070ec70();
L_805803c8:
    // mr r3, r31
    sub_0x80590fd0();
    // mr r3, r31
    // li r4, 0x13
    sub_0x80591800();
L_805803dc:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // mtlr r0
}
