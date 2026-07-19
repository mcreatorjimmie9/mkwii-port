/* Function at 0x806A7540, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806A7540(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806A7548
    *(0xc + r1) = r31; // stw @ 0x806A7550
    *(8 + r1) = r30; // stw @ 0x806A7554
    r3 = *(0 + r3); // lwz @ 0x806A7558
    r3 = *(0 + r3); // lwz @ 0x806A755C
    r30 = *(0x2a4 + r3); // lwz @ 0x806A7560
    if (!=) goto 0x0x806a7574;
    /* li r30, 0 */ // 0x806A756C
    /* b 0x806a75c8 */ // 0x806A7570
    /* lis r31, 0 */ // 0x806A7574
    r31 = r31 + 0; // 0x806A7578
    if (==) goto 0x0x806a75c4;
    r12 = *(0 + r30); // lwz @ 0x806A7580
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A7588
    /* mtctr r12 */ // 0x806A758C
    /* bctrl  */ // 0x806A7590
    /* b 0x806a75ac */ // 0x806A7594
    if (!=) goto 0x0x806a75a8;
    /* li r0, 1 */ // 0x806A75A0
    /* b 0x806a75b8 */ // 0x806A75A4
    r3 = *(0 + r3); // lwz @ 0x806A75A8
    if (!=) goto 0x0x806a7598;
    /* li r0, 0 */ // 0x806A75B4
    if (==) goto 0x0x806a75c4;
    /* b 0x806a75c8 */ // 0x806A75C0
    /* li r30, 0 */ // 0x806A75C4
    r0 = *(0x94 + r30); // lwz @ 0x806A75C8
    if (!=) goto 0x0x806a7650;
    /* lis r3, 0 */ // 0x806A75D4
    r3 = *(0 + r3); // lwz @ 0x806A75D8
    r3 = *(0 + r3); // lwz @ 0x806A75DC
    r30 = *(0x144 + r3); // lwz @ 0x806A75E0
    if (!=) goto 0x0x806a75f4;
    /* li r30, 0 */ // 0x806A75EC
    /* b 0x806a7648 */ // 0x806A75F0
    /* lis r31, 0 */ // 0x806A75F4
    r31 = r31 + 0; // 0x806A75F8
    if (==) goto 0x0x806a7644;
    r12 = *(0 + r30); // lwz @ 0x806A7600
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A7608
    /* mtctr r12 */ // 0x806A760C
    /* bctrl  */ // 0x806A7610
    /* b 0x806a762c */ // 0x806A7614
    if (!=) goto 0x0x806a7628;
    /* li r0, 1 */ // 0x806A7620
    /* b 0x806a7638 */ // 0x806A7624
    r3 = *(0 + r3); // lwz @ 0x806A7628
    if (!=) goto 0x0x806a7618;
    /* li r0, 0 */ // 0x806A7634
    if (==) goto 0x0x806a7644;
    /* b 0x806a7648 */ // 0x806A7640
    /* li r30, 0 */ // 0x806A7644
    r3 = r30;
    FUN_80649164(r3); // bl 0x80649164
    r0 = *(0x14 + r1); // lwz @ 0x806A7650
    r31 = *(0xc + r1); // lwz @ 0x806A7654
    r30 = *(8 + r1); // lwz @ 0x806A7658
    return;
}