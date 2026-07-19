/* Function at 0x80831300, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80831300(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80831310
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80831318
    r30 = r3;
    if (==) goto 0x0x80831350;
    /* addic. r0, r3, 0x1a4 */ // 0x80831324
    if (==) goto 0x0x80831340;
    /* lis r4, 0 */ // 0x8083132C
    r4 = r4 + 0; // 0x80831330
    *(0x1a4 + r3) = r4; // stw @ 0x80831334
    r3 = *(0x1b8 + r3); // lwz @ 0x80831338
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80831350;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80831354
    r30 = *(8 + r1); // lwz @ 0x80831358
    r0 = *(0x14 + r1); // lwz @ 0x8083135C
    return;
}