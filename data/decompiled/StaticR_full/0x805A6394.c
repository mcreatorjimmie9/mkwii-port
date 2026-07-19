/* Function at 0x805A6394, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A6394(int r3, int r4)
{
    r3 = *(0x2c + r3); // lwz @ 0x805A6394
    if (==) goto 0x0x805a63a8;
    r0 = *(4 + r3); // lhz @ 0x805A63A0
    /* b 0x805a63ac */ // 0x805A63A4
    /* li r0, 0 */ // 0x805A63A8
    if (>=) goto 0x0x805a63d8;
    r0 = *(4 + r3); // lhz @ 0x805A63B4
    if (>=) goto 0x0x805a63d0;
    r3 = *(0 + r3); // lwz @ 0x805A63C0
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A63C8
    return;
    /* li r3, 0 */ // 0x805A63D0
    return;
    /* li r3, 0 */ // 0x805A63D8
    return;
}