// Decompiled from StaticR.rel
// Address: 0x80589200
// Size: 172 bytes (43 instructions)
// Stack frame: 0x0010
// Calls: indirect, indirect

void sub_80589200(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0x24(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0xc(r31); // lwz
    r3 = r31; // mr
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
    r5 = /* load */ r5, 0x10(r3); // lwz
    r5 = r5 + 1; // addi
    // stw r5, 0x10(r3)
    r0 = r4 - r5; // subf
    r3 = r5 |~ r4; // orc
    // srwi r0, r0, 1
    r0 = r0 - r3; // subf
    // srwi r3, r0, 0x1f
    r5 = /* load */ r5, 0x10(r3); // lwz
    r5 = r5 + 1; // addi
    // stw r5, 0x10(r3)
    r0 = r4 - r5; // subf
    r3 = r5 |~ r4; // orc
    // srwi r0, r0, 1
    r0 = r0 - r3; // subf
    // srwi r3, r0, 0x1f
    r4 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r4); // lfs
    // sth r0, 0x14(r3)
    // stfs f0, 0x18(r3)
}
