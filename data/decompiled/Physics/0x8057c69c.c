// Decompiled from StaticR.rel
// Address: 0x8057c69c
// Size: 1848 bytes (462 instructions)
// Stack frame: 0xc0
// Calls: 0x805908b4, 0x805908b4, 0x805908b4, 0x805908b4, 0x80590a50, 0x8059040c, 0x80555bf4, 0x8053954c, 0x80555bf4, 0x80555bf4, 0x8059040c, 0x8059040c, 0x8059024c, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x8059040c, 0x80555bf4, 0x8059040c

void sub_8057c69c(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {
    char pad[0xb0]; /* local variables */

    // mflr r0
    // stw r0, 0xc4(r1)
    // stfd f31, 0xb0(r1)
    // xxsel vs31, vs1, vs0, v2
    // stfd f30, 0xa0(r1)
    /* Gekko: 0xf3, 0xc1, 0x00, 0xa8 */
    // stw r31, 0x9c(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 0x98(r1)
    // lis r30, 0
    r30 = r30 + 0;
    // stw r29, 0x94(r1)
    // li r29, 0
    // stw r28, 0x90(r1)
    // mr r28, r3
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r3, 4(r4)
    r0 = r3 & 0x10000000; /* rlwinm */
    // rlwimi. r0, r3, 0, 0x1c, 0x1c
    if (cr0 == 0)
        goto L_8057c708;
    // lwz r0, 8(r4)
    r0 = r0 & 0x00000800; /* rlwinm */
    if (cr0 != 0)
        goto L_8057c708;
    // li r29, 1
L_8057c708:
    // lwz r0, 0x14(r4)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 == 0)
        goto L_8057c73c;
    // cmpwi r29, 0
    if (0 == 0)
        goto L_8057c72c;
    // mr r3, r28
    sub_0x805908b4();
    // lfs f30, 0x5c(r3)
    goto L_8057c760;
L_8057c72c:
    // mr r3, r28
    sub_0x805908b4();
    // lfs f30, 0x50(r3)
    goto L_8057c760;
L_8057c73c:
    // cmpwi r29, 0
    if (0 == 0)
        goto L_8057c754;
    // mr r3, r28
    sub_0x805908b4();
    // lfs f30, 0x58(r3)
    goto L_8057c760;
L_8057c754:
    // mr r3, r28
    sub_0x805908b4();
    // lfs f30, 0x4c(r3)
L_8057c760:
    // cmpwi r29, 0
    if (0 == 0)
        goto L_8057c78c;
    // mr r3, r28
    sub_0x80590a50();
    // cmplwi r3, 2
    if (2 == 0)
        goto L_8057c78c;
    // lfs f1, 0x104(r28)
    // lfs f0, 0x68(r30)
    f0 = f1 * f0;
    // stfs f0, 0x104(r28)
    f30 = f30 + f0;
L_8057c78c:
    // lwz r3, 0(r28)
    // lfs f1, 0x158(r28)
    // lwz r4, 4(r3)
    f31 = f1 * f30;
    // lwz r8, 8(r4)
    r0 = r8 & 0x02000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057c7b4;
    // lfs f0, 0x27c(r30)
    f31 = f1 * f0;
    goto L_8057c9bc;
L_8057c7b4:
    // lwz r6, 4(r4)
    // li r0, 0
    r7 = r6 & 0x00080000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057c7d8;
    // lfs f1, 0x22c(r28)
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057c7d8;
    // li r0, 1
L_8057c7d8:
    // cmpwi r0, 0
    if (0 == 0)
        goto L_8057c7e8;
    // lfs f0, 0x9c(r30)
    f31 = f31 * f0;
L_8057c7e8:
    r0 = r6 & 0x00000002; /* rlwinm */
    // li r5, 1
    if (cr0 == 0)
        goto L_8057c810;
    // lfs f1, 0x20(r28)
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    // mfcr r0
    r0 = (r0 << 2) & 0x00000001; /* rlwinm */
    if (cr0 != 0)
        goto L_8057c810;
    // li r5, 0
L_8057c810:
    // cmpwi r29, 0
    if (0 != 0)
        goto L_8057c904;
    r0 = r6 & 0x00000060; /* rlwinm */
    if (0 != 0)
        goto L_8057c864;
    // lfs f1, 0x20(r28)
    // lfs f0, 4(r31)
    // fabs f1, f1
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057c864;
    // cmpwi r7, 0
    // li r0, 0
    if (0 == 0)
        goto L_8057c854;
    // lfs f1, 0x22c(r28)
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057c854;
    // li r0, 1
L_8057c854:
    // cmpwi r0, 0
    if (0 != 0)
        goto L_8057c864;
    // lfs f31, 0(r31)
    goto L_8057c904;
L_8057c864:
    // cmpwi r5, 0
    if (0 == 0)
        goto L_8057c904;
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00008000; /* rlwinm */
    if (0 == 0)
        goto L_8057c880;
    // lfs f2, 0xdc(r30)
    goto L_8057c884;
L_8057c880:
    // lfs f2, 4(r31)
L_8057c884:
    // lfs f1, 0x84(r30)
    // lfs f0, 0x88(r30)
    f3 = f1 * f2;
    // lfs f1, 0x20(r28)
    f2 = f0 * f2;
    /* Gekko: 0xfc, 0x01, 0x18, 0x40 */
    if (cr0 >= 0)
        goto L_8057c8c4;
    f2 = f1 / f3;
    // lfs f1, 0x80(r30)
    // lfs f0, 4(r31)
    f0 = f0 - f1;
    f1 = f31 * f1;
    f0 = f31 * f0;
    f0 = f2 * f0;
    f31 = f1 + f0;
    goto L_8057c904;
L_8057c8c4:
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057c8fc;
    f4 = f1 - f3;
    // lfs f0, 0x8c(r30)
    f3 = f2 - f3;
    // lfs f2, 4(r31)
    f1 = f31 * f0;
    f0 = f2 - f0;
    f3 = f4 / f3;
    f2 = f2 - f3;
    f0 = f31 * f0;
    f0 = f2 * f0;
    f31 = f1 + f0;
    goto L_8057c904;
L_8057c8fc:
    // lfs f0, 0x8c(r30)
    f31 = f31 * f0;
L_8057c904:
    // cmpwi r5, 0
    if (0 == 0) {
        goto L_8057c910;
    } else {
L_8057c910:
    f31 = -f31;
L_8057c914:
    r0 = r8 & 0x80000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057c92c;
    // lwz r5, 0xc(r4)
    r0 = r5 & 0x20000000; /* rlwinm */
    // rlwimi. r0, r5, 0, 0x10, 0x10
    if (cr0 == 0)
        goto L_8057c93c;
L_8057c92c:
    r0 = r6 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_8057c93c;
    // lfs f0, 0xd8(r30)
    f31 = f31 * f0;
L_8057c93c:
    r0 = r8 & 0x00002000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057c954;
    r0 = r6 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_8057c954;
    // lfs f0, 0x254(r30)
    f31 = f31 * f0;
L_8057c954:
    // lwz r0, 0x14(r4)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 == 0)
        goto L_8057c9bc;
    // lwz r5, 4(r3)
    // lfs f2, 0xb4(r30)
    // lfs f0, 0x88(r5)
    // fabs f1, f0
    /* Gekko: 0xfc, 0x01, 0x10, 0x40 */
    if (cr0 <= 0)
        goto L_8057c9bc;
    // lfs f0, 0(r31)
    // lfs f3, 4(r31)
    /* Gekko: 0xfc, 0x02, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057c994;
    f1 = f1 - f2;
    f0 = f3 - f2;
    f3 = f1 / f0;
L_8057c994:
    // cmpwi r29, 0
    if (0 == 0)
        goto L_8057c9a4;
    // lfs f0, 0xc0(r30)
    goto L_8057c9a8;
L_8057c9a4:
    // lfs f0, 0xbc(r30)
L_8057c9a8:
    f0 = f31 * f0;
    // lfs f1, 0xb0(r28)
    f0 = f0 * f1;
    f0 = f3 * f0;
    f31 = f31 + f0;
L_8057c9bc:
    // clrlwi. r0, r8, 0x1f
    if (cr0 != 0)
        goto L_8057cb44;
    r0 = r8 & 0x00008000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057cb44;
    // lwz r5, 4(r4)
    r0 = r5 & 0x00040000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057ca6c;
    r0 = r5 & 0x80000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057c9f8;
    // lwz r5, 0x258(r28)
    // lbz r0, 0x3a(r5)
    // cmpwi r0, 0
    if (0 == 0)
        goto L_8057c9f8;
    // lfs f31, 0(r31)
    goto L_8057ca6c;
L_8057c9f8:
    // lwz r0, 8(r4)
    r0 = r0 & 0x00000800; /* rlwinm */
    if (cr0 != 0)
        goto L_8057ca6c;
    // lwz r3, 4(r3)
    // lwz r3, 0x1c(r3)
    // cmplwi r3, 0x1e
    if (0x1e < 0)
        goto L_8057ca60;
    // cmplwi r3, 0x46
    if (0x46 > 0)
        goto L_8057ca60;
    r3 = r3 + -0x1e;
    // lis r0, 0x4330
    // stw r3, 0x84(r1)
    // lfd f3, 0x90(r31)
    // stw r0, 0x80(r1)
    // lfs f2, 0x98(r31)
    // lfd f0, 0x80(r1)
    // lfs f1, 4(r31)
    f3 = f0 - f3;
    // lfs f0, 0(r31)
    f2 = f2 * f3;
    f1 = f1 - f2;
    f31 = f31 * f1;
    /* Gekko: 0xfc, 0x00, 0xf8, 0x40 */
    if (cr0 <= 0)
        goto L_8057ca6c;
    f31 = f0; /* fmr */
    goto L_8057ca6c;
L_8057ca60:
    // cmplwi r3, 0x46
    if (0x46 <= 0)
        goto L_8057ca6c;
    // lfs f31, 0(r31)
L_8057ca6c:
    // mr r3, r28
    sub_0x8059040c();
    // lis r4, 0
    r5 = r1 + 8;
    r4 = r4 + 0;
    r3 = r3 + 0xf0;
    sub_0x80555bf4();
    // lfs f3, 8(r1)
    r3 = r1 + 0x14;
    // lfs f2, 0x5c(r28)
    r4 = r1 + 8;
    // lfs f1, 0xc(r1)
    r5 = r28 + 0x5c;
    // lfs f0, 0x60(r28)
    f2 = f3 * f2;
    // lfs f3, 0x10(r1)
    f0 = f1 * f0;
    // lfs f1, 0x64(r28)
    f1 = f3 * f1;
    f0 = f2 + f0;
    f30 = f1 + f0;
    sub_0x8053954c();
    // lfs f1, 0x14(r1)
    // lfs f0, 0x18(r1)
    f1 = f1 * f1;
    // lfs f2, 0x1c(r1)
    f0 = f0 * f0;
    f2 = f2 * f2;
    f0 = f1 + f0;
    f1 = f2 + f0;
    sub_0x80555bf4();
    f2 = f30; /* fmr */
    sub_0x80555bf4();
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0) {
        goto L_8057cb00;
    } else {
L_8057cb00:
    f1 = -f1;
L_8057cb04:
    // lfs f0, 0x58(r31)
    // lfs f2, 0x274(r30)
    f1 = f0 * f1;
    /* Gekko: 0xfc, 0x01, 0x10, 0x40 */
    if (cr0 <= 0)
        goto L_8057cb44;
    // lfs f0, 0x278(r30)
    f3 = f1 - f2;
    // lfs f1, 4(r31)
    f2 = f0 - f2;
    // lfs f0, 0(r31)
    f2 = f3 / f2;
    f1 = f1 - f2;
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057cb40;
    f1 = f0; /* fmr */
L_8057cb40:
    f31 = f31 * f1;
L_8057cb44:
    // lwz r12, 0xc(r28)
    f1 = f31; /* fmr */
    // mr r3, r28
    // lwz r12, 0x4c(r12)
    // mtctr r12
    // bctrl 
    // lis r3, 0
    // lwz r3, 0(r3)
    // lwz r0, 0xb68(r3)
    // cmpwi r0, 0x22
    if (0x22 != 0)
        goto L_8057cda4;
    // mr r3, r28
    sub_0x8059040c();
    // lfs f1, 0xb0(r3)
    // lfs f0, 0xb4(r3)
    f2 = f1 * f1;
    // lfs f3, 0xb8(r3)
    f1 = f0 * f0;
    // lfs f0, 8(r31)
    f3 = f3 * f3;
    f1 = f2 + f1;
    f1 = f3 + f1;
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    // cror cr0eq, cr0lt, cr0eq
    // mfcr r0
    r0 = (r0 << 3) & 0x00000001; /* rlwinm */
    if (cr0 != 0)
        goto L_8057cda4;
    // mr r3, r28
    sub_0x8059040c();
    // lwz r4, 0xb0(r3)
    // stw r4, 0x70(r1)
    // lwz r0, 0xb8(r3)
    // stw r0, 0x78(r1)
    // lwz r4, 0xb4(r3)
    // mr r3, r28
    // lfs f4, 0(r31)
    // lfs f3, 0x1c(r31)
    // lfs f2, 0x70(r1)
    // lfs f0, 0x78(r1)
    f1 = f3 * f4;
    // stw r4, 0x74(r1)
    f2 = f3 * f2;
    f0 = f3 * f0;
    // stfs f4, 0x74(r1)
    // stfs f2, 0x64(r1)
    // stfs f1, 0x68(r1)
    // stfs f0, 0x6c(r1)
    sub_0x8059024c();
    // lwz r0, 0(r3)
    // stw r0, 0x58(r1)
    // lfs f6, 0(r31)
    // lfs f0, 0x68(r1)
    // lwz r0, 8(r3)
    f4 = f6 + f0;
    // stw r0, 0x60(r1)
    // lfs f1, 0x58(r1)
    // lfs f0, 0x64(r1)
    // lfs f2, 0x60(r1)
    f5 = f1 + f0;
    // lfs f1, 0x6c(r1)
    f0 = f4 * f4;
    // lwz r0, 4(r3)
    f3 = f2 + f1;
    // stw r0, 0x5c(r1)
    f1 = f5 * f5;
    // lwz r4, 0x64(r1)
    // lwz r3, 0x68(r1)
    f2 = f3 * f3;
    // lwz r0, 0x6c(r1)
    f0 = f1 + f0;
    // stfs f6, 0x5c(r1)
    f1 = f2 + f0;
    // stfs f5, 0x4c(r1)
    // stfs f4, 0x50(r1)
    // stfs f3, 0x54(r1)
    // stw r4, 0x40(r1)
    // stw r3, 0x44(r1)
    // stw r0, 0x48(r1)
    sub_0x80555bf4();
    // lfs f0, 0x44(r1)
    f30 = f1; /* fmr */
    // lfs f2, 0x40(r1)
    f0 = f0 * f0;
    f1 = f2 * f2;
    // lfs f2, 0x48(r1)
    f2 = f2 * f2;
    f0 = f1 + f0;
    f1 = f2 + f0;
    sub_0x80555bf4();
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x1e, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057cda4;
    f2 = f30; /* fmr */
    sub_0x80555bf4();
    // lfs f2, 0x9c(r31)
    r3 = r1 + 0x30;
    // lfs f0, 0x74(r31)
    r4 = r28 + 0x44;
    f1 = f2 * f1;
    f1 = f0 * f1;
    sub_0x80555bf4();
    // mr r3, r28
    sub_0x8059040c();
    // mr r4, r3
    // lfs f0, 0xfc(r3)
    // lfs f10, 0x3c(r1)
    r3 = r1 + 0x20;
    // lfs f31, 0x30(r1)
    // lfs f13, 0xf0(r4)
    f7 = f10 * f0;
    // lfs f12, 0x34(r1)
    f5 = f31 * f0;
    // lfs f11, 0xf4(r4)
    f4 = f10 * f13;
    // lfs f9, 0x38(r1)
    // lfs f8, 0xf8(r4)
    f6 = f31 * f13;
    f5 = f5 + f4;
    f3 = f12 * f0;
    f2 = f10 * f11;
    f1 = f9 * f0;
    f0 = f10 * f8;
    f10 = f7 - f6;
    f7 = f12 * f11;
    f3 = f3 + f2;
    f0 = f1 + f0;
    f6 = f12 * f8;
    f10 = f10 - f7;
    f1 = f9 * f8;
    f7 = f6 + f5;
    f4 = f9 * f13;
    f2 = f31 * f11;
    f6 = f9 * f11;
    f5 = f4 + f3;
    f4 = f2 + f0;
    f3 = f31 * f8;
    f0 = f12 * f13;
    f1 = f10 - f1;
    f2 = f7 - f6;
    f3 = f5 - f3;
    f4 = f4 - f0;
    sub_0x80555bf4();
    // mr r3, r28
    sub_0x8059040c();
    // lfs f0, 0x20(r1)
    // stfs f0, 0xf0(r3)
    // lfs f0, 0x24(r1)
    // stfs f0, 0xf4(r3)
    // lfs f0, 0x28(r1)
    // stfs f0, 0xf8(r3)
    // lfs f0, 0x2c(r1)
    // stfs f0, 0xfc(r3)
L_8057cda4:
    /* Gekko: 0xe3, 0xe1, 0x00, 0xb8 */
    // lfd f31, 0xb0(r1)
    /* Gekko: 0xe3, 0xc1, 0x00, 0xa8 */
    // lfd f30, 0xa0(r1)
    // lwz r31, 0x9c(r1)
    // lwz r30, 0x98(r1)
    // lwz r29, 0x94(r1)
    // lwz r0, 0xc4(r1)
    // lwz r28, 0x90(r1)
    // mtlr r0
}
