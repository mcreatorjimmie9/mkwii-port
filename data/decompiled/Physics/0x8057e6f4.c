// Decompiled from StaticR.rel
// Address: 0x8057e6f4
// Size: 136 bytes (34 instructions)
// Stack frame: 0x20
// Calls: 0x805908b4

void sub_8057e6f4(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x10]; /* local variables */

    // mflr r0
    // stw r0, 0x24(r1)
    // stfd f31, 0x10(r1)
    // xscmpeqdp vs31, f1, f0
    // li r0, 1
    // stw r31, 0xc(r1)
    // mr r31, r3
    // lwz r4, 0(r3)
    // lwz r5, 4(r4)
    // lwz r4, 4(r5)
    r4 = r4 | 8;
    // stw r4, 4(r5)
    // lwz r4, 0(r3)
    // lwz r5, 4(r4)
    // lwz r4, 4(r5)
    r4 = r4 & 0x00000000; /* rlwinm */
    // stw r4, 4(r5)
    // sth r0, 0xfc(r3)
    // lfs f31, 0xb0(r3)
    sub_0x805908b4();
    // lfs f1, 0x58(r3)
    // lis r3, 0
    // lfs f0, 0(r3)
    f1 = f31 * f1;
    f0 = f0 * f1;
    // stfs f0, 0x104(r31)
    /* Gekko: 0xe3, 0xe1, 0x00, 0x18 */
    // lfd f31, 0x10(r1)
    // lwz r31, 0xc(r1)
    // lwz r0, 0x24(r1)
    // mtlr r0
}
