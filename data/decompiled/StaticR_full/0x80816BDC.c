/* Function at 0x80816BDC, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80816BDC(int r3)
{
    r0 = *(0xc + r3); // lwz @ 0x80816BDC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80816BE4
    return;
}