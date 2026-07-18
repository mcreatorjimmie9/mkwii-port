// Decompiled from StaticR.rel
// Address: 0x8057e99c
// Size: 284 bytes (71 instructions)
// Stack frame: 0x30
// Calls: 0x80555bf4, 0x80555bf4

void sub_8057e99c(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x20]; /* local variables */

    // mflr r0
    // stw r0, 0x34(r1)
    // stfd f31, 0x20(r1)
    /* Gekko: 0xf3, 0xe1, 0x00, 0x28 */
    // lfs f10, 0(r4)
    // lfs f9, 4(r5)
    // lfs f7, 4(r4)
    // lfs f4, 0(r5)
    f8 = f10 * f9;
    // lfs f6, 8(r4)
    f3 = f7 * f9;
    // lfs f5, 8(r5)
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
    // lis r3, 0
    // lfs f0, 0(r3)
    f1 = f0 * f1;
    /* Gekko: 0xe3, 0xe1, 0x00, 0x28 */
    // lfd f31, 0x20(r1)
    // lwz r0, 0x34(r1)
    // mtlr r0
}
