/* Function at 0x80646FAC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80646FAC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80646FBC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80646FC4
    r30 = r3;
    if (==) goto 0x0x80647028;
    /* lis r5, 0 */ // 0x80646FD0
    /* lis r4, 0 */ // 0x80646FD4
    r5 = r5 + 0; // 0x80646FD8
    *(0 + r3) = r5; // stw @ 0x80646FDC
    r3 = *(0 + r4); // lwz @ 0x80646FE0
    if (==) goto 0x0x8064700c;
    /* li r0, 0 */ // 0x80646FEC
    *(0 + r4) = r0; // stw @ 0x80646FF0
    if (==) goto 0x0x8064700c;
    r12 = *(0x10 + r3); // lwz @ 0x80646FF8
    /* li r4, 1 */ // 0x80646FFC
    r12 = *(8 + r12); // lwz @ 0x80647000
    /* mtctr r12 */ // 0x80647004
    /* bctrl  */ // 0x80647008
    r3 = r30;
    /* li r4, 0 */ // 0x80647010
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80647028;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8064702C
    r30 = *(8 + r1); // lwz @ 0x80647030
}