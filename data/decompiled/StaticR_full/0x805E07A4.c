/* Function at 0x805E07A4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E07A4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E07B0
    /* lis r31, 0 */ // 0x805E07B4
    r0 = *(0 + r31); // lwz @ 0x805E07B8
    if (==) goto 0x0x805e07d8;
    /* lis r3, 0 */ // 0x805E07C4
    r3 = r3 + 0; // 0x805E07C8
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x805E07D0
    *(0 + r31) = r0; // stw @ 0x805E07D4
    r0 = *(0x14 + r1); // lwz @ 0x805E07D8
    r31 = *(0xc + r1); // lwz @ 0x805E07DC
}