// Decompiled from StaticR.rel
// Address: 0x80580b14
// Size: 456 bytes (114 instructions)
// Stack frame: 0x20
// Calls: 0x80590a9c, 0x806acf84, 0x805907f0, 0x805908b4, 0x805907a4, 0x80598378, 0x805907d4, 0x805907d4, 0x8070ec70, 0x805907d4, 0x805b4f48, 0x805907d4, 0x805b4e74, 0x80591800, 0x8059045c, 0x805b4d94

void sub_80580b14(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    // lis r4, 0
    // stw r31, 0xc(r1)
    // mr r31, r3
    // lwz r5, 0(r3)
    // lwz r5, 4(r5)
    // lwz r0, 0xc(r5)
    r0 = r0 | 0x8000;
    // stw r0, 0xc(r5)
    // lha r0, 0(r4)
    // sth r0, 0x194(r3)
    sub_0x80590a9c();
    // lis r4, 0
    r0 = (r3 << 2) & 0x000003fc; /* rlwinm */
    // lwz r3, 0(r4)
    // lwz r3, 0x68(r3)
    // lwzx r3, r3, r0
    sub_0x806acf84();
    // mr r3, r31
    // li r4, 2
    sub_0x805907f0();
    // mr r3, r31
    sub_0x805908b4();
    // lfs f31, 0x184(r3)
    // mr r3, r31
    sub_0x805907a4();
    f1 = f31; /* fmr */
    sub_0x80598378();
    // mr r3, r31
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // lis r4, 0
    // lfs f1, 0(r4)
    // li r4, 0x111
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // mr r3, r31
    sub_0x805907d4();
    // lbz r0, 0xe0(r3)
    // cmpwi r0, 0
    if (0 == 0)
        goto L_80580bdc;
    // lis r3, 0
    // li r4, 0
    // lwz r3, 0(r3)
    sub_0x8070ec70();
L_80580bdc:
    // lwz r4, 0(r31)
    // lwz r3, 4(r4)
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x00000080; /* rlwinm */
    if (cr0 == 0)
        goto L_80580c38;
    // lwz r4, 4(r4)
    // mr r3, r31
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0xc(r4)
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // lis r4, 0
    // lfs f1, 0(r4)
    // li r4, 0x116
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // li r0, 0
    // sth r0, 0x18c(r31)
    // lwz r3, 0x260(r31)
    // li r4, 0
    sub_0x805b4f48();
L_80580c38:
    // lwz r4, 0(r31)
    // lwz r3, 4(r4)
    // lwz r0, 0xc(r3)
    r0 = r0 & 0x00010000; /* rlwinm */
    if (cr0 == 0)
        goto L_80580c88;
    // lwz r4, 4(r4)
    // mr r3, r31
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 0xc(r4)
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // lis r4, 0
    // lfs f1, 0(r4)
    // li r4, 0x1a5
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // lwz r3, 0x260(r31)
    sub_0x805b4e74();
L_80580c88:
    // mr r3, r31
    // li r4, 0x14
    sub_0x80591800();
    // lis r4, 0
    // mr r3, r31
    // lfs f1, 0(r4)
    // li r4, 0x1b
    // li r5, 1
    sub_0x8059045c();
    // lwz r3, 0x260(r31)
    // li r4, 1
    sub_0x805b4d94();
    // li r0, 0
    // stb r0, 0x196(r31)
    /* Gekko: 0xe3, 0xe1, 0x00, 0x18 */
    // lfd f31, 0x10(r1)
    // lwz r31, 0xc(r1)
    // lwz r0, 0x24(r1)
    // mtlr r0
}
