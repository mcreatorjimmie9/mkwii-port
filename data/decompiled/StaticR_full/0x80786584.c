/* Function at 0x80786584, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80786584(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80786594
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078659C
    r30 = r3;
    if (==) goto 0x0x80786600;
    /* lis r5, 0 */ // 0x807865A8
    /* lis r4, 0 */ // 0x807865AC
    r5 = r5 + 0; // 0x807865B0
    *(0 + r3) = r5; // stw @ 0x807865B4
    r3 = *(0 + r4); // lwz @ 0x807865B8
    if (==) goto 0x0x807865e4;
    /* li r0, 0 */ // 0x807865C4
    *(0 + r4) = r0; // stw @ 0x807865C8
    if (==) goto 0x0x807865e4;
    r12 = *(0 + r3); // lwz @ 0x807865D0
    /* li r4, 1 */ // 0x807865D4
    r12 = *(8 + r12); // lwz @ 0x807865D8
    /* mtctr r12 */ // 0x807865DC
    /* bctrl  */ // 0x807865E0
    r3 = r30;
    /* li r4, 0 */ // 0x807865E8
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80786600;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80786604
    r30 = *(8 + r1); // lwz @ 0x80786608
}