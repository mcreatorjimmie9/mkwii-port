// Decompiled from StaticR.rel
// Address: 0x8058196c
// Size: 60 bytes (15 instructions)
// Stack frame: 0x10
// Calls: 0x805910cc, 0x8056c7e4

void sub_8058196c(r3 /* param */, r4 /* param */) {

    // mflr r0
    // stw r0, 0x14(r1)
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 8(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 8(r4)
    sub_0x805910cc();
    // li r4, 1
    sub_0x8056c7e4();
    // lwz r0, 0x14(r1)
    // mtlr r0
}
