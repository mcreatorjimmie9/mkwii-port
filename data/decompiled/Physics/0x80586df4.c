// Decompiled from StaticR.rel
// Address: 0x80586df4
// Size: 220 bytes (55 instructions)
// Stack frame: 0x0040
// Calls: 0x805907bc, 0x805aa328, 0x8059040c, 0x805b1cc4, 0x8059088c, 0x80572dec

void sub_80586df4(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x40(r1)
    // mflr r0
    // stw r0, 0x44(r1)
    // stfd f31, 0x30(r1)
    // xxsel vs31, vs1, vs0, v0
    f31 = f1; // fmr
    // stw r31, 0x2c(r1)
    r31 = r5; // mr
    // stw r30, 0x28(r1)
    r30 = r4; // mr
    // stw r29, 0x24(r1)
    r29 = r3; // mr
    r0 = /* load */ r0, 0x244(r3); // lha
    // cmpwi r0, 0
    L_80586eac:
    sub_0x805907bc();
    r5 = r3; // mr
    r4 = r30; // mr
    r3 = r1 + 0x14; // addi
    r6 = 1; // li
    r5 = r5 + 0x44; // addi
    sub_0x805aa328();
    f2 = /* load */ f2, 0x14(r1); // lfs
    r3 = r29; // mr
    f1 = /* load */ f1, 0x18(r1); // lfs
    f0 = /* load */ f0, 0x1c(r1); // lfs
    f2 = f31 * f2; // fmuls
    f1 = f31 * f1; // fmuls
    f0 = f31 * f0; // fmuls
    // stfs f2, 8(r1)
    // stfs f1, 0xc(r1)
    // stfs f0, 0x10(r1)
    sub_0x8059040c();
    r4 = r1 + 8; // addi
    sub_0x805b1cc4();
    r3 = r29; // mr
    sub_0x8059088c();
    sub_0x80572dec();
    r3 = (uint32_t)0 << 16; // lis
    // cmpwi r31, 0
    r0 = /* load */ r0, 0(r3); // lha
    // sth r0, 0x244(r29)
    L_80586eac:
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x20(r29)
    // .byte 0xe3, 0xe1, 0x00, 0x38
    r0 = /* load */ r0, 0x44(r1); // lwz
    f31 = /* load */ f31, 0x30(r1); // lfd
    r31 = /* load */ r31, 0x2c(r1); // lwz
    r30 = /* load */ r30, 0x28(r1); // lwz
    r29 = /* load */ r29, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x40
}
