/* Function at 0x805ADBA4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805ADBA4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805ADBB0
    r31 = r3;
    r0 = *(0x58 + r3); // lwz @ 0x805ADBB8
    if (<=) goto 0x0x805adbd8;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 0 */ // 0x805ADBC8
    *(0x50 + r31) = r3; // stw @ 0x805ADBCC
    *(0x58 + r31) = r0; // stw @ 0x805ADBD0
    *(0x54 + r31) = r0; // stb @ 0x805ADBD4
    r0 = *(0x14 + r1); // lwz @ 0x805ADBD8
}