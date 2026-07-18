// Decompiled from StaticR.rel
// Address: 0x8058212c
// Size: 332 bytes (83 instructions)
// Stack frame: 0x0010
// Calls: 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x80590a9c, 0x806a3be4, 0x8059045c

void sub_8058212c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
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
    // clrlwi. r0, r0, 0x1f
    L_8058218c:
    r0 = /* load */ r0, 0x10c(r30); // lha
    // cmpw r31, r0
    L_805821ac:
    r0 = /* load */ r0, 0x118(r30); // lhz
    r3 = (uint32_t)0 << 16; // lis
    // sth r31, 0x10c(r30)
    r4 = 1; // li
    // ori r0, r0, 1
    // sth r0, 0x118(r30)
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x124(r30)
    // cmpwi r4, 0
    L_80582224:
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
    r3 = r30; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = r31; // mr
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a3be4();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r30; // mr
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 3; // li
    r5 = 1; // li
    sub_0x8059045c();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
