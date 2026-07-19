/* Function at 0x807AABE0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807AABE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807AABF0
    *(8 + r1) = r30; // stw @ 0x807AABF4
    /* li r30, 0 */ // 0x807AABF8
    if (<=) goto 0x0x807aac1c;
    r3 = *(0 + r31); // lwz @ 0x807AAC04
    r4 = r30;
    r3 = *(0x5bc + r3); // lwz @ 0x807AAC0C
    FUN_805E3430(r4); // bl 0x805E3430
    /* li r4, 0 */ // 0x807AAC14
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x807AAC1C
    if (<) goto 0x0x807aabfc;
    r0 = *(0x14 + r1); // lwz @ 0x807AAC28
    r31 = *(0xc + r1); // lwz @ 0x807AAC2C
    r30 = *(8 + r1); // lwz @ 0x807AAC30
}