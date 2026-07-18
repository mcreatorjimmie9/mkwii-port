// Decompiled from StaticR.rel
// Address: 0x80584d98
// Size: 1392 bytes (348 instructions)
// Stack frame: 0x00c0
// Calls: 0x805853dc, 0x80555bf4, 0x80555bf4, 0x80555bf4, 0x805aa0f0, 0x8059040c, 0x80591090, 0x80590f18, 0x8051aed0, 0x80555bf4, 0x8059040c, 0x805855fc, 0x8059040c

void sub_80584d98(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0xc0(r1)
    // mflr r0
    // stw r0, 0xc4(r1)
    // stfd f31, 0xb0(r1)
    // xxsel vs31, vs1, vs0, v2
    r4 = r1 + 0x5c; // addi
    r5 = r1 + 0x50; // addi
    // stw r31, 0xac(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0xa8(r1)
    r30 = r3; // mr
    // stw r29, 0xa4(r1)
    sub_0x805853dc();
    r5 = /* load */ r5, 0x5c(r1); // lwz
    r3 = r1 + 0x44; // addi
    r4 = /* load */ r4, 0x60(r1); // lwz
    r0 = /* load */ r0, 0x64(r1); // lwz
    // stw r5, 0x44(r1)
    // stw r4, 0x48(r1)
    f3 = /* load */ f3, 0x44(r1); // lfs
    // stw r0, 0x4c(r1)
    f2 = /* load */ f2, 0x48(r1); // lfs
    f0 = /* load */ f0, 0x1e8(r30); // lfs
    f1 = /* load */ f1, 0x4c(r1); // lfs
    f3 = f3 - f0; // fsubs
    // stfs f3, 0x44(r1)
    f0 = /* load */ f0, 0x1ec(r30); // lfs
    f2 = f2 - f0; // fsubs
    // stfs f2, 0x48(r1)
    f0 = /* load */ f0, 0x1f0(r30); // lfs
    f1 = f1 - f0; // fsubs
    // stfs f1, 0x4c(r1)
    f0 = /* load */ f0, 0x20c(r30); // lfs
    f0 = f3 - f0; // fsubs
    // stfs f0, 0x44(r1)
    f0 = /* load */ f0, 0x210(r30); // lfs
    r0 = /* load */ r0, 0x44(r1); // lwz
    f0 = f2 - f0; // fsubs
    // stfs f0, 0x48(r1)
    f0 = /* load */ f0, 0x214(r30); // lfs
    r4 = /* load */ r4, 0x48(r1); // lwz
    f0 = f1 - f0; // fsubs
    // stw r0, 0x38(r1)
    // stfs f0, 0x4c(r1)
    r0 = /* load */ r0, 0x4c(r1); // lwz
    // stw r4, 0x3c(r1)
    // stw r0, 0x40(r1)
    sub_0x80555bf4();
    f0 = /* load */ f0, 0(r31); // lfs
    f31 = f1; // fmr
    // stfs f0, 0x3c(r1)
    r3 = r1 + 0x38; // addi
    sub_0x80555bf4();
    r4 = /* load */ r4, 0x1f4(r30); // lwz
    r3 = r1 + 0x2c; // addi
    r0 = /* load */ r0, 0x1f8(r30); // lwz
    // stw r0, 0x30(r1)
    f0 = /* load */ f0, 0(r31); // lfs
    // stw r4, 0x2c(r1)
    r0 = /* load */ r0, 0x1fc(r30); // lwz
    // stw r0, 0x34(r1)
    // stfs f0, 0x30(r1)
    sub_0x80555bf4();
    f1 = /* load */ f1, 4(r31); // lfs
    r5 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0xd8(r31); // lfs
    r3 = r1 + 0x68; // addi
    // stfs f1, 0xb0(r30)
    r4 = r1 + 0x44; // addi
    r5 = r5 + 0; // addi
    // stfs f0, 0xb4(r30)
    sub_0x805aa0f0();
    f0 = /* load */ f0, 0x70(r31); // lfs
    r4 = (uint32_t)0 << 16; // lis
    r3 = r4 + 0; // addi
    f3 = /* load */ f3, 0x88(r1); // lfs
    f2 = /* load */ f2, 0(r4); // lfs
    // .byte 0xfc, 0x1f, 0x00, 0x40
    f1 = /* load */ f1, 0x78(r1); // lfs
    f7 = f3 * f2; // fmuls
    f0 = /* load */ f0, 0x68(r1); // lfs
    f4 = f1 * f2; // fmuls
    f3 = /* load */ f3, 0x8c(r1); // lfs
    f1 = f0 * f2; // fmuls
    f5 = /* load */ f5, 4(r3); // lfs
    f0 = /* load */ f0, 0x6c(r1); // lfs
    f6 = f3 * f5; // fmuls
    f2 = /* load */ f2, 0x7c(r1); // lfs
    f0 = f0 * f5; // fmuls
    f8 = /* load */ f8, 0x90(r1); // lfs
    f3 = f2 * f5; // fmuls
    f9 = /* load */ f9, 8(r3); // lfs
    f5 = /* load */ f5, 0x80(r1); // lfs
    f6 = f7 + f6; // fadds
    f2 = /* load */ f2, 0x70(r1); // lfs
    f8 = f8 * f9; // fmuls
    f3 = f4 + f3; // fadds
    f5 = f5 * f9; // fmuls
    f4 = f8 + f6; // fadds
    f2 = f2 * f9; // fmuls
    f3 = f5 + f3; // fadds
    // stfs f4, 0x40(r30)
    f0 = f1 + f0; // fadds
    // stfs f3, 0x3c(r30)
    f0 = f2 + f0; // fadds
    // stfs f3, 0x48(r30)
    // stfs f0, 0x38(r30)
    // stfs f0, 0x44(r30)
    // stfs f4, 0x4c(r30)
    L_80584f90:
    f3 = /* load */ f3, 0x38(r1); // lfs
    f2 = /* load */ f2, 0x2c(r1); // lfs
    f1 = /* load */ f1, 0x3c(r1); // lfs
    f0 = /* load */ f0, 0x30(r1); // lfs
    f2 = f3 * f2; // fmuls
    f4 = /* load */ f4, 0x40(r1); // lfs
    f1 = f1 * f0; // fmuls
    f3 = /* load */ f3, 0x34(r1); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    f3 = f4 * f3; // fmuls
    f1 = f2 + f1; // fadds
    f1 = f3 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    L_80585044:
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_805852e4:
    r4 = /* load */ r4, 4(r4); // lwz
    r3 = r30; // mr
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1c, 0x1a)); // rlwinm
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // stw r0, 0xc(r4)
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0x10(r4); // lwz
    // ori r0, r0, 0x40
    // stw r0, 0x10(r4)
    f3 = /* load */ f3, 0x20(r30); // lfs
    f2 = /* load */ f2, 0x1f4(r30); // lfs
    f1 = /* load */ f1, 0x1f8(r30); // lfs
    f0 = /* load */ f0, 0x1fc(r30); // lfs
    f2 = f3 * f2; // fmuls
    f1 = f3 * f1; // fmuls
    f0 = f3 * f0; // fmuls
    // stfs f2, 8(r1)
    // stfs f1, 0xc(r1)
    // stfs f0, 0x10(r1)
    sub_0x8059040c();
    f0 = /* load */ f0, 8(r1); // lfs
    r4 = 0; // li
    // stfs f0, 0x14c(r3)
    r5 = 0; // li
    f0 = /* load */ f0, 0xc(r1); // lfs
    r6 = 1; // li
    // stfs f0, 0x150(r3)
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f0, 0x154(r3)
    r3 = r30; // mr
    sub_0x80591090();
    r3 = r30; // mr
    sub_0x80590f18();
    goto L_805852e4;
    r4 = (uint32_t)0 << 16; // lis
    f3 = /* load */ f3, 0x88(r1); // lfs
    f2 = /* load */ f2, 0(r4); // lfs
    r3 = r4 + 0; // addi
    f1 = /* load */ f1, 0x78(r1); // lfs
    r5 = (uint32_t)0 << 16; // lis
    f7 = f3 * f2; // fmuls
    f0 = /* load */ f0, 0x68(r1); // lfs
    f4 = f1 * f2; // fmuls
    f3 = /* load */ f3, 0x8c(r1); // lfs
    f1 = f0 * f2; // fmuls
    f5 = /* load */ f5, 4(r3); // lfs
    f0 = /* load */ f0, 0x6c(r1); // lfs
    f6 = f3 * f5; // fmuls
    f2 = /* load */ f2, 0x7c(r1); // lfs
    f0 = f0 * f5; // fmuls
    f9 = /* load */ f9, 8(r3); // lfs
    f3 = f2 * f5; // fmuls
    f8 = /* load */ f8, 0x90(r1); // lfs
    f5 = /* load */ f5, 0x80(r1); // lfs
    f6 = f7 + f6; // fadds
    f2 = /* load */ f2, 0x70(r1); // lfs
    f8 = f8 * f9; // fmuls
    f3 = f4 + f3; // fadds
    r3 = /* load */ r3, 0(r30); // lwz
    f5 = f5 * f9; // fmuls
    f0 = f1 + f0; // fadds
    f2 = f2 * f9; // fmuls
    f4 = f8 + f6; // fadds
    f1 = f5 + f3; // fadds
    f0 = f2 + f0; // fadds
    // stfs f4, 0x88(r30)
    // stfs f1, 0x84(r30)
    // stfs f0, 0x80(r30)
    r4 = /* load */ r4, 4(r3); // lwz
    r3 = /* load */ r3, 0(r5); // lwz
    r0 = /* load */ r0, 0x80(r4); // lwz
    // clrlwi r4, r0, 0x10
    sub_0x8051aed0();
    r4 = /* load */ r4, 0(r3); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    r0 = /* load */ r0, 0x1a(r4); // lha
    // cmpwi r0, 0
    // slwi r0, r0, 4
    r29 = r3 + r0; // add
    L_80585104:
    r29 = r3; // mr
    f0 = /* load */ f0, 0x14(r30); // lfs
    // stfs f0, 0x20(r30)
    f0 = /* load */ f0, 8(r29); // lfs
    f7 = /* load */ f7, 0(r29); // lfs
    // .byte 0xfc, 0x1f, 0x00, 0x40
    L_80585178:
    f4 = f31 / f0; // fdivs
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x00, 0x20, 0x40
    L_80585130:
    f4 = f0; // fmr
    f3 = /* load */ f3, 0xc(r29); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x03, 0x00, 0x40
    L_80585144:
    goto L_80585148;
    f3 = /* load */ f3, 0x14(r30); // lfs
    f0 = /* load */ f0, 0(r29); // lfs
    f1 = /* load */ f1, 0xc(r29); // lfs
    f2 = f0 - f3; // fsubs
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    f0 = f4 * f2; // fmuls
    f7 = f3 + f0; // fadds
    L_80585178:
    f0 = /* load */ f0, 0x20(r30); // lfs
    // .byte 0xfc, 0x07, 0x00, 0x40
    L_80585178:
    // stfs f7, 0x20(r30)
    f2 = /* load */ f2, 0x1f4(r30); // lfs
    f1 = /* load */ f1, 0x1f8(r30); // lfs
    f0 = /* load */ f0, 0x1fc(r30); // lfs
    f6 = f7 * f2; // fmuls
    f4 = f7 * f1; // fmuls
    f5 = /* load */ f5, 0x20c(r30); // lfs
    f2 = f7 * f0; // fmuls
    f3 = /* load */ f3, 0x210(r30); // lfs
    f0 = /* load */ f0, 0x214(r30); // lfs
    f5 = f5 + f6; // fadds
    f3 = f3 + f4; // fadds
    f1 = /* load */ f1, 0(r31); // lfs
    f0 = f0 + f2; // fadds
    // stfs f5, 0x20c(r30)
    // stfs f3, 0x210(r30)
    // stfs f0, 0x214(r30)
    f0 = /* load */ f0, 4(r29); // lfs
    // stfs f1, 0x28(r1)
    // .byte 0xfc, 0x00, 0x08, 0x40
    // stfs f1, 0x24(r1)
    // stfs f1, 0x20(r1)
    L_80585220:
    f0 = /* load */ f0, 0x1e0(r30); // lfs
    f2 = /* load */ f2, 4(r31); // lfs
    f3 = f31 / f0; // fdivs
    f1 = /* load */ f1, 0xdc(r31); // lfs
    f0 = /* load */ f0, 0xe0(r31); // lfs
    f2 = f2 - f3; // fsubs
    f1 = f1 * f2; // fmuls
    f1 = f0 * f1; // fmuls
    sub_0x80555bf4();
    f0 = /* load */ f0, 4(r29); // lfs
    f2 = /* load */ f2, 0x200(r30); // lfs
    f3 = f0 * f1; // fmuls
    f1 = /* load */ f1, 0x204(r30); // lfs
    f0 = /* load */ f0, 0x208(r30); // lfs
    f2 = f3 * f2; // fmuls
    f1 = f3 * f1; // fmuls
    f0 = f3 * f0; // fmuls
    // stfs f2, 0x20(r1)
    // stfs f1, 0x24(r1)
    // stfs f0, 0x28(r1)
    f3 = /* load */ f3, 0x1e8(r30); // lfs
    r3 = r30; // mr
    f0 = /* load */ f0, 0x20c(r30); // lfs
    f2 = /* load */ f2, 0x1ec(r30); // lfs
    f5 = f3 + f0; // fadds
    f1 = /* load */ f1, 0x210(r30); // lfs
    f0 = /* load */ f0, 0x20(r1); // lfs
    f4 = f2 + f1; // fadds
    f3 = /* load */ f3, 0x1f0(r30); // lfs
    f2 = f5 + f0; // fadds
    f0 = /* load */ f0, 0x214(r30); // lfs
    f1 = /* load */ f1, 0x24(r1); // lfs
    f3 = f3 + f0; // fadds
    f0 = /* load */ f0, 0x28(r1); // lfs
    f1 = f4 + f1; // fadds
    // stfs f2, 0x14(r1)
    f0 = f3 + f0; // fadds
    // stfs f1, 0x18(r1)
    // stfs f0, 0x1c(r1)
    sub_0x8059040c();
    f0 = /* load */ f0, 0x14(r1); // lfs
    r4 = r1 + 0x44; // addi
    // stfs f0, 0x68(r3)
    f0 = /* load */ f0, 0x18(r1); // lfs
    // stfs f0, 0x6c(r3)
    f0 = /* load */ f0, 0x1c(r1); // lfs
    // stfs f0, 0x70(r3)
    r3 = r30; // mr
    f1 = /* load */ f1, 0x38(r31); // lfs
    f3 = /* load */ f3, 0x1f4(r30); // lfs
    f2 = /* load */ f2, 0x1f8(r30); // lfs
    f0 = /* load */ f0, 0x1fc(r30); // lfs
    // stfs f3, 0x5c(r30)
    // stfs f2, 0x60(r30)
    // stfs f0, 0x64(r30)
    // stfs f3, 0x74(r30)
    // stfs f2, 0x78(r30)
    // stfs f0, 0x7c(r30)
    sub_0x805855fc();
    r3 = r30; // mr
    sub_0x8059040c();
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r4); // lfs
    r4 = r4 + 0; // addi
    // stfs f0, 0x74(r3)
    f0 = /* load */ f0, 4(r4); // lfs
    // stfs f0, 0x78(r3)
    f0 = /* load */ f0, 8(r4); // lfs
    // stfs f0, 0x7c(r3)
    // .byte 0xe3, 0xe1, 0x00, 0xb8
    r0 = /* load */ r0, 0xc4(r1); // lwz
    f31 = /* load */ f31, 0xb0(r1); // lfd
    r31 = /* load */ r31, 0xac(r1); // lwz
    r30 = /* load */ r30, 0xa8(r1); // lwz
    r29 = /* load */ r29, 0xa4(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0xc0
}
