/* Function at 0x805BD288, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_805BD288(int r3)
{
    /* lis r3, 0 */ // 0x805BD288
    r3 = *(0 + r3); // lwz @ 0x805BD28C
    r3 = *(0x24 + r3); // lbz @ 0x805BD290
    return;
}