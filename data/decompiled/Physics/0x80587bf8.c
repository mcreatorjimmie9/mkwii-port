// Decompiled from StaticR.rel
// Address: 0x80587bf8
// Size: 156 bytes (39 instructions)
// Stack frame: 0x0020
// Calls: 0x80555bf4, 0x80575a44, 0x80555bf4, 0x805b5500, 0x80555bf4, 0x805b4b24

void sub_80587bf8(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    // stw r30, 0x18(r1)
    r30 = r4; // mr
    // stw r29, 0x14(r1)
    r29 = r3; // mr
    r3 = 0x50; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r31 = r3; // mr
    L_80587c40:
    sub_0x80575a44();
    r3 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    // stw r3, 0xc(r31)
    // stw r29, 0x4c(r31)
    // stw r31, 0x258(r29)
    r3 = 0x90; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_80587c58:
    sub_0x805b5500();
    // stw r3, 0x25c(r29)
    r3 = 0x78; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_80587c74:
    r4 = r30; // mr
    sub_0x805b4b24();
    // stw r3, 0x260(r29)
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r0 = /* load */ r0, 0x24(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
