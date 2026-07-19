/* Function at 0x805DD538, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805DD538(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x805DD54C
    r30 = r30 + 0; // 0x805DD550
    *(0x14 + r1) = r29; // stw @ 0x805DD554
    r29 = r3;
    r0 = *(0x10 + r3); // lbz @ 0x805DD55C
    if (==) goto 0x0x805dd69c;
    r6 = r30 + 0x1e8; // 0x805DD568
    r8 = *(0x1e8 + r30); // lbz @ 0x805DD56C
    r7 = *(1 + r6); // lbz @ 0x805DD570
    r5 = *(2 + r6); // lbz @ 0x805DD578
    /* li r3, 4 */ // 0x805DD57C
    r0 = *(3 + r6); // lbz @ 0x805DD580
    *(8 + r1) = r8; // stb @ 0x805DD584
    *(9 + r1) = r7; // stb @ 0x805DD588
    *(0xa + r1) = r5; // stb @ 0x805DD58C
    *(0xb + r1) = r0; // stb @ 0x805DD590
    FUN_805E3430(); // bl 0x805E3430
    /* li r3, 0x80 */ // 0x805DD598
    /* li r4, 0 */ // 0x805DD59C
    /* li r5, 4 */ // 0x805DD5A0
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r31, -0x33ff */ // 0x805DD5A8
    /* lfs f0, 0x12c(r30) */ // 0x805DD5AC
    /* stfs f0, -0x8000(r31) */ // 0x805DD5B0
}