/* Function at 0x806B6558, size=416 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B6558(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806B6560
    *(0x14 + r1) = r0; // stw @ 0x806B6564
    *(0xc + r1) = r31; // stw @ 0x806B6568
    r31 = r3;
    /* li r3, 0 */ // 0x806B6570
    r4 = *(0 + r4); // lwz @ 0x806B6574
    r4 = *(0 + r4); // lwz @ 0x806B6578
    r0 = *(0 + r4); // lwz @ 0x806B657C
    if (!=) goto 0x0x806b65a8;
    /* lis r3, 0 */ // 0x806B6588
    r6 = *(0x176d + r31); // lbz @ 0x806B658C
    r4 = *(0 + r3); // lwz @ 0x806B6590
    r0 = *(0x2370 + r4); // lwz @ 0x806B6594
    r3 = *(0x2368 + r4); // lwz @ 0x806B6598
    r4 = *(0x234c + r4); // lwz @ 0x806B659C
    /* clrlwi r5, r0, 0x1f */ // 0x806B65A0
    FUN_805E5000(); // bl 0x805E5000
    if (==) goto 0x0x806b65c4;
    if (==) goto 0x0x806b6660;
    if (==) goto 0x0x806b66a4;
    /* b 0x806b66e4 */ // 0x806B65C0
    /* lis r3, 0 */ // 0x806B65C4
    r3 = *(0 + r3); // lwz @ 0x806B65C8
    r3 = *(0 + r3); // lwz @ 0x806B65CC
    r0 = *(0 + r3); // lwz @ 0x806B65D0
    if (!=) goto 0x0x806b6638;
    FUN_808EDB94(); // bl 0x808EDB94
    r4 = r3;
    if (!=) goto 0x0x806b6614;
    r12 = *(0 + r31); // lwz @ 0x806B65EC
    /* lis r5, 0 */ // 0x806B65F0
    /* lfs f1, 0(r5) */ // 0x806B65F4
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x806B65FC
    /* li r4, 0x41 */ // 0x806B6600
    /* li r5, 0 */ // 0x806B6604
    /* mtctr r12 */ // 0x806B6608
    /* bctrl  */ // 0x806B660C
    /* b 0x806b66e4 */ // 0x806B6610
    r12 = *(0 + r31); // lwz @ 0x806B6614
    /* lis r5, 0 */ // 0x806B6618
    /* lfs f1, 0(r5) */ // 0x806B661C
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x806B6624
    /* li r5, 0 */ // 0x806B6628
    /* mtctr r12 */ // 0x806B662C
    /* bctrl  */ // 0x806B6630
    /* b 0x806b66e4 */ // 0x806B6634
    r12 = *(0 + r31); // lwz @ 0x806B6638
    /* lis r5, 0 */ // 0x806B663C
    /* lfs f1, 0(r5) */ // 0x806B6640
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x806B6648
    /* li r4, 0x41 */ // 0x806B664C
    /* li r5, 0 */ // 0x806B6650
    /* mtctr r12 */ // 0x806B6654
    /* bctrl  */ // 0x806B6658
    /* b 0x806b66e4 */ // 0x806B665C
    /* lis r6, 0 */ // 0x806B6660
    /* lis r5, 0 */ // 0x806B6664
    r4 = *(0 + r6); // lwz @ 0x806B6668
    /* li r7, 0xc */ // 0x806B666C
    /* lfs f1, 0(r5) */ // 0x806B6670
    /* li r0, 0x3a */ // 0x806B6674
    *(0x1760 + r4) = r7; // stw @ 0x806B6678
    r3 = r31;
    /* li r4, 0x39 */ // 0x806B6680
    /* li r5, 0 */ // 0x806B6684
    r6 = *(0 + r6); // lwz @ 0x806B6688
    *(0x1758 + r6) = r0; // stw @ 0x806B668C
    r12 = *(0 + r31); // lwz @ 0x806B6690
    r12 = *(0x1c + r12); // lwz @ 0x806B6694
    /* mtctr r12 */ // 0x806B6698
    /* bctrl  */ // 0x806B669C
    /* b 0x806b66e4 */ // 0x806B66A0
    /* lis r6, 0 */ // 0x806B66A4
    /* lis r5, 0 */ // 0x806B66A8
    r4 = *(0 + r6); // lwz @ 0x806B66AC
    /* li r7, 0xc */ // 0x806B66B0
    /* lfs f1, 0(r5) */ // 0x806B66B4
    /* li r0, 0x3a */ // 0x806B66B8
    *(0x1760 + r4) = r7; // stw @ 0x806B66BC
    r3 = r31;
    /* li r4, 0x3a */ // 0x806B66C4
    /* li r5, 0 */ // 0x806B66C8
    r6 = *(0 + r6); // lwz @ 0x806B66CC
    *(0x1758 + r6) = r0; // stw @ 0x806B66D0
    r12 = *(0 + r31); // lwz @ 0x806B66D4
    r12 = *(0x1c + r12); // lwz @ 0x806B66D8
    /* mtctr r12 */ // 0x806B66DC
    /* bctrl  */ // 0x806B66E0
    r0 = *(0x14 + r1); // lwz @ 0x806B66E4
    r31 = *(0xc + r1); // lwz @ 0x806B66E8
    return;
}