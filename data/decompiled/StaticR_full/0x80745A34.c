/* Function at 0x80745A34, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80745A34(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80745A44
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80745A4C
    r30 = r3;
    if (==) goto 0x0x80745a7c;
    /* lis r4, 0 */ // 0x80745A58
    r4 = r4 + 0; // 0x80745A5C
    *(0 + r3) = r4; // stw @ 0x80745A60
    r3 = *(0x14 + r3); // lwz @ 0x80745A64
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80745a7c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80745A80
    r30 = *(8 + r1); // lwz @ 0x80745A84
}