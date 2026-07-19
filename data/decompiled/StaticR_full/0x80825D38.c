/* Function at 0x80825D38, size=28 bytes */
/* Stack frame: 16 bytes */

void FUN_80825D38(int r3)
{
    /* Stack frame: -16(r1) */
    /* fctiwz f0, f1 */ // 0x80825D3C
    /* stfd f0, 8(r1) */ // 0x80825D40
    r0 = *(0xc + r1); // lwz @ 0x80825D44
    r3 = r0 rlwinm 0x1f; // rlwinm
    return;
}