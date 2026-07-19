// Decompiled from StaticR.rel
// Address: 0x805813e8
// Size: 548 bytes (137 instructions)
// Stack frame: 0x10
// Calls: 0x805907d4, 0x80590acc, 0x80590a9c, 0x807960a0, 0x805917c4, 0x805907f0, 0x80595cf4

void sub_805813e8(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    // stw r30, 8(r1)
    // lis r30, 0
    r30 = r30 + 0;
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00040000; /* rlwinm */
    if (cr0 == 0)
        goto L_805814dc;
    // lfs f1, 0x160(r3)
    // lfs f0, 4(r30)
    /* Gekko: 0xfc, 0x01, 0x00, 0x40 */
    // cror cr0eq, cr0gt, cr0eq
    if (cr0 != 0)
        goto L_8058144c;
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // li r4, 0x1aa
    // lfs f1, 0(r30)
    // lwz r12, 0xe4(r12)
    // mtctr r12
    // bctrl 
L_8058144c:
    // lfs f2, 0x160(r31)
    // lfs f1, 0x48(r30)
    // lfs f0, 0xc8(r30)
    f1 = f2 - f1;
    // stfs f1, 0x160(r31)
    /* Gekko: 0xfc, 0x00, 0x08, 0x40 */
    if (cr0 <= 0)
        goto L_80581474;
    // stfs f0, 0x160(r31)
    // li r0, 1
    goto L_80581478;
L_80581474:
    // li r0, 0
L_80581478:
    // cmpwi r0, 0
    if (0 == 0)
        goto L_805814dc;
    // lwz r5, 0(r31)
    // mr r3, r31
    // li r4, 0
    // lwz r5, 4(r5)
    // lwz r0, 0xc(r5)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0xc(r5)
    sub_0x80590acc();
    // lwz r4, 0(r31)
    // mr r3, r31
    // lwz r4, 4(r4)
    // lwz r0, 0xc(r4)
    r0 = r0 | 8;
    // stw r0, 0xc(r4)
    sub_0x80590a9c();
    // lis r4, 0
    // clrlwi r0, r3, 0x18
    // lwz r3, 0(r4)
    r0 = r0 * 0x248;
    // li r4, 0
    // lwz r3, 0x14(r3)
    r3 = r3 + r0;
    sub_0x807960a0();
L_805814dc:
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r4, 0x14(r3)
    r0 = r4 & 0x00020000; /* rlwinm */
    if (cr0 == 0)
        goto L_805815f4;
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000010; /* rlwinm */
    if (cr0 != 0)
        goto L_805815f4;
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x00006000; /* rlwinm */
    if (cr0 != 0)
        goto L_805815f4;
    r0 = r4 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_805815f4;
    // lis r3, 0
    // lha r4, 0x21c(r31)
    // lha r3, 0(r3)
    r0 = r3 + -0x5a;
    // cmpw r4, r0
    if (r0 != 0)
        goto L_80581534;
    // mr r3, r31
    // li r4, 0
    sub_0x805917c4();
L_80581534:
    // lha r4, 0x21c(r31)
    // lis r3, 0
    r0 = r4 + 1;
    // sth r0, 0x21c(r31)
    r4 = (s16)r0;
    // lha r0, 0(r3)
    // cmpw r4, r0
    if (r0 < 0)
        goto L_805815f4;
    // lwz r5, 0(r31)
    // lis r3, -3
    r0 = r3 + -0x201;
    // li r4, 0
    // lwz r5, 4(r5)
    // lwz r3, 0x14(r5)
    r0 = r3 & r0;
    // stw r0, 0x14(r5)
    // sth r4, 0x21c(r31)
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r0, 0x14(r3)
    r0 = r0 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_805815f4;
    // sth r4, 0x234(r31)
    // mr r3, r31
    // lwz r5, 0(r31)
    // li r4, 0x1a
    // lwz r5, 4(r5)
    // lwz r0, 8(r5)
    r0 = r0 | 2;
    // stw r0, 8(r5)
    // lwz r5, 0(r31)
    // lwz r5, 4(r5)
    // lwz r0, 0x14(r5)
    r0 = r0 & 0x00000020; /* rlwinm */
    if (cr0 == 0)
        goto L_805815c4;
    // li r4, 0x1b
L_805815c4:
    sub_0x805907f0();
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    sub_0x80595cf4();
    // lwz r3, 0(r31)
    // lwz r3, 0(r3)
    // lwz r4, 0x34(r3)
    // cmpwi r4, 0
    if (0 == 0)
        goto L_805815f4;
    // lwz r3, 0x14(r4)
    r0 = r3 + 1;
    // stw r0, 0x14(r4)
L_805815f4:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
