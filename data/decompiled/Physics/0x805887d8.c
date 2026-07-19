// Decompiled from StaticR.rel
// Address: 0x805887d8
// Size: 440 bytes (110 instructions)
// Stack frame: 0x0010
// Calls: 0x80590434, indirect, indirect

void sub_805887d8(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x80590434();
    r4 = /* load */ r4, 0(r31); // lwz
    r3 = /* load */ r3, 0x3a(r3); // lbz
    r4 = /* load */ r4, 4(r4); // lwz
    r5 = /* load */ r5, 4(r4); // lwz
    r0 = ((_rotl(r5, 0)) & _mask(2, 2)); // rlwinm.
    L_80588858:
    // cmpwi r3, 1
    L_8058888c:
    r0 = ((_rotl(r5, 0)) & _mask(0xd, 0xd)); // rlwinm.
    L_8058888c:
    r3 = 0x3008 + ((uint32_t)0x3008 << 16); // lis
    r0 = r3 + 0x68; // addi
    r0 = r5 & r0; // and.
    L_8058888c:
    r0 = /* load */ r0, 8(r4); // lwz
    // clrlwi. r0, r0, 0x1f
    L_8058888c:
    r0 = /* load */ r0, 0x2b6(r31); // lha
    // cmpwi r0, 0
    L_8058888c:
    r12 = /* load */ r12, 0xc(r31); // lwz
    r3 = r31; // mr
    r12 = /* load */ r12, 0x6c(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    goto L_8058888c;
    // cmpwi r3, 2
    L_8058888c:
    r0 = /* load */ r0, 0x2b6(r31); // lha
    // cmpwi r0, 0
    L_8058888c:
    r12 = /* load */ r12, 0xc(r31); // lwz
    r3 = r31; // mr
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0(r3); // lha
    // sth r0, 0x2b6(r31)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
    r3 = /* load */ r3, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r4); // lfs
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 2)); // rlwinm.
    // beqlr 
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
    r0 = /* load */ r0, 0xfc(r3); // lha
    r6 = (uint32_t)0 << 16; // lis
    r6 = r6 + 0; // addi
    // cmpwi r0, 2
    // bgelr 
    // cmpwi r0, 1
    r8 = /* load */ r8, 0x3d2(r6); // lha
    r7 = /* load */ r7, 0x3d0(r6); // lha
    // bnelr 
    r5 = /* load */ r5, 0xfe(r3); // lha
    r4 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0xcc(r3); // lwz
    r5 = r5 + r7; // add
    // sth r5, 0xfe(r3)
    // cmpwi r0, -1
    r0 = /* load */ r0, 0x3d8(r6); // lha
    r7 = /* load */ r7, 0(r4); // lha
    f1 = /* load */ f1, 0x3dc(r6); // lfs
    r5 = r0; // mr
    L_80588920:
    r5 = r7; // mr
    r7 = r0; // mr
    r4 = /* load */ r4, 0(r3); // lwz
    f0 = -f1; // fneg
    r4 = /* load */ r4, 4(r4); // lwz
    f2 = /* load */ f2, 0x88(r4); // lfs
    // .byte 0xfc, 0x02, 0x00, 0x40
    L_80588948:
    r0 = /* load */ r0, 0xfe(r3); // lha
    r0 = r0 + r5; // add
    // sth r0, 0xfe(r3)
    goto L_8058895c;
    // .byte 0xfc, 0x02, 0x08, 0x40
    L_8058895c:
    r0 = /* load */ r0, 0xfe(r3); // lha
    r0 = r0 + r7; // add
    // sth r0, 0xfe(r3)
    r0 = /* load */ r0, 0xfe(r3); // lha
    // cmpw r8, r0
    L_80588974:
    // sth r8, 0xfe(r3)
    r0 = 1; // li
    goto L_80588978;
    r0 = 0; // li
    // cmpwi r0, 0
    // beqlr 
    r4 = /* load */ r4, 0xfc(r3); // lha
    r0 = r4 + 1; // addi
    // sth r0, 0xfc(r3)
}
