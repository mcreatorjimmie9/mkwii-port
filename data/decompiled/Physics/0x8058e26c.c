// Decompiled from StaticR.rel
// Address: 0x8058e26c
// Size: 972 bytes (243 instructions)
// Stack frame: 0x0040
// Calls: 0x80555bf4, 0x80567b14, 0x80567b14, 0x80562b2c, 0x80562b2c, 0x80576b3c, 0x80576d8c, 0x8058e844, 0x80555bf4, 0x805901cc, indirect, 0x8059cfe0, 0x80789eec, indirect, 0x8056de6c, indirect, 0x8059aaf0, 0x80555bf4, 0x805b42c0, 0x80592e24, 0x80577d7c, 0x805b479c, indirect, 0x80555bf4, 0x805b6ea4, 0x80555bf4, 0x80811b84, 0x80555bf4, 0x80555bf4, 0x8058d40c, 0x8058ca68, 0x80555bf4, 0x80555bf4, 0x8058d4e0, 0x8058989c, 0x80555bf4, 0x8056d2bc, 0x80555bf4, 0x8056c748, 0x80555bf4, 0x8056cad0, 0x80576c54, 0x80555bf4

void sub_8058e26c(void) {
    // stwu r1, -0x40(r1)
    // mflr r0
    // stw r0, 0x44(r1)
    r11 = r1 + 0x40; // addi
    sub_0x80555bf4();
    r4 = /* load */ r4, 0x14(r3); // lwz
    r5 = (uint32_t)0 << 16; // lis
    r31 = (uint32_t)0 << 16; // lis
    r5 = /* load */ r5, 0(r5); // lwz
    r0 = /* load */ r0, 0x10(r4); // lbz
    r28 = r3; // mr
    r31 = r31 + 0; // addi
    // mulli r0, r0, 0xf0
    r3 = r5 + r0; // add
    r3 = /* load */ r3, 0x38(r3); // lwz
    r0 = r3 + -3; // addi
    r0 = __builtin_clz(r0); // cntlzw
    // srwi r27, r0, 5
    sub_0x80567b14();
    r30 = r3; // mr
    sub_0x80567b14();
    r29 = r3; // mr
    r3 = r30; // mr
    r4 = 0; // li
    r5 = 1; // li
    sub_0x80562b2c();
    r3 = r29; // mr
    r4 = 0; // li
    r5 = 1; // li
    sub_0x80562b2c();
    r6 = /* load */ r6, 0x14(r28); // lwz
    r4 = r30; // mr
    r5 = r27; // mr
    r3 = r1 + 8; // addi
    r6 = /* load */ r6, 0x10(r6); // lbz
    sub_0x80576b3c();
    r4 = /* load */ r4, 0x14(r28); // lwz
    r3 = r1 + 8; // addi
    r4 = /* load */ r4, 0x10(r4); // lbz
    sub_0x80576d8c();
    r3 = r28; // mr
    sub_0x8058e844();
    r3 = 0x9c; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r27 = r3; // mr
    L_8058e354:
    sub_0x805901cc();
    r3 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r31); // lfs
    r3 = r3 + 0; // addi
    // stw r3, 0xc(r27)
    // stfs f0, 0x24(r27)
    // stfs f0, 0x28(r27)
    // stfs f0, 0x2c(r27)
    // stfs f0, 0x30(r27)
    // stfs f0, 0x34(r27)
    // stfs f0, 0x38(r27)
    // stw r27, 0x10(r28)
    r3 = r27; // mr
    r4 = /* load */ r4, 0x14(r28); // lwz
    r12 = /* load */ r12, 0xc(r27); // lwz
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = /* load */ r3, 0x10(r28); // lwz
    r5 = /* load */ r5, 0x14(r28); // lwz
    r0 = /* load */ r0, 0x1c(r3); // lwz
    // stw r0, 0x20(r28)
    // stw r3, 0x34(r28)
    r0 = /* load */ r0, 0xe(r5); // lhz
    r3 = /* load */ r3, 0(r5); // lwz
    r4 = /* load */ r4, 0x14(r5); // lwz
    // clrlwi r6, r0, 0x18
    r5 = /* load */ r5, 0x18(r5); // lwz
    sub_0x8059cfe0();
    r5 = /* load */ r5, 0x10(r28); // lwz
    r27 = r3; // mr
    r4 = /* load */ r4, 4(r3); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r6 = /* load */ r6, 0x10(r5); // lwz
    r5 = 0; // li
    r3 = /* load */ r3, 0(r3); // lwz
    r4 = r4 + 0x68; // addi
    f2 = /* load */ f2, 0x2c(r6); // lfs
    r6 = 2; // li
    f1 = /* load */ f1, 8(r31); // lfs
    r7 = 0; // li
    f3 = /* load */ f3, 0xc(r31); // lfs
    r8 = -1; // li
    sub_0x80789eec();
    // stw r3, 0x6c(r28)
    r5 = (uint32_t)0 << 16; // lis
    r4 = r27; // mr
    // stw r3, 0(r5)
    r3 = r28; // mr
    r12 = /* load */ r12, 0xc(r28); // lwz
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r5 = /* load */ r5, 0x14(r28); // lwz
    r27 = r3; // mr
    r6 = r1 + 8; // addi
    r4 = /* load */ r4, 0x20(r5); // lwz
    r5 = /* load */ r5, 0x24(r5); // lwz
    sub_0x8056de6c();
    // stw r27, 0x24(r28)
    r3 = r28; // mr
    r4 = r1 + 8; // addi
    r12 = /* load */ r12, 0xc(r28); // lwz
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r27 = 0; // li
    r31 = 0; // li
    goto L_8058e458;
    r3 = /* load */ r3, 0x2c(r28); // lwz
    r4 = r27; // mr
    r5 = r1 + 8; // addi
    r3 = /* load */ r3, r3, r31; // lwzx
    sub_0x8059aaf0();
    r31 = r31 + 4; // addi
    r27 = r27 + 1; // addi
    r3 = /* load */ r3, 0x14(r28); // lwz
    r0 = /* load */ r0, 0xe(r3); // lhz
    // cmpw r27, r0
    L_8058e43c:
    r3 = 0x58; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r27 = r3; // mr
    L_8058e490:
    r4 = /* load */ r4, 0x6c(r28); // lwz
    r5 = 1; // li
    r6 = 0; // li
    sub_0x805b42c0();
    r27 = r3; // mr
    r3 = 1; // li
    sub_0x80592e24();
    f0 = f1 * f1; // fmuls
    r5 = /* load */ r5, 0x48(r27); // lwz
    r4 = r27; // mr
    r3 = r1 + 8; // addi
    // stfs f0, 0(r5)
    sub_0x80577d7c();
    r3 = (uint32_t)0 << 16; // lis
    r4 = r27; // mr
    r3 = /* load */ r3, 0(r3); // lwz
    sub_0x805b479c();
    // stw r27, 0x3c(r28)
    r3 = r28; // mr
    r12 = /* load */ r12, 0xc(r28); // lwz
    r12 = /* load */ r12, 0x18(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = 0x64; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058e4f0:
    r4 = r1 + 8; // addi
    sub_0x805b6ea4();
    // stw r3, 0x7c(r28)
    r3 = 0x10; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058e508:
    sub_0x80811b84();
    r0 = 0; // li
    // stw r3, 0x50(r28)
    r3 = (uint32_t)0 << 16; // lis
    // stw r0, 0x58(r28)
    // stw r0, 0x5c(r28)
    r0 = /* load */ r0, 0(r3); // lbz
    // cmpwi r0, 0
    L_8058e56c:
    r3 = 0x5c; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r27 = r3; // mr
    L_8058e564:
    r3 = 0x28; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r4 = r3; // mr
    L_8058e558:
    sub_0x8058d40c();
    r4 = r3; // mr
    r3 = r27; // mr
    sub_0x8058ca68();
    r27 = r3; // mr
    // stw r27, 0x58(r28)
    goto L_8058e5bc;
    r3 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0(r3); // lbz
    // cmpwi r0, 0
    L_8058e5bc:
    r3 = 0xb4; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r27 = r3; // mr
    L_8058e5b8:
    r3 = 0x28; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r4 = r3; // mr
    L_8058e5ac:
    sub_0x8058d4e0();
    r4 = r3; // mr
    r3 = r27; // mr
    sub_0x8058989c();
    r27 = r3; // mr
    // stw r27, 0x5c(r28)
    r0 = /* load */ r0, 0x14(r28); // lwz
    r3 = 0x24; // li
    // stw r0, 0x1c(r28)
    // stw r30, 0x60(r28)
    // stw r29, 0x64(r28)
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058e5e0:
    sub_0x8056d2bc();
    // stw r3, 0x70(r28)
    r3 = 0x14; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058e5f8:
    sub_0x8056c748();
    // stw r3, 0x74(r28)
    r3 = 0x14; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058e610:
    sub_0x8056cad0();
    // stw r3, 0x78(r28)
    r3 = r1 + 8; // addi
    r4 = -1; // li
    sub_0x80576c54();
    r11 = r1 + 0x40; // addi
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x44(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x40
}
