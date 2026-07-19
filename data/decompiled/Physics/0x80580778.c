// Decompiled from StaticR.rel
// Address: 0x80580778
// Size: 544 bytes (136 instructions)
// Stack frame: 0x20
// Calls: 0x80590a9c, 0x80795f64, 0x805907d4, 0x805907a4, 0x80598378, 0x805b4f48, 0x80590d9c, 0x80590a9c, 0x80796288, 0x8059045c, 0x805b4d94, 0x80591800, 0x80591800, 0x80591800

void sub_80580778(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */, r10 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // li r7, 1
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // mr r31, r6
    // stw r30, 0x18(r1)
    // mr r30, r5
    // stw r29, 0x14(r1)
    // mr r29, r4
    // stw r28, 0x10(r1)
    // mr r28, r3
    // lwz r8, 0(r3)
    // lwz r9, 4(r8)
    // lwz r10, 8(r9)
    r0 = r10 & 0x102;
    if (cr0 != 0)
        goto L_805807d4;
    // lis r3, 0x20c
    // lwz r4, 0xc(r9)
    r0 = r3 + 0x6000;
    r0 = r4 & r0;
    if (cr0 != 0)
        goto L_805807d4;
    // li r7, 0
L_805807d4:
    // cmpwi r7, 0
    if (0 != 0)
        goto L_805807f4;
    r0 = r10 & 0x80000000; /* rlwinm */
    // rlwimi. r0, r10, 0, 0x1b, 0x1c
    if (0 != 0)
        goto L_805807f4;
    // lwz r3, 0xc(r9)
    r0 = r3 & 0x08000000; /* rlwinm */
    if (cr0 == 0)
        goto L_805807fc;
L_805807f4:
    // li r3, 0
    goto L_80580978;
L_805807fc:
    r0 = r3 & 0x00008000; /* rlwinm */
    if (cr0 == 0)
        goto L_805808a0;
    // lwz r4, 4(r8)
    // mr r3, r28
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0xc(r4)
    sub_0x80590a9c();
    // lis r4, 0
    // clrlwi r0, r3, 0x18
    // lwz r3, 0(r4)
    r0 = r0 * 0x248;
    // lwz r3, 0x14(r3)
    r3 = r3 + r0;
    sub_0x80795f64();
    // mr r3, r28
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // lis r4, 0
    // lfs f1, 0(r4)
    // li r4, 0x113
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // li r0, 0
    // sth r0, 0x194(r28)
    // mr r3, r28
    sub_0x805907a4();
    // lis r4, 0
    // lfs f1, 0(r4)
    sub_0x80598378();
    // lbz r0, 0x196(r28)
    // cmpwi r0, 0
    if (0 != 0)
        goto L_80580898;
    // lwz r3, 0x260(r28)
    // li r4, 1
    sub_0x805b4f48();
    // li r0, 1
    // stb r0, 0x196(r28)
L_80580898:
    // li r3, 1
    goto L_80580978;
L_805808a0:
    // cmpwi r5, 0
    // li r4, 0xa
    if (0 == 0)
        goto L_805808b4;
    // li r4, 0xf
    goto L_805808c0;
L_805808b4:
    // cmpwi r6, 0
    if (0 == 0)
        goto L_805808c0;
    // li r4, 0x11
L_805808c0:
    // mr r3, r28
    sub_0x80590d9c();
    // mr r3, r28
    sub_0x80590a9c();
    // lis r4, 0
    // clrlwi r0, r3, 0x18
    // lwz r3, 0(r4)
    r0 = r0 * 0x248;
    // li r4, 0xc
    // lwz r3, 0x14(r3)
    r3 = r3 + r0;
    sub_0x80796288();
    // lis r4, 0
    // mr r3, r28
    // lfs f1, 0(r4)
    // li r4, 0xf
    // li r5, 1
    sub_0x8059045c();
    // lwz r3, 0(r28)
    // lwz r3, 4(r3)
    // lwz r0, 0xc(r3)
    r0 = r0 | 0x80;
    // stw r0, 0xc(r3)
    // lha r0, 0x18c(r28)
    // cmpw r29, r0
    if (r0 <= 0)
        goto L_80580938;
    // sth r29, 0x18c(r28)
    // li r4, 0
    // lwz r3, 0x260(r28)
    sub_0x805b4d94();
L_80580938:
    // cmpwi r30, 0
    if (0 == 0)
        goto L_80580950;
    // mr r3, r28
    // li r4, 0x18
    sub_0x80591800();
    goto L_80580974;
L_80580950:
    // cmpwi r31, 0
    if (0 == 0)
        goto L_80580968;
    // mr r3, r28
    // li r4, 0x17
    sub_0x80591800();
    goto L_80580974;
L_80580968:
    // mr r3, r28
    // li r4, 0x16
    sub_0x80591800();
L_80580974:
    // li r3, 1
L_80580978:
    // lwz r0, 0x24(r1)
    // lwz r31, 0x1c(r1)
    // lwz r30, 0x18(r1)
    // lwz r29, 0x14(r1)
    // lwz r28, 0x10(r1)
    // mtlr r0
}
