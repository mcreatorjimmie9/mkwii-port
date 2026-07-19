/* Function at 0x8091DF48, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8091DF48(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r31, r4, 0x18 */ // 0x8091DF58
    *(0x18 + r1) = r30; // stw @ 0x8091DF5C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8091DF64
    r29 = r3;
    r5 = *(0x1c + r3); // lwz @ 0x8091DF6C
    /* lbzx r0, r5, r31 */ // 0x8091DF70
    if (==) goto 0x0x8091e03c;
    r4 = r5 + r31; // 0x8091DF7C
    r0 = *(0x10 + r4); // lwz @ 0x8091DF80
    r4 = *(0x14 + r4); // lhz @ 0x8091DF84
    /* neg r5, r0 */ // 0x8091DF88
    FUN_8091E498(); // bl 0x8091E498
    /* li r8, 0 */ // 0x8091DF90
    /* b 0x8091e020 */ // 0x8091DF94
    r3 = *(0x34 + r29); // lwz @ 0x8091DF98
    /* clrlwi r0, r8, 0x10 */ // 0x8091DF9C
    r7 = r8 rlwinm 2; // rlwinm
    /* li r9, 0 */ // 0x8091DFA4
    /* lbzx r4, r3, r0 */ // 0x8091DFA8
    /* b 0x8091e010 */ // 0x8091DFAC
    r3 = *(0x3c + r29); // lwz @ 0x8091DFB0
    /* clrlwi r0, r9, 0x10 */ // 0x8091DFB4
    /* lwzx r3, r3, r7 */ // 0x8091DFB8
    /* lbzx r0, r3, r0 */ // 0x8091DFBC
    if (!=) goto 0x0x8091e00c;
    /* clrlwi r6, r8, 0x10 */ // 0x8091DFC8
    /* b 0x8091dfec */ // 0x8091DFCC
    r3 = *(0x3c + r29); // lwz @ 0x8091DFD0
    /* clrlwi r0, r9, 0x10 */ // 0x8091DFD4
    r9 = r9 + 1; // 0x8091DFD8
    /* lwzx r3, r7, r3 */ // 0x8091DFDC
    r3 = r3 + r0; // 0x8091DFE0
    r0 = *(1 + r3); // lbz @ 0x8091DFE4
    *(0 + r3) = r0; // stb @ 0x8091DFE8
    r5 = *(0x34 + r29); // lwz @ 0x8091DFEC
    /* clrlwi r4, r9, 0x10 */ // 0x8091DFF0
    /* lbzx r3, r6, r5 */ // 0x8091DFF4
    r0 = r3 + -1; // 0x8091DFF8
    if (<) goto 0x0x8091dfd0;
    /* stbx r0, r6, r5 */ // 0x8091E004
    /* b 0x8091e01c */ // 0x8091E008
    r9 = r9 + 1; // 0x8091E00C
    /* clrlwi r0, r9, 0x10 */ // 0x8091E010
    if (<) goto 0x0x8091dfb0;
    r8 = r8 + 1; // 0x8091E01C
    r0 = *(0x10 + r29); // lhz @ 0x8091E020
    /* clrlwi r3, r8, 0x10 */ // 0x8091E024
    if (<) goto 0x0x8091df98;
    r3 = *(0x1c + r29); // lwz @ 0x8091E030
    /* li r0, 0 */ // 0x8091E034
    /* stbx r0, r3, r31 */ // 0x8091E038
    r0 = *(0x24 + r1); // lwz @ 0x8091E03C
    r31 = *(0x1c + r1); // lwz @ 0x8091E040
    r30 = *(0x18 + r1); // lwz @ 0x8091E044
    r29 = *(0x14 + r1); // lwz @ 0x8091E048
    return;
}