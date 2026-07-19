/* Function at 0x8060F27C, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8060F27C(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8060F27C
    r3 = *(4 + r3); // lwz @ 0x8060F280
    r0 = *(0xc + r3); // lwz @ 0x8060F284
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x8060F28C
    return;
}