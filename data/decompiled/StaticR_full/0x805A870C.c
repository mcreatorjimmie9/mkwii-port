/* Function at 0x805A870C, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A870C(int r3, int r4)
{
    r3 = *(0x38 + r3); // lwz @ 0x805A870C
    if (==) goto 0x0x805a8720;
    r0 = *(4 + r3); // lhz @ 0x805A8718
    /* b 0x805a8724 */ // 0x805A871C
    /* li r0, 0 */ // 0x805A8720
    if (>=) goto 0x0x805a8750;
    r0 = *(4 + r3); // lhz @ 0x805A872C
    if (>=) goto 0x0x805a8748;
    r3 = *(0 + r3); // lwz @ 0x805A8738
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A8740
    return;
    /* li r3, 0 */ // 0x805A8748
    return;
    /* li r3, 0 */ // 0x805A8750
    return;
}