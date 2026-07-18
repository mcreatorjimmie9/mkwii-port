// Decompiled from StaticR.rel
// Address: 0x8057d398
// Size: 1264 bytes (316 instructions)
// Stack frame: 0x70
// Calls: 0x8059032c, 0x80591658, 0x805b890c, 0x80555bf4, 0x8059040c, 0x805aa328, 0x805aa4c4, 0x8059088c, 0x80590d24, 0x80555bf4, 0x80590cd4, 0x8059088c, 0x8059040c, 0x8059088c

void sub_8057d398(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    char pad[0x60]; /* local variables */

    // mflr r0
    // stw r0, 0x74(r1)
    // stfd f31, 0x60(r1)
    /* Gekko: 0xf3, 0xe1, 0x00, 0x68 */
    // stfd f30, 0x50(r1)
    // xscmpgtdp vs30, f1, f0
    // stw r31, 0x4c(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 0x48(r1)
    // lis r30, 0
    r30 = r30 + 0;
    // stw r29, 0x44(r1)
    // mr r29, r3
    // stw r28, 0x40(r1)
    // lwz r4, 0(r3)
    // lwz r5, 4(r4)
    // lwz r4, 0x28(r5)
    // lwz r0, 0x2c(r5)
    // stw r0, 0x30(r1)
    // stw r4, 0x2c(r1)
    // lwz r0, 0x30(r5)
    // stw r0, 0x34(r1)
    sub_0x8059032c();
    // lwz r5, 0(r29)
    // li r0, 0
    // lfs f31, 0x34(r30)
    // li r3, 0
    // lwz r4, 4(r5)
    // lwz r4, 4(r4)
    // stb r0, 0x98(r29)
    r28 = (r4 << 14) & 0x00000001; /* rlwinm */
    // lwz r4, 4(r5)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x08000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d438;
    // mr r3, r29
    sub_0x80591658();
    sub_0x805b890c();
L_8057d438:
    // cmpwi r3, 0
    if (0 == 0)
        goto L_8057d4b4;
    // lfs f0, 0x1a0(r29)
    r3 = r29 + 0x38;
    // lfs f5, 0x3c(r29)
    // lfs f1, 0x19c(r29)
    // lfs f6, 0x38(r29)
    f2 = f0 - f5;
    // lfs f0, 0x1a4(r29)
    // lfs f4, 0x40(r29)
    f1 = f1 - f6;
    // lfs f7, 0x198(r29)
    f3 = f0 - f4;
    f1 = f1 * f7;
    f0 = f2 * f7;
    f3 = f3 * f7;
    // stfs f1, 0x14(r1)
    f2 = f6 + f1;
    f1 = f5 + f0;
    // stfs f0, 0x18(r1)
    f0 = f4 + f3;
    // stfs f3, 0x1c(r1)
    // stfs f2, 0x38(r29)
    // stfs f1, 0x3c(r29)
    // stfs f0, 0x40(r29)
    sub_0x80555bf4();
    // lfs f30, 0x198(r29)
    // mr r3, r29
    sub_0x8059040c();
    // stfs f30, 0x178(r3)
    goto L_8057d800;
L_8057d4b4:
    // lwz r4, 0(r29)
    // lwz r3, 4(r4)
    // lwz r5, 4(r3)
    r0 = r5 & 0x00000200; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d52c;
    // lwz r3, 0x218(r29)
    // lha r0, 0x3c(r30)
    // cmplw r3, r0
    if (r0 < 0)
        goto L_8057d52c;
    // lfs f2, 0x2c(r1)
    r5 = r29 + 0x38;
    // stfs f2, 0x38(r29)
    r3 = r29 + 0x50;
    r4 = r29 + 0x5c;
    // li r6, 1
    // lfs f1, 0x30(r1)
    // stfs f1, 0x3c(r29)
    // lfs f0, 0x34(r1)
    // stfs f0, 0x40(r29)
    // stfs f2, 0x44(r29)
    // stfs f1, 0x48(r29)
    // stfs f0, 0x4c(r29)
    sub_0x805aa328();
    r4 = r29 + 0x50;
    r3 = r29 + 0x8c;
    // mr r5, r4
    sub_0x805aa4c4();
    // li r0, 1
    // stb r0, 0x98(r29)
    goto L_8057d7f4;
L_8057d52c:
    r0 = r5 & 0x00080000; /* rlwinm */
    // li r0, 0
    if (cr0 == 0)
        goto L_8057d54c;
    // lfs f1, 0x22c(r29)
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057d54c;
    // li r0, 1
L_8057d54c:
    // cmpwi r0, 0
    if (0 == 0)
        goto L_8057d560;
    // lwz r3, 0x284(r29)
    // lfs f31, 4(r3)
    goto L_8057d7f4;
L_8057d560:
    // cmpwi r28, 0
    if (0 == 0)
        goto L_8057d7dc;
    // lhz r0, 0x254(r29)
    // li r28, 0
    r0 = r0 & 0x00000040; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d588;
    // lwz r3, 4(r4)
    // lha r0, 0xa6(r3)
    // cmpwi r0, 0
    if (0 <= 0)
        goto L_8057d5e8;
L_8057d588:
    // lfs f3, 0x2c(r1)
    // lfs f2, 0x5c(r29)
    // lfs f1, 0x30(r1)
    // lfs f0, 0x60(r29)
    f2 = f3 * f2;
    // lfs f4, 0x34(r1)
    f1 = f1 * f0;
    // lfs f3, 0x64(r29)
    // lfs f0, 0(r31)
    f3 = f4 * f3;
    f1 = f2 + f1;
    f1 = f3 + f1;
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057d5e8;
    // lfs f1, 0x20(r29)
    // lfs f0, 0xa8(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057d5e8;
    // mr r3, r29
    sub_0x8059088c();
    // lwz r0, 0x2c(r3)
    r0 = r0 & 0x00001000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d5e8;
    // li r28, 1
L_8057d5e8:
    // cmpwi r28, 0
    if (0 != 0)
        goto L_8057d60c;
    // lfs f0, 0x2c(r1)
    // stfs f0, 0x44(r29)
    // lfs f0, 0x30(r1)
    // stfs f0, 0x48(r29)
    // lfs f0, 0x34(r1)
    // stfs f0, 0x4c(r29)
    goto L_8057d624;
L_8057d60c:
    // lfs f0, 0x44(r29)
    // stfs f0, 0x2c(r1)
    // lfs f0, 0x48(r29)
    // stfs f0, 0x30(r1)
    // lfs f0, 0x4c(r29)
    // stfs f0, 0x34(r1)
L_8057d624:
    // lwz r3, 0(r29)
    // lfs f30, 4(r30)
    // lwz r3, 4(r3)
    // lwz r4, 8(r3)
    r0 = r4 & 0x00000200; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d678;
    // lwz r3, 4(r3)
    r0 = r3 & 0x00100000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d6e4;
    r0 = r3 & 0x80000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d6e4;
    r0 = r3 & 0x20000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d6e4;
    r0 = r4 & 0x00000400; /* rlwinm */
    if (cr0 != 0)
        goto L_8057d6e4;
    r0 = r4 & 0x00002000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d678;
    // lha r3, 0x12c(r29)
    // lha r0, 0xc(r30)
    // cmpw r3, r0
    if (r0 <= 0)
        goto L_8057d6e4;
L_8057d678:
    // mr r3, r29
    sub_0x80590d24();
    // lfs f3, 0x2c(r1)
    // lfs f2, 0(r3)
    // lfs f1, 0x30(r1)
    // lfs f0, 4(r3)
    f2 = f3 * f2;
    // lfs f4, 0x34(r1)
    f1 = f1 * f0;
    // lfs f3, 8(r3)
    // lfs f0, 8(r30)
    f3 = f4 * f3;
    // lfs f4, 0(r30)
    f1 = f2 + f1;
    // lfs f2, 4(r30)
    f1 = f3 + f1;
    // fabs f1, f1
    // fabs f1, f1
    f0 = f0 * f1;
    f30 = f30 - f0;
    /* Gekko: 0xfc, 0x04, 0xf0, 0x40 */
    if (cr0 <= 0)
        goto L_8057d6d8;
    f30 = f4; /* fmr */
    goto L_8057d6e4;
L_8057d6d8:
    /* Gekko: 0xfc, 0x02, 0xf0, 0x40 */
    if (cr0 >= 0)
        goto L_8057d6e4;
    f30 = f2; /* fmr */
L_8057d6e4:
    // lfs f1, 0x2c(r1)
    r3 = r29 + 0x38;
    // lfs f7, 0x38(r29)
    // lfs f0, 0x30(r1)
    f3 = f1 - f7;
    // lfs f6, 0x3c(r29)
    // lfs f1, 0x34(r1)
    f2 = f0 - f6;
    // lfs f5, 0x40(r29)
    f0 = f3 * f30;
    f1 = f1 - f5;
    f4 = f2 * f30;
    // stfs f0, 8(r1)
    f2 = f7 + f0;
    f3 = f1 * f30;
    // stfs f4, 0xc(r1)
    f1 = f6 + f4;
    // stfs f3, 0x10(r1)
    f0 = f5 + f3;
    // stfs f2, 0x38(r29)
    // stfs f1, 0x3c(r29)
    // stfs f0, 0x40(r29)
    sub_0x80555bf4();
    // mr r3, r29
    r4 = r1 + 0x20;
    sub_0x80590cd4();
    // lfs f3, 0x20(r1)
    // lfs f2, 0x38(r29)
    // lfs f1, 0x24(r1)
    // lfs f0, 0x3c(r29)
    f2 = f3 * f2;
    // lfs f4, 0x28(r1)
    f1 = f1 * f0;
    // lfs f3, 0x40(r29)
    // lfs f0, 0xac(r31)
    f3 = f4 * f3;
    // lfs f5, 0(r31)
    f1 = f2 + f1;
    f4 = f3 + f1;
    /* Gekko: 0xfc, 0x04, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057d7bc;
    // fabs f3, f4
    // lfs f2, 0x40(r31)
    f0 = f5; /* fmr */
    // lfs f1, 0x1c(r31)
    f2 = f3 - f2;
    /* Gekko: 0xfc, 0x04, 0x00, 0x40 */
    f5 = f1 * f2;
    if (cr0 >= 0)
        goto L_8057d7bc;
    f5 = f1 * f3;
    // lfs f0, 0xb0(r31)
    /* Gekko: 0xfc, 0x00, 0x28, 0x40 */
    if (cr0 >= 0)
        goto L_8057d7bc;
    f5 = f0; /* fmr */
L_8057d7bc:
    f31 = f31 + f5;
    // mr r3, r29
    sub_0x8059088c();
    // lwz r0, 0x2c(r3)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d7f4;
    // lfs f31, 0x38(r30)
    goto L_8057d7f4;
L_8057d7dc:
    // lwz r12, 0xc(r29)
    // mr r3, r29
    r4 = r1 + 0x2c;
    // lwz r12, 0x48(r12)
    // mtctr r12
    // bctrl 
L_8057d7f4:
    // mr r3, r29
    sub_0x8059040c();
    // stfs f31, 0x178(r3)
L_8057d800:
    // lwz r4, 0(r29)
    // lwz r3, 4(r4)
    // lwz r0, 8(r3)
    r0 = r0 & 0x00000400; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d81c;
    // li r0, 0
    goto L_8057d824;
L_8057d81c:
    // lwz r3, 4(r4)
    // lwz r0, 0x1c(r3)
L_8057d824:
    // stw r0, 0x218(r29)
    // mr r3, r29
    sub_0x8059088c();
    // lwz r0, 0x2c(r3)
    r0 = r0 & 0x00000800; /* rlwinm */
    if (cr0 == 0)
        goto L_8057d84c;
    // lhz r0, 0x254(r29)
    r0 = r0 | 0x40;
    // sth r0, 0x254(r29)
    goto L_8057d858;
L_8057d84c:
    // lhz r0, 0x254(r29)
    r0 = r0 & 0x00000000; /* rlwinm */
    // sth r0, 0x254(r29)
L_8057d858:
    /* Gekko: 0xe3, 0xe1, 0x00, 0x68 */
    // lfd f31, 0x60(r1)
    /* Gekko: 0xe3, 0xc1, 0x00, 0x58 */
    // lfd f30, 0x50(r1)
    // lwz r31, 0x4c(r1)
    // lwz r30, 0x48(r1)
    // lwz r29, 0x44(r1)
    // lwz r0, 0x74(r1)
    // lwz r28, 0x40(r1)
    // mtlr r0
}
