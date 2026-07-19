/* Function at 0x80762324, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80762324(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80762330
    r31 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8076233C
    r3 = r31;
    r4 = r4 + 0; // 0x80762344
    *(0 + r31) = r4; // stw @ 0x80762348
    r12 = *(0 + r31); // lwz @ 0x8076234C
    r12 = *(0x24 + r12); // lwz @ 0x80762350
    /* mtctr r12 */ // 0x80762354
    /* bctrl  */ // 0x80762358
    /* lis r4, 0 */ // 0x8076235C
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x80762364
    /* clrlwi r4, r0, 0x10 */ // 0x80762368
    FUN_807A9C4C(r4); // bl 0x807A9C4C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80762374
    r0 = *(0x14 + r1); // lwz @ 0x80762378
    return;
}