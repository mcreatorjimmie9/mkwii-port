/* Function at 0x805BB988, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805BB988(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BB998
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BB9A0
    r30 = r3;
    if (==) goto 0x0x805bba04;
    /* lis r5, 0 */ // 0x805BB9AC
    /* lis r4, 0 */ // 0x805BB9B0
    r5 = r5 + 0; // 0x805BB9B4
    *(0 + r3) = r5; // stw @ 0x805BB9B8
    r3 = *(0 + r4); // lwz @ 0x805BB9BC
    if (==) goto 0x0x805bb9e8;
    /* li r0, 0 */ // 0x805BB9C8
    *(0 + r4) = r0; // stw @ 0x805BB9CC
    if (==) goto 0x0x805bb9e8;
    r12 = *(0x10 + r3); // lwz @ 0x805BB9D4
    /* li r4, 1 */ // 0x805BB9D8
    r12 = *(8 + r12); // lwz @ 0x805BB9DC
    /* mtctr r12 */ // 0x805BB9E0
    /* bctrl  */ // 0x805BB9E4
    r3 = r30;
    /* li r4, 0 */ // 0x805BB9EC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805bba04;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805BBA08
    r30 = *(8 + r1); // lwz @ 0x805BBA0C
}