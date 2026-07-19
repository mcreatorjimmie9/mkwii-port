/* Function at 0x805DF7A0, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805DF7A0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x805DF7B0
    /* lis r30, 0 */ // 0x805DF7B4
    r30 = r30 + 0; // 0x805DF7B8
    r31 = r30 + 0; // 0x805DF7BC
    r0 = *(0xa0 + r31); // lwz @ 0x805DF7C0
    if (==) goto 0x0x805df864;
    r0 = *(0xa4 + r31); // lbz @ 0x805DF7CC
    if (==) goto 0x0x805df864;
    /* li r0, 0 */ // 0x805DF7D8
    *(0xa5 + r31) = r0; // stb @ 0x805DF7DC
    r3 = *(0x290 + r30); // lwz @ 0x805DF7E0
    *(0xa4 + r31) = r0; // stb @ 0x805DF7E4
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0xb0 + r31); // lwz @ 0x805DF7EC
    if (!=) goto 0x0x805df804;
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    FUN_805E07A4(r3); // bl 0x805E07A4
}