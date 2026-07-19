/* Function at 0x805F5360, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805F5360(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x805F5360
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x805F5368
    r3 = *(0x34 + r3); // lwz @ 0x805F536C
    /* b 0x805f1124 */ // 0x805F5370
}