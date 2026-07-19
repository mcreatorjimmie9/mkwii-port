/* Function at 0x805FC3FC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805FC3FC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805FC40C
    r30 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FC414
    r12 = *(0x20 + r12); // lwz @ 0x805FC418
    /* mtctr r12 */ // 0x805FC41C
    /* bctrl  */ // 0x805FC420
    r0 = *(0x228 + r30); // lbz @ 0x805FC424
    if (!=) goto 0x0x805fc468;
    /* li r31, 0 */ // 0x805FC430
    /* b 0x805fc458 */ // 0x805FC434
    r3 = *(0x238 + r30); // lwz @ 0x805FC438
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805FC440
    r12 = *(0xc + r3); // lwz @ 0x805FC444
    r12 = *(0x20 + r12); // lwz @ 0x805FC448
    /* mtctr r12 */ // 0x805FC44C
    /* bctrl  */ // 0x805FC450
    r31 = r31 + 1; // 0x805FC454
    r0 = *(0x23c + r30); // lhz @ 0x805FC458
    /* clrlwi r3, r31, 0x18 */ // 0x805FC45C
    if (<) goto 0x0x805fc438;
    r0 = *(0x14 + r1); // lwz @ 0x805FC468
    r31 = *(0xc + r1); // lwz @ 0x805FC46C
    r30 = *(8 + r1); // lwz @ 0x805FC470
    return;
}