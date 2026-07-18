// Decompiled from StaticR.rel
// Address: 0x8058e688
// Size: 220 bytes (55 instructions)
// Stack frame: 0x0020
// Calls: 0x8059cfe0, 0x80789eec, indirect, 0x8056de6c

void sub_8058e688(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // stw r30, 0x18(r1)
    r30 = r4; // mr
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    r5 = /* load */ r5, 0x14(r3); // lwz
    r0 = /* load */ r0, 0xe(r5); // lhz
    r3 = /* load */ r3, 0(r5); // lwz
    r4 = /* load */ r4, 0x14(r5); // lwz
    // clrlwi r6, r0, 0x18
    r5 = /* load */ r5, 0x18(r5); // lwz
    sub_0x8059cfe0();
    r5 = /* load */ r5, 0x10(r29); // lwz
    r6 = (uint32_t)0 << 16; // lis
    r4 = /* load */ r4, 4(r3); // lwz
    r31 = r3; // mr
    r7 = /* load */ r7, 0x10(r5); // lwz
    r3 = (uint32_t)0 << 16; // lis
    r5 = (uint32_t)0 << 16; // lis
    f3 = /* load */ f3, 0(r6); // lfs
    f2 = /* load */ f2, 0x2c(r7); // lfs
    r4 = r4 + 0x68; // addi
    f1 = /* load */ f1, 0(r5); // lfs
    r5 = 0; // li
    r3 = /* load */ r3, 0(r3); // lwz
    r6 = 2; // li
    r7 = 0; // li
    r8 = -1; // li
    sub_0x80789eec();
    // stw r3, 0x6c(r29)
    r5 = (uint32_t)0 << 16; // lis
    r4 = r31; // mr
    // stw r3, 0(r5)
    r3 = r29; // mr
    r12 = /* load */ r12, 0xc(r29); // lwz
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r5 = /* load */ r5, 0x14(r29); // lwz
    r31 = r3; // mr
    r6 = r30; // mr
    r4 = /* load */ r4, 0x20(r5); // lwz
    r5 = /* load */ r5, 0x24(r5); // lwz
    sub_0x8056de6c();
    // stw r31, 0x24(r29)
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
