// Decompiled from StaticR.rel
// Address: 0x8058ac48
// Size: 84 bytes (21 instructions)
// Stack frame: 0x0010
// Calls: 0x8052f248

void sub_8058ac48(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r6 = r4; // mr
    r7 = r5; // mr
    // stw r0, 0x14(r1)
    r4 = 2; // li
    r5 = 0xf; // li
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r3 = r3 + 4; // addi
    sub_0x8052f248();
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 4(r31); // lfs
    f0 = /* load */ f0, 0(r4); // lfs
    f0 = f1 + f0; // fadds
    // stfs f0, 4(r31)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
