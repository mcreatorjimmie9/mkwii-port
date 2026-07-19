// Decompiled from StaticR.rel
// Address: 0x80580f28
// Size: 116 bytes (29 instructions)
// Stack frame: 0x10
// Calls: 0x805907d4, 0x805b4e40

void sub_80580f28(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // mr r31, r4
    // stw r30, 8(r1)
    // mr r30, r3
    // lwz r5, 0(r3)
    // lwz r4, 4(r5)
    // lwz r0, 0xc(r4)
    r0 = r0 | 1;
    // stw r0, 0xc(r4)
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // lis r4, 0
    // lfs f1, 0(r4)
    // li r4, 0x1a4
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // sth r31, 0x192(r30)
    // lwz r3, 0x260(r30)
    sub_0x805b4e40();
    // lwz r0, 0x14(r1)
    // lwz r31, 0xc(r1)
    // lwz r30, 8(r1)
    // mtlr r0
}
