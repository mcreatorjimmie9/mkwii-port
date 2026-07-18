// Decompiled from StaticR.rel
// Address: 0x80580f9c
// Size: 152 bytes (38 instructions)
// Stack frame: 0x10
// Calls: 0x805907d4, 0x805b4e74

void sub_80580f9c(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    // lwz r5, 0(r3)
    // lwz r4, 4(r5)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00010000; /* rlwinm */
    if (cr0 == 0)
        goto L_80581020;
    // lha r4, 0x192(r3)
    r0 = r4 + -1;
    // sth r0, 0x192(r3)
    r0 = (s16)r0;
    if (cr0 > 0)
        goto L_80581020;
    // lwz r4, 4(r5)
    // lwz r0, 0xc(r4)
    r0 = r0 & 0x00010000; /* rlwinm */
    if (cr0 == 0)
        goto L_80581020;
    // lwz r4, 4(r5)
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
L_80581020:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // mtlr r0
}
