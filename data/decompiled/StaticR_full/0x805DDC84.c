/* Function at 0x805DDC84, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DDC84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805DDC94
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805DDC9C
    r30 = r3;
    if (==) goto 0x0x805ddcf8;
    r0 = *(8 + r3); // lwz @ 0x805DDCA8
    /* lis r4, 0 */ // 0x805DDCAC
    r4 = r4 + 0; // 0x805DDCB0
    *(0 + r3) = r4; // stw @ 0x805DDCB4
    if (==) goto 0x0x805ddcd8;
    r3 = r0;
    /* li r4, 1 */ // 0x805DDCC4
    r12 = *(0 + r3); // lwz @ 0x805DDCC8
    r12 = *(8 + r12); // lwz @ 0x805DDCCC
    /* mtctr r12 */ // 0x805DDCD0
    /* bctrl  */ // 0x805DDCD4
    /* lis r4, 0 */ // 0x805DDCD8
    r3 = *(0xc + r30); // lwz @ 0x805DDCDC
    r4 = r4 + 0; // 0x805DDCE0
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x805ddcf8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805DDCFC
    r30 = *(8 + r1); // lwz @ 0x805DDD00
}