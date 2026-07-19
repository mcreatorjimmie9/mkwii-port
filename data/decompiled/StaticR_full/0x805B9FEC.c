/* Function at 0x805B9FEC, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B9FEC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9FF8
    r31 = r3;
    FUN_805BA274(); // bl 0x805BA274
    /* lis r3, 0 */ // 0x805BA004
    r0 = *(8 + r31); // lhz @ 0x805BA008
    r4 = *(0 + r3); // lwz @ 0x805BA00C
    /* lis r3, 0 */ // 0x805BA010
    r0 = *(0x5c + r4); // lwz @ 0x805BA018
    r3 = r3 + 0; // 0x805BA01C
    /* slwi r0, r0, 2 */ // 0x805BA020
    /* lwzx r4, r3, r0 */ // 0x805BA024
    if (<=) goto 0x0x805ba048;
    r3 = *(0x18 + r31); // lwz @ 0x805BA02C
    /* li r0, 0 */ // 0x805BA030
    /* li r5, 0x80 */ // 0x805BA034
    *(4 + r3) = r0; // stw @ 0x805BA038
    r3 = *(0x10 + r31); // lwz @ 0x805BA03C
    r3 = *(4 + r3); // lwz @ 0x805BA040
    FUN_805E3430(r5); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x805BA048
    r31 = *(0xc + r1); // lwz @ 0x805BA04C
    return;
}