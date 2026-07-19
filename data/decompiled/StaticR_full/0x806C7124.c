/* Function at 0x806C7124, size=356 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_806C7124(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r26 */
    /* stmw r26, 0x38(r1) */ // 0x806C7130
    /* lis r31, 0 */ // 0x806C7134
    r30 = r3;
    r31 = r31 + 0; // 0x806C713C
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806C7144
    /* lis r3, 0 */ // 0x806C7148
    r4 = r4 + 0; // 0x806C714C
    *(0 + r30) = r4; // stw @ 0x806C7150
    r5 = r31 + 0x54; // 0x806C7154
    /* lis r7, 0 */ // 0x806C7158
    r26 = *(0x54 + r31); // lwz @ 0x806C715C
    /* lis r4, 0 */ // 0x806C7160
    r27 = *(4 + r5); // lwz @ 0x806C7164
    r3 = r3 + 0; // 0x806C7168
    r28 = *(8 + r5); // lwz @ 0x806C716C
    r8 = r31 + 0x60; // 0x806C7170
    *(0x54 + r30) = r28; // stw @ 0x806C7174
    r7 = r7 + 0; // 0x806C7178
    r6 = r31 + 0x6c; // 0x806C717C
    r5 = r31 + 0x78; // 0x806C7180
    *(0x44 + r30) = r3; // stw @ 0x806C7184
    r4 = r4 + 0; // 0x806C7188
    r3 = r30 + 0x94; // 0x806C718C
    *(0x48 + r30) = r30; // stw @ 0x806C7190
    *(0x4c + r30) = r26; // stw @ 0x806C7194
    *(0x50 + r30) = r27; // stw @ 0x806C7198
    r29 = *(0x60 + r31); // lwz @ 0x806C719C
    r12 = *(4 + r8); // lwz @ 0x806C71A0
    r11 = *(8 + r8); // lwz @ 0x806C71A4
    *(0x68 + r30) = r11; // stw @ 0x806C71A8
    *(0x58 + r30) = r7; // stw @ 0x806C71AC
    *(0x5c + r30) = r30; // stw @ 0x806C71B0
    *(0x60 + r30) = r29; // stw @ 0x806C71B4
    *(0x64 + r30) = r12; // stw @ 0x806C71B8
    r10 = *(0x6c + r31); // lwz @ 0x806C71BC
    r9 = *(4 + r6); // lwz @ 0x806C71C0
    r8 = *(8 + r6); // lwz @ 0x806C71C4
    *(0x7c + r30) = r8; // stw @ 0x806C71C8
    *(0x6c + r30) = r7; // stw @ 0x806C71CC
    *(0x70 + r30) = r30; // stw @ 0x806C71D0
    *(0x74 + r30) = r10; // stw @ 0x806C71D4
    *(0x78 + r30) = r9; // stw @ 0x806C71D8
    r7 = *(0x78 + r31); // lwz @ 0x806C71DC
    r6 = *(4 + r5); // lwz @ 0x806C71E0
    r0 = *(8 + r5); // lwz @ 0x806C71E4
    *(0x2c + r1) = r26; // stw @ 0x806C71E8
    *(0x30 + r1) = r27; // stw @ 0x806C71EC
    *(0x34 + r1) = r28; // stw @ 0x806C71F0
    *(0x20 + r1) = r29; // stw @ 0x806C71F4
    *(0x24 + r1) = r12; // stw @ 0x806C71F8
    *(0x28 + r1) = r11; // stw @ 0x806C71FC
    *(0x14 + r1) = r10; // stw @ 0x806C7200
    *(0x18 + r1) = r9; // stw @ 0x806C7204
    *(0x1c + r1) = r8; // stw @ 0x806C7208
    *(8 + r1) = r7; // stw @ 0x806C720C
    *(0xc + r1) = r6; // stw @ 0x806C7210
    *(0x10 + r1) = r0; // stw @ 0x806C7214
    *(0x80 + r30) = r4; // stw @ 0x806C7218
    *(0x84 + r30) = r30; // stw @ 0x806C721C
    *(0x88 + r30) = r7; // stw @ 0x806C7220
    *(0x8c + r30) = r6; // stw @ 0x806C7224
    *(0x90 + r30) = r0; // stw @ 0x806C7228
    FUN_8066880C(); // bl 0x8066880C
    r26 = r30 + 0x1d8; // 0x806C7230
    r3 = r26;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806C723C
    r27 = r30 + 0x34c; // 0x806C7240
    r3 = r3 + 0; // 0x806C7244
    *(0 + r26) = r3; // stw @ 0x806C7248
    r3 = r27;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806C7254
    r3 = r30 + 0x4c0; // 0x806C7258
    r4 = r4 + 0; // 0x806C725C
    *(0 + r27) = r4; // stw @ 0x806C7260
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r30 + 0x634; // 0x806C7268
    FUN_8066D634(r3, r4, r3); // bl 0x8066D634
    r3 = r30;
    r0 = *(0x54 + r1); // lwz @ 0x806C7278
    return;
}