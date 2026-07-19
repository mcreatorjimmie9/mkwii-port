/* Function at 0x80733FCC, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80733FCC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x20; // 0x80733FDC
    *(0x18 + r1) = r30; // stw @ 0x80733FE0
    /* li r30, 8 */ // 0x80733FE4
    *(0x14 + r1) = r29; // stw @ 0x80733FE8
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x80733FF0
    if (==) goto 0x0x8073409c;
    r3 = r3 + 0x74; // 0x80733FFC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734014;
    /* li r3, 0 */ // 0x8073400C
    /* b 0x80734018 */ // 0x80734010
    r3 = *(0xc + r3); // lwz @ 0x80734014
    /* li r0, 0 */ // 0x8073401C
    if (==) goto 0x0x8073402c;
    if (!=) goto 0x0x80734030;
    /* li r0, 1 */ // 0x8073402C
}