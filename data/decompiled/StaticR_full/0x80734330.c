/* Function at 0x80734330, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80734330(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x30; // 0x80734340
    *(0x18 + r1) = r30; // stw @ 0x80734344
    /* li r30, 0xc */ // 0x80734348
    *(0x14 + r1) = r29; // stw @ 0x8073434C
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x80734354
    if (==) goto 0x0x807343d4;
    r3 = r3 + 0x74; // 0x80734360
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734378;
    /* li r3, 0 */ // 0x80734370
    /* b 0x8073437c */ // 0x80734374
    r3 = *(0xc + r3); // lwz @ 0x80734378
    /* li r0, 0 */ // 0x80734380
    if (==) goto 0x0x80734390;
    if (!=) goto 0x0x80734394;
    /* li r0, 1 */ // 0x80734390
}