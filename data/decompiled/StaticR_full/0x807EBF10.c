/* Function at 0x807EBF10, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EBF10(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EBF20
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807EBF28
    r30 = r3;
    if (==) goto 0x0x807ebf6c;
    r0 = *(8 + r3); // lwz @ 0x807EBF34
    /* lis r4, 0 */ // 0x807EBF38
    r4 = r4 + 0; // 0x807EBF3C
    *(0 + r3) = r4; // stw @ 0x807EBF40
    if (==) goto 0x0x807ebf5c;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807EBF54
    *(8 + r30) = r0; // stw @ 0x807EBF58
    if (<=) goto 0x0x807ebf6c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807EBF70
    r30 = *(8 + r1); // lwz @ 0x807EBF74
    r0 = *(0x14 + r1); // lwz @ 0x807EBF78
}