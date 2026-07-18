// Decompiled from StaticR.rel
// Address: 0x8057dc44
// Size: 1176 bytes (294 instructions)
// Stack frame: 0x70
// Calls: 0x8057e804, 0x8059040c, 0x80555bf4, 0x80590a50, 0x8059040c, 0x80555bf4, 0x805aa50c, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x8057e3f4, 0x80582f9c, 0x8057eab8, 0x805908b4, 0x80590d60

void sub_8057dc44(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    char pad[0x60]; /* local variables */

    // mflr r0
    // stw r0, 0x74(r1)
    // stfd f31, 0x60(r1)
    /* Gekko: 0xf3, 0xe1, 0x00, 0x68 */
    // stw r31, 0x5c(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 0x58(r1)
    // stw r29, 0x54(r1)
    // mr r29, r3
    sub_0x8057e804();
    // lwz r4, 0(r29)
    // mr r30, r3
    // lwz r3, 4(r4)
    // lwz r0, 8(r3)
    r0 = r0 & 0x00000400; /* rlwinm */
    if (cr0 != 0)
        goto L_8057de58;
    // mr r3, r29
    sub_0x8059040c();
    // lis r4, 0
    r5 = r1 + 0x44;
    r4 = r4 + 0;
    r3 = r3 + 0xf0;
    sub_0x80555bf4();
    // lwz r3, 0(r29)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00040000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057de40;
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x08000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057de40;
    // mr r3, r29
    sub_0x80590a50();
    // cmplwi r3, 2
    if (2 == 0)
        goto L_8057de40;
    // lwz r3, 0(r29)
    // lwz r3, 4(r3)
    // lwz r0, 8(r3)
    r0 = r0 & 0x00000800; /* rlwinm */
    if (cr0 != 0)
        goto L_8057de40;
    // lwz r3, 4(r3)
    r0 = r3 & 0x08000000; /* rlwinm */
    // rlwimi. r0, r3, 0, 0x1c, 0x1c
    if (cr0 == 0)
        goto L_8057de40;
    // lhz r0, 0x254(r29)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 == 0)
        goto L_8057de40;
    // mr r3, r29
    sub_0x8059040c();
    // lis r4, 0
    r5 = r1 + 0x2c;
    r4 = r4 + 0;
    r3 = r3 + 0xf0;
    sub_0x80555bf4();
    r3 = r1 + 0x38;
    r4 = r29 + 0xa4;
    r5 = r1 + 0x2c;
    sub_0x805aa50c();
    r3 = r1 + 0x38;
    sub_0x80555bf4();
    // lfd f0, 0xb8(r31)
    // fcmpu cr0, f0, f1
    if (cr0 == 0)
        goto L_8057de40;
    // lfs f31, 0x44(r1)
    // lfs f4, 0x38(r1)
    // lfs f13, 0x48(r1)
    // lfs f5, 0x3c(r1)
    f6 = f31 - f4;
    // lfs f11, 0x4c(r1)
    f3 = f4 * f13;
    // lfs f10, 0x40(r1)
    f1 = f5 * f31;
    f0 = f4 * f11;
    f2 = f10 * f31;
    // stfs f6, 0x20(r1)
    f7 = f3 - f1;
    f1 = f5 * f11;
    f2 = f2 - f0;
    // stfs f7, 0x10(r1)
    f12 = f13 - f5;
    f0 = f10 * f13;
    // stfs f2, 0xc(r1)
    f9 = f11 - f10;
    f8 = f31 * f12;
    // stfs f12, 0x24(r1)
    f1 = f1 - f0;
    f0 = f2 * f2;
    // stfs f9, 0x28(r1)
    f2 = f7 * f7;
    // stfs f1, 8(r1)
    f1 = f1 * f1;
    f7 = f13 * f6;
    f3 = f5 * f13;
    f0 = f1 + f0;
    f6 = f11 * f6;
    f5 = f31 * f9;
    f1 = f2 + f0;
    f0 = f8 - f7;
    f7 = f6 - f5;
    f4 = f4 * f31;
    // stfs f0, 0x1c(r1)
    f6 = f13 * f9;
    f5 = f11 * f12;
    // stfs f7, 0x18(r1)
    f0 = f4 + f3;
    f2 = f10 * f11;
    f3 = f6 - f5;
    f31 = f2 + f0;
    // stfs f3, 0x14(r1)
    sub_0x80555bf4();
    f2 = f31; /* fmr */
    sub_0x80555bf4();
    // lfs f3, 0x58(r31)
    // lfs f2, 0x18(r1)
    // lfs f0, 0(r31)
    f1 = f3 * f1;
    /* Gekko: 0xfc, 0x02, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057de2c;
    // lfs f0, 0xc(r31)
    goto L_8057de30;
L_8057de2c:
    // lfs f0, 4(r31)
L_8057de30:
    f1 = f1 * f0;
    // lfs f0, 0x9c(r29)
    f0 = f0 + f1;
    // stfs f0, 0x9c(r29)
L_8057de40:
    // lfs f0, 0x44(r1)
    // stfs f0, 0xa4(r29)
    // lfs f0, 0x48(r1)
    // stfs f0, 0xa8(r29)
    // lfs f0, 0x4c(r1)
    // stfs f0, 0xac(r29)
L_8057de58:
    // lwz r3, 0(r29)
    // lwz r5, 4(r3)
    // lwz r0, 0xc(r5)
    r0 = r0 & 0x08000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e0b8;
    // lwz r6, 4(r5)
    r0 = r6 & 0x00080000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057de8c;
    // lis r3, 0
    // lwz r4, 0xd0(r29)
    // lha r0, 0(r3)
    // cmpw r4, r0
    if (r0 >= 0)
        goto L_8057de94;
L_8057de8c:
    r0 = r6 & 0x08000000; /* rlwinm */
    if (r0 == 0)
        goto L_8057deb8;
L_8057de94:
    // lwz r0, 8(r5)
    // clrlwi. r0, r0, 0x1f
    if (cr0 != 0)
        goto L_8057deb8;
    r0 = r6 & 0x00040000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057deb8;
    // mr r3, r29
    sub_0x8057e3f4();
    // li r30, 0
    goto L_8057deec;
L_8057deb8:
    // lwz r12, 0xc(r29)
    // mr r3, r29
    // lwz r12, 0x5c(r12)
    // mtctr r12
    // bctrl 
    // cmpwi r3, 0
    if (0 == 0)
        goto L_8057deec;
    // lwz r12, 0xc(r29)
    // mr r3, r29
    // lwz r12, 0x60(r12)
    // mtctr r12
    // bctrl 
    // li r30, 1
L_8057deec:
    // lhz r0, 0x254(r29)
    // lwz r3, 0(r29)
    r0 = r0 & 0x00000000; /* rlwinm */
    // sth r0, 0x254(r29)
    // lwz r5, 4(r3)
    // lwz r6, 4(r5)
    r0 = r6 & 0x00000008; /* rlwinm */
    if (cr0 == 0)
        goto L_8057dff0;
    // lis r3, 0
    // lfs f1, 0x14(r29)
    // lfs f0, 0(r3)
    // lfs f2, 0x20(r29)
    f0 = f0 * f1;
    /* Gekko: 0xfc, 0x02, 0x00, 0x40 */
    // mfcr r0
    // lwz r3, 8(r5)
    r0 = (r0 << 2) & 0x00000001; /* rlwinm */
    r4 = __builtin_clz(r0);
    r0 = r3 & 0x00000400; /* rlwinm */
    // srwi r4, r4, 5
    if (cr0 != 0)
        goto L_8057dfe4;
    r0 = r6 & 0x00000004; /* rlwinm */
    if (cr0 == 0)
        goto L_8057df7c;
    // clrlwi. r0, r6, 0x1f
    if (cr0 == 0)
        goto L_8057df7c;
    // clrlwi. r0, r3, 0x1f
    if (cr0 != 0)
        goto L_8057df7c;
    r0 = r3 & 0x10000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057df7c;
    // lwz r0, 0xc(r5)
    r0 = r0 & 0x08000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057df7c;
    r0 = r6 & 0x00000060; /* rlwinm */
    if (cr0 != 0)
        goto L_8057df7c;
    // cmpwi r4, 0
    if (0 == 0)
        goto L_8057dfe4;
L_8057df7c:
    // cmpwi r4, 0
    if (0 != 0)
        goto L_8057df94;
    // mr r3, r29
    // li r4, 0
    // li r5, 0
    sub_0x80582f9c();
L_8057df94:
    // li r4, 0
    // stw r4, 0xcc(r29)
    // lwz r3, 0(r29)
    // stw r4, 0xd0(r29)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r3)
    // lwz r3, 0(r29)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r3)
    // lhz r0, 0x254(r29)
    // sth r4, 0xfc(r29)
    r0 = r0 | 2;
    // sth r4, 0x100(r29)
    // sth r4, 0xfe(r29)
    // sth r0, 0x254(r29)
    goto L_8057e0b8;
L_8057dfe4:
    // mr r3, r29
    sub_0x8057eab8();
    goto L_8057e0b8;
L_8057dff0:
    // cmpwi r30, 0
    if (0 != 0)
        goto L_8057e0b8;
    r0 = r6 & 0x00040000; /* rlwinm */
    if (0 == 0)
        goto L_8057e0b8;
    // li r5, 0
    // stw r5, 0xcc(r29)
    // lwz r4, 0(r29)
    // mr r3, r29
    // stw r5, 0xd0(r29)
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r4)
    // lwz r4, 0(r29)
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r4)
    // sth r5, 0xfc(r29)
    // sth r5, 0x100(r29)
    // sth r5, 0xfe(r29)
    sub_0x805908b4();
    // lfs f31, 0x68(r3)
    // mr r3, r29
    sub_0x80590d60();
    // lhz r0, 0xcc(r3)
    r0 = r0 & 0x00000008; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e070;
    // lfs f1, 0x20(r29)
    // lfs f0, 0xc0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 > 0)
        goto L_8057e0b8;
L_8057e070:
    // lfs f0, 0x9c(r29)
    // lfs f1, 0(r31)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057e094;
    f0 = f0 - f31;
    // stfs f0, 0x9c(r29)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_8057e094;
    // stfs f1, 0x9c(r29)
L_8057e094:
    // lfs f0, 0x9c(r29)
    // lfs f1, 0(r31)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_8057e0b8;
    f0 = f0 + f31;
    // stfs f0, 0x9c(r29)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057e0b8;
    // stfs f1, 0x9c(r29)
L_8057e0b8:
    /* Gekko: 0xe3, 0xe1, 0x00, 0x68 */
    // lwz r0, 0x74(r1)
    // lfd f31, 0x60(r1)
    // lwz r31, 0x5c(r1)
    // lwz r30, 0x58(r1)
    // lwz r29, 0x54(r1)
    // mtlr r0
}
