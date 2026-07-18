// Decompiled from StaticR.rel
// Address: 0x8057e3f4
// Size: 580 bytes (145 instructions)
// Stack frame: 0x50
// Calls: 0x80590a50, 0x8059040c, 0x80555bf4, 0x805aa50c, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x805908b4

void sub_8057e3f4(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x40]; /* local variables */

    // mflr r0
    // stw r0, 0x54(r1)
    // stfd f31, 0x40(r1)
    // xsmaddmsp f31, f1, f0
    // stw r31, 0x3c(r1)
    // mr r31, r3
    // stw r30, 0x38(r1)
    // lis r30, 0
    r30 = r30 + 0;
    sub_0x80590a50();
    // cmplwi r3, 2
    if (2 == 0)
        goto L_8057e55c;
    // lwz r3, 0(r31)
    // lfs f31, 0(r30)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00080000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e504;
    // mr r3, r31
    sub_0x8059040c();
    // lis r4, 0
    r5 = r1 + 0x14;
    r4 = r4 + 0;
    r3 = r3 + 0xf0;
    sub_0x80555bf4();
    r3 = r1 + 0x20;
    r4 = r1 + 0x14;
    r5 = r31 + 0xd4;
    sub_0x805aa50c();
    r3 = r1 + 0x20;
    sub_0x80555bf4();
    f0 = f31; /* fmr */
    // fcmpu cr0, f0, f1
    if (cr0 == 0)
        goto L_8057e504;
    // lfs f10, 0xe0(r31)
    // lfs f9, 0x24(r1)
    // lfs f7, 0xe4(r31)
    // lfs f4, 0x20(r1)
    f8 = f10 * f9;
    // lfs f6, 0xe8(r31)
    f3 = f7 * f9;
    // lfs f5, 0x28(r1)
    f2 = f7 * f4;
    f1 = f6 * f4;
    f0 = f10 * f5;
    f8 = f8 - f2;
    f2 = f7 * f5;
    f0 = f1 - f0;
    // stfs f8, 0x10(r1)
    f1 = f6 * f9;
    f4 = f10 * f4;
    // stfs f0, 0xc(r1)
    f0 = f0 * f0;
    f1 = f2 - f1;
    f2 = f8 * f8;
    // stfs f1, 8(r1)
    f5 = f6 * f5;
    f1 = f1 * f1;
    f3 = f4 + f3;
    f0 = f1 + f0;
    f31 = f5 + f3;
    f1 = f2 + f0;
    sub_0x80555bf4();
    f2 = f31; /* fmr */
    sub_0x80555bf4();
    // lfs f0, 0x58(r30)
    f31 = f0 * f1;
L_8057e504:
    // lwz r3, 0xcc(r31)
    // lis r0, 0x4330
    // stw r0, 0x30(r1)
    r0 = -r3;
    // lfd f2, 0x60(r30)
    r0 = r0 ^ 0x8000;
    // stw r0, 0x34(r1)
    // lfs f0, 0x9c(r31)
    // lfd f1, 0x30(r1)
    // lfs f3, 0xc4(r30)
    f1 = f1 - f2;
    f1 = f31 * f1;
    f1 = f0 + f1;
    // stfs f1, 0x9c(r31)
    /* Gekko: 0xfc, 0x01, 0x18, 0x40 */
    if (cr0 <= 0)
        goto L_8057e54c;
    // stfs f3, 0x9c(r31)
    goto L_8057e55c;
L_8057e54c:
    f0 = -f3;
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057e55c;
    // stfs f0, 0x9c(r31)
L_8057e55c:
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r3)
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r3)
    // lwz r4, 0(r31)
    // lwz r3, 4(r4)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000004; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e618;
    // lis r3, 0
    // lfs f1, 0x14(r31)
    // lfs f0, 0(r3)
    // lfs f2, 0x20(r31)
    f0 = f0 * f1;
    /* Gekko: 0xfc, 0x02, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057e5bc;
    // li r0, 0
    goto L_8057e5c0;
L_8057e5bc:
    // lwz r0, 0xcc(r31)
L_8057e5c0:
    // cmpwi r0, 0
    if (0 == 0)
        goto L_8057e618;
    // lwz r5, 4(r4)
    // li r0, 1
    // mr r3, r31
    // lwz r4, 4(r5)
    r4 = r4 | 8;
    // stw r4, 4(r5)
    // lwz r4, 0(r31)
    // lwz r5, 4(r4)
    // lwz r4, 4(r5)
    r4 = r4 & 0x00000000; /* rlwinm */
    // stw r4, 4(r5)
    // sth r0, 0xfc(r31)
    // lfs f31, 0xb0(r31)
    sub_0x805908b4();
    // lfs f1, 0x58(r3)
    // lis r3, 0
    // lfs f0, 0(r3)
    f1 = f31 * f1;
    f0 = f0 * f1;
    // stfs f0, 0x104(r31)
L_8057e618:
    /* Gekko: 0xe3, 0xe1, 0x00, 0x48 */
    // lwz r0, 0x54(r1)
    // lfd f31, 0x40(r1)
    // lwz r31, 0x3c(r1)
    // lwz r30, 0x38(r1)
    // mtlr r0
}
