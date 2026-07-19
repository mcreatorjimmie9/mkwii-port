// Decompiled from StaticR.rel
// Address: 0x8058ea4c
// Size: 508 bytes (127 instructions)
// Stack frame: 0x0080
// Calls: 0x80555bf4, 0x80598b48, 0x80555bf4, 0x8059aa84, 0x80555bf4, 0x80598b48, 0x80555bf4, 0x8059aa84, 0x80598ba0

void sub_8058ea4c(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */, r10 /* param */) {
    // stwu r1, -0x80(r1)
    // mflr r0
    r6 = (uint32_t)0 << 16; // lis
    r10 = (uint32_t)0 << 16; // lis
    // stw r0, 0x84(r1)
    // stmw r21, 0x54(r1)
    r23 = r3; // mr
    r24 = r4; // mr
    r21 = /* load */ r21, 0x14(r3); // lwz
    r28 = /* load */ r28, 0(r6); // lwzu
    r5 = /* load */ r5, 0x14(r21); // lwz
    r9 = /* load */ r9, 0(r10); // lwzu
    r3 = /* load */ r3, 0(r5); // lwz
    r30 = /* load */ r30, 4(r6); // lwz
    r27 = /* load */ r27, 0(r3); // lwz
    r29 = /* load */ r29, 8(r6); // lwz
    r26 = /* load */ r26, 0xc(r6); // lwz
    // cmpwi r27, 3
    r25 = /* load */ r25, 0x10(r6); // lwz
    r22 = /* load */ r22, 0x14(r6); // lwz
    r12 = /* load */ r12, 0x18(r6); // lwz
    r11 = /* load */ r11, 0x1c(r6); // lwz
    r8 = /* load */ r8, 4(r10); // lwz
    r7 = /* load */ r7, 8(r10); // lwz
    r6 = /* load */ r6, 0xc(r10); // lwz
    r5 = /* load */ r5, 0x10(r10); // lwz
    r4 = /* load */ r4, 0x14(r10); // lwz
    r3 = /* load */ r3, 0x18(r10); // lwz
    r0 = /* load */ r0, 0x1c(r10); // lwz
    // stw r28, 0x28(r1)
    r28 = /* load */ r28, 0xe(r21); // lhz
    // stw r30, 0x2c(r1)
    // stw r29, 0x30(r1)
    // stw r26, 0x34(r1)
    // stw r25, 0x38(r1)
    // stw r22, 0x3c(r1)
    // stw r12, 0x40(r1)
    // stw r11, 0x44(r1)
    // stw r9, 8(r1)
    // stw r8, 0xc(r1)
    // stw r7, 0x10(r1)
    // stw r6, 0x14(r1)
    // stw r5, 0x18(r1)
    // stw r4, 0x1c(r1)
    // stw r3, 0x20(r1)
    // stw r0, 0x24(r1)
    L_8058eb0c:
    r28 = 4; // li
    r22 = (uint32_t)0 << 16; // lis
    r31 = r1 + 8; // addi
    r29 = r1 + 0x28; // addi
    r26 = 0; // li
    r22 = r22 + 0; // addi
    r25 = 0; // li
    r30 = 0; // li
    goto L_8058ec2c;
    // cmpwi r27, 3
    L_8058eb3c:
    // cmpwi r25, 0
    L_8058ec20:
    r0 = /* load */ r0, 0(r31); // lwz
    // cmpwi r0, 0
    L_8058eb50:
    // cmpwi r0, 2
    L_8058ebac:
    r3 = 0x94; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r0 = r3; // mr
    L_8058eb70:
    r4 = /* load */ r4, 0x14(r23); // lwz
    sub_0x80598b48();
    r0 = r3; // mr
    r4 = /* load */ r4, 0x28(r23); // lwz
    r3 = 0xd0; // li
    // stwx r0, r4, r30
    sub_0x80555bf4();
    // cmpwi r3, 0
    r21 = r3; // mr
    L_8058eba0:
    r4 = /* load */ r4, 0x14(r23); // lwz
    r6 = 0; // li
    r5 = /* load */ r5, 0(r29); // lwz
    sub_0x8059aa84();
    // stw r22, 0xc(r21)
    r3 = /* load */ r3, 0x2c(r23); // lwz
    // stwx r21, r3, r30
    goto L_8058ebfc;
    r3 = 0x94; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r0 = r3; // mr
    L_8058ebcc:
    r4 = /* load */ r4, 0x14(r23); // lwz
    sub_0x80598b48();
    r0 = r3; // mr
    r4 = /* load */ r4, 0x28(r23); // lwz
    r3 = 0xa0; // li
    // stwx r0, r4, r30
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058ebf4:
    r4 = /* load */ r4, 0x14(r23); // lwz
    r6 = 1; // li
    r5 = /* load */ r5, 0(r29); // lwz
    sub_0x8059aa84();
    r4 = /* load */ r4, 0x2c(r23); // lwz
    // stwx r3, r4, r30
    r3 = /* load */ r3, 0x28(r23); // lwz
    r4 = r24; // mr
    r6 = /* load */ r6, 0(r29); // lwz
    r5 = r26; // mr
    r3 = /* load */ r3, r3, r30; // lwzx
    r7 = /* load */ r7, 0(r31); // lwz
    sub_0x80598ba0();
    r30 = r30 + 4; // addi
    r26 = r26 + 1; // addi
    r31 = r31 + 4; // addi
    r29 = r29 + 4; // addi
    r25 = r25 + 1; // addi
    // cmpw r25, r28
    L_8058eb2c:
    // lmw r21, 0x54(r1)
    r0 = /* load */ r0, 0x84(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x80
}
