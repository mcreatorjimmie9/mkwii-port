/* Function at 0x80671424, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80671424(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80671430
    r31 = r3;
    r4 = *(8 + r3); // lwz @ 0x80671438
    r0 = r4 + -2; // 0x8067143C
    if (<=) goto 0x0x8067145c;
    if (==) goto 0x0x8067145c;
    if (==) goto 0x0x80671474;
    /* b 0x806714d0 */ // 0x80671458
    r3 = *(0x38 + r3); // lwz @ 0x8067145C
    r12 = *(0 + r3); // lwz @ 0x80671460
    r12 = *(0x2c + r12); // lwz @ 0x80671464
    /* mtctr r12 */ // 0x80671468
    /* bctrl  */ // 0x8067146C
    /* b 0x806714d0 */ // 0x80671470
    r3 = *(0x38 + r3); // lwz @ 0x80671474
    r12 = *(0 + r3); // lwz @ 0x80671478
    r12 = *(0x2c + r12); // lwz @ 0x8067147C
    /* mtctr r12 */ // 0x80671480
    /* bctrl  */ // 0x80671484
    /* lis r3, 0 */ // 0x80671488
    r3 = *(0 + r3); // lwz @ 0x8067148C
    r3 = *(0x54 + r3); // lwz @ 0x80671490
    r3 = *(0x24 + r3); // lwz @ 0x80671494
    r12 = *(0 + r3); // lwz @ 0x80671498
    r12 = *(0xc + r12); // lwz @ 0x8067149C
    /* mtctr r12 */ // 0x806714A0
    /* bctrl  */ // 0x806714A4
    /* subfic r4, r3, 1 */ // 0x806714A8
    r0 = r3 + -1; // 0x806714AC
    r0 = r4 | r0; // 0x806714B0
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806714B4
    if (!=) goto 0x0x806714d0;
    r3 = *(0x38 + r31); // lwz @ 0x806714BC
    r12 = *(0 + r3); // lwz @ 0x806714C0
    r12 = *(0x18 + r12); // lwz @ 0x806714C4
    /* mtctr r12 */ // 0x806714C8
    /* bctrl  */ // 0x806714CC
    r0 = *(0x14 + r1); // lwz @ 0x806714D0
    r31 = *(0xc + r1); // lwz @ 0x806714D4
    return;
}