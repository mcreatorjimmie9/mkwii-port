// Decompiled from StaticR.rel
// Address: 0x8057eab8
// Size: 368 bytes (92 instructions)
// Stack frame: 0x20
// Calls: 0x80590a50, 0x805908b4, 0x805908b4, 0x805908b4

void sub_8057eab8(r3 /* param */, r4 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    // stw r31, 0xc(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r4, 0(r3)
    // lha r0, 0x78(r31)
    // lwz r4, 4(r4)
    // lwz r4, 0x1c(r4)
    // cmplw r4, r0
    if (r0 > 0)
        goto L_8057ec08;
    sub_0x80590a50();
    // cmplwi r3, 2
    if (2 == 0)
        goto L_8057ebe0;
    // mr r3, r30
    sub_0x805908b4();
    // lwz r0, 0xcc(r30)
    // lfs f31, 0x64(r3)
    // cmpwi r0, -1
    if (-1 != 0)
        goto L_8057eb78;
    // lfs f1, 0x9c(r30)
    /* Gekko: 0xfc, 0x01, 0xf8, 0x40 */
    if (-1 <= 0)
        goto L_8057eb44;
    // lfs f0, 0x98(r31)
    f0 = f1 - f0;
    // stfs f0, 0x9c(r30)
    /* Gekko: 0xfc, 0x00, 0xf8, 0x40 */
    if (cr0 >= 0)
        goto L_8057ebe0;
    // stfs f31, 0x9c(r30)
    goto L_8057ebe0;
L_8057eb44:
    if (cr0 >= 0)
        goto L_8057ebe0;
    // mr r3, r30
    sub_0x805908b4();
    // lfs f2, 0x58(r3)
    // lfs f1, 0x60(r31)
    // lfs f0, 0x9c(r30)
    f1 = f1 * f2;
    f0 = f0 + f1;
    // stfs f0, 0x9c(r30)
    /* Gekko: 0xfc, 0x00, 0xf8, 0x40 */
    if (cr0 <= 0)
        goto L_8057ebe0;
    // stfs f31, 0x9c(r30)
    goto L_8057ebe0;
L_8057eb78:
    // cmpwi r0, 1
    if (1 != 0)
        goto L_8057ebe0;
    f1 = -f31;
    // lfs f2, 0x9c(r30)
    /* Gekko: 0xfc, 0x02, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_8057ebac;
    // lfs f0, 0x98(r31)
    f0 = f2 + f0;
    // stfs f0, 0x9c(r30)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057ebe0;
    // stfs f1, 0x9c(r30)
    goto L_8057ebe0;
L_8057ebac:
    if (cr0 <= 0)
        goto L_8057ebe0;
    // mr r3, r30
    sub_0x805908b4();
    // lfs f3, 0x58(r3)
    f0 = -f31;
    // lfs f2, 0x60(r31)
    // lfs f1, 0x9c(r30)
    f2 = f2 * f3;
    f1 = f1 - f2;
    // stfs f1, 0x9c(r30)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057ebe0;
    // stfs f0, 0x9c(r30)
L_8057ebe0:
    // lis r3, 0
    // lwz r3, 0(r3)
    // lwz r0, 0x28(r3)
    r0 = r0 & 0x00000002; /* rlwinm */
    if (cr0 != 0)
        goto L_8057ec08;
    // lwz r12, 0xc(r30)
    // mr r3, r30
    // lwz r12, 0x64(r12)
    // mtctr r12
    // bctrl 
L_8057ec08:
    /* Gekko: 0xe3, 0xe1, 0x00, 0x18 */
    // lwz r0, 0x24(r1)
    // lfd f31, 0x10(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
