/* Function at 0x805A5850, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A5850(int r3, int r4)
{
    r3 = *(0x20 + r3); // lwz @ 0x805A5850
    if (==) goto 0x0x805a5864;
    r0 = *(4 + r3); // lhz @ 0x805A585C
    /* b 0x805a5868 */ // 0x805A5860
    /* li r0, 0 */ // 0x805A5864
    if (>=) goto 0x0x805a5894;
    r0 = *(4 + r3); // lhz @ 0x805A5870
    if (>=) goto 0x0x805a588c;
    r3 = *(0 + r3); // lwz @ 0x805A587C
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A5884
    return;
    /* li r3, 0 */ // 0x805A588C
    return;
    /* li r3, 0 */ // 0x805A5894
    return;
}