/* Function at 0x80857474, size=332 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80857474(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* li r0, 0 */ // 0x80857480
    /* stfd f31, 0x28(r1) */ // 0x80857484
    /* stmw r25, 0xc(r1) */ // 0x80857488
    r31 = r3;
    /* li r30, 0 */ // 0x80857490
    /* li r29, 0 */ // 0x80857494
    /* li r28, 0 */ // 0x80857498
    /* li r27, 0 */ // 0x8085749C
    r4 = *(0xfa + r3); // lhz @ 0x808574A0
    if (<) goto 0x0x808574b8;
    if (>) goto 0x0x808574b8;
    /* li r0, 1 */ // 0x808574B4
    if (!=) goto 0x0x8085754c;
    /* li r26, 1 */ // 0x808574C4
    /* li r0, 0 */ // 0x808574C8
    if (<) goto 0x0x808574e0;
    if (>) goto 0x0x808574e0;
    if (!=) goto 0x0x808574e4;
    /* li r0, 1 */ // 0x808574E0
    if (!=) goto 0x0x80857540;
    r3 = *(0x6c + r3); // lwz @ 0x808574EC
    /* li r4, 0 */ // 0x808574F0
    r3 = *(0x28 + r3); // lwz @ 0x808574F4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x808574FC
    r25 = r3;
    r12 = *(8 + r12); // lwz @ 0x80857504
    /* mtctr r12 */ // 0x80857508
    /* bctrl  */ // 0x8085750C
    r12 = *(0 + r25); // lwz @ 0x80857510
    /* fmr f31, f1 */ // 0x80857514
    r3 = r25;
    r12 = *(0xc + r12); // lwz @ 0x8085751C
    /* mtctr r12 */ // 0x80857520
    /* bctrl  */ // 0x80857524
    /* .byte 0xfc, 0x01, 0xf8, 0x40 */ // 0x80857528
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8085752C
    /* mfcr r0 */ // 0x80857530
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x80857534
    if (!=) goto 0x0x80857540;
    /* li r26, 0 */ // 0x8085753C
    if (==) goto 0x0x8085754c;
    /* li r27, 1 */ // 0x80857548
    if (==) goto 0x0x8085756c;
    r3 = *(0 + r31); // lwz @ 0x80857554
    r3 = *(4 + r3); // lwz @ 0x80857558
    r0 = *(8 + r3); // lwz @ 0x8085755C
    /* clrlwi. r0, r0, 0x1f */ // 0x80857560
    if (!=) goto 0x0x8085756c;
    /* li r28, 1 */ // 0x80857568
    if (==) goto 0x0x8085758c;
    r3 = *(0 + r31); // lwz @ 0x80857574
    r3 = *(4 + r3); // lwz @ 0x80857578
    r0 = *(4 + r3); // lwz @ 0x8085757C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80857580
    if (!=) goto 0x0x8085758c;
    /* li r29, 1 */ // 0x80857588
    if (==) goto 0x0x808575a4;
    r0 = *(0x2c + r31); // lwz @ 0x80857594
    if (>) goto 0x0x808575a4;
    /* li r30, 1 */ // 0x808575A0
    r3 = r30;
    /* lfd f31, 0x28(r1) */ // 0x808575A8
    r0 = *(0x34 + r1); // lwz @ 0x808575B0
    return;
}