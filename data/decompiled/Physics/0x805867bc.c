// Decompiled from StaticR.rel
// Address: 0x805867bc
// Size: 608 bytes (152 instructions)
// Stack frame: 0x0050
// Calls: 0x805902a4, 0x8059035c, 0x805903d0, 0x8059032c, 0x8081e124, 0x8081e150, 0x8059088c, 0x805758d8, 0x80590f78, 0x80590a9c, 0x8081e13c, 0x806adef8, 0x80590fb0, 0x805908b4

void sub_805867bc(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x50(r1)
    // mflr r0
    // stw r0, 0x54(r1)
    // stfd f31, 0x40(r1)
    // xsmaddmsp f31, f1, f0
    r4 = (uint32_t)0 << 16; // lis
    // stw r31, 0x3c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x38(r1)
    r30 = r3; // mr
    // stw r29, 0x34(r1)
    r5 = /* load */ r5, 0(r3); // lwz
    r5 = /* load */ r5, 4(r5); // lwz
    r0 = /* load */ r0, 8(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xb, 9)); // rlwinm
    // stw r0, 8(r5)
    r4 = /* load */ r4, 0(r4); // lwz
    r0 = /* load */ r0, 0x50(r4); // lwz
    // cmpwi r0, 0
    L_805869f8:
    sub_0x805902a4();
    f0 = /* load */ f0, 4(r3); // lfs
    r4 = 0; // li
    f1 = /* load */ f1, 0x14(r3); // lfs
    f2 = /* load */ f2, 0x24(r3); // lfs
    r3 = r30; // mr
    // stfs f0, 0x20(r1)
    // stfs f1, 0x24(r1)
    // stfs f2, 0x28(r1)
    sub_0x8059035c();
    r5 = /* load */ r5, 0(r3); // lwz
    r29 = 0; // li
    r4 = /* load */ r4, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // stw r5, 0x14(r1)
    // stw r4, 0x18(r1)
    // stw r0, 0x1c(r1)
    goto L_805868b0;
    r3 = r30; // mr
    // clrlwi r4, r29, 0x18
    sub_0x805903d0();
    // clrlwi. r0, r29, 0x18
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // stw r5, 8(r1)
    // stw r4, 0xc(r1)
    // stw r0, 0x10(r1)
    L_80586894:
    f1 = /* load */ f1, 0xc(r1); // lfs
    f0 = /* load */ f0, 0x18(r1); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805868ac:
    f2 = /* load */ f2, 8(r1); // lfs
    f1 = /* load */ f1, 0xc(r1); // lfs
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f2, 0x14(r1)
    // stfs f1, 0x18(r1)
    // stfs f0, 0x1c(r1)
    r29 = r29 + 1; // addi
    r3 = r30; // mr
    sub_0x8059032c();
    // clrlwi r3, r3, 0x10
    // clrlwi r0, r29, 0x18
    // cmpw r0, r3
    L_80586858:
    f1 = /* load */ f1, 0x18(r1); // lfs
    sub_0x8081e124();
    f31 = -f1; // fneg
    sub_0x8081e150();
    f0 = /* load */ f0, 0x18(r1); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586934:
    r3 = r30; // mr
    sub_0x8059088c();
    r4 = 1; // li
    r5 = 0; // li
    r6 = 0; // li
    sub_0x805758d8();
    r3 = r30; // mr
    sub_0x80590f78();
    r3 = r30; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r29 = /* load */ r29, r3, r0; // lwzx
    sub_0x8081e13c();
    r3 = r29; // mr
    sub_0x806adef8();
    r3 = r30; // mr
    sub_0x80590fb0();
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x1f, 0x00, 0x40
    L_805869f8:
    f0 = /* load */ f0, 0xcc(r31); // lfs
    r3 = /* load */ r3, 0(r30); // lwz
    f31 = f31 / f0; // fdivs
    f0 = /* load */ f0, 4(r31); // lfs
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // oris r0, r0, 0x20
    // stw r0, 8(r3)
    // .byte 0xfc, 0x00, 0xf8, 0x40
    L_8058696c:
    f31 = f0; // fmr
    r3 = /* load */ r3, 0(r30); // lwz
    r5 = 1; // li
    r4 = /* load */ r4, 4(r3); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_8058699c:
    r3 = 0x2801 + ((uint32_t)0x2801 << 16); // lis
    r4 = /* load */ r4, 0xc(r4); // lwz
    r0 = r3 + -0x8000; // addi
    r0 = r4 & r0; // and.
    L_8058699c:
    r5 = 0; // li
    // cmpwi r5, 0
    L_805869f8:
    r3 = r30; // mr
    sub_0x805908b4();
    f0 = /* load */ f0, 0x7c(r3); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 4(r31); // lfs
    f0 = f1 - f0; // fsubs
    f0 = f0 * f31; // fmuls
    f0 = f1 - f0; // fsubs
    // stfs f0, 0xb8(r30)
    f0 = /* load */ f0, 0(r3); // lfs
    // .byte 0xfc, 0x1f, 0x00, 0x40
    // cror cr0eq, cr0gt, cr0eq
    L_805869f8:
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 0(r3); // lwz
    r4 = /* load */ r4, 0x34(r3); // lwz
    // cmpwi r4, 0
    L_805869f8:
    r3 = /* load */ r3, 8(r4); // lwz
    r0 = r3 + 1; // addi
    // stw r0, 8(r4)
    // .byte 0xe3, 0xe1, 0x00, 0x48
    r0 = /* load */ r0, 0x54(r1); // lwz
    f31 = /* load */ f31, 0x40(r1); // lfd
    r31 = /* load */ r31, 0x3c(r1); // lwz
    r30 = /* load */ r30, 0x38(r1); // lwz
    r29 = /* load */ r29, 0x34(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
