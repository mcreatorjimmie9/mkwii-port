// Decompiled from StaticR.rel
// Address: 0x8058c418
// Size: 232 bytes (58 instructions)
// Stack frame: 0x0020
// Calls: 0x805907a4, 0x8059613c, 0x8058c11c, 0x805907bc, 0x80584688, 0x80590e68, 0x80590a9c, 0x807967dc

void sub_8058c418(r3 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = r3; // mr
    sub_0x805907a4();
    sub_0x8059613c();
    r3 = r31; // mr
    r4 = r31 + 0x68; // addi
    sub_0x8058c11c();
    r5 = /* load */ r5, 0x68(r31); // lwz
    r4 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0x6c(r31); // lwz
    r3 = r31; // mr
    // stw r0, 0xc(r1)
    f0 = /* load */ f0, 0(r4); // lfs
    // stw r5, 8(r1)
    f1 = /* load */ f1, 0xc(r1); // lfs
    r0 = /* load */ r0, 0x70(r31); // lwz
    f0 = f1 - f0; // fsubs
    // stw r0, 0x10(r1)
    // stfs f0, 0xc(r1)
    sub_0x805907bc();
    r4 = r1 + 8; // addi
    sub_0x80584688();
    r3 = r31; // mr
    sub_0x80590e68();
    r3 = r31; // mr
    sub_0x80590a9c();
    r4 = (uint32_t)0 << 16; // lis
    // clrlwi r0, r3, 0x18
    r3 = /* load */ r3, 0(r4); // lwz
    // mulli r0, r0, 0x248
    r3 = /* load */ r3, 0x14(r3); // lwz
    r3 = r3 + r0; // add
    sub_0x807967dc();
    r3 = /* load */ r3, 0x60(r31); // lhz
    r0 = 0; // li
    // stw r0, 0x5c(r31)
    r0 = ((_rotl(r3, 0)) & _mask(0x1f, 0x1d)); // rlwinm
    // sth r0, 0x60(r31)
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
    r0 = /* load */ r0, 0x55(r3); // lbz
    // cmpwi r0, 0
    // beqlr 
    r4 = /* load */ r4, 0x56(r3); // lha
    r0 = r4 + 1; // addi
    // sth r0, 0x56(r3)
    r0 = (int16_t)r0; // extsh
    // cmpwi r0, 0x190
    // blelr 
    r0 = 0x190; // li
    // sth r0, 0x56(r3)
}
