/* Function at 0x808E73B4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808E73B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808E73C4
    r30 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x808E73CC
    /* cntlzw r0, r0 */ // 0x808E73D0
    /* srwi r0, r0, 5 */ // 0x808E73D4
    *(0x6c4 + r3) = r0; // stb @ 0x808E73D8
    /* cntlzw r0, r0 */ // 0x808E73DC
    r3 = r4;
    /* srwi r31, r0, 5 */ // 0x808E73E4
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    r4 = r31;
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x808E73F8
    r31 = *(0xc + r1); // lwz @ 0x808E73FC
    r30 = *(8 + r1); // lwz @ 0x808E7400
    return;
}