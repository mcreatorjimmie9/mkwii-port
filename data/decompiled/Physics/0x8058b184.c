// Decompiled from StaticR.rel
// Address: 0x8058b184
// Size: 84 bytes (21 instructions)
// Stack frame: 0x0010
// Calls: 0x8058be60, 0x8058b1d8, 0x8058d5b0, 0x8058b4d4

void sub_8058b184(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x8058be60();
    r3 = r30; // mr
    sub_0x8058b1d8();
    r3 = /* load */ r3, 0x64(r30); // lwz
    sub_0x8058d5b0();
    r3 = r30; // mr
    r4 = r31; // mr
    sub_0x8058b4d4();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
