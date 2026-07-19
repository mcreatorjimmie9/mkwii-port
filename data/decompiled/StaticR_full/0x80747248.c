/* Function at 0x80747248, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80747248(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80747258
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80747260
    r30 = r3;
    if (==) goto 0x0x80747298;
    /* addic. r0, r3, 0xb0 */ // 0x8074726C
    if (==) goto 0x0x80747288;
    /* lis r4, 0 */ // 0x80747274
    r4 = r4 + 0; // 0x80747278
    *(0xb0 + r3) = r4; // stw @ 0x8074727C
    r3 = *(0xc4 + r3); // lwz @ 0x80747280
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80747298;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8074729C
    r30 = *(8 + r1); // lwz @ 0x807472A0
    r0 = *(0x14 + r1); // lwz @ 0x807472A4
    return;
}