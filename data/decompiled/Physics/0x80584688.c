// Decompiled from StaticR.rel
// Address: 0x80584688
// Size: 244 bytes (61 instructions)
// Stack frame: 0x0030
// Calls: 0x8078cb78, 0x807b5770, 0x80591964

void sub_80584688(r3 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */) {
    // stwu r1, -0x30(r1)
    // mflr r0
    r6 = (uint32_t)0 << 16; // lis
    r8 = (uint32_t)0 << 16; // lis
    // stw r0, 0x34(r1)
    r7 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r8); // lfs
    r9 = (uint32_t)0 << 16; // lis
    // stw r31, 0x2c(r1)
    r31 = 0x20e8 + ((uint32_t)0x20e8 << 16); // lis
    f0 = /* load */ f0, 0(r6); // lfs
    r6 = r31 + 0xdff; // addi
    // stw r30, 0x28(r1)
    r30 = 0; // li
    r7 = /* load */ r7, 0(r7); // lwz
    r8 = r1 + 8; // addi
    // stw r29, 0x24(r1)
    r29 = 0; // li
    // stw r28, 0x20(r1)
    r28 = r3; // mr
    // stw r30, 8(r1)
    r3 = /* load */ r3, 0(r9); // lwz
    r9 = 0; // li
    r5 = /* load */ r5, 0(r4); // lwz
    r0 = /* load */ r0, 4(r4); // lwz
    // stw r0, 0x10(r1)
    // stw r5, 0xc(r1)
    r5 = r1 + 0xc; // addi
    f2 = /* load */ f2, 0x10(r1); // lfs
    r0 = /* load */ r0, 8(r4); // lwz
    f0 = f2 + f0; // fadds
    // stw r0, 0x14(r1)
    // stfs f0, 0x10(r1)
    sub_0x8078cb78();
    // cmpwi r3, 0
    L_80584750:
    r0 = /* load */ r0, 8(r1); // lwz
    r4 = r31 + 0xfff; // addi
    r0 = r0 & r4; // and.
    L_80584734:
    r3 = r1 + 8; // addi
    sub_0x807b5770();
    goto L_80584738;
    r3 = r30; // mr
    // cmpwi r3, 0
    L_80584750:
    r3 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 4(r3); // lhz
    r29 = ((_rotl(r0, 0x18)) & _mask(0x1d, 0x1f)); // rlwinm
    r3 = r28; // mr
    // clrlwi r4, r29, 0x18
    sub_0x80591964();
    r0 = /* load */ r0, 0x34(r1); // lwz
    r31 = /* load */ r31, 0x2c(r1); // lwz
    r30 = /* load */ r30, 0x28(r1); // lwz
    r29 = /* load */ r29, 0x24(r1); // lwz
    r28 = /* load */ r28, 0x20(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x30
}
