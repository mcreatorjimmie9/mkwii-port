/* Function at 0x8074DC0C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8074DC0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8074DC1C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8074DC24
    r30 = r3;
    if (==) goto 0x0x8074dc5c;
    /* addic. r0, r3, 0x128 */ // 0x8074DC30
    if (==) goto 0x0x8074dc4c;
    /* lis r4, 0 */ // 0x8074DC38
    r4 = r4 + 0; // 0x8074DC3C
    *(0x128 + r3) = r4; // stw @ 0x8074DC40
    r3 = *(0x13c + r3); // lwz @ 0x8074DC44
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8074dc5c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8074DC60
    r30 = *(8 + r1); // lwz @ 0x8074DC64
    r0 = *(0x14 + r1); // lwz @ 0x8074DC68
    return;
}