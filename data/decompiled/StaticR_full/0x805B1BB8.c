/* Function at 0x805B1BB8, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B1BB8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = *(0x24 + r3); // lwz @ 0x805B1BC4
    /* stfd f31, 0x18(r1) */ // 0x805B1BC8
    /* fmr f31, f1 */ // 0x805B1BCC
    *(0x14 + r1) = r31; // stw @ 0x805B1BD4
    r31 = r6;
    *(0x10 + r1) = r30; // stw @ 0x805B1BDC
    r30 = r5;
    *(0xc + r1) = r29; // stw @ 0x805B1BE4
    r29 = r3;
    if (==) goto 0x0x805b1c20;
    r12 = *(0 + r4); // lwz @ 0x805B1BF0
    r3 = r4;
    r12 = *(0x14 + r12); // lwz @ 0x805B1BF8
    /* mtctr r12 */ // 0x805B1BFC
    /* bctrl  */ // 0x805B1C00
    if (==) goto 0x0x805b1c20;
    /* fmr f1, f31 */ // 0x805B1C0C
    r3 = *(0x24 + r29); // lwz @ 0x805B1C10
    r4 = r30;
    r5 = r31;
    FUN_805B56A0(r4, r5); // bl 0x805B56A0
    r0 = *(0x24 + r1); // lwz @ 0x805B1C20
    /* lfd f31, 0x18(r1) */ // 0x805B1C24
    r31 = *(0x14 + r1); // lwz @ 0x805B1C28
    r30 = *(0x10 + r1); // lwz @ 0x805B1C2C
    r29 = *(0xc + r1); // lwz @ 0x805B1C30
    return;
}