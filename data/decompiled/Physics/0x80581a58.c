// Decompiled from StaticR.rel
// Address: 0x80581a58
// Size: 196 bytes (49 instructions)
// Stack frame: 0x0010
// Calls: 0x8059045c, 0x80591800, 0x80591920

void sub_80581a58(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r6 = 1; // li
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r4; // mr
    // stw r30, 8(r1)
    r30 = r3; // mr
    r7 = /* load */ r7, 0(r3); // lwz
    r5 = /* load */ r5, 4(r7); // lwz
    r0 = /* load */ r0, 8(r5); // lwz
    // andi. r0, r0, 0x102
    L_80581aa4:
    r4 = 0x20c + ((uint32_t)0x20c << 16); // lis
    r5 = /* load */ r5, 0xc(r5); // lwz
    r0 = r4 + 0x6000; // addi
    r0 = r5 & r0; // and.
    L_80581aa4:
    r6 = 0; // li
    // cmpwi r6, 0
    L_80581b04:
    r8 = /* load */ r8, 4(r7); // lwz
    r5 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r5); // lfs
    r0 = 1; // li
    r7 = /* load */ r7, 0xc(r8); // lwz
    r6 = (uint32_t)0 << 16; // lis
    r4 = 0x1f; // li
    r5 = 1; // li
    // oris r7, r7, 0x1000
    // stw r7, 0xc(r8)
    // stb r0, 0x190(r3)
    r0 = /* load */ r0, 0(r6); // lha
    // sth r0, 0x18e(r3)
    r3 = r30; // mr
    sub_0x8059045c();
    r3 = r30; // mr
    r4 = 0x15; // li
    sub_0x80591800();
    // cmpwi r31, 0
    L_80581b04:
    r3 = r30; // mr
    sub_0x80591920();
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
