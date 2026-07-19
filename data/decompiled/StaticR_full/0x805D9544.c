/* Function at 0x805D9544, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805D9544(int r3, int r5, int r6)
{
    /* lis r3, 0 */ // 0x805D9544
    /* lis r6, 0 */ // 0x805D9548
    r5 = *(0 + r3); // lwz @ 0x805D954C
    r3 = *(0 + r6); // lwz @ 0x805D9550
    /* addis r5, r5, 2 */ // 0x805D9554
    r5 = *(0x4ffc + r5); // lwz @ 0x805D9558
    /* addis r5, r5, 2 */ // 0x805D955C
    r0 = *(0x330c + r5); // lwz @ 0x805D9560
    r5 = r0 rlwinm 0x1f; // rlwinm
    /* b 0x805e3430 */ // 0x805D9568
}