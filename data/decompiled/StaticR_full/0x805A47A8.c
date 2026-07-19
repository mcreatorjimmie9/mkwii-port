/* Function at 0x805A47A8, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A47A8(int r3, int r4)
{
    r3 = *(0x10 + r3); // lwz @ 0x805A47A8
    if (==) goto 0x0x805a47bc;
    r0 = *(4 + r3); // lhz @ 0x805A47B4
    /* b 0x805a47c0 */ // 0x805A47B8
    /* li r0, 0 */ // 0x805A47BC
    if (>=) goto 0x0x805a47ec;
    r0 = *(4 + r3); // lhz @ 0x805A47C8
    if (>=) goto 0x0x805a47e4;
    r3 = *(0 + r3); // lwz @ 0x805A47D4
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A47DC
    return;
    /* li r3, 0 */ // 0x805A47E4
    return;
    /* li r3, 0 */ // 0x805A47EC
    return;
}