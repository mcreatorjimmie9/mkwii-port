// Decompiled from StaticR.rel
// Address: 0x8057e804
// Size: 408 bytes (102 instructions)
// Stack frame: 0x10

void sub_8057e804(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r3
    // lwz r4, 0(r3)
    // lwz r5, 4(r4)
    // lwz r5, 4(r5)
    r0 = r5 & 0x00040000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e8f0;
    r0 = r5 & 0x00080000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e8f0;
    r0 = r5 & 0x00000008; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e8f0;
    r6 = r5 & 0x00002000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e84c;
    r0 = r5 & 0x01000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e8f0;
L_8057e84c:
    r0 = r5 & 0x00000004; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e8e0;
    r0 = r5 & 0x08000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e8f0;
    // lwz r0, 0xcc(r3)
    // cmpwi r0, 0
    if (0 != 0)
        goto L_8057e8f0;
    r0 = r5 & 0x01000000; /* rlwinm */
    if (0 == 0)
        goto L_8057e8a4;
    // li r0, -1
    // stw r0, 0xcc(r3)
    // lwz r4, 0(r3)
    // mr r3, r31
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 | 0x800;
    // stw r0, 4(r4)
    // lwz r12, 0xc(r31)
    // lwz r12, 0x34(r12)
    // mtctr r12
    // bctrl 
    goto L_8057e8f0;
L_8057e8a4:
    // cmpwi r6, 0
    if (0 == 0)
        goto L_8057e8f0;
    // li r0, 1
    // stw r0, 0xcc(r3)
    // lwz r4, 0(r3)
    // mr r3, r31
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 | 0x800;
    // stw r0, 4(r4)
    // lwz r12, 0xc(r31)
    // lwz r12, 0x34(r12)
    // mtctr r12
    // bctrl 
    goto L_8057e8f0;
L_8057e8e0:
    // lwz r3, 4(r4)
    // lwz r0, 4(r3)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r3)
L_8057e8f0:
    // lwz r3, 0(r31)
    // lwz r3, 4(r3)
    // lwz r3, 4(r3)
    r0 = r3 & 0x00080000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e954;
    // lwz r0, 0xcc(r31)
    // cmpwi r0, 0
    if (0 != 0)
        goto L_8057e934;
    r0 = r3 & 0x00002000; /* rlwinm */
    if (0 == 0)
        goto L_8057e924;
    // li r0, 1
    // stw r0, 0xcc(r31)
    goto L_8057e934;
L_8057e924:
    r0 = r3 & 0x01000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e934;
    // li r0, -1
    // stw r0, 0xcc(r31)
L_8057e934:
    // lis r3, 0
    // lwz r4, 0xd0(r31)
    // lha r0, 0(r3)
    // cmpw r4, r0
    if (r0 >= 0)
        goto L_8057e964;
    r0 = r4 + 1;
    // stw r0, 0xd0(r31)
    goto L_8057e964;
L_8057e954:
    r0 = r3 & 0x08000000; /* rlwinm */
    if (cr0 == 0)
        goto L_8057e964;
    // li r0, 0
    // stw r0, 0xd0(r31)
L_8057e964:
    // lwz r4, 0(r31)
    // li r3, 1
    // lwz r4, 4(r4)
    // lwz r4, 4(r4)
    r0 = r4 & 0x00080000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e988;
    r0 = r4 & 0x08000000; /* rlwinm */
    if (cr0 != 0)
        goto L_8057e988;
    // li r3, 0
L_8057e988:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // mtlr r0
}
