// Decompiled from StaticR.rel
// Address: 0x8058d454
// Size: 140 bytes (35 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4

void sub_8058d454(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    L_8058d47c:
    // cmpwi r4, 0
    L_8058d47c:
    sub_0x80555bf4();
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
    r0 = 0; // li
    // stw r0, 0x14(r3)
    // stw r0, 0x10(r3)
    r0 = 1; // li
    r5 = /* load */ r5, 0x10(r3); // lwz
    r0 = r0 << r4; // slw
    r0 = r5 ^ r0; // xor
    // stw r0, 0x10(r3)
    r0 = ((_rotl(r4, 1)) & _mask(0x17, 0x1e)); // rlwinm
    r6 = /* load */ r6, 0x18(r3); // lwz
    r0 = r5 + r0; // add
    r4 = 1; // li
    // clrlwi r0, r0, 0x18
    r0 = r4 << r0; // slw
    r0 = r6 ^ r0; // xor
    // stw r0, 0x18(r3)
}
