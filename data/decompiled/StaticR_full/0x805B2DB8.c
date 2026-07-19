/* Function at 0x805B2DB8, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805B2DB8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805B2DC0
    *(0x14 + r1) = r0; // stw @ 0x805B2DC4
    r3 = *(0 + r3); // lwz @ 0x805B2DC8
    if (==) goto 0x0x805b2dec;
    if (==) goto 0x0x805b2dec;
    r12 = *(0 + r3); // lwz @ 0x805B2DD8
    /* li r4, 1 */ // 0x805B2DDC
    r12 = *(8 + r12); // lwz @ 0x805B2DE0
    /* mtctr r12 */ // 0x805B2DE4
    /* bctrl  */ // 0x805B2DE8
    /* lis r3, 0 */ // 0x805B2DEC
    /* li r0, 0 */ // 0x805B2DF0
    *(0 + r3) = r0; // stw @ 0x805B2DF4
    r0 = *(0x14 + r1); // lwz @ 0x805B2DF8
    return;
}