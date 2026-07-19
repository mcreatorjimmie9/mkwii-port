// Decompiled from StaticR.rel
// Address: 0x8057cdd4
// Size: 312 bytes (78 instructions)
// Stack frame: 0x40
// Calls: 0x8059040c, 0x80555bf4, 0x8053954c, 0x80555bf4, 0x80555bf4

void sub_8057cdd4(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x30]; /* local variables */

    // mflr r0
    // stw r0, 0x44(r1)
    // stfd f31, 0x30(r1)
    // xxsel vs31, vs1, vs0, v0
    // stw r31, 0x2c(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 0x28(r1)
    // mr r30, r4
    // stw r29, 0x24(r1)
    // mr r29, r3
    sub_0x8059040c();
    // lis r4, 0
    r5 = r1 + 0x14;
    r4 = r4 + 0;
    r3 = r3 + 0xf0;
    sub_0x80555bf4();
    // lfs f3, 0x14(r1)
    r3 = r1 + 8;
    // lfs f2, 0x5c(r29)
    r4 = r1 + 0x14;
    // lfs f1, 0x18(r1)
    r5 = r29 + 0x5c;
    // lfs f0, 0x60(r29)
    f2 = f3 * f2;
    // lfs f3, 0x1c(r1)
    f0 = f1 * f0;
    // lfs f1, 0x64(r29)
    f1 = f3 * f1;
    f0 = f2 + f0;
    f31 = f1 + f0;
    sub_0x8053954c();
    // lfs f1, 8(r1)
    // lfs f0, 0xc(r1)
    f1 = f1 * f1;
    // lfs f2, 0x10(r1)
    f0 = f0 * f0;
    f2 = f2 * f2;
    f0 = f1 + f0;
    f1 = f2 + f0;
    sub_0x80555bf4();
    f2 = f31; /* fmr */
    sub_0x80555bf4();
    // lfs f0, 0(r31)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0) {
        goto L_8057ce94;
    } else {
L_8057ce94:
    f1 = -f1;
L_8057ce98:
    // lfs f0, 0x58(r31)
    // lis r3, 0
    // lfs f2, 0(r3)
    f0 = f0 * f1;
    /* Gekko: 0xfc, 0x00, 0x10, 0x40 */
    if (cr0 <= 0)
        goto L_8057cee8;
    // lis r3, 0
    f3 = f0 - f2;
    // lfs f0, 0(r3)
    // lfs f1, 4(r31)
    f2 = f0 - f2;
    // lfs f0, 0(r31)
    f2 = f3 / f2;
    f1 = f1 - f2;
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057cedc;
    f1 = f0; /* fmr */
L_8057cedc:
    // lfs f0, 0(r30)
    f0 = f0 * f1;
    // stfs f0, 0(r30)
L_8057cee8:
    /* Gekko: 0xe3, 0xe1, 0x00, 0x38 */
    // lwz r0, 0x44(r1)
    // lfd f31, 0x30(r1)
    // lwz r31, 0x2c(r1)
    // lwz r30, 0x28(r1)
    // lwz r29, 0x24(r1)
    // mtlr r0
}
