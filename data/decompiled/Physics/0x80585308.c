// Decompiled from StaticR.rel
// Address: 0x80585308
// Size: 212 bytes (53 instructions)
// Stack frame: 0x0020
// Calls: 0x8059040c, 0x80591090, 0x80590f18

void sub_80585308(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x1b)); // rlwinm.
    L_805853c8:
    r4 = /* load */ r4, 4(r5); // lwz
    r0 = /* load */ r0, 8(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1c, 0x1a)); // rlwinm
    // stw r0, 8(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0xc(r4); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1b, 0x19)); // rlwinm
    // stw r0, 0xc(r4)
    r4 = /* load */ r4, 0(r3); // lwz
    r4 = /* load */ r4, 4(r4); // lwz
    r0 = /* load */ r0, 0x10(r4); // lwz
    // ori r0, r0, 0x40
    // stw r0, 0x10(r4)
    f3 = /* load */ f3, 0x20(r3); // lfs
    f2 = /* load */ f2, 0x1f4(r3); // lfs
    f1 = /* load */ f1, 0x1f8(r3); // lfs
    f0 = /* load */ f0, 0x1fc(r3); // lfs
    f2 = f3 * f2; // fmuls
    f1 = f3 * f1; // fmuls
    f0 = f3 * f0; // fmuls
    // stfs f2, 8(r1)
    // stfs f1, 0xc(r1)
    // stfs f0, 0x10(r1)
    sub_0x8059040c();
    f0 = /* load */ f0, 8(r1); // lfs
    r4 = 0; // li
    // stfs f0, 0x14c(r3)
    r5 = 0; // li
    f0 = /* load */ f0, 0xc(r1); // lfs
    r6 = 1; // li
    // stfs f0, 0x150(r3)
    f0 = /* load */ f0, 0x10(r1); // lfs
    // stfs f0, 0x154(r3)
    r3 = r31; // mr
    sub_0x80591090();
    r3 = r31; // mr
    sub_0x80590f18();
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
