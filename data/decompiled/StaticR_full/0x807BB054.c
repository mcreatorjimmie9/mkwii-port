/* Function at 0x807BB054, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BB054(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807BB064
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807BB06C
    r30 = r3;
    if (==) goto 0x0x807bb0f4;
    r0 = *(0x8c + r3); // lwz @ 0x807BB078
    /* lis r4, 0 */ // 0x807BB07C
    r4 = r4 + 0; // 0x807BB080
    *(0x34 + r3) = r4; // stw @ 0x807BB084
    if (==) goto 0x0x807bb0a8;
    r3 = r0;
    /* li r4, 1 */ // 0x807BB094
    r12 = *(0 + r3); // lwz @ 0x807BB098
    r12 = *(8 + r12); // lwz @ 0x807BB09C
    /* mtctr r12 */ // 0x807BB0A0
    /* bctrl  */ // 0x807BB0A4
    r3 = *(0x94 + r30); // lwz @ 0x807BB0A8
    /* li r0, 0 */ // 0x807BB0AC
    *(0x8c + r30) = r0; // stw @ 0x807BB0B0
    if (==) goto 0x0x807bb0d0;
    r12 = *(0x34 + r3); // lwz @ 0x807BB0BC
    /* li r4, 1 */ // 0x807BB0C0
    r12 = *(8 + r12); // lwz @ 0x807BB0C4
    /* mtctr r12 */ // 0x807BB0C8
    /* bctrl  */ // 0x807BB0CC
    /* li r0, 0 */ // 0x807BB0D0
    *(0x94 + r30) = r0; // stw @ 0x807BB0D4
    r3 = r30;
    /* li r4, 0 */ // 0x807BB0DC
    FUN_807B6DB4(r3, r4); // bl 0x807B6DB4
    if (<=) goto 0x0x807bb0f4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807BB0F8
    r30 = *(8 + r1); // lwz @ 0x807BB0FC
    r0 = *(0x14 + r1); // lwz @ 0x807BB100
    return;
}