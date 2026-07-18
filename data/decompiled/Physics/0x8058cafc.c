// Decompiled from StaticR.rel
// Address: 0x8058cafc
// Size: 116 bytes (29 instructions)
// Stack frame: 0x0010
// Calls: 0x80537f4c, 0x8058cb70, 0x80590a9c, 0x80655d3c

void sub_8058cafc(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    r3 = /* load */ r3, 0(r4); // lwz
    r4 = 2; // li
    sub_0x80537f4c();
    // cmpwi r3, 0
    L_8058cb58:
    r3 = r30; // mr
    sub_0x8058cb70();
    r4 = (uint32_t)0 << 16; // lis
    r3 = r30; // mr
    r31 = /* load */ r31, 0(r4); // lwz
    sub_0x80590a9c();
    // clrlwi r6, r3, 0x18
    r3 = r31; // mr
    r4 = r30 + 0x14; // addi
    r5 = 0x40; // li
    sub_0x80655d3c();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
