/* Function at 0x80917724, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80917724(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80917730
    *(0xc + r1) = r31; // stw @ 0x80917734
    r31 = r3;
    if (==) goto 0x0x8091775c;
    /* lis r5, 0 */ // 0x80917740
    r4 = *(0 + r5); // lwz @ 0x80917748
    r0 = r4 + -1; // 0x8091774C
    *(0 + r5) = r0; // stw @ 0x80917750
    if (<=) goto 0x0x8091775c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80917760
    r0 = *(0x14 + r1); // lwz @ 0x80917764
    return;
}