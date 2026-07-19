/* Function at 0x807AADB8, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807AADB8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807AADC8
    *(0x18 + r1) = r30; // stw @ 0x807AADCC
    /* li r30, 0 */ // 0x807AADD0
    *(0x14 + r1) = r29; // stw @ 0x807AADD4
    r29 = r4;
    if (<=) goto 0x0x807aae00;
    r3 = *(0 + r31); // lwz @ 0x807AADE4
    r4 = r30;
    r3 = *(0x5bc + r3); // lwz @ 0x807AADEC
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = r29;
    /* li r5, 0xa */ // 0x807AADF8
    FUN_805E3430(r4, r4, r5); // bl 0x805E3430
    r30 = r30 + 1; // 0x807AAE00
    if (<) goto 0x0x807aaddc;
    r0 = *(0x24 + r1); // lwz @ 0x807AAE0C
    r31 = *(0x1c + r1); // lwz @ 0x807AAE10
    r30 = *(0x18 + r1); // lwz @ 0x807AAE14
    r29 = *(0x14 + r1); // lwz @ 0x807AAE18
}