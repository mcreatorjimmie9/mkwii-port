/* Function at 0x8068013C, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_8068013C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x80680144
    *(0xc + r1) = r31; // stw @ 0x8068014C
    *(8 + r1) = r30; // stw @ 0x80680150
    r30 = r3;
    FUN_80671C1C(r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x1c8; // 0x80680160
    /* li r4, 0 */ // 0x80680164
    /* li r6, 0 */ // 0x80680168
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x80680170
    r3 = r30 + 0x1c8; // 0x80680174
    r4 = r31 + 0; // 0x80680178
    r5 = r4 + 0xe; // 0x8068017C
    r6 = r4 + 0x21; // 0x80680180
    FUN_80671038(r3, r4, r5, r6); // bl 0x80671038
    r3 = r30;
    r5 = r30 + 0x33c; // 0x8068018C
    /* li r4, 1 */ // 0x80680190
    /* li r6, 0 */ // 0x80680194
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r31 = r31 + 0; // 0x8068019C
    r3 = r30 + 0x33c; // 0x806801A0
    r4 = r31 + 0x34; // 0x806801A4
    r5 = r31 + 0x43; // 0x806801A8
    r6 = r31 + 0x4d; // 0x806801AC
    FUN_8066D30C(r3, r4, r5, r6); // bl 0x8066D30C
    /* lis r4, 0 */ // 0x806801B4
    r3 = r30 + 0x1c8; // 0x806801B8
    /* lfs f0, 0(r4) */ // 0x806801BC
    /* li r4, 1 */ // 0x806801C0
    /* stfs f0, 0x3b8(r30) */ // 0x806801C4
    FUN_8069FEE8(r4, r3, r4); // bl 0x8069FEE8
    r3 = r30 + 0x1c8; // 0x806801CC
    r5 = r30 + 0x44; // 0x806801D0
    /* li r4, 0 */ // 0x806801D4
    FUN_8069FEF8(r3, r5, r4); // bl 0x8069FEF8
    r3 = r30 + 0x44; // 0x806801DC
    r4 = r31 + 0x5d; // 0x806801E0
    r5 = r31 + 0x6b; // 0x806801E4
    r6 = r31 + 0x78; // 0x806801E8
    /* li r7, 0 */ // 0x806801EC
    /* li r8, 0 */ // 0x806801F0
    /* li r9, 0 */ // 0x806801F4
    /* li r10, 0 */ // 0x806801F8
    FUN_80670B10(r6, r7, r8, r9, r10); // bl 0x80670B10
    r3 = r30 + 0x44; // 0x80680200
    r4 = r31 + 0x85; // 0x80680204
    FUN_806A0680(r9, r10, r3, r4); // bl 0x806A0680
    r0 = *(0x14 + r1); // lwz @ 0x8068020C
    r31 = *(0xc + r1); // lwz @ 0x80680210
    r30 = *(8 + r1); // lwz @ 0x80680214
    return;
}