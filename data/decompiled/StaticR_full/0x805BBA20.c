/* Function at 0x805BBA20, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805BBA20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x805BBA28
    *(0xc + r1) = r31; // stw @ 0x805BBA30
    *(8 + r1) = r30; // stw @ 0x805BBA34
    r0 = *(0 + r3); // lwz @ 0x805BBA38
    if (!=) goto 0x0x805bbaa4;
    /* li r3, 0x28 */ // 0x805BBA44
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x805bba9c;
    /* lis r4, 0 */ // 0x805BBA58
    r4 = r4 + 0; // 0x805BBA5C
    *(0x10 + r3) = r4; // stw @ 0x805BBA60
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x805BBA68
}