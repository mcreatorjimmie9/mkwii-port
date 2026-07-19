/* Function at 0x805DCFE4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DCFE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805DCFF4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805DCFFC
    r30 = r3;
    if (==) goto 0x0x805dd030;
    if (==) goto 0x0x805dd020;
    /* lis r4, 0 */ // 0x805DD00C
    r4 = r4 + 0; // 0x805DD010
    *(0 + r3) = r4; // stw @ 0x805DD014
    r3 = *(0x14 + r3); // lwz @ 0x805DD018
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x805dd030;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805DD034
    r30 = *(8 + r1); // lwz @ 0x805DD038
    r0 = *(0x14 + r1); // lwz @ 0x805DD03C
    return;
}