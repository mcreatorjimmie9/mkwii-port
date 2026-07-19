// Decompiled from StaticR.rel
// Address: 0x8058f860
// Size: 144 bytes (36 instructions)
// Stack frame: 0x0010
// Calls: 0x80590168, 0x80590aac, 0x80555bf4, 0x807bf168, 0x80555bf4, 0x807c5ad0, 0x80590178, 0x807c055c

void sub_8058f860(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x80590168();
    r3 = r30; // mr
    sub_0x80590aac();
    // cmpwi r3, 0
    L_8058f8a8:
    r3 = 0x6e4; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058f8a0:
    sub_0x807bf168();
    r31 = r3; // mr
    goto L_8058f8c0;
    r3 = 0x6e4; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058f8bc:
    sub_0x807c5ad0();
    r31 = r3; // mr
    r3 = r30 + 0x1c; // addi
    sub_0x80590178();
    r3 = r31; // mr
    sub_0x807c055c();
    // stw r31, 0x18(r30)
    // stw r31, 0x30(r30)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
