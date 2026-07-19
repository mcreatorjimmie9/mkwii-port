/* Function at 0x807C7518, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807C7518(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C7524
    r31 = r3;
    r3 = *(0x168 + r3); // lwz @ 0x807C752C
    r12 = *(0 + r3); // lwz @ 0x807C7530
    r12 = *(0x2c + r12); // lwz @ 0x807C7534
    /* mtctr r12 */ // 0x807C7538
    /* bctrl  */ // 0x807C753C
    r3 = *(0x16c + r31); // lwz @ 0x807C7540
    r12 = *(0 + r3); // lwz @ 0x807C7544
    r12 = *(0x2c + r12); // lwz @ 0x807C7548
    /* mtctr r12 */ // 0x807C754C
    /* bctrl  */ // 0x807C7550
    r3 = *(0x170 + r31); // lwz @ 0x807C7554
    r12 = *(0 + r3); // lwz @ 0x807C7558
    r12 = *(0x2c + r12); // lwz @ 0x807C755C
    /* mtctr r12 */ // 0x807C7560
    /* bctrl  */ // 0x807C7564
    /* lis r3, 0 */ // 0x807C7568
    r4 = r31;
    /* lfs f0, 0(r3) */ // 0x807C7570
    /* li r5, 0 */ // 0x807C7574
    /* b 0x807c7590 */ // 0x807C7578
    r3 = *(0xe8 + r4); // lwz @ 0x807C757C
    r4 = r4 + 8; // 0x807C7580
    r5 = r5 + 1; // 0x807C7584
    r3 = *(0xc + r3); // lwz @ 0x807C7588
    /* stfs f0, 0x10(r3) */ // 0x807C758C
    r0 = *(0x178 + r31); // lwz @ 0x807C7590
    if (<) goto 0x0x807c757c;
    /* li r0, 0 */ // 0x807C759C
    *(0x18c + r31) = r0; // stb @ 0x807C75A0
    r31 = *(0xc + r1); // lwz @ 0x807C75A4
    r0 = *(0x14 + r1); // lwz @ 0x807C75A8
    return;
}