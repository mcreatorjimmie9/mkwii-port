// Decompiled from StaticR.rel
// Address: 0x8058ec88
// Size: 152 bytes (38 instructions)
// Stack frame: 0x0020
// Calls: 0x80555bf4, 0x805b42c0, 0x80592e24, 0x80577d7c, 0x805b479c

void sub_8058ec88(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // stw r30, 0x18(r1)
    r30 = r4; // mr
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    r3 = 0x58; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r31 = r3; // mr
    L_8058ecd0:
    r4 = /* load */ r4, 0x6c(r29); // lwz
    r5 = 1; // li
    r6 = 0; // li
    sub_0x805b42c0();
    r31 = r3; // mr
    r3 = 1; // li
    sub_0x80592e24();
    f0 = f1 * f1; // fmuls
    r5 = /* load */ r5, 0x48(r31); // lwz
    r3 = r30; // mr
    r4 = r31; // mr
    // stfs f0, 0(r5)
    sub_0x80577d7c();
    r3 = (uint32_t)0 << 16; // lis
    r4 = r31; // mr
    r3 = /* load */ r3, 0(r3); // lwz
    sub_0x805b479c();
    // stw r31, 0x3c(r29)
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
