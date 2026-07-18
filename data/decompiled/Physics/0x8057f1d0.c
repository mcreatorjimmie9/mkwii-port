// Decompiled from StaticR.rel
// Address: 0x8057f1d0
// Size: 520 bytes (130 instructions)
// Stack frame: 0x10
// Calls: 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x80590a9c

void sub_8057f1d0(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {

    // mflr r0
    // lis r4, 0x80c
    // li r6, 1
    // stw r0, 0x14(r1)
    r0 = r4 + 0x100;
    // li r4, 1
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r5, 0(r3)
    // lwz r7, 4(r5)
    // li r5, 1
    // lwz r3, 0xc(r7)
    r0 = r3 & r0;
    if (cr0 != 0)
        goto L_8057f220;
    // lwz r0, 4(r7)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057f220;
    // li r6, 0
L_8057f220:
    // cmpwi r6, 0
    if (0 != 0)
        goto L_8057f238;
    // lwz r0, 0x14(r7)
    r0 = r0 & 0x00000080; /* rlwinm */
    if (0 != 0)
        goto L_8057f238;
    // li r5, 0
L_8057f238:
    // cmpwi r5, 0
    if (0 != 0)
        goto L_8057f250;
    // lwz r0, 8(r7)
    // clrlwi. r0, r0, 0x1f
    if (0 != 0)
        goto L_8057f250;
    // li r4, 0
L_8057f250:
    // cmpwi r4, 0
    if (0 != 0)
        goto L_8057f3c0;
    // lis r4, 0
    // mr r3, r30
    // lha r31, 0(r4)
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806a5d24();
    // mr r3, r30
    sub_0x805907d4();
    sub_0x80708a6c();
    // lhz r0, 0x118(r30)
    // li r4, 0
    r0 = r0 & 0x00000004; /* rlwinm */
    if (cr0 == 0)
        goto L_8057f2a8;
    // lha r0, 0x110(r30)
    // cmpw r31, r0
    if (r0 <= 0)
        goto L_8057f2cc;
L_8057f2a8:
    // lhz r0, 0x118(r30)
    // lis r3, 0
    // sth r31, 0x110(r30)
    r3 = r3 + 0;
    r0 = r0 | 4;
    // li r4, 1
    // sth r0, 0x118(r30)
    // lfs f0, 8(r3)
    // stfs f0, 0x124(r30)
L_8057f2cc:
    // cmpwi r4, 0
    if (0 == 0)
        goto L_8057f344;
    // lwz r4, 0(r30)
    // mr r3, r30
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 | 0x10;
    // stw r0, 4(r4)
    // lfs f1, 0x124(r30)
    sub_0x80590e80();
    // mr r3, r30
    // li r4, 6
    sub_0x805907f0();
    // mr r3, r30
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // clrlwi r4, r31, 0x10
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806a5ea0();
    // mr r3, r30
    sub_0x80590a80();
    sub_0x807cbb5c();
    // mr r3, r30
    // li r4, 4
    // li r5, 0
    // li r6, 1
    sub_0x80591084();
L_8057f344:
    // lis r3, 0
    // lha r0, 0x148(r30)
    // lha r3, 0(r3)
    // cmpw r3, r0
    if (r0 <= 0)
        goto L_8057f35c;
    // sth r3, 0x148(r30)
L_8057f35c:
    // lwz r3, 0(r30)
    // lwz r3, 4(r3)
    // lwz r0, 8(r3)
    r0 = r0 | 0x80;
    // stw r0, 8(r3)
    // lwz r4, 0(r30)
    // lwz r3, 4(r4)
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x10000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057f3c0;
    // lwz r5, 4(r4)
    // li r0, 0
    // mr r3, r30
    // lwz r4, 0xc(r5)
    r4 = r4 & 0x00000000; /* rlwinm */
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r30)
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // li r4, 1
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    // stb r4, 0x10d(r3)
L_8057f3c0:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
