// Decompiled from StaticR.rel
// Address: 0x8058173c
// Size: 60 bytes (15 instructions)
// Stack frame: 0x10
// Calls: 0x805910cc, 0x8056c7d4

void sub_8058173c(r3 /* param */, r4 /* param */, r5 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // lwz r5, 0(r3)
    // lwz r5, 4(r5)
    // lwz r0, 8(r5)
    r0 = r0 | 0x100;
    // stw r0, 8(r5)
    // sth r4, 0x1a8(r3)
    sub_0x805910cc();
    sub_0x8056c7d4();
    // lwz r0, 0x14(r1)
    // mtlr r0
}
