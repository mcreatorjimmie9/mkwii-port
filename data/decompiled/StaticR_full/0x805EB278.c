/* Function at 0x805EB278, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_805EB278(int r3, int r4, int r6, int r7)
{
    /* lis r7, 0 */ // 0x805EB278
    /* li r0, 0 */ // 0x805EB280
    *(4 + r3) = r6; // stw @ 0x805EB284
    r7 = r7 + 0; // 0x805EB288
    *(0 + r3) = r7; // stw @ 0x805EB28C
    *(8 + r3) = r0; // sth @ 0x805EB290
    *(0xc + r3) = r0; // stw @ 0x805EB294
    *(0x24 + r3) = r5; // stw @ 0x805EB298
    *(0x28 + r3) = r0; // stw @ 0x805EB29C
    *(0x3c + r3) = r4; // stw @ 0x805EB2A0
    *(0x40 + r3) = r0; // stw @ 0x805EB2A4
    *(0x44 + r3) = r0; // stw @ 0x805EB2A8
    *(0x48 + r3) = r0; // stw @ 0x805EB2AC
    *(0x14 + r3) = r0; // stw @ 0x805EB2B0
    *(0x1c + r3) = r0; // stw @ 0x805EB2B4
    *(0x18 + r3) = r0; // stw @ 0x805EB2B8
    *(0x20 + r3) = r0; // stw @ 0x805EB2BC
    if (!=) goto 0x0x805eb2cc;
    r0 = r6 | 0x800; // 0x805EB2C4
    *(4 + r3) = r0; // stw @ 0x805EB2C8
    r0 = *(4 + r3); // lwz @ 0x805EB2CC
    r0 = r0 | 0x4a0; // 0x805EB2D0
    *(4 + r3) = r0; // stw @ 0x805EB2D4
    return;
}