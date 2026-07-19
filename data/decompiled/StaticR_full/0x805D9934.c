/* Function at 0x805D9934, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D9934(int r3, int r4)
{
    /* lis r3, 0 */ // 0x805D9934
    /* lis r4, 0 */ // 0x805D9938
    r0 = *(0 + r3); // lwz @ 0x805D993C
    r4 = r4 + 0; // 0x805D9940
    /* mulli r0, r0, 0xc */ // 0x805D9944
    r3 = r4 + r0; // 0x805D9948
    r3 = *(2 + r3); // lhz @ 0x805D994C
    return;
}