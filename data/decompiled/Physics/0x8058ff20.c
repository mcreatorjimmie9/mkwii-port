// Decompiled from StaticR.rel
// Address: 0x8058ff20
// Size: 224 bytes (56 instructions)
// Stack frame: 0x0020
// Calls: 0x80569a5c, indirect, 0x8058ee88

void sub_8058ff20(r3 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // stw r30, 0x18(r1)
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    sub_0x80569a5c();
    r30 = 0; // li
    goto L_8058ffa0;
    r3 = /* load */ r3, 0x20(r29); // lwz
    r31 = ((_rotl(r30, 2)) & _mask(0x16, 0x1d)); // rlwinm
    r3 = /* load */ r3, r3, r31; // lwzx
    r12 = /* load */ r12, 0xc(r3); // lwz
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = /* load */ r3, 0x20(r29); // lwz
    r3 = /* load */ r3, r3, r31; // lwzx
    sub_0x8058ee88();
    r0 = /* load */ r0, 0x34(r29); // lwz
    // cmpwi r0, 0
    L_8058ff9c:
    r3 = /* load */ r3, 0x20(r29); // lwz
    r4 = /* load */ r4, r3, r31; // lwzx
    r3 = /* load */ r3, 0(r4); // lwz
    r3 = /* load */ r3, 4(r3); // lwz
    r0 = /* load */ r0, 0x14(r3); // lwz
    r0 = ((_rotl(r0, 0)) & _mask(0x1d, 0x1d)); // rlwinm.
    L_8058ff9c:
    // stw r4, 0x34(r29)
    r30 = r30 + 1; // addi
    r0 = /* load */ r0, 0x24(r29); // lbz
    // clrlwi r3, r30, 0x18
    // cmplw r3, r0
    L_8058ff48:
    r0 = /* load */ r0, 0x28(r29); // lwz
    r3 = (uint32_t)0 << 16; // lis
    // ori r0, r0, 1
    // stw r0, 0x28(r29)
    r3 = /* load */ r3, 0(r3); // lwz
    r0 = /* load */ r0, 0xb70(r3); // lwz
    // cmpwi r0, 0xb
    L_8059000c:
    r3 = /* load */ r3, 0xb74(r3); // lwz
    r0 = r3 + -8; // addi
    // cmplwi r0, 2
    L_8059000c:
    r3 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r3 = /* load */ r3, 0(r3); // lwz
    r5 = 0; // li
    f0 = /* load */ f0, 0(r4); // lfs
    // stw r5, 0x28(r3)
    r0 = r3 + 0x10; // addi
    // stw r0, 0x1c(r3)
}
