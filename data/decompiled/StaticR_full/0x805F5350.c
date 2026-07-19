/* Function at 0x805F5350, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_805F5350(int r3)
{
    /* lis r3, 0 */ // 0x805F5350
    r3 = *(0 + r3); // lwz @ 0x805F5354
    r3 = *(0x34 + r3); // lwz @ 0x805F5358
    /* b 0x805f10b8 */ // 0x805F535C
}