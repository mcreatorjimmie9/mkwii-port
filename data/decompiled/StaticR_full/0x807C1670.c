/* Function at 0x807C1670, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C1670(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807C1680
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C1688
    r30 = r3;
    if (==) goto 0x0x807c16dc;
    /* lis r4, 0 */ // 0x807C1694
    r4 = r4 + 0; // 0x807C1698
    *(0 + r3) = r4; // stw @ 0x807C169C
    r3 = *(4 + r3); // lwz @ 0x807C16A0
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(8 + r30); // lwz @ 0x807C16A8
    /* li r0, 0 */ // 0x807C16AC
    *(4 + r30) = r0; // stw @ 0x807C16B0
    if (==) goto 0x0x807c16c4;
    r3 = r3 + -0x10; // 0x807C16BC
    FUN_805E3430(r3); // bl 0x805E3430
}