// Decompiled from StaticR.rel
// Address: 0x80589744
// Size: 84 bytes (21 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4

void sub_80589744(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // cmpwi r3, 0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    L_8058976c:
    // cmpwi r4, 0
    L_8058976c:
    sub_0x80555bf4();
    r3 = r31; // mr
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
    r3 = 0; // li
    r3 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r3); // lfs
}
