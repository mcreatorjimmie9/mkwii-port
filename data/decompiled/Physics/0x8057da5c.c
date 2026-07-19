// Decompiled from StaticR.rel
// Address: 0x8057da5c
// Size: 488 bytes (122 instructions)
// Stack frame: 0x40
// Calls: 0x8059040c, 0x80555bf4, 0x8059040c, 0x80555bf4, 0x8059040c, 0x8059040c, 0x8059040c, 0x8059040c, 0x8059040c, 0x8059040c, 0x805907d4

void sub_8057da5c(r3 /* param */, r4 /* param */, r5 /* param */) {
    char pad[0x30]; /* local variables */

    // mflr r0
    // stw r0, 0x44(r1)
    // stw r31, 0x3c(r1)
    // mr r31, r3
    // stw r30, 0x38(r1)
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 | 8;
    // stw r0, 4(r4)
    // lwz r4, 0(r3)
    // lwz r4, 4(r4)
    // lwz r0, 4(r4)
    r0 = r0 & 0x00000000; /* rlwinm */
    // stw r0, 4(r4)
    // lwz r12, 0xc(r3)
    // lwz r12, 0x34(r12)
    // mtctr r12
    // bctrl 
    // mr r3, r31
    sub_0x8059040c();
    // lis r4, 0
    r5 = r31 + 0xd4;
    r4 = r4 + 0;
    r3 = r3 + 0xf0;
    sub_0x80555bf4();
    // mr r3, r31
    sub_0x8059040c();
    // lis r4, 0
    r5 = r31 + 0xe0;
    r4 = r4 + 0;
    r3 = r3 + 0xf0;
    sub_0x80555bf4();
    // lis r30, 0
    // li r0, 0
    // lfs f0, 0(r30)
    // mr r3, r31
    // sth r0, 0xfc(r31)
    // sth r0, 0x100(r31)
    // sth r0, 0xfe(r31)
    // stw r0, 0xcc(r31)
    // stw r0, 0xd0(r31)
    // stfs f0, 0x22c(r31)
    sub_0x8059040c();
    // lfs f0, 0x148(r3)
    // mr r3, r31
    // stfs f0, 0x230(r31)
    // lwz r4, 0x284(r31)
    // lfs f0, 0(r30)
    // lfs f1, 0(r4)
    // stfs f1, 0x228(r31)
    // stfs f0, 0x104(r31)
    sub_0x8059040c();
    // lwz r0, 0x78(r3)
    // stw r0, 0x24(r1)
    // lwz r4, 0x74(r3)
    // lwz r0, 0x7c(r3)
    // mr r3, r31
    // lfs f0, 0(r30)
    // stw r4, 0x20(r1)
    // stw r0, 0x28(r1)
    // stfs f0, 0x24(r1)
    sub_0x8059040c();
    // lfs f0, 0x20(r1)
    // stfs f0, 0x74(r3)
    // lfs f0, 0x24(r1)
    // stfs f0, 0x78(r3)
    // lfs f0, 0x28(r1)
    // stfs f0, 0x7c(r3)
    // mr r3, r31
    // lfs f0, 0(r30)
    // lfs f1, 0x228(r31)
    // stfs f0, 8(r1)
    // stfs f1, 0xc(r1)
    // stfs f0, 0x10(r1)
    sub_0x8059040c();
    // lfs f2, 0x74(r3)
    // lfs f0, 8(r1)
    // lfs f1, 0xc(r1)
    f2 = f2 + f0;
    // lfs f0, 0x10(r1)
    // stfs f2, 0x74(r3)
    // lfs f2, 0x78(r3)
    f1 = f2 + f1;
    // stfs f1, 0x78(r3)
    // lfs f1, 0x7c(r3)
    f0 = f1 + f0;
    // stfs f0, 0x7c(r3)
    // mr r3, r31
    sub_0x8059040c();
    // lwz r0, 0x114(r3)
    // stw r0, 0x18(r1)
    // lwz r4, 0x110(r3)
    // lwz r0, 0x118(r3)
    // mr r3, r31
    // lfs f0, 0(r30)
    // stw r4, 0x14(r1)
    // stw r0, 0x1c(r1)
    // stfs f0, 0x18(r1)
    sub_0x8059040c();
    // lfs f0, 0x14(r1)
    // stfs f0, 0x110(r3)
    // lfs f0, 0x18(r1)
    // stfs f0, 0x114(r3)
    // lfs f0, 0x1c(r1)
    // stfs f0, 0x118(r3)
    // mr r3, r31
    sub_0x805907d4();
    // lwz r12, 0(r3)
    // li r4, 0x197
    // lfs f1, 0(r30)
    // lwz r12, 0xe0(r12)
    // mtctr r12
    // bctrl 
    // lwz r0, 0x44(r1)
    // lwz r31, 0x3c(r1)
    // lwz r30, 0x38(r1)
    // mtlr r0
}
