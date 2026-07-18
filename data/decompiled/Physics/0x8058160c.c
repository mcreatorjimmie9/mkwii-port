// Decompiled from StaticR.rel
// Address: 0x8058160c
// Size: 304 bytes (76 instructions)
// Stack frame: 0x40
// Calls: 0x805b4ff8, 0x80581720, 0x805916a4

void sub_8058160c(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x30]; /* local variables */

    // mflr r0
    // stw r0, 0x44(r1)
    // stw r31, 0x3c(r1)
    // mr r31, r3
    // lwz r3, 0x260(r3)
    sub_0x805b4ff8();
    // lwz r5, 0x260(r31)
    // mr r3, r31
    // lfs f3, 0x160(r31)
    r4 = r1 + 8;
    // lfs f2, 0x2c(r5)
    // lfs f1, 0x30(r5)
    f5 = f3 * f2;
    // lfs f0, 0x34(r5)
    f4 = f3 * f1;
    // lfs f1, 0x70(r5)
    f3 = f3 * f0;
    // lfs f0, 0x74(r5)
    // lfs f2, 0x6c(r5)
    f6 = f4 * f1;
    // stfs f5, 0x20(r1)
    f7 = f3 * f0;
    f5 = f5 * f2;
    // stfs f4, 0x24(r1)
    // stfs f3, 0x28(r1)
    // stfs f2, 0x14(r1)
    // stfs f1, 0x18(r1)
    // stfs f0, 0x1c(r1)
    // stfs f5, 8(r1)
    // stfs f6, 0xc(r1)
    // stfs f7, 0x10(r1)
    sub_0x80581720();
    // lfs f1, 0x178(r31)
    // lfs f0, 0x17c(r31)
    // lfs f2, 0x180(r31)
    f3 = f1 * f0;
    // lfs f1, 0x160(r31)
    // lfs f0, 0x28(r1)
    f2 = f2 * f3;
    f2 = f1 * f2;
    // stfs f2, 0x170(r31)
    /* Gekko: 0xfc, 0x00, 0x10, 0x40 */
    if (cr0 >= 0) {
        goto L_805816c0;
    } else {
L_805816c0:
    f2 = f0; /* fmr */
L_805816c4:
    // lis r3, 0
    // lfs f0, 0x28(r1)
    // lfs f1, 0(r3)
    // stfs f2, 0x174(r31)
    // fcmpu cr0, f1, f0
    if (cr0 == 0)
        goto L_805816e8;
    // mr r3, r31
    r4 = r31 + 0x164;
    sub_0x805916a4();
L_805816e8:
    // lis r3, 0
    // lfs f0, 0x16c(r31)
    // lfs f1, 0(r3)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    // cror cr0eq, cr0lt, cr0eq
    if (cr0 != 0) {
        goto L_80581704;
    } else {
L_80581704:
    f1 = f1 / f0;
L_80581708:
    // stfs f1, 0x184(r31)
    // lwz r31, 0x3c(r1)
    // lwz r0, 0x44(r1)
    // mtlr r0
}
