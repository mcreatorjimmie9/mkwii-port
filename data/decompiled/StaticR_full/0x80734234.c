/* Function at 0x80734234, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80734234(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x30; // 0x80734244
    *(0x18 + r1) = r30; // stw @ 0x80734248
    /* li r30, 0xc */ // 0x8073424C
    *(0x14 + r1) = r29; // stw @ 0x80734250
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x80734258
    if (==) goto 0x0x80734304;
    r3 = r3 + 0x74; // 0x80734264
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073427c;
    /* li r3, 0 */ // 0x80734274
    /* b 0x80734280 */ // 0x80734278
    r3 = *(0xc + r3); // lwz @ 0x8073427C
    /* li r0, 0 */ // 0x80734284
    if (==) goto 0x0x80734294;
    if (!=) goto 0x0x80734298;
    /* li r0, 1 */ // 0x80734294
}