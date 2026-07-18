// Decompiled from StaticR.rel
// Address: 0x80589348
// Size: 248 bytes (62 instructions)
// Stack frame: 0x0040
// Calls: 0x80555bf4, 0x80555bf4, 0x805903ec, 0x8059c788, 0x805907bc

void sub_80589348(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x40(r1)
    // mflr r0
    // stw r0, 0x44(r1)
    r5 = r1 + 8; // addi
    // stw r31, 0x3c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x38(r1)
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    // stw r29, 0x34(r1)
    r29 = r3; // mr
    r4 = /* load */ r4, 0x14(r3); // lhz
    r0 = /* load */ r0, 0xf2(r30); // lha
    r0 = r4 + r0; // add
    // sth r0, 0x14(r3)
    // sth r0, 8(r1)
    // .byte 0xe0, 0x25, 0xb0, 0x00
    f0 = /* load */ f0, 0x50(r31); // lfs
    f1 = f0 * f1; // fmuls
    sub_0x80555bf4();
    r3 = /* load */ r3, 0x10(r29); // lwz
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    f0 = /* load */ f0, 0xf4(r30); // lfs
    // stw r3, 0x24(r1)
    f3 = f0 * f1; // fmuls
    f2 = /* load */ f2, 0x90(r31); // lfd
    // stw r0, 0x20(r1)
    f0 = /* load */ f0, 0xf8(r30); // lfs
    f1 = /* load */ f1, 0x20(r1); // lfd
    f1 = f1 - f2; // fsubs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805893dc:
    f1 = /* load */ f1, 0x18(r29); // lfs
    f0 = /* load */ f0, 0xfc(r30); // lfs
    f0 = f1 * f0; // fmuls
    // stfs f0, 0x18(r29)
    f0 = /* load */ f0, 0x54(r31); // lfs
    r3 = r1 + 0x10; // addi
    f1 = /* load */ f1, 0(r31); // lfs
    f2 = f0 * f3; // fmuls
    f0 = /* load */ f0, 0x18(r29); // lfs
    f3 = f1; // fmr
    f2 = f2 * f0; // fmuls
    // stfs f2, 0x1c(r29)
    sub_0x80555bf4();
    r3 = r29; // mr
    sub_0x805903ec();
    r4 = r1 + 0x10; // addi
    sub_0x8059c788();
    r3 = r29; // mr
    sub_0x805907bc();
    f0 = /* load */ f0, 0x18(r31); // lfs
    // stfs f0, 0x224(r3)
    r31 = /* load */ r31, 0x3c(r1); // lwz
    r30 = /* load */ r30, 0x38(r1); // lwz
    r29 = /* load */ r29, 0x34(r1); // lwz
    r0 = /* load */ r0, 0x44(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x40
}
