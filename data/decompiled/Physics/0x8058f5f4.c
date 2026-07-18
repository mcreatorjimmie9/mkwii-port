// Decompiled from StaticR.rel
// Address: 0x8058f5f4
// Size: 620 bytes (155 instructions)
// Stack frame: 0x0040
// Calls: 0x80590168, 0x80592fe8, 0x80555bf4, 0x805924d8, 0x80591dfc, 0x80591fe4, 0x80555bf4, 0x80592800, 0x80592660, 0x80592598, 0x8058ddfc, 0x80555bf4, 0x80592800, 0x80592660, 0x80592598, 0x8058ddfc, 0x8058e26c, indirect, 0x80590178, 0x805906dc, 0x8056e114, 0x805906f4, 0x80598c14, 0x8059031c, 0x8059071c, 0x8059aba8, 0x8059032c

void sub_8058f5f4(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    // stwu r1, -0x40(r1)
    // mflr r0
    // stw r0, 0x44(r1)
    // stmw r23, 0x1c(r1)
    r28 = r3; // mr
    r29 = r4; // mr
    r30 = r5; // mr
    r31 = r6; // mr
    sub_0x80590168();
    sub_0x80592fe8();
    r3 = (uint32_t)0 << 16; // lis
    r4 = 0; // li
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb70(r3); // lwz
    // cmpwi r0, 7
    L_8058f640:
    // cmpwi r0, 0xa
    L_8058f640:
    r4 = 1; // li
    // cmpwi r4, 0
    L_8058f680:
    // mulli r0, r28, 0xf0
    r3 = r3 + r0; // add
    r0 = /* load */ r0, 0x38(r3); // lwz
    // cmpwi r0, 0
    L_8058f66c:
    r3 = (uint32_t)0 << 16; // lis
    r0 = 1; // li
    // stb r0, 0(r3)
    goto L_8058f680;
    // cmpwi r0, 4
    L_8058f680:
    r3 = (uint32_t)0 << 16; // lis
    r0 = 1; // li
    // stb r0, 0(r3)
    r3 = 8; // li
    sub_0x80555bf4();
    r25 = r3; // mr
    r3 = r29; // mr
    r4 = r30; // mr
    sub_0x805924d8();
    r24 = r3; // mr
    r3 = r28; // mr
    sub_0x80591dfc();
    // stw r3, 4(r25)
    r3 = r29; // mr
    r4 = r30; // mr
    sub_0x80591fe4();
    // cmpwi r31, 0
    // stw r3, 0(r25)
    L_8058f738:
    r3 = 0x80; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r23 = r3; // mr
    L_8058f7b4:
    r3 = r30; // mr
    sub_0x80592800();
    r27 = r3; // mr
    r3 = r31; // mr
    r4 = r29; // mr
    sub_0x80592660();
    r26 = r3; // mr
    r3 = r31; // mr
    r4 = r29; // mr
    sub_0x80592598();
    // stw r3, 8(r1)
    r9 = (uint32_t)0 << 16; // lis
    r3 = r23; // mr
    r4 = r28; // mr
    // stw r26, 0xc(r1)
    r5 = r29; // mr
    r6 = r30; // mr
    r7 = r31; // mr
    // stw r27, 0x10(r1)
    r8 = r25; // mr
    r10 = r24; // mr
    r9 = r9 + 0; // addi
    sub_0x8058ddfc();
    r23 = r3; // mr
    goto L_8058f7b4;
    r3 = 0x80; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r23 = r3; // mr
    L_8058f7b4:
    r3 = r30; // mr
    sub_0x80592800();
    r26 = r3; // mr
    r3 = r31; // mr
    r4 = r29; // mr
    sub_0x80592660();
    r27 = r3; // mr
    r3 = r31; // mr
    r4 = r29; // mr
    sub_0x80592598();
    // stw r3, 8(r1)
    r9 = (uint32_t)0 << 16; // lis
    r3 = r23; // mr
    r4 = r28; // mr
    // stw r27, 0xc(r1)
    r5 = r29; // mr
    r6 = r30; // mr
    r7 = r31; // mr
    // stw r26, 0x10(r1)
    r8 = r25; // mr
    r10 = r24; // mr
    r9 = r9 + 0; // addi
    sub_0x8058ddfc();
    r3 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    // stw r3, 0xc(r23)
    r3 = r23; // mr
    sub_0x8058e26c();
    r3 = /* load */ r3, 0x10(r23); // lwz
    r4 = r23 + 0x1c; // addi
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r23 + 0x1c; // addi
    sub_0x80590178();
    r3 = r23; // mr
    sub_0x805906dc();
    sub_0x8056e114();
    r26 = 0; // li
    goto L_8058f804;
    r3 = r23; // mr
    r4 = r26; // mr
    sub_0x805906f4();
    sub_0x80598c14();
    r26 = r26 + 1; // addi
    r3 = r23; // mr
    sub_0x8059031c();
    // clrlwi r0, r3, 0x10
    // cmpw r26, r0
    L_8058f7f0:
    r26 = 0; // li
    goto L_8058f834;
    r3 = r23; // mr
    r4 = r26; // mr
    sub_0x8059071c();
    sub_0x8059aba8();
    r26 = r26 + 1; // addi
    r3 = r23; // mr
    sub_0x8059032c();
    // clrlwi r0, r3, 0x10
    // cmpw r26, r0
    L_8058f820:
    r3 = r23; // mr
    // lmw r23, 0x1c(r1)
    r0 = /* load */ r0, 0x44(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x40
}
