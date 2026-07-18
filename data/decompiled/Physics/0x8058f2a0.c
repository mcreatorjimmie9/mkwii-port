// Decompiled from StaticR.rel
// Address: 0x8058f2a0
// Size: 136 bytes (34 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4, 0x8056fc2c, 0x80555bf4, 0x8056f26c

void sub_8058f2a0(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    r5 = /* load */ r5, 0x14(r3); // lwz
    r3 = /* load */ r3, 0x14(r5); // lwz
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0(r3); // lwz
    // cmplwi r0, 2
    L_8058f2f4:
    r3 = 0x360; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058f310:
    r4 = /* load */ r4, 0x14(r30); // lwz
    r5 = r31; // mr
    sub_0x8056fc2c();
    goto L_8058f310;
    r3 = 0x360; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058f310:
    r4 = /* load */ r4, 0x14(r30); // lwz
    r5 = r31; // mr
    sub_0x8056f26c();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
