/* Function at 0x805D951C, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805D951C(int r3, int r5, int r6)
{
    /* lis r3, 0 */ // 0x805D951C
    /* lis r6, 0 */ // 0x805D9520
    r5 = *(0 + r3); // lwz @ 0x805D9524
    r3 = *(0 + r6); // lwz @ 0x805D9528
    /* addis r5, r5, 2 */ // 0x805D952C
    r5 = *(0x4ffc + r5); // lwz @ 0x805D9530
    /* addis r5, r5, 2 */ // 0x805D9534
    r0 = *(0x330c + r5); // lwz @ 0x805D9538
    r5 = r0 rlwinm 0x1f; // rlwinm
    /* b 0x805e3430 */ // 0x805D9540
}