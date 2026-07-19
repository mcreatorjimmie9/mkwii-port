/* Function at 0x806D652C, size=280 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806D652C(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806D6534
    *(0xd8 + r1) = r30; // stw @ 0x806D6540
    *(0xd4 + r1) = r29; // stw @ 0x806D6544
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D654C
    r3 = *(0 + r3); // lwz @ 0x806D6550
    r30 = *(0x14c + r3); // lwz @ 0x806D6554
    if (!=) goto 0x0x806d6568;
    /* li r30, 0 */ // 0x806D6560
    /* b 0x806d65bc */ // 0x806D6564
    /* lis r31, 0 */ // 0x806D6568
    r31 = r31 + 0; // 0x806D656C
    if (==) goto 0x0x806d65b8;
    r12 = *(0 + r30); // lwz @ 0x806D6574
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D657C
    /* mtctr r12 */ // 0x806D6580
    /* bctrl  */ // 0x806D6584
    /* b 0x806d65a0 */ // 0x806D6588
    if (!=) goto 0x0x806d659c;
    /* li r0, 1 */ // 0x806D6594
    /* b 0x806d65ac */ // 0x806D6598
    r3 = *(0 + r3); // lwz @ 0x806D659C
    if (!=) goto 0x0x806d658c;
    /* li r0, 0 */ // 0x806D65A8
    if (==) goto 0x0x806d65b8;
    /* b 0x806d65bc */ // 0x806D65B4
    /* li r30, 0 */ // 0x806D65B8
    r12 = *(0 + r30); // lwz @ 0x806D65BC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D65C4
    /* mtctr r12 */ // 0x806D65C8
    /* bctrl  */ // 0x806D65CC
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806D65D8
    r3 = *(0 + r3); // lwz @ 0x806D65DC
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(8 + r1) = r3; // stw @ 0x806D65E4
    r3 = r30;
    /* li r4, 0x17e3 */ // 0x806D65F0
    r12 = *(0 + r30); // lwz @ 0x806D65F4
    r12 = *(0x68 + r12); // lwz @ 0x806D65F8
    /* mtctr r12 */ // 0x806D65FC
    /* bctrl  */ // 0x806D6600
    r12 = *(0 + r29); // lwz @ 0x806D6604
    r3 = r29;
    /* li r4, 0x51 */ // 0x806D660C
    /* li r5, 0 */ // 0x806D6610
    r12 = *(0x24 + r12); // lwz @ 0x806D6614
    /* mtctr r12 */ // 0x806D6618
    /* bctrl  */ // 0x806D661C
    /* li r0, 6 */ // 0x806D6620
    *(0x54 + r29) = r0; // stw @ 0x806D6624
    r31 = *(0xdc + r1); // lwz @ 0x806D6628
    r30 = *(0xd8 + r1); // lwz @ 0x806D662C
    r29 = *(0xd4 + r1); // lwz @ 0x806D6630
    r0 = *(0xe4 + r1); // lwz @ 0x806D6634
    return;
}