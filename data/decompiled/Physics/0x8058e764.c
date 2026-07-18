// Decompiled from StaticR.rel
// Address: 0x8058e764
// Size: 160 bytes (40 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4, 0x805901cc, indirect

void sub_8058e764(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    r3 = 0x9c; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r31 = r3; // mr
    L_8058e7c0:
    sub_0x805901cc();
    r4 = (uint32_t)0 << 16; // lis
    r3 = (uint32_t)0 << 16; // lis
    r4 = r4 + 0; // addi
    // stw r4, 0xc(r31)
    f0 = /* load */ f0, 0(r3); // lfs
    // stfs f0, 0x24(r31)
    // stfs f0, 0x28(r31)
    // stfs f0, 0x2c(r31)
    // stfs f0, 0x30(r31)
    // stfs f0, 0x34(r31)
    // stfs f0, 0x38(r31)
    // stw r31, 0x10(r30)
    r3 = r31; // mr
    r4 = /* load */ r4, 0x14(r30); // lwz
    r12 = /* load */ r12, 0xc(r31); // lwz
    r12 = /* load */ r12, 0xc(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = /* load */ r3, 0x10(r30); // lwz
    r0 = /* load */ r0, 0x1c(r3); // lwz
    // stw r0, 0x20(r30)
    // stw r3, 0x34(r30)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
