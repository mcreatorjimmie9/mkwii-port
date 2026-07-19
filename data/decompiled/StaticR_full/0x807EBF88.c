/* Function at 0x807EBF88, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EBF88(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EBF98
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807EBFA0
    r30 = r3;
    if (==) goto 0x0x807ebfec;
    /* addic. r0, r3, 0x164 */ // 0x807EBFAC
    if (==) goto 0x0x807ebfdc;
    r0 = *(0x16c + r3); // lwz @ 0x807EBFB4
    /* lis r4, 0 */ // 0x807EBFB8
    r4 = r4 + 0; // 0x807EBFBC
    *(0x164 + r3) = r4; // stw @ 0x807EBFC0
    if (==) goto 0x0x807ebfdc;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EBFD4
    *(0x16c + r30) = r0; // stw @ 0x807EBFD8
    if (<=) goto 0x0x807ebfec;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807EBFF0
    r30 = *(8 + r1); // lwz @ 0x807EBFF4
    r0 = *(0x14 + r1); // lwz @ 0x807EBFF8
}