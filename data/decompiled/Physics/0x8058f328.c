// Decompiled from StaticR.rel
// Address: 0x8058f328
// Size: 452 bytes (113 instructions)
// Stack frame: 0x0050
// Calls: 0x80555bf4, 0x8059aa84, 0x80555bf4, 0x8059aa84, 0x80555bf4, 0x80598b48, 0x80555bf4, 0x8059aa84, 0x80555bf4, 0x80598b48, 0x80598ba0

void sub_8058f328(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {
    // stwu r1, -0x50(r1)
    // mflr r0
    r8 = (uint32_t)0 << 16; // lis
    // stw r0, 0x54(r1)
    // stmw r21, 0x24(r1)
    r22 = (uint32_t)0 << 16; // lis
    r23 = (uint32_t)0 << 16; // lis
    r24 = (uint32_t)0 << 16; // lis
    r25 = (uint32_t)0 << 16; // lis
    r26 = (uint32_t)0 << 16; // lis
    r27 = r3; // mr
    r28 = r4; // mr
    r30 = r1 + 8; // addi
    r22 = r22 + 0; // addi
    r23 = r23 + 0; // addi
    r24 = r24 + 0; // addi
    r25 = r25 + 0; // addi
    r26 = r26 + 0; // addi
    r29 = 0; // li
    r31 = 0; // li
    r7 = /* load */ r7, 0(r8); // lwzu
    // stw r7, 8(r1)
    r6 = /* load */ r6, 4(r8); // lwz
    r5 = /* load */ r5, 8(r8); // lwz
    r0 = /* load */ r0, 0xc(r8); // lwz
    // stw r6, 0xc(r1)
    // stw r5, 0x10(r1)
    // stw r0, 0x14(r1)
    goto L_8058f4c8;
    // cmpwi r29, 0
    L_8058f3ac:
    // cmpwi r29, 2
    L_8058f448:
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0(r3); // lwz
    // cmplwi r0, 2
    L_8058f3ec:
    r3 = 0xd0; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r21 = r3; // mr
    L_8058f414:
    r4 = /* load */ r4, 0x14(r27); // lwz
    r5 = 2; // li
    r6 = 0; // li
    sub_0x8059aa84();
    // stw r22, 0xc(r21)
    goto L_8058f414;
    r3 = 0xd0; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r21 = r3; // mr
    L_8058f414:
    r4 = /* load */ r4, 0x14(r27); // lwz
    r5 = 2; // li
    r6 = 0; // li
    sub_0x8059aa84();
    // stw r23, 0xc(r21)
    r4 = /* load */ r4, 0x2c(r27); // lwz
    r3 = 0x94; // li
    // stwx r21, r4, r31
    sub_0x80555bf4();
    // cmpwi r3, 0
    r21 = r3; // mr
    L_8058f43c:
    r4 = /* load */ r4, 0x14(r27); // lwz
    sub_0x80598b48();
    // stw r24, 0xc(r21)
    r3 = /* load */ r3, 0x28(r27); // lwz
    // stwx r21, r3, r31
    goto L_8058f4a0;
    r3 = 0xa0; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r21 = r3; // mr
    L_8058f470:
    r4 = /* load */ r4, 0x14(r27); // lwz
    r5 = 2; // li
    r6 = 1; // li
    sub_0x8059aa84();
    // stw r25, 0xc(r21)
    r4 = /* load */ r4, 0x2c(r27); // lwz
    r3 = 0x94; // li
    // stwx r21, r4, r31
    sub_0x80555bf4();
    // cmpwi r3, 0
    r21 = r3; // mr
    L_8058f498:
    r4 = /* load */ r4, 0x14(r27); // lwz
    sub_0x80598b48();
    // stw r26, 0xc(r21)
    r3 = /* load */ r3, 0x28(r27); // lwz
    // stwx r21, r3, r31
    r3 = /* load */ r3, 0x28(r27); // lwz
    r4 = r28; // mr
    r7 = /* load */ r7, 0(r30); // lwz
    r5 = r29; // mr
    r3 = /* load */ r3, r3, r31; // lwzx
    r6 = 2; // li
    sub_0x80598ba0();
    r31 = r31 + 4; // addi
    r30 = r30 + 4; // addi
    r29 = r29 + 1; // addi
    r3 = /* load */ r3, 0x14(r27); // lwz
    r0 = /* load */ r0, 0xc(r3); // lhz
    // cmpw r29, r0
    L_8058f39c:
    // lmw r21, 0x24(r1)
    r0 = /* load */ r0, 0x54(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
