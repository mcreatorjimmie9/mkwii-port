/* Function at 0x8078CFE4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8078CFE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078CFF4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078CFFC
    r30 = r3;
    if (==) goto 0x0x8078d034;
    /* lis r4, 0 */ // 0x8078D008
    r4 = r4 + 0; // 0x8078D00C
    *(0 + r3) = r4; // stw @ 0x8078D010
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = r30 + 4; // 0x8078D018
    /* li r4, -1 */ // 0x8078D01C
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078d034;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}