// Decompiled from StaticR.rel
// Address: 0x8058e844
// Size: 396 bytes (99 instructions)
// Stack frame: 0x0030
// Calls: 0x80555bf4, 0x80555bf4

void sub_8058e844(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */, r10 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    r12 = (uint32_t)0 << 16; // lis
    // stw r0, 0x34(r1)
    r12 = r12 + 0; // addi
    r4 = r12 + 0x10; // addi
    // stw r31, 0x2c(r1)
    r5 = r12 + 0x18; // addi
    r31 = r3; // mr
    // stw r30, 0x28(r1)
    r30 = 0; // li
    r11 = /* load */ r11, 0x10(r12); // lhz
    r10 = /* load */ r10, 2(r4); // lhz
    r9 = /* load */ r9, 4(r4); // lhz
    r8 = /* load */ r8, 6(r4); // lhz
    r7 = /* load */ r7, 0x18(r12); // lhz
    r6 = /* load */ r6, 2(r5); // lhz
    r4 = /* load */ r4, 4(r5); // lhz
    r0 = /* load */ r0, 6(r5); // lhz
    // sth r11, 0x10(r1)
    // sth r10, 0x12(r1)
    // sth r9, 0x14(r1)
    // sth r8, 0x16(r1)
    // sth r7, 8(r1)
    // sth r6, 0xa(r1)
    // sth r4, 0xc(r1)
    // sth r0, 0xe(r1)
    r7 = /* load */ r7, 0x14(r3); // lwz
    r5 = /* load */ r5, 0x14(r7); // lwz
    r4 = /* load */ r4, 0(r5); // lwz
    r5 = /* load */ r5, 4(r5); // lwz
    r0 = /* load */ r0, 0(r4); // lwz
    r4 = r1 + 0x10; // addi
    // slwi r6, r0, 1
    r0 = /* load */ r0, 0x1a4(r5); // lhz
    // cmpwi r0, 0
    L_8058e8dc:
    r30 = /* load */ r30, r6, r4; // lhzx
    r4 = r1 + 8; // addi
    r0 = /* load */ r0, 0x1d0(r5); // lhz
    // cmpwi r0, 0
    L_8058e8f8:
    r0 = /* load */ r0, r6, r4; // lhzx
    r0 = r30 + r0; // add
    // clrlwi r30, r0, 0x10
    r0 = /* load */ r0, 0x1fc(r5); // lhz
    r4 = r1 + 0x10; // addi
    // cmpwi r0, 0
    L_8058e914:
    r0 = /* load */ r0, r6, r4; // lhzx
    r0 = r30 + r0; // add
    // clrlwi r30, r0, 0x10
    r4 = r1 + 8; // addi
    r0 = /* load */ r0, 0x228(r5); // lhz
    // cmpwi r0, 0
    L_8058e930:
    r0 = /* load */ r0, r6, r4; // lhzx
    r0 = r30 + r0; // add
    // clrlwi r30, r0, 0x10
    // sth r30, 0xe(r7)
    r0 = 0x4330 + ((uint32_t)0x4330 << 16); // lis
    f3 = /* load */ f3, 0x20(r12); // lfd
    r4 = /* load */ r4, 0x14(r3); // lwz
    // stw r0, 0x18(r1)
    f2 = /* load */ f2, 4(r12); // lfs
    // sth r30, 0xc(r4)
    f1 = /* load */ f1, 0x28(r12); // lfd
    r5 = /* load */ r5, 0x14(r3); // lwz
    // stw r0, 0x20(r1)
    r0 = /* load */ r0, 0xe(r5); // lhz
    // stw r0, 0x1c(r1)
    f0 = /* load */ f0, 0x18(r1); // lfd
    f0 = f0 - f3; // fsubs
    f0 = f2 / f0; // fdivs
    // stfs f0, 0x2c(r5)
    r4 = /* load */ r4, 0xe(r5); // lhz
    r0 = r4 + 1; // addi
    // xoris r0, r0, 0x8000
    // stw r0, 0x24(r1)
    f0 = /* load */ f0, 0x20(r1); // lfd
    f0 = f0 - f1; // fsubs
    f0 = f2 / f0; // fdivs
    // stfs f0, 0x30(r5)
    r3 = /* load */ r3, 0x14(r3); // lwz
    r0 = /* load */ r0, 0xe(r3); // lhz
    // slwi r3, r0, 2
    sub_0x80555bf4();
    // stw r3, 0x2c(r31)
    r3 = /* load */ r3, 0x14(r31); // lwz
    r0 = /* load */ r0, 0xc(r3); // lhz
    // slwi r3, r0, 2
    sub_0x80555bf4();
    // stw r3, 0x28(r31)
    r31 = /* load */ r31, 0x2c(r1); // lwz
    r30 = /* load */ r30, 0x28(r1); // lwz
    r0 = /* load */ r0, 0x34(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
