// Decompiled from StaticR.rel
// Address: 0x8057fd18
// Size: 932 bytes (233 instructions)
// Stack frame: 0x40
// Calls: 0x8059040c, 0x80590a9c, 0x806aa068, 0x8059045c, 0x805907d4, 0x80708da4, 0x8059040c, 0x8059040c, 0x8059040c, 0x80555bf4, 0x8059045c, 0x805907d4, 0x80708da4, 0x80590a9c, 0x806a5ea0

void sub_8057fd18(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {
    char pad[0x30]; /* local variables */

    // mflr r0
    // lis r5, 0x80c
    // stw r0, 0x44(r1)
    r0 = r5 + 0x100;
    // li r5, 1
    // stw r31, 0x3c(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 0x38(r1)
    // stw r29, 0x34(r1)
    // mr r29, r4
    // li r4, 1
    // stw r28, 0x30(r1)
    // mr r28, r3
    // lwz r6, 0(r3)
    // lwz r7, 4(r6)
    // li r6, 1
    // lwz r3, 0xc(r7)
    r0 = r3 & r0;
    if (cr0 != 0)
        goto L_8057fd7c;
    // lwz r0, 4(r7)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057fd7c;
    // li r6, 0
L_8057fd7c:
    // cmpwi r6, 0
    if (0 != 0)
        goto L_8057fd94;
    // lwz r0, 0x14(r7)
    r0 = r0 & 0x00000080; /* rlwinm */
    if (0 != 0)
        goto L_8057fd94;
    // li r5, 0
L_8057fd94:
    // cmpwi r5, 0
    if (0 != 0)
        goto L_8057fdac;
    // lwz r0, 8(r7)
    // clrlwi. r0, r0, 0x1f
    if (0 != 0)
        goto L_8057fdac;
    // li r4, 0
L_8057fdac:
    // cmpwi r4, 0
    if (0 != 0)
        goto L_8058009c;
    // lwz r0, 8(r7)
    r0 = r0 & 0x00000200; /* rlwinm */
    if (0 != 0)
        goto L_8058009c;
    // mr r3, r28
    sub_0x8059040c();
    // lwz r5, 0(r28)
    r4 = r29 * 0xc;
    // lwz r8, 0x74(r3)
    r0 = r31 + 0x2e0;
    // lwz r5, 4(r5)
    // li r30, 0
    // lwz r7, 0x78(r3)
    // lwz r6, 0x7c(r3)
    r0 = r0 + r4;
    // lwz r3, 4(r5)
    // stw r8, 0x20(r1)
    r3 = r3 | 0x4000;
    // stw r3, 4(r5)
    // stw r0, 0x1c0(r28)
    // lwz r4, 0x360(r31)
    // stw r7, 0x24(r1)
    // cmpw r29, r4
    // stw r6, 0x28(r1)
    if (r4 < 0)
        goto L_8057fe80;
    // lwz r0, 0x364(r31)
    // cmpw r29, r0
    if (r0 > 0)
        goto L_8057fe80;
    // lfs f1, 0x1b8(r28)
    // lfs f0, 0x340(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 > 0)
        goto L_8057fe48;
    // lfs f2, 0x10(r28)
    // lfs f0, 0x344(r31)
    // lfs f1, 0x1bc(r28)
    f0 = f0 * f2;
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057fe68;
L_8057fe48:
    r3 = r4 - r29;
    r0 = r29 - r4;
    r3 = r3 | r0;
    // srwi r3, r3, 0x1f
    r0 = r31 + 0x348;
    r3 = r3 * 0xc;
    r0 = r0 + r3;
    // stw r0, 0x1c0(r28)
L_8057fe68:
    // lwz r3, 0(r28)
    // li r30, 1
    // lwz r3, 4(r3)
    // lwz r0, 0xc(r3)
    r0 = r0 | 0x10;
    // stw r0, 0xc(r3)
L_8057fe80:
    // lwz r0, 0x364(r31)
    // cmpw r29, r0
    if (r0 != 0)
        goto L_8057ff14;
    // lwz r4, 0(r28)
    // mr r3, r28
    // lwz r4, 4(r4)
    // lwz r0, 0xc(r4)
    r0 = r0 | 0x40;
    // stw r0, 0xc(r4)
    // lwz r4, 0(r28)
    // lwz r4, 4(r4)
    // lwz r0, 8(r4)
    r0 = r0 | 0x80;
    // stw r0, 8(r4)
    // lwz r4, 0(r28)
    // lwz r4, 4(r4)
    // lwz r0, 8(r4)
    r0 = r0 | 0x800;
    // stw r0, 8(r4)
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806aa068();
    // lis r4, 0
    // mr r3, r28
    // lfs f1, 0(r4)
    // li r4, 7
    // li r5, 1
    sub_0x8059045c();
    // mr r3, r28
    sub_0x805907d4();
    // li r4, 1
    sub_0x80708da4();
    goto L_80580054;
L_8057ff14:
    // lwz r4, 0x1c0(r28)
    // mr r3, r28
    // lfs f0, 8(r4)
    // stfs f0, 0x24(r1)
    sub_0x8059040c();
    // lfs f0, 0x20(r1)
    // stfs f0, 0x74(r3)
    // lfs f0, 0x24(r1)
    // stfs f0, 0x78(r3)
    // lfs f0, 0x28(r1)
    // stfs f0, 0x7c(r3)
    // mr r3, r28
    sub_0x8059040c();
    // lwz r0, 0x114(r3)
    // lis r29, 0
    // stw r0, 0x18(r1)
    // lwz r4, 0x110(r3)
    // lwz r0, 0x118(r3)
    // mr r3, r28
    // lfs f0, 0(r29)
    // stw r4, 0x14(r1)
    // stw r0, 0x1c(r1)
    // stfs f0, 0x18(r1)
    sub_0x8059040c();
    // lfs f0, 0x14(r1)
    // cmpwi r30, 0
    // stfs f0, 0x110(r3)
    // lfs f0, 0x18(r1)
    // stfs f0, 0x114(r3)
    // lfs f0, 0x1c(r1)
    // stfs f0, 0x118(r3)
    if (cr0 != 0)
        goto L_8058002c;
    // lwz r4, 0x5c(r28)
    r3 = r1 + 8;
    // lwz r0, 0x60(r28)
    // stw r0, 0xc(r1)
    // lfs f0, 0(r29)
    // stw r4, 8(r1)
    // lwz r0, 0x64(r28)
    // stw r0, 0x10(r1)
    // stfs f0, 0xc(r1)
    sub_0x80555bf4();
    // lfs f3, 0x5c(r28)
    // lfs f2, 8(r1)
    // lfs f1, 0x60(r28)
    // lfs f0, 0xc(r1)
    f2 = f3 * f2;
    // lfs f4, 0x64(r28)
    f1 = f1 * f0;
    // lfs f3, 0x10(r1)
    // lfs f0, 0x20(r28)
    f3 = f4 * f3;
    // lwz r3, 0(r28)
    f1 = f2 + f1;
    f1 = f3 + f1;
    f0 = f0 * f1;
    // stfs f0, 0x20(r28)
    // lfs f2, 8(r1)
    // stfs f2, 0x5c(r28)
    // lfs f1, 0xc(r1)
    // stfs f1, 0x60(r28)
    // lfs f0, 0x10(r1)
    // stfs f0, 0x64(r28)
    // stfs f2, 0x74(r28)
    // stfs f1, 0x78(r28)
    // stfs f0, 0x7c(r28)
    // lwz r3, 4(r3)
    // lwz r0, 0xc(r3)
    r0 = r0 | 0x40;
    // stw r0, 0xc(r3)
L_8058002c:
    // lis r4, 0
    // mr r3, r28
    // lfs f1, 0(r4)
    // li r4, 3
    // li r5, 1
    sub_0x8059045c();
    // mr r3, r28
    sub_0x805907d4();
    // li r4, 0
    sub_0x80708da4();
L_80580054:
    // lwz r3, 0x1c0(r28)
    // lfs f0, 0x20(r28)
    // lfs f1, 0(r3)
    // stfs f1, 0x1b0(r28)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    // lfs f0, 4(r3)
    // stfs f0, 0x1b4(r28)
    if (cr0 <= 0)
        goto L_80580078;
    // stfs f1, 0x20(r28)
L_80580078:
    // mr r3, r28
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // li r4, 0x1e
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806a5ea0();
L_8058009c:
    // lwz r0, 0x44(r1)
    // lwz r31, 0x3c(r1)
    // lwz r30, 0x38(r1)
    // lwz r29, 0x34(r1)
    // lwz r28, 0x30(r1)
    // mtlr r0
}
