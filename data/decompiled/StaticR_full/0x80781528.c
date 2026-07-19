/* Function at 0x80781528, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80781528(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80781534
    r31 = r3;
    r3 = *(0xb4 + r3); // lwz @ 0x8078153C
    r12 = *(0 + r3); // lwz @ 0x80781540
    r12 = *(0xec + r12); // lwz @ 0x80781544
    /* mtctr r12 */ // 0x80781548
    /* bctrl  */ // 0x8078154C
    if (==) goto 0x0x80781580;
    r4 = *(0xbc + r31); // lwz @ 0x80781558
    /* slwi r0, r3, 1 */ // 0x8078155C
    r3 = *(0xb0 + r31); // lwz @ 0x80781560
    /* lhax r0, r4, r0 */ // 0x80781564
    /* slwi r0, r0, 2 */ // 0x80781568
    /* lwzx r3, r3, r0 */ // 0x8078156C
    r12 = *(0 + r3); // lwz @ 0x80781570
    r12 = *(0xf0 + r12); // lwz @ 0x80781574
    /* mtctr r12 */ // 0x80781578
    /* bctrl  */ // 0x8078157C
    r0 = *(0x14 + r1); // lwz @ 0x80781580
    r31 = *(0xc + r1); // lwz @ 0x80781584
    return;
}