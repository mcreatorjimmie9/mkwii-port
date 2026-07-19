/* Function at 0x8091E058, size=276 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8091E058(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r31, r4, 0x18 */ // 0x8091E068
    *(0x18 + r1) = r30; // stw @ 0x8091E06C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8091E074
    r29 = r3;
    r5 = *(0x1c + r3); // lwz @ 0x8091E07C
    /* lbzx r0, r5, r31 */ // 0x8091E080
    if (==) goto 0x0x8091e150;
    r4 = r5 + r31; // 0x8091E08C
    r0 = *(0x10 + r4); // lwz @ 0x8091E090
    r4 = *(0x14 + r4); // lhz @ 0x8091E094
    /* neg r5, r0 */ // 0x8091E098
    FUN_8091E688(); // bl 0x8091E688
    /* li r8, 0 */ // 0x8091E0A0
    /* b 0x8091e134 */ // 0x8091E0A4
    r3 = *(0x34 + r29); // lwz @ 0x8091E0A8
    r6 = r8 rlwinm 1; // rlwinm
    r5 = r8 rlwinm 2; // rlwinm
    /* li r9, 0 */ // 0x8091E0B4
    /* lhzx r4, r3, r6 */ // 0x8091E0B8
    /* b 0x8091e124 */ // 0x8091E0BC
    r3 = *(0x3c + r29); // lwz @ 0x8091E0C0
    r0 = r9 rlwinm 1; // rlwinm
    /* lwzx r3, r3, r5 */ // 0x8091E0C8
    /* lhzx r0, r3, r0 */ // 0x8091E0CC
    if (!=) goto 0x0x8091e120;
    /* b 0x8091e0f8 */ // 0x8091E0D8
    r0 = *(0x3c + r29); // lwz @ 0x8091E0DC
    r4 = r9 rlwinm 1; // rlwinm
    r9 = r9 + 1; // 0x8091E0E4
    /* lwzx r7, r5, r0 */ // 0x8091E0E8
    r3 = r7 + r4; // 0x8091E0EC
    r0 = *(2 + r3); // lhz @ 0x8091E0F0
    /* sthx r0, r7, r4 */ // 0x8091E0F4
    r7 = *(0x34 + r29); // lwz @ 0x8091E0F8
    /* clrlwi r4, r9, 0x10 */ // 0x8091E0FC
    /* lhzx r3, r6, r7 */ // 0x8091E100
    r0 = r3 + -1; // 0x8091E104
    if (<) goto 0x0x8091e0dc;
    /* lhzx r3, r7, r6 */ // 0x8091E110
    r0 = r3 + -1; // 0x8091E114
    /* sthx r0, r7, r6 */ // 0x8091E118
    /* b 0x8091e130 */ // 0x8091E11C
    r9 = r9 + 1; // 0x8091E120
    /* clrlwi r0, r9, 0x10 */ // 0x8091E124
    if (<) goto 0x0x8091e0c0;
    r8 = r8 + 1; // 0x8091E130
    r0 = *(0x10 + r29); // lhz @ 0x8091E134
    /* clrlwi r3, r8, 0x10 */ // 0x8091E138
    if (<) goto 0x0x8091e0a8;
    r3 = *(0x1c + r29); // lwz @ 0x8091E144
    /* li r0, 0 */ // 0x8091E148
    /* stbx r0, r3, r31 */ // 0x8091E14C
    r0 = *(0x24 + r1); // lwz @ 0x8091E150
    r31 = *(0x1c + r1); // lwz @ 0x8091E154
    r30 = *(0x18 + r1); // lwz @ 0x8091E158
    r29 = *(0x14 + r1); // lwz @ 0x8091E15C
    return;
}