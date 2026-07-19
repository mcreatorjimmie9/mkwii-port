/* Function at 0x805D956C, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805D956C(int r3, int r5, int r6)
{
    /* lis r3, 0 */ // 0x805D956C
    /* lis r6, 0 */ // 0x805D9570
    r5 = *(0 + r3); // lwz @ 0x805D9574
    r3 = *(0 + r6); // lwz @ 0x805D9578
    /* addis r5, r5, 2 */ // 0x805D957C
    r5 = *(0x4ffc + r5); // lwz @ 0x805D9580
    /* addis r5, r5, 2 */ // 0x805D9584
    r0 = *(0x330c + r5); // lwz @ 0x805D9588
    r5 = r0 rlwinm 0x1f; // rlwinm
    /* b 0x805e3430 */ // 0x805D9590
}