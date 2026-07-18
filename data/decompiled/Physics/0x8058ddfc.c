// Decompiled from StaticR.rel
// Address: 0x8058ddfc
// Size: 244 bytes (61 instructions)
// Stack frame: 0x0050
// Calls: 0x805901cc, 0x80555bf4, 0x80593000

void sub_8058ddfc(r3 /* param */, r4 /* param */, r5 /* param */, r6 /* param */, r7 /* param */, r8 /* param */, r9 /* param */, r10 /* param */) {
    // stwu r1, -0x50(r1)
    // mflr r0
    // stw r0, 0x54(r1)
    // stmw r21, 0x24(r1)
    r21 = r3; // mr
    r29 = /* load */ r29, 0x58(r1); // lwz
    r22 = r4; // mr
    r30 = /* load */ r30, 0x5c(r1); // lwz
    r23 = r5; // mr
    r31 = /* load */ r31, 0x60(r1); // lwz
    r24 = r6; // mr
    r25 = r7; // mr
    r26 = r8; // mr
    r27 = r9; // mr
    r28 = r10; // mr
    sub_0x805901cc();
    r3 = (uint32_t)0 << 16; // lis
    r0 = 0; // li
    r3 = r3 + 0; // addi
    // stw r3, 0xc(r21)
    r3 = 0x3c; // li
    // stw r0, 0x1c(r21)
    // stw r0, 0x20(r21)
    // stw r0, 0x24(r21)
    // stw r0, 0x28(r21)
    // stw r0, 0x2c(r21)
    // stw r0, 0x30(r21)
    // stw r0, 0x34(r21)
    // stw r0, 0x38(r21)
    // stw r0, 0x40(r21)
    // stw r0, 0x44(r21)
    // stw r0, 0x58(r21)
    // stw r0, 0x5c(r21)
    // stw r0, 0x60(r21)
    // stw r0, 0x64(r21)
    // stw r0, 0x68(r21)
    // stw r0, 0x6c(r21)
    // stw r0, 0x70(r21)
    // stw r0, 0x74(r21)
    // stw r0, 0x7c(r21)
    sub_0x80555bf4();
    // cmpwi r3, 0
    L_8058ded4:
    // stw r29, 8(r1)
    r4 = r22; // mr
    r5 = r23; // mr
    r6 = r24; // mr
    // stw r30, 0xc(r1)
    r7 = r25; // mr
    r8 = r26; // mr
    r9 = r27; // mr
    // stw r31, 0x10(r1)
    r10 = r28; // mr
    sub_0x80593000();
    // stw r3, 0x14(r21)
    r3 = r21; // mr
    // lmw r21, 0x24(r1)
    r0 = /* load */ r0, 0x54(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
