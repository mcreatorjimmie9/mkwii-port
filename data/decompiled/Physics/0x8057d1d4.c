// Decompiled from StaticR.rel
// Address: 0x8057d1d4
// Size: 452 bytes (113 instructions)
// Stack frame: 0x30
// Calls: 0x80590aac

void sub_8057d1d4(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {
    char pad[0x20]; /* local variables */

    // mflr r0
    // stw r0, 0x34(r1)
    // stfd f31, 0x20(r1)
    /* Gekko: 0xf3, 0xe1, 0x00, 0x28 */
    // lis r6, 0
    r6 = r6 + 0;
    // stw r31, 0x1c(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 0x18(r1)
    // mr r30, r3
    // lfs f31, 0(r31)
    // lwz r5, 0(r3)
    // lfs f4, 4(r31)
    // lwz r7, 4(r5)
    // lwz r8, 4(r7)
    r0 = r8 & 0x00040000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d324;
    // lis r4, 0
    // lwz r4, 0(r4)
    // lwz r0, 0x28(r4)
    // cmpwi r0, 1
    if (1 != 0)
        goto L_8057d24c;
    // lwz r4, 4(r5)
    // lfs f0, 0x5c(r6)
    // lfs f1, 0x9c(r4)
    f1 = -f1;
    f31 = f0 * f1;
    goto L_8057d324;
L_8057d24c:
    // lwz r0, 8(r7)
    r0 = r0 & 0x02000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d2a4;
    // lha r5, 0x14c(r3)
    // lis r4, 0x4330
    // lha r0, 0x248(r6)
    r5 = r5 ^ 0x8000;
    // stw r5, 0xc(r1)
    r0 = r0 ^ 0x8000;
    // lfd f3, 0x60(r31)
    // stw r4, 8(r1)
    // lfs f0, 0x5c(r6)
    // lfd f1, 8(r1)
    // stw r0, 0x14(r1)
    f2 = f1 - f3;
    // stw r4, 0x10(r1)
    // lfd f1, 0x10(r1)
    f2 = -f2;
    f1 = f1 - f3;
    f1 = f2 / f1;
    f31 = f0 * f1;
    goto L_8057d324;
L_8057d2a4:
    r0 = r8 & 0xc0000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d324;
    // lwz r0, 0x10(r7)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d324;
    // lfs f1, 0x58(r6)
    // lfs f2, 0x20(r3)
    // lfs f3, 0x24(r3)
    f0 = -f1;
    f2 = f3 - f2;
    /* Gekko: 0xfc, 0x00, 0x10, 0x40 */
    if (cr0 <= 0)
        goto L_8057d2dc;
    f2 = f0; /* fmr */
    goto L_8057d2e8;
L_8057d2dc:
    /* Gekko: 0xfc, 0x01, 0x10, 0x40 */
    if (cr0 >= 0)
        goto L_8057d2e8;
    f2 = f1; /* fmr */
L_8057d2e8:
    // lfs f0, 0x4c(r6)
    r0 = r8 & 0x04000000; /* rlwinm */
    f31 = f2 * f0;
    if (cr0 == 0)
        goto L_8057d314;
    // lfs f0, 0x54(r6)
    r0 = r8 & 0x20000000; /* rlwinm */
    f31 = f31 * f0;
    if (cr0 == 0)
        goto L_8057d31c;
    // lfs f0, 0x1c(r31)
    f31 = f31 * f0;
    goto L_8057d31c;
L_8057d314:
    // lfs f0, 0x50(r6)
    f31 = f31 * f0;
L_8057d31c:
    // lwz r4, 0x284(r3)
    // lfs f4, 0xc(r4)
L_8057d324:
    // lhz r0, 0x254(r3)
    r0 = r0 & 0x00000100; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d358;
    // mr r3, r30
    sub_0x80590aac();
    // cmpwi r3, 0
    if (0 != 0)
        goto L_8057d348;
    // lfs f0, 0x18(r31)
    goto L_8057d34c;
L_8057d348:
    // lfs f0, 0xa4(r31)
L_8057d34c:
    f0 = f31 * f0;
    // stfs f0, 0xf8(r30)
    goto L_8057d374;
L_8057d358:
    // lfs f0, 0x184(r3)
    // lfs f1, 0xf8(r3)
    f0 = f31 * f0;
    f0 = f0 - f1;
    f0 = f4 * f0;
    f0 = f1 + f0;
    // stfs f0, 0xf8(r3)
L_8057d374:
    // lfs f1, 0xf8(r30)
    /* Gekko: 0xe3, 0xe1, 0x00, 0x28 */
    // lfd f31, 0x20(r1)
    // lwz r31, 0x1c(r1)
    // lwz r30, 0x18(r1)
    // lwz r0, 0x34(r1)
    // mtlr r0
}
