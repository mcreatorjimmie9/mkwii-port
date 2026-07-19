/* Function at 0x8073B224, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073B224(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073B234
    r30 = r3;
    r31 = *(0x298 + r3); // lwz @ 0x8073B23C
    if (==) goto 0x0x8073b2b0;
    r3 = r31 + 0x74; // 0x8073B248
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073b260;
    /* li r3, 0 */ // 0x8073B258
    /* b 0x8073b264 */ // 0x8073B25C
    r3 = *(0xc + r3); // lwz @ 0x8073B260
}