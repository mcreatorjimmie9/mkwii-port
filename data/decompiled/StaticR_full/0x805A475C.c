/* Function at 0x805A475C, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A475C(int r3, int r4)
{
    r3 = *(8 + r3); // lwz @ 0x805A475C
    if (==) goto 0x0x805a4770;
    r0 = *(4 + r3); // lhz @ 0x805A4768
    /* b 0x805a4774 */ // 0x805A476C
    /* li r0, 0 */ // 0x805A4770
    if (>=) goto 0x0x805a47a0;
    r0 = *(4 + r3); // lhz @ 0x805A477C
    if (>=) goto 0x0x805a4798;
    r3 = *(0 + r3); // lwz @ 0x805A4788
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A4790
    return;
    /* li r3, 0 */ // 0x805A4798
    return;
    /* li r3, 0 */ // 0x805A47A0
    return;
}