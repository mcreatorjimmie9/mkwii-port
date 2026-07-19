// Decompiled from StaticR.rel
// Address: 0x80580a84
// Size: 144 bytes (36 instructions)
// Stack frame: 0x10
// Calls: 0x805907d4, 0x805b4f48

void sub_80580a84(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r4
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r5, 0(r3)
    // lwz r4, 4(r5)
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
    // sth r0, 0x18c(r30)
    // lwz r3, 0x260(r30)
    // li r4, 0
    sub_0x805b4f48();
    // cmpwi r31, 0
    if (0 == 0)
        goto L_80580afc;
    // lis r3, 0
    // lfs f0, 0(r3)
    // stfs f0, 0x178(r30)
L_80580afc:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
