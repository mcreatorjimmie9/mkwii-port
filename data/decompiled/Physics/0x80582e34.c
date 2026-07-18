// Decompiled from StaticR.rel
// Address: 0x80582e34
// Size: 360 bytes (90 instructions)
// Stack frame: 0x0020
// Calls: 0x8059040c, 0x8059040c

void sub_80582e34(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x12, 0x12)); // rlwinm.
    L_80582f24:
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // ori r0, r0, 1
    // stw r0, 4(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x15, 0x15)); // rlwinm.
    L_80582eb8:
    r4 = /* load */ r4, 0x12c(r3); // lha
    r0 = /* load */ r0, 0x12e(r3); // lha
    r4 = r4 + 1; // addi
    // sth r4, 0x12c(r3)
    r4 = (int16_t)r4; // extsh
    // cmpw r4, r0
    L_80582eb8:
    r0 = 0; // li
    // sth r0, 0x12c(r3)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x13, 0x11)); // rlwinm
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    // clrlwi. r0, r0, 0x1f
    L_80582f24:
    r0 = /* load */ r0, 0x12c(r3); // lha
    // cmpwi r0, 0xa
    L_80582f24:
    r3 = r31; // mr
    sub_0x8059040c();
    r0 = /* load */ r0, 0xa8(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0xc(r1)
    r5 = /* load */ r5, 0xa4(r3); // lwz
    r0 = /* load */ r0, 0xac(r3); // lwz
    r3 = r31; // mr
    f0 = /* load */ f0, 0(r4); // lfs
    // stw r5, 8(r1)
    // stw r0, 0x10(r1)
    // stfs f0, 0xc(r1)
    sub_0x8059040c();
    f0 = /* load */ f0, 8(r1); // lfs
    // stfs f0, 0xa4(r3)
    f0 = /* load */ f0, 0xc(r1); // lfs
    // stfs f0, 0xa8(r3)
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f0, 0xac(r3)
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
    r0 = 0; // li
    // sth r0, 0x12c(r3)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x13, 0x11)); // rlwinm
    // stw r0, 8(r3)
    r0 = /* load */ r0, 0x254(r3); // lhz
    r4 = 0; // li
    // sth r4, 0x14c(r3)
    r0 = ((_rotl(r0, 0)) & _mask(0x1e, 0x1c)); // rlwinm
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // sth r4, 0x14e(r3)
    // sth r4, 0x150(r3)
    // sth r0, 0x254(r3)
    r0 = 0; // li
    // sth r0, 0x148(r3)
    r3 = /* load */ r3, 0(r3); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 8(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x19, 0x17)); // rlwinm
    // stw r0, 8(r3)
}
