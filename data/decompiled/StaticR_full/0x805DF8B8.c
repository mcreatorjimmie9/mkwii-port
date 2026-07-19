/* Function at 0x805DF8B8, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805DF8B8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805DF8C8
    r31 = r31 + 0; // 0x805DF8CC
    *(0x18 + r1) = r30; // stw @ 0x805DF8D0
    r3 = r31 + 0; // 0x805DF8D4
    *(0x14 + r1) = r29; // stw @ 0x805DF8D8
    r0 = *(0xa0 + r3); // lwz @ 0x805DF8DC
    if (==) goto 0x0x805dfa68;
    r0 = *(0xa4 + r3); // lbz @ 0x805DF8E8
    if (!=) goto 0x0x805dfa68;
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x1f0 + r31); // lwz @ 0x805DF8F8
    if (==) goto 0x0x805df938;
    r3 = r31 + 0x260; // 0x805DF904
    /* li r5, 0 */ // 0x805DF90C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}