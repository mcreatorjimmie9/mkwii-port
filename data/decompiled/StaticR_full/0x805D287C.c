/* Function at 0x805D287C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805D287C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805D288C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805D2894
    r30 = r3;
    if (==) goto 0x0x805d28f8;
    /* lis r5, 0 */ // 0x805D28A0
    /* lis r4, 0 */ // 0x805D28A4
    r5 = r5 + 0; // 0x805D28A8
    *(0 + r3) = r5; // stw @ 0x805D28AC
    r3 = *(0 + r4); // lwz @ 0x805D28B0
    if (==) goto 0x0x805d28dc;
    /* li r0, 0 */ // 0x805D28BC
    *(0 + r4) = r0; // stw @ 0x805D28C0
    if (==) goto 0x0x805d28dc;
    r12 = *(0x10 + r3); // lwz @ 0x805D28C8
    /* li r4, 1 */ // 0x805D28CC
    r12 = *(8 + r12); // lwz @ 0x805D28D0
    /* mtctr r12 */ // 0x805D28D4
    /* bctrl  */ // 0x805D28D8
    r3 = r30;
    /* li r4, 0 */ // 0x805D28E0
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805d28f8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805D28FC
    r30 = *(8 + r1); // lwz @ 0x805D2900
}