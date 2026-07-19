/* Function at 0x808E54CC, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E54CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E54D4
    /* slwi r0, r3, 2 */ // 0x808E54DC
    *(0xc + r1) = r31; // stw @ 0x808E54E0
    *(8 + r1) = r30; // stw @ 0x808E54E4
    r3 = *(0 + r4); // lwz @ 0x808E54E8
    r3 = *(0 + r3); // lwz @ 0x808E54EC
    r3 = r3 + r0; // 0x808E54F0
    r30 = *(8 + r3); // lwz @ 0x808E54F4
    if (!=) goto 0x0x808e5508;
    /* li r30, 0 */ // 0x808E5500
    /* b 0x808e555c */ // 0x808E5504
    /* lis r31, 0 */ // 0x808E5508
    r31 = r31 + 0; // 0x808E550C
    if (==) goto 0x0x808e5558;
    r12 = *(0 + r30); // lwz @ 0x808E5514
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E551C
    /* mtctr r12 */ // 0x808E5520
    /* bctrl  */ // 0x808E5524
    /* b 0x808e5540 */ // 0x808E5528
    if (!=) goto 0x0x808e553c;
    /* li r0, 1 */ // 0x808E5534
    /* b 0x808e554c */ // 0x808E5538
    r3 = *(0 + r3); // lwz @ 0x808E553C
    if (!=) goto 0x0x808e552c;
    /* li r0, 0 */ // 0x808E5548
    if (==) goto 0x0x808e5558;
    /* b 0x808e555c */ // 0x808E5554
    /* li r30, 0 */ // 0x808E5558
    if (!=) goto 0x0x808e556c;
    /* li r30, 0 */ // 0x808E5564
    /* b 0x808e55c0 */ // 0x808E5568
    /* lis r31, 0 */ // 0x808E556C
    r31 = r31 + 0; // 0x808E5570
    if (==) goto 0x0x808e55bc;
    r12 = *(0 + r30); // lwz @ 0x808E5578
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E5580
    /* mtctr r12 */ // 0x808E5584
    /* bctrl  */ // 0x808E5588
    /* b 0x808e55a4 */ // 0x808E558C
    if (!=) goto 0x0x808e55a0;
    /* li r0, 1 */ // 0x808E5598
    /* b 0x808e55b0 */ // 0x808E559C
    r3 = *(0 + r3); // lwz @ 0x808E55A0
    if (!=) goto 0x0x808e5590;
    /* li r0, 0 */ // 0x808E55AC
    if (==) goto 0x0x808e55bc;
    /* b 0x808e55c0 */ // 0x808E55B8
    /* li r30, 0 */ // 0x808E55BC
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E55C4
    r30 = *(8 + r1); // lwz @ 0x808E55C8
    r0 = *(0x14 + r1); // lwz @ 0x808E55CC
    return;
}