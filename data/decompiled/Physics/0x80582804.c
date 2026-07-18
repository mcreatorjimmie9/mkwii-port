// Decompiled from StaticR.rel
// Address: 0x80582804
// Size: 200 bytes (50 instructions)
// Stack frame: 0x0010
// Calls: 0x80591084, 0x80590e80, 0x80590e98, 0x80591090

void sub_80582804(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = 0; // li
    // stw r30, 8(r1)
    r30 = r3; // mr
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0)); // rlwinm.
    L_805828b0:
    r7 = /* load */ r7, 4(r5); // lwz
    r4 = 4; // li
    r5 = 0; // li
    r6 = 1; // li
    r0 = /* load */ r0, 4(r7); // lwz
    // ori r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591084();
    f1 = /* load */ f1, 0x124(r30); // lfs
    r3 = r30; // mr
    sub_0x80590e80();
    r3 = /* load */ r3, 0x1c4(r30); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x1c4(r30)
    r0 = (int16_t)r0; // extsh.
    L_805828b0:
    r3 = r30; // mr
    sub_0x80590e98();
    r0 = 0; // li
    // sth r0, 0x1c4(r30)
    r6 = /* load */ r6, 0(r30); // lwz
    r3 = r30; // mr
    r4 = 4; // li
    r5 = 0; // li
    r7 = /* load */ r7, 4(r6); // lwz
    r6 = 1; // li
    r0 = /* load */ r0, 4(r7); // lwz
    // clrlwi r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591090();
    r31 = 1; // li
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
