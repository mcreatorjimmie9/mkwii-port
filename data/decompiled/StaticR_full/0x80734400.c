/* Function at 0x80734400, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80734400(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x30; // 0x80734410
    *(0x18 + r1) = r30; // stw @ 0x80734414
    /* li r30, 0xc */ // 0x80734418
    *(0x14 + r1) = r29; // stw @ 0x8073441C
    r29 = r3;
    /* slwi r0, r30, 0x1e */ // 0x80734424
    /* srwi r3, r30, 0x1f */ // 0x80734428
    /* subf r0, r3, r0 */ // 0x8073442C
    /* rotlwi r0, r0, 2 */ // 0x80734430
    r0 = r0 + r3; // 0x80734434
    r3 = r29 + r0; // 0x80734438
    r0 = *(0x848 + r3); // lbz @ 0x8073443C
    if (==) goto 0x0x8073445c;
    r3 = *(0x2d8 + r31); // lwz @ 0x80734448
    r12 = *(0 + r3); // lwz @ 0x8073444C
    r12 = *(0x14 + r12); // lwz @ 0x80734450
    /* mtctr r12 */ // 0x80734454
    /* bctrl  */ // 0x80734458
    r30 = r30 + 1; // 0x8073445C
    r31 = r31 + 4; // 0x80734460
    if (<) goto 0x0x80734424;
    r0 = *(0x24 + r1); // lwz @ 0x8073446C
    r31 = *(0x1c + r1); // lwz @ 0x80734470
    r30 = *(0x18 + r1); // lwz @ 0x80734474
    r29 = *(0x14 + r1); // lwz @ 0x80734478
    return;
}