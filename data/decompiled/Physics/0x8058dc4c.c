// Decompiled from StaticR.rel
// Address: 0x8058dc4c
// Size: 64 bytes (16 instructions)
// Stack frame: 0x0010
// Calls: 0x80590a80, 0x807c97cc, 0x8086794c

void sub_8058dc4c(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r3 = r4; // mr
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    sub_0x80590a80();
    r31 = r3; // mr
    sub_0x807c97cc();
    r3 = /* load */ r3, 0xc(r31); // lwz
    r4 = 0xc; // li
    sub_0x8086794c();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
