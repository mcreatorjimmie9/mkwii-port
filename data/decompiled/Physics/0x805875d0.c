// Decompiled from StaticR.rel
// Address: 0x805875d0
// Size: 1044 bytes (261 instructions)
// Stack frame: 0x0010
// Calls: 0x80537f4c, 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x80590a9c, 0x805907d4, 0x80708c08, 0x80590a9c, 0x806a5ea0, 0x8059045c, 0x80590a9c, 0x8057fd18

void sub_805875d0(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 2; // li
    sub_0x80537f4c();
    // cmpwi r3, 0
    L_80587960:
    r0 = /* load */ r0, 0x250(r30); // lwz
    // clrlwi. r0, r0, 0x1f
    L_805877e4:
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r0 = r3 + 0x100; // addi
    r5 = 1; // li
    r7 = /* load */ r7, 4(r4); // lwz
    r4 = 1; // li
    r6 = 1; // li
    r3 = /* load */ r3, 0xc(r7); // lwz
    r0 = r3 & r0; // and.
    L_80587644:
    r0 = /* load */ r0, 4(r7); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80587644:
    r6 = 0; // li
    // cmpwi r6, 0
    L_8058765c:
    r0 = /* load */ r0, 0x14(r7); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_8058765c:
    r4 = 0; // li
    // cmpwi r4, 0
    L_80587674:
    r0 = /* load */ r0, 8(r7); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80587674:
    r5 = 0; // li
    // cmpwi r5, 0
    L_805877e4:
    r4 = (uint32_t)0 << 16; // lis
    r3 = r30; // mr
    r31 = /* load */ r31, 0(r4); // lha
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5d24();
    r3 = r30; // mr
    sub_0x805907d4();
    sub_0x80708a6c();
    r0 = /* load */ r0, 0x118(r30); // lhz
    r4 = 0; // li
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_805876cc:
    r0 = /* load */ r0, 0x110(r30); // lha
    // cmpw r31, r0
    L_805876f0:
    r0 = /* load */ r0, 0x118(r30); // lhz
    r3 = (uint32_t)0 << 16; // lis
    // sth r31, 0x110(r30)
    r3 = r3 + 0; // addi
    // ori r0, r0, 4
    r4 = 1; // li
    // sth r0, 0x118(r30)
    f0 = /* load */ f0, 8(r3); // lfs
    // stfs f0, 0x124(r30)
    // cmpwi r4, 0
    L_80587768:
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // oris r0, r0, 0x10
    // stw r0, 4(r4)
    f1 = /* load */ f1, 0x124(r30); // lfs
    sub_0x80590e80();
    r3 = r30; // mr
    r4 = 6; // li
    sub_0x805907f0();
    r3 = r30; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    // clrlwi r4, r31, 0x10
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5ea0();
    r3 = r30; // mr
    sub_0x80590a80();
    sub_0x807cbb5c();
    r3 = r30; // mr
    r4 = 4; // li
    r5 = 0; // li
    r6 = 1; // li
    sub_0x80591084();
    r3 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0x148(r30); // lha
    r3 = /* load */ r3, 0(r3); // lha
    // cmpw r3, r0
    L_80587780:
    // sth r3, 0x148(r30)
    r3 = /* load */ r3, 0(r30); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // ori r0, r0, 0x80
    // stw r0, 8(r3)
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm.
    L_805877e4:
    r5 = /* load */ r5, 4(r4); // lwz
    r0 = 0; // li
    r3 = r30; // mr
    r4 = /* load */ r4, 0xc(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(4, 2)); // rlwinm
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r30)
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 1; // li
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r4, 0x10d(r3)
    r0 = /* load */ r0, 0x250(r30); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80587938:
    r7 = /* load */ r7, 0(r30); // lwz
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r0 = r3 + 0x100; // addi
    r4 = 1; // li
    r8 = /* load */ r8, 4(r7); // lwz
    r5 = 1; // li
    r6 = 1; // li
    r3 = /* load */ r3, 0xc(r8); // lwz
    r0 = r3 & r0; // and.
    L_80587828:
    r0 = /* load */ r0, 4(r8); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80587828:
    r6 = 0; // li
    // cmpwi r6, 0
    L_80587840:
    r0 = /* load */ r0, 0x14(r8); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80587840:
    r5 = 0; // li
    // cmpwi r5, 0
    L_80587858:
    r0 = /* load */ r0, 8(r8); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80587858:
    r4 = 0; // li
    // cmpwi r4, 0
    L_80587938:
    r4 = /* load */ r4, 4(r7); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 4(r4); // lwz
    // oris r0, r0, 0x8000
    // stw r0, 4(r4)
    r3 = /* load */ r3, 0(r3); // lha
    r0 = /* load */ r0, 0x148(r30); // lha
    // sth r3, 0x1c4(r30)
    // cmpw r3, r0
    L_8058788c:
    // sth r3, 0x148(r30)
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    // ori r0, r0, 0x80
    // stw r0, 8(r4)
    sub_0x805907d4();
    sub_0x80708c08();
    r3 = r30; // mr
    sub_0x80590a9c();
    r31 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r31); // lwz
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r4 = /* load */ r4, 0(r4); // lhz
    r3 = /* load */ r3, 0x68(r5); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5ea0();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r30; // mr
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 4; // li
    r5 = 1; // li
    sub_0x8059045c();
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(3, 3)); // rlwinm.
    L_80587938:
    r5 = /* load */ r5, 4(r4); // lwz
    r0 = 0; // li
    r3 = r30; // mr
    r4 = /* load */ r4, 0xc(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(4, 2)); // rlwinm
    // stw r4, 0xc(r5)
    // sth r0, 0x18e(r30)
    sub_0x80590a9c();
    r4 = /* load */ r4, 0(r31); // lwz
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r5 = 1; // li
    r3 = /* load */ r3, 0x68(r4); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    // stb r5, 0x10d(r3)
    r0 = /* load */ r0, 0x250(r30); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_80587958:
    r4 = /* load */ r4, 0(r30); // lwz
    r3 = r30; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r4 = /* load */ r4, 0x78(r4); // lwz
    sub_0x8057fd18();
    r0 = 0; // li
    // stw r0, 0x250(r30)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
    f3 = /* load */ f3, 0(r4); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f2 = /* load */ f2, 0(r5); // lfs
    f1 = /* load */ f1, 4(r4); // lfs
    f0 = /* load */ f0, 4(r5); // lfs
    f2 = f3 * f2; // fmuls
    f3 = /* load */ f3, 8(r4); // lfs
    f0 = f1 * f0; // fmuls
    f1 = /* load */ f1, 8(r5); // lfs
    f5 = /* load */ f5, 0xc(r4); // lfs
    f3 = f3 * f1; // fmuls
    f4 = /* load */ f4, 0xc(r5); // lfs
    f1 = f2 + f0; // fadds
    f2 = f5 * f4; // fmuls
    f0 = /* load */ f0, 0(r3); // lfs
    f1 = f3 + f1; // fadds
    f1 = f2 + f1; // fadds
    // .byte 0xfc, 0x00, 0x08, 0x40
    L_805879cc:
    f1 = f0; // fmr
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    // .byte 0xfc, 0x00, 0x08, 0x40
    // bgelr 
    f1 = f0; // fmr
}
