/* Function at 0x8074CE10, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8074CE10(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8074CE20
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8074CE28
    r30 = r3;
    if (==) goto 0x0x8074ce60;
    /* addic. r0, r3, 0x128 */ // 0x8074CE34
    if (==) goto 0x0x8074ce50;
    /* lis r4, 0 */ // 0x8074CE3C
    r4 = r4 + 0; // 0x8074CE40
    *(0x128 + r3) = r4; // stw @ 0x8074CE44
    r3 = *(0x13c + r3); // lwz @ 0x8074CE48
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8074ce60;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8074CE64
    r30 = *(8 + r1); // lwz @ 0x8074CE68
    r0 = *(0x14 + r1); // lwz @ 0x8074CE6C
    return;
}