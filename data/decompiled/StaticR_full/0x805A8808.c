/* Function at 0x805A8808, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A8808(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A8818
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A8820
    r30 = r3;
    if (==) goto 0x0x805a8850;
    /* lis r4, 0 */ // 0x805A882C
    r4 = r4 + 0; // 0x805A8830
    *(8 + r3) = r4; // stw @ 0x805A8834
    r3 = *(0x10 + r3); // lwz @ 0x805A8838
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x805a8850;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805A8854
    r30 = *(8 + r1); // lwz @ 0x805A8858
}