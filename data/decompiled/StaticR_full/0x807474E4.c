/* Function at 0x807474E4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807474E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807474F4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807474FC
    r30 = r3;
    if (==) goto 0x0x80747540;
    /* addic. r0, r3, 0xb0 */ // 0x80747508
    /* lis r4, 0 */ // 0x8074750C
    /* li r0, 0 */ // 0x80747510
    *(0 + r4) = r0; // stb @ 0x80747514
    if (==) goto 0x0x80747530;
    /* lis r4, 0 */ // 0x8074751C
    r4 = r4 + 0; // 0x80747520
    *(0xb0 + r3) = r4; // stw @ 0x80747524
    r3 = *(0xc4 + r3); // lwz @ 0x80747528
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80747540;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80747544
    r30 = *(8 + r1); // lwz @ 0x80747548
    r0 = *(0x14 + r1); // lwz @ 0x8074754C
    return;
}