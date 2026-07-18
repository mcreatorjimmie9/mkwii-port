// Decompiled from StaticR.rel
// Address: 0x8057d888
// Size: 468 bytes (117 instructions)
// Stack frame: 0x30
// Calls: 0x80555bf4, 0x80555bf4

void sub_8057d888(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    char pad[0x20]; /* local variables */

    // mflr r0
    // stw r0, 0x34(r1)
    // stw r31, 0x2c(r1)
    // mr r31, r3
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 8(r4)
    r0 = r0 & 0x00000400; /* rlwinm */
    if (cr0 != 0)
        goto L_8057da04;
    // lwz r0, 4(r4)
    r0 = r0 & 0x00008000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057da04;
    // lis r4, 0
    // lfs f1, 0x3c(r3)
    // lfs f0, 0(r4)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057d8f4;
    // lis r4, 0
    // lfs f0, 0(r4)
    r4 = r4 + 0;
    // stfs f0, 0x38(r3)
    // lfs f0, 4(r4)
    // stfs f0, 0x3c(r3)
    // lfs f0, 8(r4)
    // stfs f0, 0x40(r3)
    goto L_8057d960;
L_8057d8f4:
    // lis r6, 0
    // lis r4, 0
    r5 = r6 + 0;
    // lfs f6, 0x3c(r3)
    // lfs f0, 4(r5)
    // lfs f1, 0(r6)
    // lfs f7, 0x38(r3)
    f2 = f0 - f6;
    // lfs f0, 8(r5)
    // lfs f5, 0x40(r3)
    f1 = f1 - f7;
    // lfs f3, 0(r4)
    f4 = f0 - f5;
    f1 = f1 * f3;
    f0 = f2 * f3;
    f3 = f4 * f3;
    // stfs f1, 0x14(r1)
    f2 = f7 + f1;
    f1 = f6 + f0;
    // stfs f0, 0x18(r1)
    f0 = f5 + f3;
    // stfs f3, 0x1c(r1)
    // stfs f2, 0x38(r3)
    // stfs f1, 0x3c(r3)
    // stfs f0, 0x40(r3)
    r3 = r3 + 0x38;
    sub_0x80555bf4();
L_8057d960:
    // lis r3, 0
    // lfs f1, 0x48(r31)
    // lfs f0, 0(r3)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057d998;
    // lis r3, 0
    // lfs f0, 0(r3)
    r3 = r3 + 0;
    // stfs f0, 0x44(r31)
    // lfs f0, 4(r3)
    // stfs f0, 0x48(r31)
    // lfs f0, 8(r3)
    // stfs f0, 0x4c(r31)
    goto L_8057da04;
L_8057d998:
    // lis r3, 0
    // lis r4, 0
    r5 = r3 + 0;
    // lfs f1, 0(r3)
    // lfs f0, 4(r5)
    r3 = r31 + 0x44;
    // lfs f6, 0x48(r31)
    // lfs f7, 0x44(r31)
    f2 = f0 - f6;
    // lfs f0, 8(r5)
    // lfs f5, 0x4c(r31)
    f1 = f1 - f7;
    // lfs f3, 0(r4)
    f4 = f0 - f5;
    f1 = f1 * f3;
    f0 = f2 * f3;
    f3 = f4 * f3;
    // stfs f1, 8(r1)
    f2 = f7 + f1;
    f1 = f6 + f0;
    // stfs f0, 0xc(r1)
    f0 = f5 + f3;
    // stfs f3, 0x10(r1)
    // stfs f2, 0x44(r31)
    // stfs f1, 0x48(r31)
    // stfs f0, 0x4c(r31)
    sub_0x80555bf4();
L_8057da04:
    // lwz r0, 0x34(r1)
    // lwz r31, 0x2c(r1)
    // mtlr r0
}
