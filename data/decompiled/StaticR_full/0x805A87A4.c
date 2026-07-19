/* Function at 0x805A87A4, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_805A87A4(int r3)
{
    r3 = *(0x3c + r3); // lwz @ 0x805A87A4
    if (==) goto 0x0x805a87d4;
    r0 = *(4 + r3); // lhz @ 0x805A87B0
    if (==) goto 0x0x805a87d4;
    if (==) goto 0x0x805a87cc;
    r3 = *(0 + r3); // lwz @ 0x805A87C0
    r3 = *(0 + r3); // lwz @ 0x805A87C4
    return;
    /* li r3, 0 */ // 0x805A87CC
    return;
    /* li r3, 0 */ // 0x805A87D4
    return;
}