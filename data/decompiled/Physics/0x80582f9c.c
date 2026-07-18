// Decompiled from StaticR.rel
// Address: 0x80582f9c
// Size: 840 bytes (210 instructions)
// Stack frame: 0x0030
// Calls: 0x805908b4, 0x80590a9c, 0x806a5d24, 0x805907d4, 0x80708a6c, 0x80590e80, 0x805907f0, 0x80590a9c, 0x806a5ea0, 0x80590a80, 0x807cbb5c, 0x80591084, 0x8059045c, 0x805907f0, 0x80591480, 0x80591800

void sub_80582f9c(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    // cmpwi r4, 0
    // stw r0, 0x34(r1)
    // stw r31, 0x2c(r1)
    // stw r30, 0x28(r1)
    r30 = r4; // mr
    // stw r29, 0x24(r1)
    r29 = r3; // mr
    L_80582fcc:
    r31 = r5; // mr
    goto L_80582fd0;
    r31 = /* load */ r31, 0xfc(r3); // lha
    // cmpwi r31, 2
    L_80583258:
    r3 = r29; // mr
    sub_0x805908b4();
    r0 = /* load */ r0, 0x6c(r3); // lwz
    // cmpwi r31, 3
    r31 = (int16_t)r0; // extsh
    L_80583028:
    // xoris r3, r31, 0x8000
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    // stw r3, 0xc(r1)
    r4 = (uint32_t)0 << 16; // lis
    f2 = /* load */ f2, 0(r4); // lfd
    r3 = (uint32_t)0 << 16; // lis
    // stw r0, 8(r1)
    f0 = /* load */ f0, 0(r3); // lfs
    f1 = /* load */ f1, 8(r1); // lfd
    f1 = f1 - f2; // fsubs
    f0 = f1 * f0; // fmuls
    f0 = (int)f0; // fctiwz
    // stfd f0, 0x10(r1)
    r31 = /* load */ r31, 0x14(r1); // lwz
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r0 = r3 + 0x100; // addi
    r5 = 1; // li
    r7 = /* load */ r7, 4(r4); // lwz
    r4 = 1; // li
    r6 = 1; // li
    r3 = /* load */ r3, 0xc(r7); // lwz
    r0 = r3 & r0; // and.
    L_80583060:
    r0 = /* load */ r0, 4(r7); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_80583060:
    r6 = 0; // li
    // cmpwi r6, 0
    L_80583078:
    r0 = /* load */ r0, 0x14(r7); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_80583078:
    r4 = 0; // li
    // cmpwi r4, 0
    L_80583090:
    r0 = /* load */ r0, 8(r7); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80583090:
    r5 = 0; // li
    // cmpwi r5, 0
    L_80583258:
    r0 = /* load */ r0, 4(r7); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_805830ac:
    // cmpwi r30, 0
    L_80583258:
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5d24();
    r3 = r29; // mr
    sub_0x805907d4();
    sub_0x80708a6c();
    r0 = /* load */ r0, 0x118(r29); // lhz
    r4 = 0; // li
    // clrlwi. r0, r0, 0x1f
    L_805830f8:
    r0 = /* load */ r0, 0x10c(r29); // lha
    r3 = (int16_t)r31; // extsh
    // cmpw r3, r0
    L_80583118:
    r0 = /* load */ r0, 0x118(r29); // lhz
    r3 = (uint32_t)0 << 16; // lis
    // sth r31, 0x10c(r29)
    r4 = 1; // li
    // ori r0, r0, 1
    // sth r0, 0x118(r29)
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x124(r29)
    // cmpwi r4, 0
    L_80583190:
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = r29; // mr
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // oris r0, r0, 0x10
    // stw r0, 4(r4)
    f1 = /* load */ f1, 0x124(r29); // lfs
    sub_0x80590e80();
    r3 = r29; // mr
    r4 = 6; // li
    sub_0x805907f0();
    r3 = r29; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    r0 = ((_rotl(r3, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, 0(r4); // lwz
    // clrlwi r4, r31, 0x10
    r3 = /* load */ r3, 0x68(r3); // lwz
    r3 = /* load */ r3, r3, r0; // lwzx
    sub_0x806a5ea0();
    r3 = r29; // mr
    sub_0x80590a80();
    sub_0x807cbb5c();
    r3 = r29; // mr
    r4 = 4; // li
    r5 = 0; // li
    r6 = 1; // li
    sub_0x80591084();
    r4 = /* load */ r4, 0(r29); // lwz
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
    r3 = r29; // mr
    r6 = /* load */ r6, 4(r4); // lwz
    r4 = 5; // li
    r5 = 1; // li
    r0 = /* load */ r0, 8(r6); // lwz
    // oris r0, r0, 0x10
    // stw r0, 8(r6)
    // sth r31, 0x102(r29)
    sub_0x8059045c();
    r3 = r29; // mr
    r4 = 6; // li
    sub_0x805907f0();
    r3 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r3); // lwz
    r3 = /* load */ r3, 0(r4); // lwz
    r0 = /* load */ r0, 0xb70(r5); // lwz
    // cmpwi r0, 4
    L_80583204:
    r0 = /* load */ r0, 0xb9e(r5); // lhz
    // cmpwi r0, 0
    L_80583204:
    r4 = /* load */ r4, 0x10(r3); // lwz
    r3 = /* load */ r3, 8(r4); // lwz
    r0 = r3 + 1; // addi
    // stw r0, 8(r4)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 0(r3); // lwz
    r4 = /* load */ r4, 0x34(r3); // lwz
    // cmpwi r4, 0
    L_80583224:
    r3 = /* load */ r3, 4(r4); // lwz
    r0 = r3 + 1; // addi
    // stw r0, 4(r4)
    r3 = /* load */ r3, 0(r29); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_80583258:
    r0 = /* load */ r0, 0xfc(r29); // lha
    r3 = r29; // mr
    r30 = (int8_t)r0; // extsb
    sub_0x80591480();
    // stb r30, 0x58(r3)
    r3 = r29; // mr
    r4 = 0x1d; // li
    sub_0x80591800();
    r0 = 0; // li
    // sth r0, 0xfc(r29)
    r31 = /* load */ r31, 0x2c(r1); // lwz
    r30 = /* load */ r30, 0x28(r1); // lwz
    r29 = /* load */ r29, 0x24(r1); // lwz
    r0 = /* load */ r0, 0x34(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xb, 0xb)); // rlwinm.
    // beqlr 
    r4 = /* load */ r4, 0x102(r3); // lha
    r0 = r4 + -1; // addi
    // sth r0, 0x102(r3)
    r0 = (int16_t)r0; // extsh.
    // bgtlr 
    r4 = /* load */ r4, 0(r3); // lwz
    r0 = 0; // li
    r5 = /* load */ r5, 4(r4); // lwz
    r4 = /* load */ r4, 8(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r4, 8(r5)
    // sth r0, 0x102(r3)
    r4 = /* load */ r4, 0(r3); // lwz
    r0 = 0; // li
    r5 = /* load */ r5, 4(r4); // lwz
    r4 = /* load */ r4, 8(r5); // lwz
    r4 = ((_rotl(r4, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r4, 8(r5)
    // sth r0, 0x102(r3)
}
