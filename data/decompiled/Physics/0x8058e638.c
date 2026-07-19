// Decompiled from StaticR.rel
// Address: 0x8058e638
// Size: 80 bytes (20 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4, 0x8056e6d4

void sub_8058e638(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    r3 = 0x240; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058e670:
    r4 = /* load */ r4, 0x14(r30); // lwz
    r5 = r31; // mr
    sub_0x8056e6d4();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
