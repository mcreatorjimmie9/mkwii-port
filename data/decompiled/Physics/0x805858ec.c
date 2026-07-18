// Decompiled from StaticR.rel
// Address: 0x805858ec
// Size: 344 bytes (86 instructions)
// Stack frame: 0x0020
// Calls: 0x80555bf4, 0x805908b4, indirect, 0x8059040c, 0x805907bc, 0x80555bf4, 0x8059040c, 0x8059040c, 0x8059040c, 0x805903ec, 0x8059cf50, 0x80591658, 0x805b7004, 0x80555bf4

void sub_805858ec(void) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    r11 = r1 + 0x20; // addi
    sub_0x80555bf4();
    r5 = (uint32_t)0 << 16; // lis
    r29 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r5); // lfs
    r27 = r3; // mr
    // stfs f0, 0x2c(r3)
    r28 = r4; // mr
    r29 = r29 + 0; // addi
    sub_0x805908b4();
    f0 = /* load */ f0, 0x184(r3); // lfs
    r3 = r27; // mr
    // stfs f0, 0x174(r27)
    r12 = /* load */ r12, 0xc(r27); // lwz
    r12 = /* load */ r12, 0x2c(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r3 = r27; // mr
    sub_0x8059040c();
    r30 = r3; // mr
    r3 = r27; // mr
    sub_0x805907bc();
    r5 = r3; // mr
    r4 = (uint32_t)0 << 16; // lis
    r3 = r30 + 0xf0; // addi
    r4 = r4 + 0; // addi
    r5 = r5 + 0x5c; // addi
    sub_0x80555bf4();
    r3 = r27; // mr
    sub_0x8059040c();
    r30 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r30); // lfs
    r31 = r30 + 0; // addi
    // stfs f0, 0x74(r3)
    f0 = /* load */ f0, 4(r31); // lfs
    // stfs f0, 0x78(r3)
    f0 = /* load */ f0, 8(r31); // lfs
    // stfs f0, 0x7c(r3)
    r3 = r27; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0(r30); // lfs
    // stfs f0, 0xb0(r3)
    f0 = /* load */ f0, 4(r31); // lfs
    // stfs f0, 0xb4(r3)
    f0 = /* load */ f0, 8(r31); // lfs
    // stfs f0, 0xb8(r3)
    r3 = r27; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0(r30); // lfs
    // stfs f0, 0xc8(r3)
    f0 = /* load */ f0, 4(r31); // lfs
    // stfs f0, 0xcc(r3)
    f0 = /* load */ f0, 8(r31); // lfs
    // stfs f0, 0xd0(r3)
    r3 = r27; // mr
    sub_0x805903ec();
    sub_0x8059cf50();
    f4 = /* load */ f4, 0(r29); // lfs
    r3 = r27; // mr
    f3 = /* load */ f3, 0x38(r29); // lfs
    f2 = /* load */ f2, 0x38(r27); // lfs
    f1 = /* load */ f1, 0x3c(r27); // lfs
    f0 = /* load */ f0, 0x40(r27); // lfs
    // stfs f4, 0x104(r27)
    // stfs f4, 0x15c(r27)
    // stfs f4, 0x158(r27)
    // stfs f4, 0x288(r27)
    // stfs f4, 0xf4(r27)
    // stfs f3, 0x198(r27)
    // stfs f2, 0x19c(r27)
    // stfs f1, 0x1a0(r27)
    // stfs f0, 0x1a4(r27)
    sub_0x80591658();
    r4 = r28; // mr
    sub_0x805b7004();
    f0 = /* load */ f0, 0xd8(r29); // lfs
    r11 = r1 + 0x20; // addi
    // stfs f0, 0x180(r27)
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
