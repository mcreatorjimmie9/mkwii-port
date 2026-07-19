// Decompiled from StaticR.rel
// Address: 0x8057cf0c
// Size: 712 bytes (178 instructions)
// Stack frame: 0x80
// Calls: 0x80590d24, 0x805aa328, 0x80590d48, 0x805aa50c, 0x805aa328, 0x80555bf4, 0x8059040c, 0x8059040c, 0x805908b4, 0x8057d1d4, 0x8059040c, 0x8059040c, 0x80586a1c

void sub_8057cf0c(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    char pad[0x70]; /* local variables */

    // mflr r0
    // stw r0, 0x84(r1)
    // stfd f31, 0x70(r1)
    // xxsel vs31, vs1, vs0, v1
    // stfd f30, 0x60(r1)
    /* Gekko: 0xf3, 0xc1, 0x00, 0x68 */
    // stw r31, 0x5c(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 0x58(r1)
    // mr r30, r3
    // lfs f31, 0(r31)
    // lwz r4, 0(r3)
    // stfs f1, 0x48(r1)
    // lwz r4, 4(r4)
    // stfs f31, 0x44(r1)
    // lwz r0, 8(r4)
    // stfs f31, 0x4c(r1)
    // clrlwi. r0, r0, 0x1f
    if (cr0 != 0)
        goto L_8057d07c;
    // lwz r0, 0x10(r4)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d07c;
    // lwz r0, 4(r4)
    r0 = r0 & 0x00000800; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d07c;
    sub_0x80590d24();
    // mr r4, r3
    r3 = r1 + 0x2c;
    r5 = r30 + 0x44;
    // li r6, 1
    sub_0x805aa328();
    // mr r3, r30
    sub_0x80590d48();
    // mr r4, r3
    r3 = r1 + 0x38;
    r5 = r1 + 0x2c;
    sub_0x805aa50c();
    r3 = r1 + 0x38;
    r5 = r30 + 0x44;
    // mr r4, r3
    // li r6, 0
    sub_0x805aa328();
    // lfs f1, 0x38(r1)
    // lfs f0, 0x3c(r1)
    f2 = f1 * f1;
    // lfs f3, 0x40(r1)
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
        goto L_8057d054;
    sub_0x80555bf4();
    // lfs f4, 0x2c(r1)
    // lfs f3, 0x40(r1)
    // lfs f9, 0x3c(r1)
    // lfs f5, 0x34(r1)
    f2 = f4 * f3;
    // lfs f7, 0x30(r1)
    f8 = f4 * f9;
    // lfs f0, 0x38(r1)
    f3 = f7 * f3;
    f4 = f5 * f0;
    f6 = f7 * f0;
    f0 = f31; /* fmr */
    f7 = f4 - f2;
    f2 = f5 * f9;
    f4 = f8 - f6;
    // stfs f7, 0x24(r1)
    f31 = f1; /* fmr */
    f2 = f3 - f2;
    // stfs f4, 0x28(r1)
    /* Gekko: 0xfc, 0x07, 0x00, 0x40 */
    // stfs f2, 0x20(r1)
    if (cr0 <= 0)
        goto L_8057d054;
    f31 = -f1;
L_8057d054:
    // lfs f0, 0xc(r31)
    /* Gekko: 0xfc, 0x00, 0xf8, 0x40 */
    if (cr0 <= 0)
        goto L_8057d068;
    f31 = f0; /* fmr */
    goto L_8057d0f8;
L_8057d068:
    // lfs f0, 4(r31)
    /* Gekko: 0xfc, 0x00, 0xf8, 0x40 */
    if (cr0 >= 0)
        goto L_8057d0f8;
    f31 = f0; /* fmr */
    goto L_8057d0f8;
L_8057d07c:
    // lwz r0, 4(r4)
    // li r4, 0
    r0 = r0 & 0x00080000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d0a0;
    // lfs f1, 0x22c(r3)
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057d0a0;
    // li r4, 1
L_8057d0a0:
    // cmpwi r4, 0
    if (0 != 0)
        goto L_8057d0f8;
    // mr r3, r30
    sub_0x8059040c();
    // lwz r0, 0xac(r3)
    // stw r0, 0x1c(r1)
    // lwz r4, 0xa4(r3)
    // lfs f1, 0x1c(r1)
    // lfs f0, 0xa0(r31)
    // lwz r0, 0xa8(r3)
    // mr r3, r30
    f0 = f1 * f0;
    // stw r4, 0x14(r1)
    // stw r0, 0x18(r1)
    // stfs f0, 0x1c(r1)
    sub_0x8059040c();
    // lfs f0, 0x14(r1)
    // stfs f0, 0xa4(r3)
    // lfs f0, 0x18(r1)
    // stfs f0, 0xa8(r3)
    // lfs f0, 0x1c(r1)
    // stfs f0, 0xac(r3)
L_8057d0f8:
    // lfs f0, 0x15c(r30)
    // mr r3, r30
    // fabs f30, f0
    sub_0x805908b4();
    // lfs f1, 0x20(r3)
    // mr r3, r30
    // lfs f0, 0x184(r30)
    f1 = f31 * f1;
    f1 = f1 * f30;
    f30 = f0 * f1;
    sub_0x8057d1d4();
    // lfs f0, 0(r31)
    // mr r3, r30
    // stfs f1, 8(r1)
    // stfs f0, 0xc(r1)
    // stfs f30, 0x10(r1)
    sub_0x8059040c();
    // lfs f2, 0xa4(r3)
    // lfs f0, 8(r1)
    // lfs f1, 0xc(r1)
    f2 = f2 + f0;
    f0 = (float)f30;
    // stfs f2, 0xa4(r3)
    // lfs f2, 0xa8(r3)
    f1 = f2 + f1;
    // stfs f1, 0xa8(r3)
    // lfs f1, 0xac(r3)
    f0 = f1 + f0;
    // stfs f0, 0xac(r3)
    // mr r3, r30
    sub_0x8059040c();
    // lfs f2, 0xe4(r3)
    // lfs f0, 0x44(r1)
    // lfs f1, 0x48(r1)
    f2 = f2 + f0;
    // lfs f0, 0x4c(r1)
    // stfs f2, 0xe4(r3)
    // lfs f2, 0xe8(r3)
    f1 = f2 + f1;
    // stfs f1, 0xe8(r3)
    // lfs f1, 0xec(r3)
    f0 = f1 + f0;
    // stfs f0, 0xec(r3)
    // mr r3, r30
    sub_0x80586a1c();
    /* Gekko: 0xe3, 0xe1, 0x00, 0x78 */
    // lfd f31, 0x70(r1)
    /* Gekko: 0xe3, 0xc1, 0x00, 0x68 */
    // lfd f30, 0x60(r1)
    // lwz r31, 0x5c(r1)
    // lwz r0, 0x84(r1)
    // lwz r30, 0x58(r1)
    // mtlr r0
}
