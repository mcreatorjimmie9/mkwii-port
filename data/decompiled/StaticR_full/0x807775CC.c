/* Function at 0x807775CC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807775CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807775DC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807775E4
    r30 = r3;
    if (==) goto 0x0x8077761c;
    /* addic. r0, r3, 0xb4 */ // 0x807775F0
    if (==) goto 0x0x8077760c;
    /* lis r4, 0 */ // 0x807775F8
    r4 = r4 + 0; // 0x807775FC
    *(0xb4 + r3) = r4; // stw @ 0x80777600
    r3 = *(0xc8 + r3); // lwz @ 0x80777604
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8077761c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80777620
    r30 = *(8 + r1); // lwz @ 0x80777624
    r0 = *(0x14 + r1); // lwz @ 0x80777628
    return;
}