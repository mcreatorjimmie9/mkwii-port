/* Function at 0x807EE980, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807EE980(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807EE990
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x807EE998
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x807EE9A0
    if (!=) goto 0x0x807ee9b0;
    /* lis r4, 0 */ // 0x807EE9A8
    r31 = *(0 + r4); // lwz @ 0x807EE9AC
    r0 = *(4 + r3); // lwz @ 0x807EE9B0
    r4 = r31;
    /* li r5, 4 */ // 0x807EE9B8
    /* slwi r3, r0, 2 */ // 0x807EE9BC
    FUN_805E3430(r4, r5); // bl 0x805E3430
}