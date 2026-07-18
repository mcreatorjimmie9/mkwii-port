// Decompiled from StaticR.rel
// Address: 0x80586a1c
// Size: 984 bytes (246 instructions)
// Stack frame: 0x0060
// Calls: 0x80590434, 0x8059040c, 0x8059040c, 0x80555bf4, 0x8059040c, 0x80555bf4, 0x8053954c, 0x80555bf4, 0x80555bf4, 0x8059040c, 0x8059040c, 0x8059040c, 0x8059040c

void sub_80586a1c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x60(r1)
    // mflr r0
    // stw r0, 0x64(r1)
    // stfd f31, 0x50(r1)
    // xscmpgtdp vs31, f1, f0
    // stw r31, 0x4c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x48(r1)
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    // stw r29, 0x44(r1)
    r29 = r3; // mr
    f1 = /* load */ f1, 0xf4(r3); // lfs
    f0 = /* load */ f0, 0x268(r30); // lfs
    r4 = /* load */ r4, 0(r3); // lwz
    f0 = f1 * f0; // fmuls
    // stfs f0, 0xf4(r3)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xd, 0xd)); // rlwinm.
    L_80586d34:
    r4 = /* load */ r4, 8(r4); // lwz
    r0 = ((_rotl(r4, 0)) & _mask(0x1b, 0x1c)); // rlwinm.
    L_80586d34:
    // clrlwi. r0, r4, 0x1f
    L_80586d34:
    r0 = ((_rotl(r4, 0)) & _mask(0x15, 0x15)); // rlwinm.
    L_80586d34:
    sub_0x80590434();
    // cmpwi r3, 0
    L_80586d34:
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    f3 = /* load */ f3, 0x8c(r4); // lfs
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x19)); // rlwinm.
    L_80586ae0:
    r3 = /* load */ r3, 0x258(r29); // lwz
    r0 = /* load */ r0, 0x10(r3); // lwz
    // cmpwi r0, 6
    L_80586ae0:
    f1 = /* load */ f1, 0xf8(r31); // lfs
    f0 = /* load */ f0, 4(r31); // lfs
    f3 = f3 + f1; // fadds
    // .byte 0xfc, 0x00, 0x18, 0x40
    L_80586ae0:
    f3 = f0; // fmr
    r3 = /* load */ r3, 0x1c(r4); // lwz
    r0 = /* load */ r0, 0x24(r30); // lha
    // cmplw r3, r0
    L_80586b18:
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    // stw r3, 0x3c(r1)
    f2 = /* load */ f2, 0x90(r31); // lfd
    // stw r0, 0x38(r1)
    f0 = /* load */ f0, 0xa8(r31); // lfs
    f1 = /* load */ f1, 0x38(r1); // lfd
    f1 = f1 - f2; // fsubs
    f0 = f1 / f0; // fdivs
    f3 = f3 * f0; // fmuls
    goto L_80586b48;
    f1 = fabs(f3); // fabs
    f0 = /* load */ f0, 0x40(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586b48:
    f0 = /* load */ f0, 0x26c(r30); // lfs
    f1 = /* load */ f1, 0xf4(r29); // lfs
    f0 = -f0; // fneg
    f2 = /* load */ f2, 0x270(r30); // lfs
    f0 = f0 - f1; // fsubs
    f0 = f2 * f0; // fmuls
    f0 = f1 + f0; // fadds
    // stfs f0, 0xf4(r29)
    f1 = /* load */ f1, 0x260(r30); // lfs
    f0 = /* load */ f0, 0xf4(r29); // lfs
    f1 = f3 * f1; // fmuls
    f0 = f0 + f1; // fadds
    // stfs f0, 0xf4(r29)
    f2 = /* load */ f2, 0x264(r30); // lfs
    f1 = -f2; // fneg
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586b74:
    // stfs f1, 0xf4(r29)
    goto L_80586b80;
    // .byte 0xfc, 0x02, 0x00, 0x40
    L_80586b80:
    // stfs f2, 0xf4(r29)
    f0 = /* load */ f0, 0(r31); // lfs
    r3 = r29; // mr
    f1 = /* load */ f1, 0xf4(r29); // lfs
    // stfs f1, 0x14(r1)
    // stfs f0, 0x18(r1)
    // stfs f0, 0x1c(r1)
    sub_0x8059040c();
    f2 = /* load */ f2, 0xe4(r3); // lfs
    f0 = /* load */ f0, 0x14(r1); // lfs
    f1 = /* load */ f1, 0x18(r1); // lfs
    f2 = f2 + f0; // fadds
    f0 = /* load */ f0, 0x1c(r1); // lfs
    // stfs f2, 0xe4(r3)
    f2 = /* load */ f2, 0xe8(r3); // lfs
    f1 = f2 + f1; // fadds
    // stfs f1, 0xe8(r3)
    f1 = /* load */ f1, 0xec(r3); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0xec(r3)
    r3 = /* load */ r3, 0(r29); // lwz
    r0 = /* load */ r0, 0x24(r30); // lha
    r3 = /* load */ r3, 4(r3); // lwz
    r3 = /* load */ r3, 0x1c(r3); // lwz
    // cmplw r3, r0
    L_80586d34:
    r3 = r29; // mr
    sub_0x8059040c();
    r4 = (uint32_t)0 << 16; // lis
    r5 = r1 + 0x2c; // addi
    r4 = r4 + 0; // addi
    r3 = r3 + 0xf0; // addi
    sub_0x80555bf4();
    r3 = r29; // mr
    sub_0x8059040c();
    r4 = (uint32_t)0 << 16; // lis
    r5 = r1 + 0x20; // addi
    r4 = r4 + 0; // addi
    r3 = r3 + 0xf0; // addi
    sub_0x80555bf4();
    f2 = /* load */ f2, 0x2c(r1); // lfs
    r4 = r29 + 0x44; // addi
    f3 = /* load */ f3, 0x44(r29); // lfs
    r3 = r1 + 8; // addi
    f1 = /* load */ f1, 0x48(r29); // lfs
    r5 = r1 + 0x2c; // addi
    f0 = /* load */ f0, 0x30(r1); // lfs
    f2 = f3 * f2; // fmuls
    f3 = /* load */ f3, 0x4c(r29); // lfs
    f0 = f1 * f0; // fmuls
    f1 = /* load */ f1, 0x34(r1); // lfs
    f1 = f3 * f1; // fmuls
    f0 = f2 + f0; // fadds
    f31 = f1 + f0; // fadds
    sub_0x8053954c();
    f1 = /* load */ f1, 8(r1); // lfs
    f0 = /* load */ f0, 0xc(r1); // lfs
    f1 = f1 * f1; // fmuls
    f2 = /* load */ f2, 0x10(r1); // lfs
    f0 = f0 * f0; // fmuls
    f2 = f2 * f2; // fmuls
    f0 = f1 + f0; // fadds
    f1 = f2 + f0; // fadds
    sub_0x80555bf4();
    f2 = f31; // fmr
    sub_0x80555bf4();
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586c94:
    goto L_80586c98;
    f1 = -f1; // fneg
    f0 = /* load */ f0, 0x58(r31); // lfs
    f2 = /* load */ f2, 0x28(r30); // lfs
    f1 = f0 * f1; // fmuls
    f0 = /* load */ f0, 0(r31); // lfs
    f1 = f1 - f2; // fsubs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586d34:
    f31 = f1 / f2; // fdivs
    f0 = /* load */ f0, 4(r31); // lfs
    // .byte 0xfc, 0x00, 0xf8, 0x40
    L_80586cc8:
    f31 = f0; // fmr
    f1 = /* load */ f1, 0x24(r1); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586d08:
    r3 = r29; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x30(r30); // lfs
    f2 = /* load */ f2, 0x148(r3); // lfs
    r3 = r29; // mr
    f1 = f0 * f31; // fmuls
    f0 = /* load */ f0, 4(r31); // lfs
    f0 = f0 - f1; // fsubs
    f31 = f0 * f2; // fmuls
    sub_0x8059040c();
    // stfs f31, 0x148(r3)
    goto L_80586d34;
    r3 = r29; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x2c(r30); // lfs
    f2 = /* load */ f2, 0x148(r3); // lfs
    r3 = r29; // mr
    f1 = f0 * f31; // fmuls
    f0 = /* load */ f0, 4(r31); // lfs
    f0 = f0 + f1; // fadds
    f31 = f0 * f2; // fmuls
    sub_0x8059040c();
    // stfs f31, 0x148(r3)
    // .byte 0xe3, 0xe1, 0x00, 0x58
    r0 = /* load */ r0, 0x64(r1); // lwz
    f31 = /* load */ f31, 0x50(r1); // lfd
    r31 = /* load */ r31, 0x4c(r1); // lwz
    r30 = /* load */ r30, 0x48(r1); // lwz
    r29 = /* load */ r29, 0x44(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x60
    f1 = /* load */ f1, 0x20(r3); // lfs
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r4); // lfs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80586ddc:
    r4 = /* load */ r4, 0(r3); // lwz
    r5 = /* load */ r5, 4(r4); // lwz
    r5 = /* load */ r5, 4(r5); // lwz
    r0 = ((_rotl(r5, 0)) & _mask(0xb, 0xb)); // rlwinm.
    L_80586ddc:
    r0 = ((_rotl(r5, 0)) & _mask(0, 0)); // rlwinm.
    L_80586ddc:
    // clrlwi. r0, r5, 0x1f
    L_80586ddc:
    r0 = ((_rotl(r5, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80586ddc:
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    // oris r0, r0, 0x200
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 4(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    // stw r0, 4(r4)
    // stfs f0, 0x224(r3)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(7, 5)); // rlwinm
    // stw r0, 8(r3)
}
