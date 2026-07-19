// Decompiled from StaticR.rel
// Address: 0x8058e9d0
// Size: 124 bytes (31 instructions)
// Stack frame: 0x0020
// Calls: 0x8059aaf0

void sub_8058e9d0(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x20(r1)
    // mflr r0
    // stw r0, 0x24(r1)
    // stw r31, 0x1c(r1)
    r31 = 0; // li
    // stw r30, 0x18(r1)
    r30 = 0; // li
    // stw r29, 0x14(r1)
    r29 = r4; // mr
    // stw r28, 0x10(r1)
    r28 = r3; // mr
    goto L_8058ea1c;
    r3 = /* load */ r3, 0x2c(r28); // lwz
    r4 = r30; // mr
    r5 = r29; // mr
    r3 = /* load */ r3, r3, r31; // lwzx
    sub_0x8059aaf0();
    r31 = r31 + 4; // addi
    r30 = r30 + 1; // addi
    r3 = /* load */ r3, 0x14(r28); // lwz
    r0 = /* load */ r0, 0xe(r3); // lhz
    // cmpw r30, r0
    L_8058ea00:
    r0 = /* load */ r0, 0x24(r1); // lwz
    r31 = /* load */ r31, 0x1c(r1); // lwz
    r30 = /* load */ r30, 0x18(r1); // lwz
    r29 = /* load */ r29, 0x14(r1); // lwz
    r28 = /* load */ r28, 0x10(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x20
}
