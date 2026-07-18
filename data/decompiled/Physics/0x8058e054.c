// Decompiled from StaticR.rel
// Address: 0x8058e054
// Size: 372 bytes (93 instructions)
// Stack frame: 0x0050
// Calls: 0x805914fc, 0x805907a4, 0x8059080c, indirect, 0x805907a4, 0x8059024c, 0x805907bc, 0x8059080c, 0x80555bf4

void sub_8058e054(r3 /* param */) {
    // stwu r1, -0x50(r1)
    // mflr r0
    // stw r0, 0x54(r1)
    // stw r31, 0x4c(r1)
    // stw r30, 0x48(r1)
    r30 = r3; // mr
    sub_0x805914fc();
    r5 = /* load */ r5, 0(r3); // lwz
    r4 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 4(r3); // lwz
    // stw r0, 0xc(r1)
    f0 = /* load */ f0, 0(r4); // lfs
    // stw r5, 8(r1)
    f1 = /* load */ f1, 0xc(r1); // lfs
    r0 = /* load */ r0, 8(r3); // lwz
    // .byte 0xfc, 0x01, 0x00, 0x40
    // stw r0, 0x10(r1)
    L_8058e0a0:
    // stfs f0, 0xc(r1)
    r3 = r30; // mr
    sub_0x805907a4();
    f1 = /* load */ f1, 0x64(r3); // lfs
    r3 = r30; // mr
    f0 = /* load */ f0, 0xc(r1); // lfs
    f0 = f0 * f1; // fmuls
    // stfs f0, 0xc(r1)
    sub_0x8059080c();
    r12 = /* load */ r12, 0(r3); // lwz
    r4 = r1 + 8; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r30; // mr
    sub_0x805907a4();
    r4 = /* load */ r4, 0x68(r3); // lwz
    r0 = /* load */ r0, 0x6c(r3); // lwz
    // stw r0, 0x1c(r1)
    // stw r4, 0x18(r1)
    r4 = /* load */ r4, 0x70(r3); // lwz
    r0 = /* load */ r0, 0x74(r3); // lwz
    // stw r0, 0x24(r1)
    // stw r4, 0x20(r1)
    r4 = /* load */ r4, 0x78(r3); // lwz
    r0 = /* load */ r0, 0x7c(r3); // lwz
    // stw r0, 0x2c(r1)
    // stw r4, 0x28(r1)
    r4 = /* load */ r4, 0x80(r3); // lwz
    r0 = /* load */ r0, 0x84(r3); // lwz
    // stw r0, 0x34(r1)
    // stw r4, 0x30(r1)
    r4 = /* load */ r4, 0x88(r3); // lwz
    r0 = /* load */ r0, 0x8c(r3); // lwz
    // stw r0, 0x3c(r1)
    // stw r4, 0x38(r1)
    r4 = /* load */ r4, 0x90(r3); // lwz
    r0 = /* load */ r0, 0x94(r3); // lwz
    r3 = r30; // mr
    // stw r0, 0x44(r1)
    // stw r4, 0x40(r1)
    sub_0x8059024c();
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x24(r1)
    f0 = /* load */ f0, 4(r3); // lfs
    // stfs f0, 0x34(r1)
    f0 = /* load */ f0, 8(r3); // lfs
    r3 = r30; // mr
    // stfs f0, 0x44(r1)
    sub_0x805907bc();
    f1 = /* load */ f1, 0x22c(r3); // lfs
    r3 = r30; // mr
    f0 = /* load */ f0, 0x34(r1); // lfs
    f0 = f0 - f1; // fsubs
    // stfs f0, 0x34(r1)
    sub_0x8059080c();
    r30 = r3; // mr
    r31 = 0; // li
    r3 = /* load */ r3, 0x14(r30); // lwz
    r3 = /* load */ r3, 0(r3); // lwz
    // cmpwi r3, 0
    L_8058e1a0:
    r5 = r1 + 0x18; // addi
    r4 = 0; // li
    sub_0x80555bf4();
    r31 = r31 + 1; // addi
    r30 = r30 + 4; // addi
    // cmpwi r31, 2
    L_8058e184:
    r0 = /* load */ r0, 0x54(r1); // lwz
    r31 = /* load */ r31, 0x4c(r1); // lwz
    r30 = /* load */ r30, 0x48(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
