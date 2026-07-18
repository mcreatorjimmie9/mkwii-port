// Decompiled from StaticR.rel
// Address: 0x8058a9b4
// Size: 64 bytes (16 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4

void sub_8058a9b4(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    L_8058a9dc:
    // cmpwi r4, 0
    L_8058a9dc:
    sub_0x80555bf4();
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
