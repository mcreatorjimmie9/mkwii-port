// Decompiled from StaticR.rel
// Address: 0x8057f630
// Size: 376 bytes (94 instructions)
// Stack frame: 0x10
// Calls: 0x805907d4, 0x80708c08, 0x80590a9c, 0x806a5ea0, 0x8059045c, 0x80590a9c

void sub_8057f630(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */) {

    // mflr r0
    // lis r4, 0x80c
    // li r5, 1
    // stw r0, 0x14(r1)
    r0 = r4 + 0x100;
    // li r6, 1
    // li r7, 1
    // stw r31, 0xc(r1)
    // mr r31, r3
    // stw r30, 8(r1)
    // lwz r8, 0(r3)
    // lwz r9, 4(r8)
    // lwz r4, 0xc(r9)
    r0 = r4 & r0;
    if (cr0 != 0)
        goto L_8057f680;
    // lwz r0, 4(r9)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057f680;
    // li r7, 0
L_8057f680:
    // cmpwi r7, 0
    if (0 != 0)
        goto L_8057f698;
    // lwz r0, 0x14(r9)
    r0 = r0 & 0x00000080; /* rlwinm */
    if (0 != 0)
        goto L_8057f698;
    // li r6, 0
L_8057f698:
    // cmpwi r6, 0
    if (0 != 0)
        goto L_8057f6b0;
    // lwz r0, 8(r9)
    // clrlwi. r0, r0, 0x1f
    if (0 != 0)
        goto L_8057f6b0;
    // li r5, 0
L_8057f6b0:
    // cmpwi r5, 0
    if (0 != 0)
        goto L_8057f790;
    // lwz r5, 4(r8)
    // lis r4, 0
    // lwz r0, 4(r5)
    r0 = r0 | 0x8000;
    // stw r0, 4(r5)
    // lha r4, 0(r4)
    // lha r0, 0x148(r3)
    // sth r4, 0x1c4(r3)
    // cmpw r4, r0
    if (r0 <= 0)
        goto L_8057f6e4;
    // sth r4, 0x148(r3)
L_8057f6e4:
    // lwz r4, 0(r3)
    // mr r3, r31
    // lwz r4, 4(r4)
    // lwz r0, 8(r4)
    r0 = r0 | 0x80;
    // stw r0, 8(r4)
    sub_0x805907d4();
    sub_0x80708c08();
    // mr r3, r31
    sub_0x80590a9c();
    // lis r30, 0
    // lis r4, 0
    // lwz r5, 0(r30)
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lhz r4, 0(r4)
    // lwz r3, 0x68(r5)
    // lwzx r3, r3, r0
    sub_0x806a5ea0();
    // lis r4, 0
    // mr r3, r31
    // lfs f1, 0(r4)
    // li r4, 4
    // li r5, 1
    sub_0x8059045c();
    // lwz r4, 0(r31)
    // lwz r3, 4(r4)
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x10000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057f790;
    // lwz r5, 4(r4)
    // li r0, 0
    // mr r3, r31
    // lwz r4, 0xc(r5)
    r4 = r4 & 0x00000000; /* rlwinm */
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r31)
    sub_0x80590a9c();
    // lwz r4, 0(r30)
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // li r5, 1
    // lwz r3, 0x68(r4)
    // lwzx r3, r3, r0
    // stb r5, 0x10d(r3)
L_8057f790:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
