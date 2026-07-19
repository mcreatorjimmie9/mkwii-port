// Decompiled from StaticR.rel
// Address: 0x80582694
// Size: 368 bytes (92 instructions)
// Stack frame: 0x0020
// Calls: 0x80588e64, 0x80590e80, 0x80591084, 0x80590e98, 0x80591084, 0x80590e80, 0x80590e98, 0x80591090, 0x80591090

void sub_80582694(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    r0 = 0; // li
    r4 = r1 + 8; // addi
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    r3 = r3 + 0x108; // addi
    // stw r30, 0x18(r1)
    // stb r0, 8(r1)
    sub_0x80588e64();
    // cmpwi r3, 0
    L_80582700:
    r4 = /* load */ r4, 0(r31); // lwz
    r3 = r31; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // ori r0, r0, 1
    // stw r0, 4(r4)
    f1 = /* load */ f1, 0x124(r31); // lfs
    sub_0x80590e80();
    r3 = r31; // mr
    r4 = 4; // li
    r5 = 0; // li
    r6 = 1; // li
    sub_0x80591084();
    goto L_8058271c;
    r3 = r31; // mr
    sub_0x80590e98();
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 4(r3)
    r4 = /* load */ r4, 0(r31); // lwz
    r30 = 0; // li
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0)); // rlwinm.
    L_805827b4:
    r7 = /* load */ r7, 4(r4); // lwz
    r3 = r31; // mr
    r4 = 4; // li
    r5 = 0; // li
    r0 = /* load */ r0, 4(r7); // lwz
    r6 = 1; // li
    // ori r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591084();
    f1 = /* load */ f1, 0x124(r31); // lfs
    r3 = r31; // mr
    sub_0x80590e80();
    r3 = /* load */ r3, 0x1c4(r31); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x1c4(r31)
    r0 = (int16_t)r0; // extsh.
    L_805827b4:
    r3 = r31; // mr
    sub_0x80590e98();
    r0 = 0; // li
    // sth r0, 0x1c4(r31)
    r6 = /* load */ r6, 0(r31); // lwz
    r3 = r31; // mr
    r4 = 4; // li
    r5 = 0; // li
    r7 = /* load */ r7, 4(r6); // lwz
    r6 = 1; // li
    r0 = /* load */ r0, 4(r7); // lwz
    // clrlwi r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591090();
    r30 = 1; // li
    r0 = /* load */ r0, 8(r1); // lbz
    // cmpwi r0, 0
    L_805827c8:
    // cmpwi r30, 0
    L_805827d8:
    // cmpwi r0, 0
    L_805827ec:
    // cmpwi r30, 0
    L_805827ec:
    r3 = r31; // mr
    r4 = 4; // li
    r5 = 0; // li
    r6 = 1; // li
    sub_0x80591090();
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
