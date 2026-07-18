// Decompiled from StaticR.rel
// Address: 0x8058ed68
// Size: 64 bytes (16 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4, 0x80811b84

void sub_8058ed68(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r3 = 0x10; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058ed90:
    sub_0x80811b84();
    // stw r3, 0x50(r31)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
