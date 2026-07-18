// Decompiled from StaticR.rel
// Address: 0x8057ec28
// Size: 1128 bytes (282 instructions)
// Stack frame: 0x20
// Calls: 0x805908b4, 0x80590d60

void sub_8057ec28(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */, r10 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    // li r5, 0
    // stw r31, 0xc(r1)
    // mr r31, r3
    // stw r5, 0xcc(r3)
    // lwz r4, 0(r3)
    // stw r5, 0xd0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r4)
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r4)
    // sth r5, 0xfc(r3)
    // sth r5, 0x100(r3)
    // sth r5, 0xfe(r3)
    sub_0x805908b4();
    // lfs f31, 0x68(r3)
    // mr r3, r31
    sub_0x80590d60();
    // lhz r0, 0xcc(r3)
    r0 = r0 & 0x00000008; /* rlwinm */
    if (cr0 == 0)
        goto L_8057ecb4;
    // lis r3, 0
    // lfs f1, 0x20(r31)
    // lfs f0, 0(r3)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 > 0)
        goto L_8057ed04;
L_8057ecb4:
    // lis r3, 0
    // lfs f0, 0x9c(r31)
    // lfs f1, 0(r3)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057ecdc;
    f0 = f0 - f31;
    // stfs f0, 0x9c(r31)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_8057ecdc;
    // stfs f1, 0x9c(r31)
L_8057ecdc:
    // lis r3, 0
    // lfs f0, 0x9c(r31)
    // lfs f1, 0(r3)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_8057ed04;
    f0 = f0 + f31;
    // stfs f0, 0x9c(r31)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057ed04;
    // stfs f1, 0x9c(r31)
L_8057ed04:
    /* Gekko: 0xe3, 0xe1, 0x00, 0x18 */
    // lwz r0, 0x24(r1)
    // lfd f31, 0x10(r1)
    // lwz r31, 0xc(r1)
    // mtlr r0
}
