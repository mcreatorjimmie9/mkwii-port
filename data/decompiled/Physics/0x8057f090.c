// Decompiled from StaticR.rel
// Address: 0x8057f090
// Size: 320 bytes (80 instructions)
// Stack frame: 0x20
// Calls: 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084

void sub_8057f090(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // mr r31, r5
    // stw r30, 0x18(r1)
    // mr r30, r4
    // stw r29, 0x14(r1)
    // mr r29, r3
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
    // clrlwi r0, r30, 0x18
    // li r3, 1
    r5 = r3 << r0;
    // lhz r3, 0x118(r29)
    // clrlwi r0, r5, 0x10
    // slwi r4, r30, 1
    r0 = r3 & r0;
    // li r6, 0
    r3 = r29 + r4;
    if (cr0 == 0)
        goto L_8057f110;
    // lha r0, 0x10c(r3)
    // cmpw r31, r0
    if (r0 <= 0)
        goto L_8057f13c;
L_8057f110:
    // sth r31, 0x10c(r3)
    // clrlwi r4, r5, 0x10
    // lis r3, 0
    // slwi r0, r30, 2
    // lhz r5, 0x118(r29)
    r3 = r3 + 0;
    // li r6, 1
    r4 = r5 | r4;
    // sth r4, 0x118(r29)
    // lfsx f0, r3, r0
    // stfs f0, 0x124(r29)
L_8057f13c:
    // cmpwi r6, 0
    if (0 == 0)
        goto L_8057f1b4;
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
L_8057f1b4:
    // lwz r0, 0x24(r1)
    // lwz r31, 0x1c(r1)
    // lwz r30, 0x18(r1)
    // lwz r29, 0x14(r1)
    // mtlr r0
}
