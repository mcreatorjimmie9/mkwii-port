// Decompiled from StaticR.rel
// Address: 0x8058ed20
// Size: 72 bytes (18 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4, 0x807070ec, 0x80707370

void sub_8058ed20(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r3 = 0xfc; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058ed48:
    sub_0x807070ec();
    // stw r3, 0x38(r31)
    r4 = 5; // li
    sub_0x80707370();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
