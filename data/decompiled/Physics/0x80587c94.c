// Decompiled from StaticR.rel
// Address: 0x80587c94
// Size: 172 bytes (43 instructions)
// Stack frame: 0x0010
// Calls: 0x8057829c, 0x80590a50, 0x80537f4c

void sub_80587c94(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x8057829c();
    r3 = r31; // mr
    sub_0x80590a50();
    // cmplwi r3, 1
    L_80587cc8:
    // cmplwi r3, 2
    L_80587cd8:
    goto L_80587ce8;
    r3 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    // stw r3, 0x2c0(r31)
    goto L_80587ce8;
    r3 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    r0 = r3 + 0x30; // addi
    // stw r0, 0x2c0(r31)
    r3 = (uint32_t)0 << 16; // lis
    r4 = 2; // li
    r3 = /* load */ r3, 0(r3); // lwz
    sub_0x80537f4c();
    // cmpwi r3, 0
    L_80587d18:
    r3 = /* load */ r3, 0x2c0(r31); // lwz
    f0 = /* load */ f0, 0x18(r3); // lfs
    // stfs f0, 0x29c(r31)
    f0 = /* load */ f0, 0x1c(r3); // lfs
    // stfs f0, 0x298(r31)
    goto L_80587d2c;
    r3 = /* load */ r3, 0x2c0(r31); // lwz
    f0 = /* load */ f0, 4(r3); // lfs
    // stfs f0, 0x29c(r31)
    f0 = /* load */ f0, 8(r3); // lfs
    // stfs f0, 0x298(r31)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
