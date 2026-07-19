/* Function at 0x807CCA90, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807CCA90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807CCAA0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807CCAA8
    r30 = r3;
    if (==) goto 0x0x807ccb10;
    r5 = *(0xec + r3); // lwz @ 0x807CCAB4
    /* lis r4, 0 */ // 0x807CCAB8
    r4 = r4 + 0; // 0x807CCABC
    *(0 + r3) = r4; // stw @ 0x807CCAC0
    r0 = r4 + 0xec; // 0x807CCAC8
    *(0xe4 + r3) = r0; // stw @ 0x807CCACC
    if (==) goto 0x0x807ccaec;
    r12 = *(0 + r5); // lwz @ 0x807CCAD4
    r3 = r5;
    /* li r4, 1 */ // 0x807CCADC
    r12 = *(8 + r12); // lwz @ 0x807CCAE0
    /* mtctr r12 */ // 0x807CCAE4
    /* bctrl  */ // 0x807CCAE8
    /* li r0, 0 */ // 0x807CCAEC
    *(0xec + r30) = r0; // stw @ 0x807CCAF0
    r3 = r30;
    /* li r4, 0 */ // 0x807CCAF8
    FUN_807CB3DC(r3, r4); // bl 0x807CB3DC
    if (<=) goto 0x0x807ccb10;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807CCB14
    r30 = *(8 + r1); // lwz @ 0x807CCB18
    r0 = *(0x14 + r1); // lwz @ 0x807CCB1C
    return;
}