/* Function at 0x80857344, size=304 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80857344(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* li r0, 0 */ // 0x80857350
    /* stfd f31, 0x28(r1) */ // 0x80857354
    /* stmw r26, 0x10(r1) */ // 0x80857358
    r26 = r3;
    /* li r31, 0 */ // 0x80857360
    /* li r30, 0 */ // 0x80857364
    /* li r29, 0 */ // 0x80857368
    r4 = *(0xfa + r3); // lhz @ 0x8085736C
    if (<) goto 0x0x80857384;
    if (>) goto 0x0x80857384;
    /* li r0, 1 */ // 0x80857380
    if (!=) goto 0x0x80857418;
    /* li r28, 1 */ // 0x80857390
    /* li r0, 0 */ // 0x80857394
    if (<) goto 0x0x808573ac;
    if (>) goto 0x0x808573ac;
    if (!=) goto 0x0x808573b0;
    /* li r0, 1 */ // 0x808573AC
    if (!=) goto 0x0x8085740c;
    r3 = *(0x6c + r3); // lwz @ 0x808573B8
    /* li r4, 0 */ // 0x808573BC
    r3 = *(0x28 + r3); // lwz @ 0x808573C0
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x808573C8
    r27 = r3;
    r12 = *(8 + r12); // lwz @ 0x808573D0
    /* mtctr r12 */ // 0x808573D4
    /* bctrl  */ // 0x808573D8
    r12 = *(0 + r27); // lwz @ 0x808573DC
    /* fmr f31, f1 */ // 0x808573E0
    r3 = r27;
    r12 = *(0xc + r12); // lwz @ 0x808573E8
    /* mtctr r12 */ // 0x808573EC
    /* bctrl  */ // 0x808573F0
    /* .byte 0xfc, 0x01, 0xf8, 0x40 */ // 0x808573F4
    /* cror cr0eq, cr0gt, cr0eq */ // 0x808573F8
    /* mfcr r0 */ // 0x808573FC
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x80857400
    if (!=) goto 0x0x8085740c;
    /* li r28, 0 */ // 0x80857408
    if (==) goto 0x0x80857418;
    /* li r29, 1 */ // 0x80857414
    if (==) goto 0x0x80857438;
    r3 = *(0 + r26); // lwz @ 0x80857420
    r3 = *(4 + r3); // lwz @ 0x80857424
    r0 = *(8 + r3); // lwz @ 0x80857428
    /* clrlwi. r0, r0, 0x1f */ // 0x8085742C
    if (!=) goto 0x0x80857438;
    /* li r30, 1 */ // 0x80857434
    if (==) goto 0x0x80857458;
    r3 = *(0 + r26); // lwz @ 0x80857440
    r3 = *(4 + r3); // lwz @ 0x80857444
    r0 = *(4 + r3); // lwz @ 0x80857448
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8085744C
    if (!=) goto 0x0x80857458;
    /* li r31, 1 */ // 0x80857454
    r3 = r31;
    /* lfd f31, 0x28(r1) */ // 0x8085745C
    r0 = *(0x34 + r1); // lwz @ 0x80857464
    return;
}