// Decompiled from StaticR.rel
// Address: 0x8058f964
// Size: 108 bytes (27 instructions)
// Stack frame: 0x0020
// Calls: 0x80891768

void sub_8058f964(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    r3 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r4); // lfs
    r4 = (uint32_t)0 << 16; // lis
    // stfs f1, 8(r1)
    r3 = r3 + 0; // addi
    r5 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    // stfs f0, 0xc(r1)
    r5 = r5 + 0; // addi
    r7 = /* load */ r7, 8(r1); // lwz
    // stw r0, 0x24(r1)
    r6 = /* load */ r6, 0xc(r1); // lwz
    // stfs f1, 0x10(r1)
    r0 = /* load */ r0, 0x10(r1); // lwz
    // stw r7, 4(r3)
    // stw r6, 8(r3)
    // stw r0, 0xc(r3)
    sub_0x80891768();
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
