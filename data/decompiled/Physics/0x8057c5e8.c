// Decompiled from StaticR.rel
// Address: 0x8057c5e8
// Size: 180 bytes (45 instructions)
// Stack frame: 0x20
// Calls: 0x80590e00, 0x805908b4, 0x805908b4

void sub_8057c5e8(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r4, 0(r3)
    // lwz r5, 4(r4)
    // lwz r4, 4(r5)
    r0 = r4 & 0x00100000; /* rlwinm */
    // rlwimi. r0, r4, 0, 0x1c, 0x1c
    if (cr0 != 0)
        goto L_8057c67c;
    // lwz r0, 0x14(r5)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_8057c67c;
    // lfs f0, 0x15c(r3)
    // fabs f31, f0
    sub_0x80590e00();
    // lis r31, 0
    f1 = f31 * f1;
    // lfs f0, 0(r31)
    // mr r3, r30
    f31 = f0 - f1;
    sub_0x805908b4();
    // lfs f1, 0x1c(r3)
    // mr r3, r30
    // lfs f0, 0(r31)
    f0 = f0 - f1;
    f31 = f0 * f31;
    sub_0x805908b4();
    // lfs f1, 0x1c(r3)
    // lfs f0, 0x20(r30)
    f1 = f1 + f31;
    f0 = f0 * f1;
    // stfs f0, 0x20(r30)
L_8057c67c:
    /* Gekko: 0xe3, 0xe1, 0x00, 0x18 */
    // lwz r0, 0x24(r1)
    // lfd f31, 0x10(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
