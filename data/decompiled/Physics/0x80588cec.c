// Decompiled from StaticR.rel
// Address: 0x80588cec
// Size: 376 bytes (94 instructions)
// Stack frame: 0x0010
// Calls: 0x805837cc, indirect

void sub_80588cec(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x805837cc();
    r12 = /* load */ r12, 0xc(r31); // lwz
    r3 = r31; // mr
    r12 = /* load */ r12, 0x70(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x294(r31)
    // stfs f0, 0x298(r31)
    // stfs f0, 0x29c(r31)
    // stfs f0, 0x2a0(r31)
    // stfs f0, 0x2a4(r31)
    // stw r0, 0x2a8(r31)
    // stb r0, 0x2ac(r31)
    // stw r0, 0x2b0(r31)
    // sth r0, 0x2b4(r31)
    // sth r0, 0x2b6(r31)
    // stfs f0, 0x2b8(r31)
    // sth r0, 0x2bc(r31)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r5); // lfs
    r5 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r4); // lfs
    r5 = r5 + 0; // addi
    // stw r5, 0(r3)
    // sth r0, 0x10(r3)
    // sth r0, 4(r3)
    // sth r0, 6(r3)
    // sth r0, 8(r3)
    // sth r0, 0xa(r3)
    // sth r0, 0xc(r3)
    // sth r0, 0xe(r3)
    // stfs f1, 0x14(r3)
    // stfs f1, 0x18(r3)
    // stfs f0, 0x20(r3)
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r5); // lfs
    r0 = 0; // li
    f0 = /* load */ f0, 0(r4); // lfs
    // sth r0, 4(r3)
    // sth r0, 6(r3)
    // sth r0, 8(r3)
    // sth r0, 0xa(r3)
    // sth r0, 0xc(r3)
    // sth r0, 0xe(r3)
    // stfs f1, 0x14(r3)
    // stfs f1, 0x18(r3)
    // stfs f0, 0x20(r3)
    // clrlwi r0, r4, 0x18
    r6 = 1; // li
    r8 = r6 << r0; // slw
    r6 = /* load */ r6, 0x10(r3); // lhz
    // clrlwi r0, r8, 0x10
    // slwi r7, r4, 1
    r0 = r6 & r0; // and.
    r9 = 0; // li
    r6 = r3 + r7; // add
    L_80588e24:
    r0 = /* load */ r0, 4(r6); // lha
    // cmpw r5, r0
    L_80588e50:
    // sth r5, 4(r6)
    // slwi r0, r4, 2
    r5 = (uint32_t)0 << 16; // lis
    // clrlwi r6, r8, 0x10
    r4 = /* load */ r4, 0x10(r3); // lhz
    r5 = r5 + 0; // addi
    r9 = 1; // li
    r4 = r4 | r6; // or
    // sth r4, 0x10(r3)
    f0 = /* load */ f0, r5, r0; // lfsx
    // stfs f0, 0x1c(r3)
    r3 = r9; // mr
    r0 = 0; // li
    // sth r0, 0x10(r3)
}
