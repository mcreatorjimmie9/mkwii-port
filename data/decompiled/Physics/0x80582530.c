// Decompiled from StaticR.rel
// Address: 0x80582530
// Size: 356 bytes (89 instructions)
// Stack frame: 0x0020
// Calls: 0x8059040c, 0x8059040c

void sub_80582530(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    r4 = /* load */ r4, 0(r3); // lwz
    r5 = /* load */ r5, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x19)); // rlwinm.
    L_80582640:
    r0 = /* load */ r0, 4(r5); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x16, 0x16)); // rlwinm.
    L_8058259c:
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1a, 0x18)); // rlwinm
    // stw r0, 0xc(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0xc, 0xa)); // rlwinm
    // stw r0, 0xc(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(9, 7)); // rlwinm
    // stw r0, 8(r4)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(8, 8)); // rlwinm.
    L_80582640:
    r3 = r31; // mr
    sub_0x8059040c();
    r0 = /* load */ r0, 0x78(r3); // lwz
    r5 = (uint32_t)0 << 16; // lis
    // stw r0, 0xc(r1)
    f0 = /* load */ f0, 0(r5); // lfs
    f1 = /* load */ f1, 0xc(r1); // lfs
    r4 = /* load */ r4, 0x1c0(r31); // lwz
    f0 = f1 + f0; // fadds
    r5 = /* load */ r5, 0x74(r3); // lwz
    f1 = /* load */ f1, 8(r4); // lfs
    r0 = /* load */ r0, 0x7c(r3); // lwz
    // .byte 0xfc, 0x01, 0x00, 0x40
    // stw r5, 8(r1)
    // stw r0, 0x10(r1)
    L_805825fc:
    f0 = f1; // fmr
    r0 = 1; // li
    goto L_80582600;
    r0 = 0; // li
    // cmpwi r0, 0
    L_8058261c:
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(9, 7)); // rlwinm
    // stw r0, 8(r3)
    // stfs f0, 0xc(r1)
    r3 = r31; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 8(r1); // lfs
    // stfs f0, 0x74(r3)
    f0 = /* load */ f0, 0xc(r1); // lfs
    // stfs f0, 0x78(r3)
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f0, 0x7c(r3)
    r3 = /* load */ r3, 0(r31); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x16, 0x16)); // rlwinm.
    L_80582680:
    r0 = /* load */ r0, 0xc(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x19)); // rlwinm.
    L_80582680:
    r4 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r31); // lwz
    f0 = /* load */ f0, 0(r4); // lfs
    // stfs f0, 0x1b0(r31)
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(2, 0)); // rlwinm
    // stw r0, 4(r3)
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
