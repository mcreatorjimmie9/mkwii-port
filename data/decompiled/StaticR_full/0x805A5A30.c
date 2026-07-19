/* Function at 0x805A5A30, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A5A30(int r3, int r4)
{
    r3 = *(0x24 + r3); // lwz @ 0x805A5A30
    if (==) goto 0x0x805a5a44;
    r0 = *(4 + r3); // lhz @ 0x805A5A3C
    /* b 0x805a5a48 */ // 0x805A5A40
    /* li r0, 0 */ // 0x805A5A44
    if (>=) goto 0x0x805a5a74;
    r0 = *(4 + r3); // lhz @ 0x805A5A50
    if (>=) goto 0x0x805a5a6c;
    r3 = *(0 + r3); // lwz @ 0x805A5A5C
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A5A64
    return;
    /* li r3, 0 */ // 0x805A5A6C
    return;
    /* li r3, 0 */ // 0x805A5A74
    return;
}