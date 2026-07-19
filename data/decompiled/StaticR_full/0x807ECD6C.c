/* Function at 0x807ECD6C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807ECD6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807ECD7C
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x807ECD84
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x807ECD8C
    if (!=) goto 0x0x807ecd9c;
    /* lis r4, 0 */ // 0x807ECD94
    r31 = *(0 + r4); // lwz @ 0x807ECD98
    r0 = *(4 + r3); // lwz @ 0x807ECD9C
    r4 = r31;
    /* li r5, 4 */ // 0x807ECDA4
    /* slwi r3, r0, 2 */ // 0x807ECDA8
    FUN_805E3430(r4, r5); // bl 0x805E3430
}