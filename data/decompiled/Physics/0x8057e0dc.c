// Decompiled from StaticR.rel
// Address: 0x8057e0dc
// Size: 792 bytes (198 instructions)
// Stack frame: 0x10
// Calls: 0x805908b4, 0x805908b4, 0x805908b4, 0x805908b4, 0x80555bf4, 0x805903ec, 0x8059c84c

void sub_8057e0dc(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r5, 0(r3)
    // lwz r6, 4(r5)
    // lwz r0, 0x14(r6)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e330;
    // lwz r0, 0xc(r6)
    r0 = r0 & 0x08000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e330;
    // lfs f1, 0x14(r3)
    // lfs f0, 0x22c(r31)
    // lfs f2, 0x20(r3)
    f0 = f0 * f1;
    /* Gekko: 0xfc, 0x02, 0x00, 0x40 */
    if (cr0 < 0)
        goto L_8057e18c;
    // lwz r4, 8(r6)
    r0 = r4 & 0x10000000; /* rlwinm */
    // rlwimi. r0, r4, 0, 0x15, 0x15
    if (cr0 != 0)
        goto L_8057e18c;
    // lwz r0, 4(r6)
    r0 = r0 & 0x20000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e18c;
    // lwz r4, 4(r5)
    // lfs f0, 0xb8(r31)
    // lfs f1, 0x88(r4)
    // fabs f1, f1
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057e18c;
    // lha r4, 0x1cc(r3)
    // lha r5, 0xcc(r31)
    r4 = r4 + 1;
    r0 = (s16)r4;
    // sth r4, 0x1cc(r3)
    // cmpw r5, r0
    if (r0 >= 0)
        goto L_8057e194;
    // sth r5, 0x1cc(r3)
    goto L_8057e194;
L_8057e18c:
    // li r0, 0
    // sth r0, 0x1cc(r3)
L_8057e194:
    // lha r4, 0x1cc(r3)
    // lha r0, 0xcc(r31)
    // cmpw r4, r0
    if (r0 < 0)
        goto L_8057e288;
    // lwz r12, 0xc(r30)
    // mr r3, r30
    // lwz r12, 0x34(r12)
    // mtctr r12
    // bctrl 
    // lwz r3, 0(r30)
    // lwz r3, 4(r3)
    // lwz r0, 4(r3)
    r0 = r0 | 0x1000;
    // stw r0, 4(r3)
    // lwz r4, 0(r30)
    // lwz r3, 4(r4)
    // lwz r4, 4(r4)
    // lwz r0, 4(r3)
    // lfs f1, 0x88(r4)
    r0 = r0 & 0x00040000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e24c;
    // lis r3, 0
    // lfs f0, 0(r3)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057e224;
    // li r0, 1
    // stw r0, 0xcc(r30)
    // mr r3, r30
    sub_0x805908b4();
    // lfs f2, 0x5c(r3)
    // lfs f1, 0xc8(r31)
    // lfs f0, 0x1c8(r30)
    f1 = f1 * f2;
    f0 = f0 - f1;
    // stfs f0, 0x1c8(r30)
    goto L_8057e24c;
L_8057e224:
    // li r0, -1
    // stw r0, 0xcc(r30)
    // mr r3, r30
    sub_0x805908b4();
    // lfs f2, 0x5c(r3)
    // lfs f1, 0xc8(r31)
    // lfs f0, 0x1c8(r30)
    f1 = f1 * f2;
    f0 = f0 + f1;
    // stfs f0, 0x1c8(r30)
L_8057e24c:
    // mr r3, r30
    sub_0x805908b4();
    // lfs f2, 0x64(r3)
    // lfs f1, 0xc4(r31)
    // lfs f0, 0x1c8(r30)
    f2 = f1 * f2;
    f1 = -f2;
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_8057e278;
    // stfs f1, 0x1c8(r30)
    goto L_8057e300;
L_8057e278:
    /* Gekko: 0xfc, 0x02, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_8057e300;
    // stfs f2, 0x1c8(r30)
    goto L_8057e300;
L_8057e288:
    // lwz r4, 0(r3)
    // li r0, 0
    // lwz r5, 4(r4)
    // lwz r4, 4(r5)
    r4 = r4 & 0x00000000; /* rlwinm */
    // stw r4, 4(r5)
    // stw r0, 0xcc(r3)
    // mr r3, r30
    sub_0x805908b4();
    // lis r4, 0
    // lfs f0, 0x1c8(r30)
    // lfs f1, 0(r4)
    // lfs f2, 0x68(r3)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057e2d8;
    f0 = f0 - f2;
    // stfs f0, 0x1c8(r30)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_8057e2d8;
    // stfs f1, 0x1c8(r30)
L_8057e2d8:
    // lis r3, 0
    // lfs f0, 0x1c8(r30)
    // lfs f1, 0(r3)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_8057e300;
    f0 = f0 + f2;
    // stfs f0, 0x1c8(r30)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_8057e300;
    // stfs f1, 0x1c8(r30)
L_8057e300:
    // lfs f1, 0x1c8(r30)
    // lis r3, 0
    // lfs f0, 0(r3)
    r3 = r30 + 0x1d0;
    f1 = -f1;
    r4 = r30 + 0x44;
    f1 = f0 * f1;
    sub_0x80555bf4();
    // mr r3, r30
    sub_0x805903ec();
    r4 = r30 + 0x1d0;
    sub_0x8059c84c();
L_8057e330:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
