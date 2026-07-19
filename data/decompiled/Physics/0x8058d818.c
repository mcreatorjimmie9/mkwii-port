// Decompiled from StaticR.rel
// Address: 0x8058d818
// Size: 208 bytes (52 instructions)
// Stack frame: 0x0030
// Calls: 0x80590140, 0x80555bf4

void sub_8058d818(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    // stw r0, 0x34(r1)
    // stmw r25, 0x14(r1)
    r26 = (uint32_t)0 << 16; // lis
    r27 = r3; // mr
    r29 = 0; // li
    r26 = r26 + 0; // addi
    r25 = (uint32_t)0 << 16; // lis
    r31 = 1; // li
    goto L_8058d8c0;
    r30 = ((_rotl(r29, 1)) & _mask(0x17, 0x1e)); // rlwinm
    r28 = 0; // li
    r0 = r28 + r30; // add
    r3 = /* load */ r3, 0x20(r27); // lwz
    // clrlwi r4, r0, 0x18
    r0 = /* load */ r0, 0x24(r27); // lwz
    r4 = r31 << r4; // slw
    r5 = r3 & r4; // and
    r3 = r0 & r4; // and
    r4 = -r5; // neg
    r0 = -r3; // neg
    r0 = r0 | r3; // or
    r4 = r4 | r5; // or
    // srwi r3, r4, 0x1f
    // srwi r0, r0, 0x1f
    // cmplw r3, r0
    L_8058d8b0:
    r3 = /* load */ r3, 0(r25); // lwz
    // clrlwi r4, r29, 0x18
    sub_0x80590140();
    // clrlwi r0, r28, 0x18
    r4 = r3; // mr
    // mulli r0, r0, 0xc
    r3 = r27; // mr
    r12 = r26 + r0; // add
    sub_0x80555bf4();
    // nop 
    r28 = r28 + 1; // addi
    // cmplwi r28, 2
    L_8058d84c:
    r29 = r29 + 1; // addi
    r3 = /* load */ r3, 0(r25); // lwz
    // clrlwi r4, r29, 0x18
    r0 = /* load */ r0, 0x24(r3); // lbz
    // cmplw r4, r0
    L_8058d844:
    // lmw r25, 0x14(r1)
    r0 = /* load */ r0, 0x34(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
