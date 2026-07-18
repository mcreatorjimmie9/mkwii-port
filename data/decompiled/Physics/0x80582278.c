// Decompiled from StaticR.rel
// Address: 0x80582278
// Size: 300 bytes (75 instructions)
// Stack frame: 0x0010
// Calls: 0x8059045c, 0x805907f0

void sub_80582278(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = 0x80c + ((uint32_t)0x80c << 16); // lis
    r5 = 1; // li
    // stw r0, 0x14(r1)
    r0 = r4 + 0x100; // addi
    r6 = 1; // li
    r7 = 1; // li
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r8 = /* load */ r8, 0(r3); // lwz
    r9 = /* load */ r9, 4(r8); // lwz
    r4 = /* load */ r4, 0xc(r9); // lwz
    r0 = r4 & r0; // and.
    L_805822c4:
    r0 = /* load */ r0, 4(r9); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_805822c4:
    r7 = 0; // li
    // cmpwi r7, 0
    L_805822dc:
    r0 = /* load */ r0, 0x14(r9); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x18, 0x18)); // rlwinm.
    L_805822dc:
    r6 = 0; // li
    // cmpwi r6, 0
    L_805822f4:
    r0 = /* load */ r0, 8(r9); // lwz
    // clrlwi. r0, r0, 0x1f
    L_805822f4:
    r5 = 0; // li
    // cmpwi r5, 0
    L_80582390:
    r8 = /* load */ r8, 4(r8); // lwz
    r5 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r5); // lfs
    r0 = 0; // li
    r7 = /* load */ r7, 0xc(r8); // lwz
    r6 = (uint32_t)0 << 16; // lis
    r4 = 3; // li
    r5 = 1; // li
    r7 = ((_rotl(r7, 0)) & _mask(0, 0x1e)); // rlwinm
    // stw r7, 0xc(r8)
    r7 = /* load */ r7, 0(r3); // lwz
    r8 = /* load */ r8, 4(r7); // lwz
    r7 = /* load */ r7, 0xc(r8); // lwz
    // ori r7, r7, 2
    // stw r7, 0xc(r8)
    // stw r0, 0xec(r3)
    f0 = /* load */ f0, 0(r6); // lfs
    // stfs f0, 0xf0(r3)
    r3 = r31; // mr
    sub_0x8059045c();
    r3 = r31; // mr
    r4 = 6; // li
    sub_0x805907f0();
    r3 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r3); // lwz
    r3 = /* load */ r3, 0(r4); // lwz
    r0 = /* load */ r0, 0xb70(r5); // lwz
    // cmpwi r0, 4
    L_80582390:
    r0 = /* load */ r0, 0xb9e(r5); // lhz
    // cmpwi r0, 0xd
    L_80582390:
    r4 = /* load */ r4, 0x10(r3); // lwz
    r3 = /* load */ r3, 8(r4); // lwz
    r0 = r3 + 1; // addi
    // stw r0, 8(r4)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
