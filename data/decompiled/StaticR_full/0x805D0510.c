/* Function at 0x805D0510, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_805D0510(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r6, 0x1000 */ // 0x805D0510
    r3 = *(0x584 + r3); // lwz @ 0x805D0514
    /* lis r7, 0 */ // 0x805D0518
    r5 = r4;
    r4 = r7 + 0; // 0x805D0520
    r6 = r6 + 2; // 0x805D0524
    /* b 0x805e3430 */ // 0x805D0528
}