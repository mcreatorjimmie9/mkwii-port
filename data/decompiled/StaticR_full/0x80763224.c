/* Function at 0x80763224, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80763224(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80763230
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80763238
    r12 = *(0xc + r12); // lwz @ 0x8076323C
    /* mtctr r12 */ // 0x80763240
    /* bctrl  */ // 0x80763244
    r12 = *(0 + r31); // lwz @ 0x80763248
    r3 = r31;
    /* li r4, 0 */ // 0x80763250
    r12 = *(0xec + r12); // lwz @ 0x80763254
    /* mtctr r12 */ // 0x80763258
    /* bctrl  */ // 0x8076325C
    r0 = *(0x14 + r1); // lwz @ 0x80763260
    r31 = *(0xc + r1); // lwz @ 0x80763264
    return;
}