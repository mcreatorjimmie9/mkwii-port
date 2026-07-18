// Decompiled from StaticR.rel
// Address: 0x8057f96c
// Size: 512 bytes (128 instructions)
// Stack frame: 0x20
// Calls: 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x8059045c

void sub_8057f96c(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // lis r4, 0x80c
    // li r6, 1
    // stw r0, 0x24(r1)
    r0 = r4 + 0x100;
    // li r4, 1
    // stw r31, 0x1c(r1)
    // stw r30, 0x18(r1)
    // lis r30, 0
    r30 = r30 + 0;
    // stw r29, 0x14(r1)
    // mr r29, r3
    // lwz r5, 0(r3)
    // lwz r7, 4(r5)
    // li r5, 1
    // lwz r3, 0xc(r7)
    r0 = r3 & r0;
    if (cr0 != 0)
        goto L_8057f9c8;
    // lwz r0, 4(r7)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057f9c8;
    // li r6, 0
L_8057f9c8:
    // cmpwi r6, 0
    if (0 != 0)
        goto L_8057f9e0;
    // lwz r0, 0x14(r7)
    r0 = r0 & 0x00000080; /* rlwinm */
    if (0 != 0)
        goto L_8057f9e0;
    // li r5, 0
L_8057f9e0:
    // cmpwi r5, 0
    if (0 != 0)
        goto L_8057f9f8;
    // lwz r0, 8(r7)
    // clrlwi. r0, r0, 0x1f
    if (0 != 0)
        goto L_8057f9f8;
    // li r4, 0
L_8057f9f8:
    // cmpwi r4, 0
    if (0 != 0)
        goto L_8057fb50;
    // lwz r0, 8(r7)
    // lha r31, 0x23c(r30)
    r0 = r0 & 0x00008000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057fa14;
    // lha r31, 0x23e(r30)
L_8057fa14:
    // mr r3, r29
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806a5d24();
    // mr r3, r29
    sub_0x805907d4();
    sub_0x80708a6c();
    // lhz r0, 0x118(r29)
    // li r4, 0
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 == 0)
        goto L_8057fa5c;
    // lha r0, 0x114(r29)
    // cmpw r31, r0
    if (r0 <= 0)
        goto L_8057fa7c;
L_8057fa5c:
    // lhz r0, 0x118(r29)
    r3 = r30 + 0x3a0;
    // sth r31, 0x114(r29)
    // li r4, 1
    r0 = r0 | 0x10;
    // sth r0, 0x118(r29)
    // lfs f0, 0x10(r3)
    // stfs f0, 0x124(r29)
L_8057fa7c:
    // cmpwi r4, 0
    if (0 == 0)
        goto L_8057faf4;
    // lwz r4, 0(r29)
    // mr r3, r29
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 | 0x10;
    // stw r0, 4(r4)
    // lfs f1, 0x124(r29)
    sub_0x80590e80();
    // mr r3, r29
    // li r4, 6
    sub_0x805907f0();
    // mr r3, r29
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // clrlwi r4, r31, 0x10
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806a5ea0();
    // mr r3, r29
    sub_0x80590a80();
    sub_0x807cbb5c();
    // mr r3, r29
    // li r4, 4
    // li r5, 0
    // li r6, 1
    sub_0x80591084();
L_8057faf4:
    // lha r0, 0x148(r29)
    // cmpw r31, r0
    if (r0 <= 0)
        goto L_8057fb04;
    // sth r31, 0x148(r29)
L_8057fb04:
    // lwz r4, 0(r29)
    // lis r3, 0
    // lfs f1, 0(r3)
    // li r0, 0
    // lwz r7, 4(r4)
    // mr r3, r29
    // li r4, 3
    // li r5, 1
    // lwz r6, 8(r7)
    r6 = r6 | 0x80;
    // stw r6, 8(r7)
    // sth r0, 0x12c(r29)
    // lwz r6, 0(r29)
    // sth r31, 0x12e(r29)
    // lwz r6, 4(r6)
    // lwz r0, 8(r6)
    r0 = r0 | 0x2000;
    // stw r0, 8(r6)
    sub_0x8059045c();
L_8057fb50:
    // lwz r0, 0x24(r1)
    // lwz r31, 0x1c(r1)
    // lwz r30, 0x18(r1)
    // lwz r29, 0x14(r1)
    // mtlr r0
}
