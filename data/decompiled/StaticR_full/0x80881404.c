/* Function at 0x80881404, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80881404(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80881404
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8088140C
    r3 = *(0xc + r3); // lwz @ 0x80881410
    /* lwzx r3, r3, r0 */ // 0x80881414
    r3 = *(0x26 + r3); // lbz @ 0x80881418
    return;
}