// Decompiled from StaticR.rel
// Address: 0x8058be60
// Size: 620 bytes (155 instructions)
// Stack frame: 0x0030
// Calls: 0x8058c11c, 0x80590e68, 0x805907a4, 0x8059613c, 0x8058c11c, 0x805907bc, 0x80584688, 0x80590e68, 0x80590a9c, 0x807967dc, 0x8059024c, 0x80555bf4, 0x8058c11c, 0x80590e68, 0x80590f38, 0x80590f58

void sub_8058be60(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x34(r1)
    // stw r31, 0x2c(r1)
    r31 = r3; // mr
    // stw r30, 0x28(r1)
    r30 = (uint32_t)0 << 16; // lis
    r30 = r30 + 0; // addi
    // stw r29, 0x24(r1)
    r4 = /* load */ r4, 0(r4); // lwz
    r0 = /* load */ r0, 0xb74(r4); // lwz
    // cmpwi r0, 6
    L_8058bec0:
    r0 = /* load */ r0, 0x58(r3); // lbz
    // cmpwi r0, 0
    L_8058bec0:
    r4 = r3 + 0x68; // addi
    sub_0x8058c11c();
    r3 = r31; // mr
    sub_0x80590e68();
    r0 = 1; // li
    // stb r0, 0x58(r31)
    goto L_8058c0ac;
    r4 = /* load */ r4, 0x64(r3); // lwz
    r3 = /* load */ r3, 0x18(r4); // lwz
    r0 = /* load */ r0, 0x1c(r4); // lwz
    r3 = ((_rotl(r3, 0x18)) & _mask(0x1f, 0x1f)); // rlwinm
    r0 = ((_rotl(r0, 0x18)) & _mask(0x1f, 0x1f)); // rlwinm
    // cmplw r3, r0
    L_8058bf70:
    r3 = r31; // mr
    sub_0x805907a4();
    sub_0x8059613c();
    r3 = r31; // mr
    r4 = r31 + 0x68; // addi
    sub_0x8058c11c();
    r4 = /* load */ r4, 0x68(r31); // lwz
    r3 = r31; // mr
    r0 = /* load */ r0, 0x6c(r31); // lwz
    // stw r0, 0xc(r1)
    f0 = /* load */ f0, 0x74(r30); // lfs
    // stw r4, 8(r1)
    f1 = /* load */ f1, 0xc(r1); // lfs
    r0 = /* load */ r0, 0x70(r31); // lwz
    f0 = f1 - f0; // fsubs
    // stw r0, 0x10(r1)
    // stfs f0, 0xc(r1)
    sub_0x805907bc();
    r4 = r1 + 8; // addi
    sub_0x80584688();
    r3 = r31; // mr
    sub_0x80590e68();
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = r3 + r0; // add
    sub_0x807967dc();
    r3 = /* load */ r3, 0x60(r31); // lhz
    r0 = 0; // li
    // stw r0, 0x5c(r31)
    r0 = ((_rotl(r3, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // sth r0, 0x60(r31)
    goto L_8058c0ac;
    r3 = r31; // mr
    sub_0x8059024c();
    r4 = /* load */ r4, 0(r31); // lwz
    r29 = 0; // li
    f1 = /* load */ f1, 0x68(r31); // lfs
    f0 = /* load */ f0, 0(r3); // lfs
    r4 = /* load */ r4, 4(r4); // lwz
    f5 = f1 - f0; // fsubs
    f3 = /* load */ f3, 0x6c(r31); // lfs
    f2 = /* load */ f2, 4(r3); // lfs
    r4 = /* load */ r4, 8(r4); // lwz
    f4 = f3 - f2; // fsubs
    f1 = /* load */ f1, 0x70(r31); // lfs
    f0 = /* load */ f0, 8(r3); // lfs
    r0 = ((_rotl(r4, 0)) & _mask(0x15, 0x15)); // rlwinm.
    // stfs f5, 0x14(r1)
    f3 = f1 - f0; // fsubs
    // stfs f4, 0x18(r1)
    // stfs f3, 0x1c(r1)
    L_8058c024:
    r0 = ((_rotl(r4, 0)) & _mask(0x1b, 0x1c)); // rlwinm.
    L_8058c024:
    f2 = f5 * f5; // fmuls
    f0 = /* load */ f0, 8(r30); // lfs
    f1 = f4 * f4; // fmuls
    f3 = f3 * f3; // fmuls
    f1 = f2 + f1; // fadds
    f1 = f3 + f1; // fadds
    // .byte 0xfc, 0x01, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    // mfcr r0
    r0 = ((_rotl(r0, 3)) & _mask(0x1f, 0x1f)); // rlwinm.
    L_8058c024:
    sub_0x80555bf4();
    f2 = (float)f1; // frsp
    f0 = /* load */ f0, 0x78(r30); // lfs
    // stfs f1, 0x50(r31)
    // .byte 0xfc, 0x02, 0x00, 0x40
    L_8058c020:
    f1 = /* load */ f1, 0x18(r1); // lfs
    f0 = /* load */ f0, 0x38(r30); // lfs
    f1 = fabs(f1); // fabs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_8058c024:
    r29 = 1; // li
    r0 = /* load */ r0, 0x55(r31); // lbz
    // cmpwi r0, 0
    L_8058c040:
    r0 = /* load */ r0, 0x56(r31); // lha
    // cmpwi r0, 0x190
    L_8058c040:
    r29 = 1; // li
    // cmpwi r29, 0
    L_8058c0ac:
    r3 = r31; // mr
    r4 = r31 + 0x68; // addi
    sub_0x8058c11c();
    r3 = r31; // mr
    sub_0x80590e68();
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb74(r3); // lwz
    // cmpwi r0, 6
    L_8058c0ac:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_8058c0ac:
    r0 = /* load */ r0, 0xa6(r31); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x12, 0x12)); // rlwinm.
    L_8058c098:
    r3 = r31; // mr
    sub_0x80590f38();
    r0 = /* load */ r0, 0xa6(r31); // lhz
    r0 = ((_rotl(r0, 0)) & _mask(0x11, 0x11)); // rlwinm.
    L_8058c0ac:
    r3 = r31; // mr
    sub_0x80590f58();
    r0 = /* load */ r0, 0x34(r1); // lwz
    r31 = /* load */ r31, 0x2c(r1); // lwz
    r30 = /* load */ r30, 0x28(r1); // lwz
    r29 = /* load */ r29, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
