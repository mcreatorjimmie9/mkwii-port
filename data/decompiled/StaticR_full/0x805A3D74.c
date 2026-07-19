/* Function at 0x805A3D74, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805A3D74(int r3, int r4)
{
    r3 = *(0x28 + r3); // lwz @ 0x805A3D74
    if (==) goto 0x0x805a3d88;
    r0 = *(4 + r3); // lhz @ 0x805A3D80
    /* b 0x805a3d8c */ // 0x805A3D84
    /* li r0, 0 */ // 0x805A3D88
    if (>=) goto 0x0x805a3db8;
    r0 = *(4 + r3); // lhz @ 0x805A3D94
    if (>=) goto 0x0x805a3db0;
    r3 = *(0 + r3); // lwz @ 0x805A3DA0
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A3DA8
    return;
    /* li r3, 0 */ // 0x805A3DB0
    return;
    /* li r3, 0 */ // 0x805A3DB8
    return;
}