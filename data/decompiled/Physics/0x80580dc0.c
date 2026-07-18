// Decompiled from StaticR.rel
// Address: 0x80580dc0
// Size: 360 bytes (90 instructions)
// Stack frame: 0x10
// Calls: 0x80590a9c, 0x80795f64, 0x805907d4, 0x805907a4, 0x80598378, 0x805b4f48, 0x805b4f48, 0x805908b4

void sub_80580dc0(r3 /* param */, r4 /* param */) {

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
    r0 = r0 & 0x00008000; /* rlwinm */
    if (cr0 == 0)
        goto L_80580ef0;
    // lha r4, 0x194(r3)
    r0 = r4 + -1;
    // sth r0, 0x194(r3)
    r4 = (s16)r0;
    if (cr0 > 0)
        goto L_80580e98;
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0xc(r4)
    sub_0x80590a9c();
    // lis r4, 0
    // clrlwi r0, r3, 0x18
    // lwz r3, 0(r4)
    r0 = r0 * 0x248;
    // lwz r3, 0x14(r3)
    r3 = r3 + r0;
    sub_0x80795f64();
    // mr r3, r30
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // li r4, 0x113
    // lfs f1, 0(r31)
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // li r0, 0
    // sth r0, 0x194(r30)
    // mr r3, r30
    sub_0x805907a4();
    // lfs f1, 4(r31)
    sub_0x80598378();
    // lbz r0, 0x196(r30)
    // cmpwi r0, 0
    if (0 != 0)
        goto L_80580ec0;
    // lwz r3, 0x260(r30)
    // li r4, 1
    sub_0x805b4f48();
    // li r0, 1
    // stb r0, 0x196(r30)
    goto L_80580ec0;
L_80580e98:
    // lbz r0, 0x196(r3)
    // cmpwi r0, 0
    if (0 != 0)
        goto L_80580ec0;
    // cmpwi r4, 0x19
    if (0x19 > 0)
        goto L_80580ec0;
    // li r0, 1
    // stb r0, 0x196(r3)
    // lwz r3, 0x260(r3)
    // li r4, 1
    sub_0x805b4f48();
L_80580ec0:
    // lfs f1, 0x17c(r30)
    // mr r3, r30
    // lfs f0, 0x3c(r31)
    f0 = f1 + f0;
    // stfs f0, 0x17c(r30)
    sub_0x805908b4();
    // lfs f1, 0x184(r3)
    // lfs f0, 0x17c(r30)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    if (cr0 >= 0)
        goto L_80580f10;
    // stfs f1, 0x17c(r30)
    goto L_80580f10;
L_80580ef0:
    // lfs f2, 0x17c(r3)
    // lfs f1, 0x40(r31)
    // lfs f0, 4(r31)
    f1 = f2 - f1;
    // stfs f1, 0x17c(r3)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_80580f10;
    // stfs f0, 0x17c(r3)
L_80580f10:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
