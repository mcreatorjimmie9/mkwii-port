// Decompiled from StaticR.rel
// Address: 0x80589964
// Size: 104 bytes (26 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4

void sub_80589964(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    L_8058998c:
    // cmpwi r4, 0
    L_8058998c:
    sub_0x80555bf4();
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
    r4 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    f0 = /* load */ f0, 0(r4); // lfs
    // stw r0, 0x14(r3)
    // stb r0, 0x54(r3)
    // stb r0, 0x55(r3)
    // sth r0, 0x56(r3)
    // stfs f0, 0x50(r3)
    // stw r0, 0x1c(r3)
}
