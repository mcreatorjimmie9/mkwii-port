/* Function at 0x805DFFDC, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805DFFDC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805DFFE4
    *(0x24 + r1) = r0; // stw @ 0x805DFFE8
    *(0x1c + r1) = r31; // stw @ 0x805DFFEC
    r0 = *(0 + r3); // lwz @ 0x805DFFF0
    if (==) goto 0x0x805e0034;
    /* lis r31, 0 */ // 0x805DFFFC
    r3 = r31 + 0; // 0x805E0000
    /* li r5, 0 */ // 0x805E0008
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    if (==) goto 0x0x805e0020;
    /* li r3, 0 */ // 0x805E0018
    /* b 0x805e0024 */ // 0x805E001C
    r3 = *(8 + r1); // lwz @ 0x805E0020
}