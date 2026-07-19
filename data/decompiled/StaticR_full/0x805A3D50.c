/* Function at 0x805A3D50, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_805A3D50(int r3, int r4)
{
    r0 = *(4 + r3); // lhz @ 0x805A3D50
    if (>=) goto 0x0x805a3d6c;
    r3 = *(0 + r3); // lwz @ 0x805A3D5C
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A3D64
    return;
    /* li r3, 0 */ // 0x805A3D6C
    return;
}