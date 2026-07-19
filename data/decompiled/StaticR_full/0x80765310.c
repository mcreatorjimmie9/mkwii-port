/* Function at 0x80765310, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80765310(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80765318
    *(0x14 + r1) = r0; // stw @ 0x8076531C
    *(0xc + r1) = r31; // stw @ 0x80765320
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80765328
    r12 = *(0xf8 + r12); // lwz @ 0x8076532C
    /* mtctr r12 */ // 0x80765330
    /* bctrl  */ // 0x80765334
    r12 = *(0 + r31); // lwz @ 0x80765338
    r3 = r31;
    /* li r4, 0 */ // 0x80765340
    r12 = *(0xec + r12); // lwz @ 0x80765344
    /* mtctr r12 */ // 0x80765348
    /* bctrl  */ // 0x8076534C
    r12 = *(0 + r31); // lwz @ 0x80765350
    r3 = r31;
    r12 = *(0x8c + r12); // lwz @ 0x80765358
    /* mtctr r12 */ // 0x8076535C
    /* bctrl  */ // 0x80765360
    /* li r0, 0 */ // 0x80765364
    *(0xbc + r31) = r0; // stw @ 0x80765368
    r31 = *(0xc + r1); // lwz @ 0x8076536C
    r0 = *(0x14 + r1); // lwz @ 0x80765370
    return;
}