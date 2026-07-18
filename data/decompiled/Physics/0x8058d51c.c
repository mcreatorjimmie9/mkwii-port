// Decompiled from StaticR.rel
// Address: 0x8058d51c
// Size: 148 bytes (37 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4

void sub_8058d51c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    L_8058d544:
    // cmpwi r4, 0
    L_8058d544:
    sub_0x80555bf4();
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
    r0 = ((_rotl(r4, 1)) & _mask(0x17, 0x1e)); // rlwinm
    r4 = /* load */ r4, 0x20(r3); // lwz
    r5 = r5 + r0; // add
    r0 = /* load */ r0, 0x24(r3); // lwz
    // clrlwi r3, r5, 0x18
    r5 = 1; // li
    r3 = r5 << r3; // slw
    r5 = r4 & r3; // and
    r3 = r0 & r3; // and
    r4 = -r5; // neg
    r0 = -r3; // neg
    r4 = r4 | r5; // or
    r0 = r0 | r3; // or
    // srwi r4, r4, 0x1f
    // srwi r0, r0, 0x1f
    r3 = r4 - r0; // subf
    r0 = r0 - r4; // subf
    r0 = r3 | r0; // or
    // srwi r3, r0, 0x1f
}
