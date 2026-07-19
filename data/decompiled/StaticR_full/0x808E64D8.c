/* Function at 0x808E64D8, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E64D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E64E0
    /* slwi r0, r3, 2 */ // 0x808E64E8
    *(0xc + r1) = r31; // stw @ 0x808E64EC
    *(8 + r1) = r30; // stw @ 0x808E64F0
    r3 = *(0 + r4); // lwz @ 0x808E64F4
    r3 = *(0 + r3); // lwz @ 0x808E64F8
    r3 = r3 + r0; // 0x808E64FC
    r30 = *(8 + r3); // lwz @ 0x808E6500
    if (!=) goto 0x0x808e6514;
    /* li r30, 0 */ // 0x808E650C
    /* b 0x808e6568 */ // 0x808E6510
    /* lis r31, 0 */ // 0x808E6514
    r31 = r31 + 0; // 0x808E6518
    if (==) goto 0x0x808e6564;
    r12 = *(0 + r30); // lwz @ 0x808E6520
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E6528
    /* mtctr r12 */ // 0x808E652C
    /* bctrl  */ // 0x808E6530
    /* b 0x808e654c */ // 0x808E6534
    if (!=) goto 0x0x808e6548;
    /* li r0, 1 */ // 0x808E6540
    /* b 0x808e6558 */ // 0x808E6544
    r3 = *(0 + r3); // lwz @ 0x808E6548
    if (!=) goto 0x0x808e6538;
    /* li r0, 0 */ // 0x808E6554
    if (==) goto 0x0x808e6564;
    /* b 0x808e6568 */ // 0x808E6560
    /* li r30, 0 */ // 0x808E6564
    if (!=) goto 0x0x808e6578;
    /* li r30, 0 */ // 0x808E6570
    /* b 0x808e65cc */ // 0x808E6574
    /* lis r31, 0 */ // 0x808E6578
    r31 = r31 + 0; // 0x808E657C
    if (==) goto 0x0x808e65c8;
    r12 = *(0 + r30); // lwz @ 0x808E6584
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E658C
    /* mtctr r12 */ // 0x808E6590
    /* bctrl  */ // 0x808E6594
    /* b 0x808e65b0 */ // 0x808E6598
    if (!=) goto 0x0x808e65ac;
    /* li r0, 1 */ // 0x808E65A4
    /* b 0x808e65bc */ // 0x808E65A8
    r3 = *(0 + r3); // lwz @ 0x808E65AC
    if (!=) goto 0x0x808e659c;
    /* li r0, 0 */ // 0x808E65B8
    if (==) goto 0x0x808e65c8;
    /* b 0x808e65cc */ // 0x808E65C4
    /* li r30, 0 */ // 0x808E65C8
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E65D0
    r30 = *(8 + r1); // lwz @ 0x808E65D4
    r0 = *(0x14 + r1); // lwz @ 0x808E65D8
    return;
}