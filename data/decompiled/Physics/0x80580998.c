// Decompiled from StaticR.rel
// Address: 0x80580998
// Size: 236 bytes (59 instructions)
// Stack frame: 0x10
// Calls: 0x805907d4, 0x805b4f48

void sub_80580998(r3 /* param */, r4 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // lis r31, 0
    r31 = r31 + 0;
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00000080; /* rlwinm */
    if (cr0 == 0)
        goto L_80580a4c;
    // lha r4, 0x18c(r3)
    r0 = r4 + -1;
    // sth r0, 0x18c(r3)
    r0 = (s16)r0;
    if (cr0 > 0)
        goto L_80580a24;
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0xc(r4)
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // li r4, 0x116
    // lfs f1, 0(r31)
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // li r0, 0
    // sth r0, 0x18c(r30)
    // lwz r3, 0x260(r30)
    // li r4, 0
    sub_0x805b4f48();
L_80580a24:
    // lfs f1, 0x178(r30)
    // lis r3, 0
    // lfs f0, 0x44(r31)
    f0 = f1 - f0;
    // stfs f0, 0x178(r30)
    // lfs f1, 0(r3)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 <= 0)
        goto L_80580a6c;
    // stfs f1, 0x178(r30)
    goto L_80580a6c;
L_80580a4c:
    // lfs f2, 0x178(r3)
    // lfs f1, 0x48(r31)
    // lfs f0, 4(r31)
    f1 = f2 + f1;
    // stfs f1, 0x178(r3)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 >= 0)
        goto L_80580a6c;
    // stfs f0, 0x178(r3)
L_80580a6c:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
