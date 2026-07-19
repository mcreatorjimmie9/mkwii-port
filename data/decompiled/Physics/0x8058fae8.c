// Decompiled from StaticR.rel
// Address: 0x8058fae8
// Size: 132 bytes (33 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4, 0x8058fb6c

void sub_8058fae8(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r3 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    r0 = /* load */ r0, 0(r3); // lwz
    // cmpwi r0, 0
    L_8058fb20:
    r3 = 0x38; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058fb18:
    sub_0x8058fb6c();
    r4 = (uint32_t)0 << 16; // lis
    // stw r3, 0(r4)
    // lwz r0, 0x14(r1)
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
    r4 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r4); // lwz
    // cmpwi r3, 0
    // beqlr 
    r0 = 0; // li
    // stw r0, 0(r4)
    // beqlr 
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = 1; // li
    r12 = /* load */ r12, 8(r12); // lwz
    // mtctr r12
    // bctr 
}
