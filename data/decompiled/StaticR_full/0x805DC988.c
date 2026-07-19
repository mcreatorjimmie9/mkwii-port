/* Function at 0x805DC988, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DC988(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805DC998
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805DC9A0
    r30 = r3;
    if (==) goto 0x0x805dc9d0;
    /* lis r4, 0 */ // 0x805DC9AC
    r4 = r4 + 0; // 0x805DC9B0
    *(0 + r3) = r4; // stw @ 0x805DC9B4
    r3 = *(0x14 + r3); // lwz @ 0x805DC9B8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x805dc9d0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805DC9D4
    r30 = *(8 + r1); // lwz @ 0x805DC9D8
}