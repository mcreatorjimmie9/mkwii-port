// Decompiled from StaticR.rel
// Address: 0x8058f08c
// Size: 424 bytes (106 instructions)
// Stack frame: 0x0020
// Calls: 0x80590690, 0x805906b8, 0x805906dc, indirect, 0x805906f4, indirect, 0x8059031c, 0x8059071c, indirect, 0x8059032c, 0x80592e24, 0x8059080c, 0x805907a4, 0x807287dc

void sub_8058f08c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    r4 = (uint32_t)0 << 16; // lis
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    // stw r30, 8(r1)
    r4 = /* load */ r4, 0(r4); // lwz
    r0 = /* load */ r0, 0xb90(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_8058f110:
    r0 = /* load */ r0, 0xb70(r4); // lwz
    // cmpwi r0, 1
    L_8058f0f8:
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0x14(r4); // lwz
    // ori r0, r0, 0x8000
    // stw r0, 0x14(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    // ori r0, r0, 1
    // stw r0, 0x14(r3)
    goto L_8058f130;
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    // oris r0, r0, 4
    // stw r0, 0x14(r3)
    goto L_8058f130;
    sub_0x80590690();
    // cmpwi r3, 0
    L_8058f130:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    // ori r0, r0, 1
    // stw r0, 0x14(r3)
    r3 = r31; // mr
    sub_0x805906b8();
    // cmpwi r3, 0
    L_8058f154:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    // oris r0, r0, 4
    // stw r0, 0x14(r3)
    r3 = r31; // mr
    sub_0x805906dc();
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x24(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r30 = 0; // li
    goto L_8058f194;
    r3 = r31; // mr
    r4 = r30; // mr
    sub_0x805906f4();
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x24(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r30 = r30 + 1; // addi
    r3 = r31; // mr
    sub_0x8059031c();
    // clrlwi r0, r3, 0x10
    // cmpw r30, r0
    L_8058f174:
    r30 = 0; // li
    goto L_8058f1d0;
    r3 = r31; // mr
    r4 = r30; // mr
    sub_0x8059071c();
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x24(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r30 = r30 + 1; // addi
    r3 = r31; // mr
    sub_0x8059032c();
    // clrlwi r0, r3, 0x10
    // cmpw r30, r0
    L_8058f1b0:
    r3 = 5; // li
    sub_0x80592e24();
    f31 = f1; // fmr
    r3 = r31; // mr
    sub_0x8059080c();
    r4 = /* load */ r4, 0x48(r3); // lwz
    f0 = f31 * f31; // fmuls
    r3 = r31; // mr
    // stfs f0, 0(r4)
    sub_0x805907a4();
    r3 = /* load */ r3, 0x20(r3); // lwz
    sub_0x807287dc();
    // .byte 0xe3, 0xe1, 0x00, 0x18
    r0 = /* load */ r0, 0x24(r1); // lwz
    f31 = /* load */ f31, 0x10(r1); // lfd
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
