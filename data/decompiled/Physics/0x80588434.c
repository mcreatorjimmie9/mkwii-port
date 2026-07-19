// Decompiled from StaticR.rel
// Address: 0x80588434
// Size: 932 bytes (233 instructions)
// Stack frame: 0x0040
// Calls: indirect, 0x8059045c, indirect, indirect, 0x8059040c, 0x8059040c, indirect, 0x8059040c

void sub_80588434(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x40(r1)
    // mflr r0
    // stw r0, 0x44(r1)
    // stw r31, 0x3c(r1)
    r31 = (uint32_t)0 << 16; // lis
    r31 = r31 + 0; // addi
    // stw r30, 0x38(r1)
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    // stw r29, 0x34(r1)
    r29 = r3; // mr
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x74(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = /* load */ r3, 0x2b6(r29); // lha
    r0 = r3 + -1; // addi
    // sth r0, 0x2b6(r29)
    r0 = (int16_t)r0; // extsh.
    L_8058848c:
    r0 = 0; // li
    // sth r0, 0x2b6(r29)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 2)); // rlwinm.
    L_805885e8:
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1c)); // rlwinm.
    L_805884c0:
    f1 = /* load */ f1, 4(r31); // lfs
    r3 = r29; // mr
    r4 = 6; // li
    r5 = 1; // li
    sub_0x8059045c();
    r4 = /* load */ r4, 0(r29); // lwz
    r5 = 0; // li
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80588514:
    r3 = /* load */ r3, 4(r4); // lwz
    f0 = /* load */ f0, 0xb8(r30); // lfs
    f1 = /* load */ f1, 0x88(r3); // lfs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80588514:
    r3 = /* load */ r3, 0x2bc(r29); // lha
    r0 = r3 + 1; // addi
    // sth r0, 0x2bc(r29)
    r3 = (int16_t)r0; // extsh
    r0 = /* load */ r0, 0x100(r30); // lha
    // cmpw r3, r0
    L_8058851c:
    r5 = 1; // li
    goto L_8058851c;
    r0 = 0; // li
    // sth r0, 0x2bc(r29)
    r4 = /* load */ r4, 0x2a8(r29); // lwz
    r3 = /* load */ r3, 0x2c0(r29); // lwz
    r4 = r4 + 1; // addi
    // stw r4, 0x2a8(r29)
    r0 = /* load */ r0, 0x2c(r3); // lha
    // cmplw r4, r0
    L_8058856c:
    // cmpwi r5, 0
    L_8058856c:
    r12 = /* load */ r12, 0xc(r29); // lwz
    r3 = r29; // mr
    r12 = /* load */ r12, 0x3c(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // cmpwi r3, 0
    L_80588584:
    r3 = /* load */ r3, 0x2a8(r29); // lwz
    r0 = /* load */ r0, 0x1f4(r30); // lha
    // cmplw r3, r0
    L_80588584:
    r12 = /* load */ r12, 0xc(r29); // lwz
    r3 = r29; // mr
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    goto L_8058864c;
    f1 = /* load */ f1, 0x2a0(r29); // lfs
    r3 = r29; // mr
    f0 = /* load */ f0, 0x1d0(r30); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x2a0(r29)
    sub_0x8059040c();
    r0 = /* load */ r0, 0xa4(r3); // lwz
    // stw r0, 0x20(r1)
    r4 = /* load */ r4, 0xa8(r3); // lwz
    f1 = /* load */ f1, 0x20(r1); // lfs
    f0 = /* load */ f0, 0x88(r31); // lfs
    r0 = /* load */ r0, 0xac(r3); // lwz
    r3 = r29; // mr
    f0 = f1 * f0; // fmuls
    // stw r4, 0x24(r1)
    // stw r0, 0x28(r1)
    // stfs f0, 0x20(r1)
    sub_0x8059040c();
    f0 = /* load */ f0, 0x20(r1); // lfs
    // stfs f0, 0xa4(r3)
    f0 = /* load */ f0, 0x24(r1); // lfs
    // stfs f0, 0xa8(r3)
    f0 = /* load */ f0, 0x28(r1); // lfs
    // stfs f0, 0xac(r3)
    goto L_8058864c;
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_80588608:
    f1 = /* load */ f1, 0x2a0(r29); // lfs
    f0 = /* load */ f0, 0x1d4(r30); // lfs
    f0 = f1 - f0; // fsubs
    // stfs f0, 0x2a0(r29)
    goto L_8058864c;
    f1 = /* load */ f1, 0x2a0(r29); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_8058864c:
    f1 = /* load */ f1, 0x2b8(r29); // lfs
    f0 = /* load */ f0, 0x1dc(r30); // lfs
    f1 = f1 - f0; // fsubs
    // stfs f1, 0x2b8(r29)
    f0 = /* load */ f0, 0x1e0(r30); // lfs
    f0 = -f0; // fneg
    // .byte 0xfc, 0x00, 0x08, 0x40
    L_8058863c:
    // stfs f0, 0x2b8(r29)
    f1 = /* load */ f1, 0x2a0(r29); // lfs
    f0 = /* load */ f0, 0x2b8(r29); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0x2a0(r29)
    f1 = /* load */ f1, 0(r31); // lfs
    f0 = /* load */ f0, 0x2a0(r29); // lfs
    f2 = /* load */ f2, 0x2a4(r29); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80588668:
    // stfs f1, 0x2a0(r29)
    goto L_80588674;
    // .byte 0xfc, 0x02, 0x00, 0x40
    L_80588674:
    // stfs f2, 0x2a0(r29)
    f1 = /* load */ f1, 0x2a0(r29); // lfs
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_805887a8:
    r0 = /* load */ r0, 0x74(r29); // lwz
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    r3 = r4 + 0; // addi
    r5 = /* load */ r5, 0x78(r29); // lwz
    // stw r5, 0x18(r1)
    f2 = /* load */ f2, 0x14(r1); // lfs
    f0 = /* load */ f0, 0(r4); // lfs
    r0 = /* load */ r0, 0x7c(r29); // lwz
    f2 = f2 * f0; // fmuls
    // stw r0, 0x1c(r1)
    f1 = /* load */ f1, 0x18(r1); // lfs
    f0 = /* load */ f0, 4(r3); // lfs
    f4 = /* load */ f4, 0x1c(r1); // lfs
    f1 = f1 * f0; // fmuls
    f3 = /* load */ f3, 8(r3); // lfs
    f0 = /* load */ f0, 0x1f8(r30); // lfs
    f3 = f4 * f3; // fmuls
    f1 = f2 + f1; // fadds
    f1 = f3 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80588704:
    r3 = /* load */ r3, 0x2a8(r29); // lwz
    r0 = /* load */ r0, 0x1f4(r30); // lha
    // cmplw r3, r0
    L_80588704:
    r12 = /* load */ r12, 0xc(r29); // lwz
    r3 = r29; // mr
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    goto L_80588790;
    f3 = fabs(f1); // fabs
    f0 = /* load */ f0, 0(r31); // lfs
    f2 = /* load */ f2, 4(r31); // lfs
    r3 = r29; // mr
    f1 = /* load */ f1, 0x2a0(r29); // lfs
    f2 = f2 - f3; // fsubs
    // stfs f0, 0xc(r1)
    f1 = f1 * f2; // fmuls
    // stfs f0, 0x10(r1)
    f0 = -f1; // fneg
    // stfs f0, 8(r1)
    sub_0x8059040c();
    f2 = /* load */ f2, 0xe4(r3); // lfs
    f0 = /* load */ f0, 8(r1); // lfs
    f1 = /* load */ f1, 0xc(r1); // lfs
    f2 = f2 + f0; // fadds
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f2, 0xe4(r3)
    f2 = /* load */ f2, 0xe8(r3); // lfs
    f1 = f2 + f1; // fadds
    // stfs f1, 0xe8(r3)
    f1 = /* load */ f1, 0xec(r3); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 0xec(r3)
    r0 = /* load */ r0, 0x2ac(r29); // lbz
    // cmpwi r0, 0
    L_80588790:
    r3 = /* load */ r3, 0x2b4(r29); // lhz
    r0 = r3 + 1; // addi
    // sth r0, 0x2b4(r29)
    r0 = /* load */ r0, 0x1e4(r30); // lha
    // cmpw r3, r0
    L_80588790:
    r0 = 0; // li
    // stb r0, 0x2ac(r29)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    // ori r0, r0, 0x10
    // stw r0, 0xc(r3)
    goto L_805887bc;
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1c, 0x1a)); // rlwinm
    // stw r0, 0xc(r3)
    r0 = /* load */ r0, 0x44(r1); // lwz
    r31 = /* load */ r31, 0x3c(r1); // lwz
    r30 = /* load */ r30, 0x38(r1); // lwz
    r29 = /* load */ r29, 0x34(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x40
}
