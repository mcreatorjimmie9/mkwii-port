/* Function at 0x8085E728, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8085E728(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x8085E734
    r31 = r4;
    r0 = *(0x23e + r3); // lbz @ 0x8085E73C
    if (!=) goto 0x0x8085e760;
    r3 = r31;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3, r4); // bl 0x805E3430
    r0 = *(0x44 + r1); // lwz @ 0x8085E760
    r31 = *(0x3c + r1); // lwz @ 0x8085E764
}