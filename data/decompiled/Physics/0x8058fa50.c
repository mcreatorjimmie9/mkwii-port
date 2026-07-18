// Decompiled from StaticR.rel
// Address: 0x8058fa50
// Size: 152 bytes (38 instructions)
// Stack frame: 0x0010
// Calls: indirect, 0x80555bf4, 0x80555bf4

void sub_8058fa50(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    L_8058facc:
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r5 = r5 + 0; // addi
    // stw r5, 0(r3)
    r3 = /* load */ r3, 0(r4); // lwz
    // cmpwi r3, 0
    L_8058fab0:
    r0 = 0; // li
    // stw r0, 0(r4)
    L_8058fab0:
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = 1; // li
    r12 = /* load */ r12, 8(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r30; // mr
    r4 = 0; // li
    sub_0x80555bf4();
    // cmpwi r31, 0
    L_8058facc:
    r3 = r30; // mr
    sub_0x80555bf4();
    r3 = r30; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
