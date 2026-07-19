/* Function at 0x8078D378, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078D378(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078D388
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078D390
    r30 = r3;
    if (==) goto 0x0x8078d3b4;
    r3 = *(0 + r3); // lwz @ 0x8078D39C
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x8078d3b4;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8078D3B8
    r30 = *(8 + r1); // lwz @ 0x8078D3BC
}