// Decompiled from StaticR.rel
// Address: 0x80580cdc
// Size: 228 bytes (57 instructions)
// Stack frame: 0x10
// Calls: 0x80590a9c, 0x80795f64, 0x805907d4, 0x805907a4, 0x80598378, 0x805b4f48

void sub_80580cdc(r3 /* param */, r4 /* param */, r5 /* param */) {

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
    sub_0x80590a9c();
    // lis r4, 0
    // clrlwi r0, r3, 0x18
    // lwz r3, 0(r4)
    r0 = r0 * 0x248;
    // lwz r3, 0x14(r3)
    r3 = r3 + r0;
    sub_0x80795f64();
    // cmpwi r31, 0
    if (0 != 0)
        goto L_80580d58;
    // mr r3, r30
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // lis r4, 0
    // lfs f1, 0(r4)
    // li r4, 0x113
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
L_80580d58:
    // li r0, 0
    // sth r0, 0x194(r30)
    // mr r3, r30
    sub_0x805907a4();
    // lis r4, 0
    // lfs f1, 0(r4)
    sub_0x80598378();
    // lbz r0, 0x196(r30)
    // cmpwi r0, 0
    if (0 != 0)
        goto L_80580d94;
    // lwz r3, 0x260(r30)
    // li r4, 1
    sub_0x805b4f48();
    // li r0, 1
    // stb r0, 0x196(r30)
L_80580d94:
    // cmpwi r31, 0
    if (0 == 0)
        goto L_80580da8;
    // lis r3, 0
    // lfs f0, 0(r3)
    // stfs f0, 0x17c(r30)
L_80580da8:
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
