// Decompiled from StaticR.rel
// Address: 0x8058dfbc
// Size: 152 bytes (38 instructions)
// Stack frame: 0x0010
// Calls: 0x805906dc, 0x8056e114, 0x805906f4, 0x80598c14, 0x8059031c, 0x8059071c, 0x8059aba8, 0x8059032c

void sub_8058dfbc(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    sub_0x805906dc();
    sub_0x8056e114();
    r31 = 0; // li
    goto L_8058dff8;
    r3 = r30; // mr
    r4 = r31; // mr
    sub_0x805906f4();
    sub_0x80598c14();
    r31 = r31 + 1; // addi
    r3 = r30; // mr
    sub_0x8059031c();
    // clrlwi r0, r3, 0x10
    // cmpw r31, r0
    L_8058dfe4:
    r31 = 0; // li
    goto L_8058e028;
    r3 = r30; // mr
    r4 = r31; // mr
    sub_0x8059071c();
    sub_0x8059aba8();
    r31 = r31 + 1; // addi
    r3 = r30; // mr
    sub_0x8059032c();
    // clrlwi r0, r3, 0x10
    // cmpw r31, r0
    L_8058e014:
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
