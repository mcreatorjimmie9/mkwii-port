// Decompiled from StaticR.rel
// Address: 0x8058d684
// Size: 404 bytes (101 instructions)
// Stack frame: 0x0020
// Calls: 0x805907a4, 0x80569ac0, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x80555bf4

void sub_8058d684(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stmw r27, 0xc(r1)
    r30 = r3; // mr
    r27 = 0; // li
    r28 = 1; // li
    r3 = /* load */ r3, 0x10(r30); // lwz
    r4 = r28 << r27; // slw
    r0 = /* load */ r0, 0x14(r30); // lwz
    r5 = r3 & r4; // and
    r3 = r0 & r4; // and
    r4 = -r5; // neg
    r0 = -r3; // neg
    r0 = r0 | r3; // or
    r4 = r4 | r5; // or
    // srwi r3, r4, 0x1f
    // srwi r0, r0, 0x1f
    // cmplw r3, r0
    L_8058d6fc:
    r3 = r30; // mr
    sub_0x805907a4();
    r3 = /* load */ r3, 0x14(r3); // lwz
    r4 = r27; // mr
    r5 = 0; // li
    r6 = 0; // li
    r7 = 0; // li
    r8 = 0xc; // li
    r9 = 0; // li
    sub_0x80569ac0();
    r27 = r27 + 1; // addi
    // cmplwi r27, 0x12
    L_8058d6a0:
    r29 = (uint32_t)0 << 16; // lis
    r31 = 0x13; // li
    r29 = r29 + 0; // addi
    r28 = 1; // li
    r3 = /* load */ r3, 0x10(r30); // lwz
    r6 = r28 << r31; // slw
    r0 = /* load */ r0, 0x14(r30); // lwz
    r4 = r31 + -0x13; // addi
    r5 = r3 & r6; // and
    r3 = r0 & r6; // and
    r6 = (int8_t)r4; // extsb
    r4 = -r5; // neg
    r0 = -r3; // neg
    r0 = r0 | r3; // or
    r4 = r4 | r5; // or
    // srwi r3, r4, 0x1f
    // srwi r0, r0, 0x1f
    // cmplw r3, r0
    L_8058d77c:
    // mulli r0, r6, 0xc
    r27 = r29 + r0; // add
    r3 = r27; // mr
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058d77c:
    r3 = r30; // mr
    r12 = r27; // mr
    sub_0x80555bf4();
    // nop 
    r31 = r31 + 1; // addi
    // cmplwi r31, 0x1f
    L_8058d718:
    r31 = (uint32_t)0 << 16; // lis
    r28 = 0; // li
    r31 = r31 + 0; // addi
    r29 = 1; // li
    r3 = /* load */ r3, 0x18(r30); // lwz
    r4 = r29 << r28; // slw
    r0 = /* load */ r0, 0x1c(r30); // lwz
    r6 = (int8_t)r28; // extsb
    r5 = r3 & r4; // and
    r3 = r0 & r4; // and
    r4 = -r5; // neg
    r0 = -r3; // neg
    r0 = r0 | r3; // or
    r4 = r4 | r5; // or
    // srwi r3, r4, 0x1f
    // srwi r0, r0, 0x1f
    // cmplw r3, r0
    L_8058d7f8:
    // mulli r0, r6, 0xc
    r27 = r31 + r0; // add
    r3 = r27; // mr
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058d7f8:
    r3 = r30; // mr
    r12 = r27; // mr
    sub_0x80555bf4();
    // nop 
    r28 = r28 + 1; // addi
    // cmplwi r28, 7
    L_8058d798:
    // lmw r27, 0xc(r1)
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
