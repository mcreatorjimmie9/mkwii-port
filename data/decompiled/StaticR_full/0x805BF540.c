/* Function at 0x805BF540, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805BF540(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805BF548
    *(0x14 + r1) = r0; // stw @ 0x805BF54C
    r3 = *(0 + r3); // lwz @ 0x805BF550
    if (==) goto 0x0x805bf574;
    if (==) goto 0x0x805bf574;
    r12 = *(0x1c + r3); // lwz @ 0x805BF560
    /* li r4, 1 */ // 0x805BF564
    r12 = *(0x24 + r12); // lwz @ 0x805BF568
    /* mtctr r12 */ // 0x805BF56C
    /* bctrl  */ // 0x805BF570
    /* lis r3, 0 */ // 0x805BF574
    /* li r0, 0 */ // 0x805BF578
    *(0 + r3) = r0; // stw @ 0x805BF57C
    r0 = *(0x14 + r1); // lwz @ 0x805BF580
    return;
}