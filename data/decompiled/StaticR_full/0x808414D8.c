/* Function at 0x808414D8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808414D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808414E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808414F0
    r30 = r3;
    if (==) goto 0x0x8084151c;
    /* lis r4, 0 */ // 0x808414FC
    r4 = r4 + 0; // 0x80841500
    *(0 + r3) = r4; // stw @ 0x80841504
    FUN_805DE878(r4, r4); // bl 0x805DE878
    if (<=) goto 0x0x8084151c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80841520
    r30 = *(8 + r1); // lwz @ 0x80841524
}