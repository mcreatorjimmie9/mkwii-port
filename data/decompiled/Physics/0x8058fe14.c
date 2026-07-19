// Decompiled from StaticR.rel
// Address: 0x8058fe14
// Size: 268 bytes (67 instructions)
// Stack frame: 0x0020
// Calls: indirect, 0x80555bf4, indirect, 0x80555bf4, 0x80555bf4, 0x80555bf4

void sub_8058fe14(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // stw r30, 0x18(r1)
    r30 = r4; // mr
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    L_8058ff00:
    r4 = (uint32_t)0 << 16; // lis
    r31 = 0; // li
    r4 = r4 + 0; // addi
    // stw r4, 0(r3)
    goto L_8058fe7c;
    r3 = /* load */ r3, 0x20(r29); // lwz
    r0 = ((_rotl(r31, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, r3, r0; // lwzx
    // cmpwi r3, 0
    L_8058fe78:
    r12 = /* load */ r12, 0xc(r3); // lwz
    r4 = 1; // li
    r12 = /* load */ r12, 8(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r31 = r31 + 1; // addi
    r0 = /* load */ r0, 0x24(r29); // lbz
    // clrlwi r3, r31, 0x18
    // cmplw r3, r0
    L_8058fe50:
    r3 = /* load */ r3, 0x20(r29); // lwz
    sub_0x80555bf4();
    // addic. r31, r29, 0x10
    L_8058fee4:
    r3 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    // stw r3, 0(r31)
    r3 = /* load */ r3, 0(r4); // lwz
    // cmpwi r3, 0
    L_8058fed8:
    r0 = 0; // li
    // stw r0, 0(r4)
    L_8058fed8:
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = 1; // li
    r12 = /* load */ r12, 8(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r31; // mr
    r4 = 0; // li
    sub_0x80555bf4();
    r3 = r29; // mr
    r4 = 0; // li
    sub_0x80555bf4();
    // cmpwi r30, 0
    L_8058ff00:
    r3 = r29; // mr
    sub_0x80555bf4();
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r3 = r29; // mr
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
