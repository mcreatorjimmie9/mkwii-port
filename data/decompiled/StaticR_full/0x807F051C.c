/* Function at 0x807F051C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807F051C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807F052C
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x807F0534
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x807F053C
    if (!=) goto 0x0x807f054c;
    /* lis r4, 0 */ // 0x807F0544
    r31 = *(0 + r4); // lwz @ 0x807F0548
    r0 = *(4 + r3); // lwz @ 0x807F054C
    r4 = r31;
    /* li r5, 4 */ // 0x807F0554
    /* slwi r3, r0, 2 */ // 0x807F0558
    FUN_805E3430(r4, r5); // bl 0x805E3430
}