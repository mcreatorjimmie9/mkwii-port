/* Function at 0x808E74E4, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E74E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E74EC
    /* slwi r0, r3, 2 */ // 0x808E74F4
    *(0xc + r1) = r31; // stw @ 0x808E74F8
    *(8 + r1) = r30; // stw @ 0x808E74FC
    r3 = *(0 + r4); // lwz @ 0x808E7500
    r3 = *(0 + r3); // lwz @ 0x808E7504
    r3 = r3 + r0; // 0x808E7508
    r30 = *(8 + r3); // lwz @ 0x808E750C
    if (!=) goto 0x0x808e7520;
    /* li r30, 0 */ // 0x808E7518
    /* b 0x808e7574 */ // 0x808E751C
    /* lis r31, 0 */ // 0x808E7520
    r31 = r31 + 0; // 0x808E7524
    if (==) goto 0x0x808e7570;
    r12 = *(0 + r30); // lwz @ 0x808E752C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E7534
    /* mtctr r12 */ // 0x808E7538
    /* bctrl  */ // 0x808E753C
    /* b 0x808e7558 */ // 0x808E7540
    if (!=) goto 0x0x808e7554;
    /* li r0, 1 */ // 0x808E754C
    /* b 0x808e7564 */ // 0x808E7550
    r3 = *(0 + r3); // lwz @ 0x808E7554
    if (!=) goto 0x0x808e7544;
    /* li r0, 0 */ // 0x808E7560
    if (==) goto 0x0x808e7570;
    /* b 0x808e7574 */ // 0x808E756C
    /* li r30, 0 */ // 0x808E7570
    if (!=) goto 0x0x808e7584;
    /* li r30, 0 */ // 0x808E757C
    /* b 0x808e75d8 */ // 0x808E7580
    /* lis r31, 0 */ // 0x808E7584
    r31 = r31 + 0; // 0x808E7588
    if (==) goto 0x0x808e75d4;
    r12 = *(0 + r30); // lwz @ 0x808E7590
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E7598
    /* mtctr r12 */ // 0x808E759C
    /* bctrl  */ // 0x808E75A0
    /* b 0x808e75bc */ // 0x808E75A4
    if (!=) goto 0x0x808e75b8;
    /* li r0, 1 */ // 0x808E75B0
    /* b 0x808e75c8 */ // 0x808E75B4
    r3 = *(0 + r3); // lwz @ 0x808E75B8
    if (!=) goto 0x0x808e75a8;
    /* li r0, 0 */ // 0x808E75C4
    if (==) goto 0x0x808e75d4;
    /* b 0x808e75d8 */ // 0x808E75D0
    /* li r30, 0 */ // 0x808E75D4
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E75DC
    r30 = *(8 + r1); // lwz @ 0x808E75E0
    r0 = *(0x14 + r1); // lwz @ 0x808E75E4
    return;
}