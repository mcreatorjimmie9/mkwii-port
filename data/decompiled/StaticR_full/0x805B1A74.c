/* Function at 0x805B1A74, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B1A74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = *(0x20 + r3); // lwz @ 0x805B1A80
    /* stfd f31, 0x18(r1) */ // 0x805B1A84
    /* fmr f31, f1 */ // 0x805B1A88
    *(0x14 + r1) = r31; // stw @ 0x805B1A90
    r31 = r6;
    *(0x10 + r1) = r30; // stw @ 0x805B1A98
    r30 = r5;
    *(0xc + r1) = r29; // stw @ 0x805B1AA0
    r29 = r3;
    if (==) goto 0x0x805b1adc;
    r12 = *(0 + r4); // lwz @ 0x805B1AAC
    r3 = r4;
    r12 = *(0x14 + r12); // lwz @ 0x805B1AB4
    /* mtctr r12 */ // 0x805B1AB8
    /* bctrl  */ // 0x805B1ABC
    if (==) goto 0x0x805b1adc;
    /* fmr f1, f31 */ // 0x805B1AC8
    r3 = *(0x20 + r29); // lwz @ 0x805B1ACC
    r4 = r30;
    r5 = r31;
    FUN_805B56A0(r4, r5); // bl 0x805B56A0
    r0 = *(0x24 + r1); // lwz @ 0x805B1ADC
    /* lfd f31, 0x18(r1) */ // 0x805B1AE0
    r31 = *(0x14 + r1); // lwz @ 0x805B1AE4
    r30 = *(0x10 + r1); // lwz @ 0x805B1AE8
    r29 = *(0xc + r1); // lwz @ 0x805B1AEC
    return;
}