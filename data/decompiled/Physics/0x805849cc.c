// Decompiled from StaticR.rel
// Address: 0x805849cc
// Size: 972 bytes (243 instructions)
// Stack frame: 0x0030
// Calls: indirect, 0x80590d60, 0x80569f6c, 0x805903ec, 0x8059cf50, 0x80590e98, 0x80591090, 0x80590e98, 0x80590ecc, 0x80590ee4, 0x8059040c, 0x805b0660, 0x80590a9c, 0x8057e348, 0x805919bc, 0x805853dc, 0x8059024c, 0x80555bf4, 0x80555bf4, 0x805aa328, 0x805907d4, 0x80709010, 0x80590a80, 0x80866b24, 0x8059045c, 0x80591084, 0x80591834

void sub_805849cc(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    r4 = 1; // li
    r5 = 1; // li
    // stw r0, 0x34(r1)
    // stw r31, 0x2c(r1)
    // stw r30, 0x28(r1)
    r30 = r3; // mr
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r30; // mr
    sub_0x80590d60();
    r4 = 1; // li
    sub_0x80569f6c();
    r3 = r30; // mr
    sub_0x805903ec();
    sub_0x8059cf50();
    r31 = 0; // li
    // sth r31, 0x118(r30)
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 4(r4)
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 8(r4)
    // sth r31, 0x102(r30)
    r4 = /* load */ r4, 0(r30); // lwz
    // stfs f0, 0x1b0(r30)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 0)); // rlwinm
    // stw r0, 4(r4)
    sub_0x80590e98();
    // sth r31, 0x1c4(r30)
    r3 = r30; // mr
    r6 = /* load */ r6, 0(r30); // lwz
    r4 = 4; // li
    r5 = 0; // li
    r7 = /* load */ r7, 4(r6); // lwz
    r6 = 1; // li
    r0 = /* load */ r0, 4(r7); // lwz
    // clrlwi r0, r0, 1
    // stw r0, 4(r7)
    sub_0x80591090();
    // sth r31, 0x12c(r30)
    r3 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 0(r30); // lwz
    f0 = /* load */ f0, 0(r3); // lfs
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x13, 0x11)); // rlwinm
    // stw r0, 8(r4)
    r0 = /* load */ r0, 0x254(r30); // lhz
    // sth r31, 0x14c(r30)
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    r4 = /* load */ r4, 0(r30); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // sth r31, 0x14e(r30)
    // sth r31, 0x150(r30)
    // sth r0, 0x254(r30)
    // stw r31, 0xec(r30)
    // stfs f0, 0xf0(r30)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // stw r0, 0xc(r4)
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0x1e)); // rlwinm
    // stw r0, 0xc(r4)
    sub_0x80590e98();
    // sth r31, 0x148(r30)
    r3 = r30; // mr
    r4 = /* load */ r4, 0(r30); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 8(r4)
    sub_0x80590ecc();
    r3 = r30; // mr
    sub_0x80590ee4();
    r3 = r30; // mr
    sub_0x8059040c();
    sub_0x805b0660();
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm.
    L_80584b94:
    r4 = /* load */ r4, 4(r4); // lwz
    r3 = r30; // mr
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(4, 2)); // rlwinm
    // stw r0, 0xc(r4)
    // sth r31, 0x18e(r30)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 1; // li
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r4, 0x10d(r3)
    r3 = r30; // mr
    sub_0x8057e348();
    r5 = /* load */ r5, 0(r30); // lwz
    r3 = r30; // mr
    r4 = 0; // li
    r5 = /* load */ r5, 4(r5); // lwz
    r0 = /* load */ r0, 0xc(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 1)); // rlwinm
    // stw r0, 0xc(r5)
    sub_0x805919bc();
    r4 = /* load */ r4, 0(r30); // lwz
    r31 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r31); // lfs
    r3 = r30; // mr
    r6 = /* load */ r6, 4(r4); // lwz
    r4 = r1 + 0x14; // addi
    r5 = r1 + 8; // addi
    r0 = /* load */ r0, 4(r6); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xd, 0xb)); // rlwinm
    // stw r0, 4(r6)
    r6 = /* load */ r6, 0(r30); // lwz
    r6 = /* load */ r6, 4(r6); // lwz
    r0 = /* load */ r0, 8(r6); // lwz
    // ori r0, r0, 0x10
    // stw r0, 8(r6)
    r6 = /* load */ r6, 0(r30); // lwz
    r6 = /* load */ r6, 4(r6); // lwz
    r0 = /* load */ r0, 0xc(r6); // lwz
    // ori r0, r0, 0x20
    // stw r0, 0xc(r6)
    r6 = /* load */ r6, 0(r30); // lwz
    r6 = /* load */ r6, 4(r6); // lwz
    r0 = /* load */ r0, 8(r6); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1b)); // rlwinm
    // stw r0, 8(r6)
    // stfs f0, 0x1e0(r30)
    sub_0x805853dc();
    f0 = /* load */ f0, 0(r31); // lfs
    r3 = r30; // mr
    // stfs f0, 0x1e4(r30)
    sub_0x8059024c();
    f3 = /* load */ f3, 0(r3); // lfs
    // stfs f3, 0x1e8(r30)
    f2 = /* load */ f2, 4(r3); // lfs
    // stfs f2, 0x1ec(r30)
    f1 = /* load */ f1, 8(r3); // lfs
    r3 = r30 + 0x1f4; // addi
    // stfs f1, 0x1f0(r30)
    f0 = /* load */ f0, 0x14(r1); // lfs
    f0 = f0 - f3; // fsubs
    // stfs f0, 0x1f4(r30)
    f0 = /* load */ f0, 0x18(r1); // lfs
    f0 = f0 - f2; // fsubs
    // stfs f0, 0x1f8(r30)
    f0 = /* load */ f0, 0x1c(r1); // lfs
    f0 = f0 - f1; // fsubs
    // stfs f0, 0x1fc(r30)
    sub_0x80555bf4();
    // stfs f1, 0x1e0(r30)
    r3 = r30 + 0x1f4; // addi
    sub_0x80555bf4();
    f2 = /* load */ f2, 0x1f4(r30); // lfs
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0x1f8(r30); // lfs
    r3 = r30 + 0x200; // addi
    f0 = /* load */ f0, 0x1fc(r30); // lfs
    r4 = r4 + 0; // addi
    // stfs f2, 0x5c(r30)
    r5 = r30 + 0x1f4; // addi
    r6 = 1; // li
    // stfs f1, 0x60(r30)
    // stfs f0, 0x64(r30)
    // stfs f2, 0x74(r30)
    // stfs f1, 0x78(r30)
    // stfs f0, 0x7c(r30)
    sub_0x805aa328();
    f0 = /* load */ f0, 0(r31); // lfs
    r3 = r30; // mr
    // stfs f0, 0x214(r30)
    // stfs f0, 0x210(r30)
    // stfs f0, 0x20c(r30)
    sub_0x805907d4();
    sub_0x80709010();
    r3 = r30; // mr
    sub_0x80590a80();
    r3 = /* load */ r3, 0xc(r3); // lwz
    r4 = 0xc; // li
    sub_0x80866b24();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r30; // mr
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 0x20; // li
    r5 = 1; // li
    sub_0x8059045c();
    r3 = r30; // mr
    r4 = 0; // li
    r5 = 0; // li
    r6 = 1; // li
    sub_0x80591084();
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_80584d80:
    r3 = /* load */ r3, 4(r4); // lwz
    r4 = 0xd; // li
    r0 = /* load */ r0, 0x80(r3); // lwz
    // cmpwi r0, 0
    L_80584d5c:
    // cmpwi r0, 1
    L_80584d64:
    // cmpwi r0, 2
    L_80584d6c:
    goto L_80584d70;
    r4 = 2; // li
    goto L_80584d70;
    r4 = 3; // li
    goto L_80584d70;
    r4 = 4; // li
    // cmpwi r4, 0xd
    L_80584d80:
    r3 = r30; // mr
    sub_0x80591834();
    r0 = /* load */ r0, 0x34(r1); // lwz
    r31 = /* load */ r31, 0x2c(r1); // lwz
    r30 = /* load */ r30, 0x28(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
