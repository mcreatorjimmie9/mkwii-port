/* Function at 0x805B19B8, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B19B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x805B19C0
    /* stfd f31, 0x18(r1) */ // 0x805B19C8
    /* fmr f31, f1 */ // 0x805B19CC
    *(0x14 + r1) = r31; // stw @ 0x805B19D0
    r31 = r5;
    *(0x10 + r1) = r30; // stw @ 0x805B19D8
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x805B19E0
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x805B19E8
    r3 = *(0x54 + r3); // lwz @ 0x805B19EC
    r3 = *(0x24 + r3); // lwz @ 0x805B19F0
    r12 = *(0 + r3); // lwz @ 0x805B19F4
    r12 = *(0xc + r12); // lwz @ 0x805B19F8
    /* mtctr r12 */ // 0x805B19FC
    /* bctrl  */ // 0x805B1A00
    /* subfic r4, r3, 1 */ // 0x805B1A04
    r0 = r3 + -1; // 0x805B1A08
    r0 = r4 | r0; // 0x805B1A0C
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805B1A10
    if (!=) goto 0x0x805b1a54;
    r0 = *(0x20 + r29); // lwz @ 0x805B1A18
    r3 = *(4 + r29); // lwz @ 0x805B1A1C
    if (==) goto 0x0x805b1a54;
    r12 = *(0 + r3); // lwz @ 0x805B1A28
    r12 = *(0x14 + r12); // lwz @ 0x805B1A2C
    /* mtctr r12 */ // 0x805B1A30
    /* bctrl  */ // 0x805B1A34
    if (==) goto 0x0x805b1a54;
    /* fmr f1, f31 */ // 0x805B1A40
    r3 = *(0x20 + r29); // lwz @ 0x805B1A44
    r4 = r30;
    r5 = r31;
    FUN_805B56A0(r4, r5); // bl 0x805B56A0
    r0 = *(0x24 + r1); // lwz @ 0x805B1A54
    /* lfd f31, 0x18(r1) */ // 0x805B1A58
    r31 = *(0x14 + r1); // lwz @ 0x805B1A5C
    r30 = *(0x10 + r1); // lwz @ 0x805B1A60
    r29 = *(0xc + r1); // lwz @ 0x805B1A64
    return;
}