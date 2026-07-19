/* Function at 0x807FC8FC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FC8FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807FC90C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807FC914
    r30 = r3;
    if (==) goto 0x0x807fc93c;
    if (==) goto 0x0x807fc92c;
    /* li r4, 0 */ // 0x807FC924
    FUN_8080F1A0(r4); // bl 0x8080F1A0
    if (<=) goto 0x0x807fc93c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807FC940
    r30 = *(8 + r1); // lwz @ 0x807FC944
    r0 = *(0x14 + r1); // lwz @ 0x807FC948
    return;
}