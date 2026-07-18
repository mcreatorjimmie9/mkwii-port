// Decompiled from StaticR.rel
// Address: 0x8057f7a8
// Size: 452 bytes (113 instructions)
// Stack frame: 0x10
// Calls: 0x80590aac, 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x8059045c

void sub_8057f7a8(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {

    // mflr r0
    // lis r4, 0x80c
    // li r6, 1
    // stw r0, 0x14(r1)
    r0 = r4 + 0x100;
    // li r7, 1
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r5, 0(r3)
    // lwz r8, 4(r5)
    // li r5, 1
    // lwz r4, 0xc(r8)
    r0 = r4 & r0;
    if (cr0 != 0)
        goto L_8057f7f8;
    // lwz r0, 4(r8)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057f7f8;
    // li r7, 0
L_8057f7f8:
    // cmpwi r7, 0
    if (0 != 0)
        goto L_8057f810;
    // lwz r0, 0x14(r8)
    r0 = r0 & 0x00000080; /* rlwinm */
    if (0 != 0)
        goto L_8057f810;
    // li r6, 0
L_8057f810:
    // cmpwi r6, 0
    if (0 != 0)
        goto L_8057f828;
    // lwz r0, 8(r8)
    // clrlwi. r0, r0, 0x1f
    if (0 != 0)
        goto L_8057f828;
    // li r5, 0
L_8057f828:
    // cmpwi r5, 0
    if (0 != 0)
        goto L_8057f954;
    // lwz r4, 0x258(r3)
    // mr r3, r30
    // lwz r31, 0x14(r4)
    sub_0x80590aac();
    r0 = r3 * 6;
    // lis r3, 0
    // slwi r4, r31, 1
    r3 = r3 + 0;
    r0 = r3 + r0;
    // lhax r31, r4, r0
    // mr r3, r30
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
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 == 0)
        goto L_8057f8a0;
    // lha r0, 0x114(r30)
    // cmpw r31, r0
    if (r0 <= 0)
        goto L_8057f8c4;
L_8057f8a0:
    // lhz r0, 0x118(r30)
    // lis r3, 0
    // sth r31, 0x114(r30)
    r3 = r3 + 0;
    r0 = r0 | 0x10;
    // li r4, 1
    // sth r0, 0x118(r30)
    // lfs f0, 0x10(r3)
    // stfs f0, 0x124(r30)
L_8057f8c4:
    // cmpwi r4, 0
    if (0 == 0)
        goto L_8057f93c;
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
L_8057f93c:
    // lis r4, 0
    // mr r3, r30
    // lfs f1, 0(r4)
    // li r4, 3
    // li r5, 1
    sub_0x8059045c();
L_8057f954:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
