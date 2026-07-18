// Decompiled from StaticR.rel
// Address: 0x805823a4
// Size: 396 bytes (99 instructions)
// Stack frame: 0x0010
// Calls: 0x80590e00, 0x805907d4, indirect

void sub_805823a4(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_805823e8:
    r5 = /* load */ r5, 0xec(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    r5 = r5 + 1; // addi
    // stw r5, 0xec(r3)
    r0 = /* load */ r0, 0(r4); // lha
    // cmplw r5, r0
    L_80582414:
    r3 = r31; // mr
    sub_0x80590e00();
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80582414:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // clrlwi. r0, r0, 0x1f
    L_8058243c:
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r3); // lfs
    // stw r0, 0xec(r31)
    r3 = /* load */ r3, 0(r31); // lwz
    // stfs f0, 0xf0(r31)
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // stw r0, 0xc(r3)
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1e)); // rlwinm.
    L_80582474:
    r3 = r31; // mr
    sub_0x805907d4();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r4); // lfs
    r4 = 0x1a7; // li
    r12 = /* load */ r12, 0xe8(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
    r4 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r4); // lfs
    // stw r0, 0xec(r3)
    r4 = /* load */ r4, 0(r3); // lwz
    // stfs f0, 0xf0(r3)
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // stw r0, 0xc(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0, 0x1e)); // rlwinm
    // stw r0, 0xc(r3)
    r0 = /* load */ r0, 0x148(r3); // lha
    // cmpw r4, r0
    L_805824d8:
    // sth r4, 0x148(r3)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    // ori r0, r0, 0x80
    // stw r0, 8(r3)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    // beqlr 
    r4 = /* load */ r4, 0x148(r3); // lha
    r0 = r4 + -1; // addi
    // sth r0, 0x148(r3)
    r0 = (int16_t)r0; // extsh.
    // bgtlr 
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 8(r3)
}
