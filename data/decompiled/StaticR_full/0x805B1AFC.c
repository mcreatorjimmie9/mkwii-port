/* Function at 0x805B1AFC, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B1AFC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x805B1B04
    /* stfd f31, 0x18(r1) */ // 0x805B1B0C
    /* fmr f31, f1 */ // 0x805B1B10
    *(0x14 + r1) = r31; // stw @ 0x805B1B14
    r31 = r5;
    *(0x10 + r1) = r30; // stw @ 0x805B1B1C
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x805B1B24
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x805B1B2C
    r3 = *(0x54 + r3); // lwz @ 0x805B1B30
    r3 = *(0x24 + r3); // lwz @ 0x805B1B34
    r12 = *(0 + r3); // lwz @ 0x805B1B38
    r12 = *(0xc + r12); // lwz @ 0x805B1B3C
    /* mtctr r12 */ // 0x805B1B40
    /* bctrl  */ // 0x805B1B44
    /* subfic r4, r3, 1 */ // 0x805B1B48
    r0 = r3 + -1; // 0x805B1B4C
    r0 = r4 | r0; // 0x805B1B50
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805B1B54
    if (!=) goto 0x0x805b1b98;
    r0 = *(0x24 + r29); // lwz @ 0x805B1B5C
    r3 = *(4 + r29); // lwz @ 0x805B1B60
    if (==) goto 0x0x805b1b98;
    r12 = *(0 + r3); // lwz @ 0x805B1B6C
    r12 = *(0x14 + r12); // lwz @ 0x805B1B70
    /* mtctr r12 */ // 0x805B1B74
    /* bctrl  */ // 0x805B1B78
    if (==) goto 0x0x805b1b98;
    /* fmr f1, f31 */ // 0x805B1B84
    r3 = *(0x24 + r29); // lwz @ 0x805B1B88
    r4 = r30;
    r5 = r31;
    FUN_805B56A0(r4, r5); // bl 0x805B56A0
    r0 = *(0x24 + r1); // lwz @ 0x805B1B98
    /* lfd f31, 0x18(r1) */ // 0x805B1B9C
    r31 = *(0x14 + r1); // lwz @ 0x805B1BA0
    r30 = *(0x10 + r1); // lwz @ 0x805B1BA4
    r29 = *(0xc + r1); // lwz @ 0x805B1BA8
    return;
}