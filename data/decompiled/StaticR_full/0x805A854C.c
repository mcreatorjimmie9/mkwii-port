/* Function at 0x805A854C, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A854C(int r3, int r4)
{
    r3 = *(0x34 + r3); // lwz @ 0x805A854C
    if (==) goto 0x0x805a8560;
    r0 = *(4 + r3); // lhz @ 0x805A8558
    /* b 0x805a8564 */ // 0x805A855C
    /* li r0, 0 */ // 0x805A8560
    if (>=) goto 0x0x805a8590;
    r0 = *(4 + r3); // lhz @ 0x805A856C
    if (>=) goto 0x0x805a8588;
    r3 = *(0 + r3); // lwz @ 0x805A8578
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A8580
    return;
    /* li r3, 0 */ // 0x805A8588
    return;
    /* li r3, 0 */ // 0x805A8590
    return;
}