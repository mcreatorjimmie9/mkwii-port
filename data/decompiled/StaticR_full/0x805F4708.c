/* Function at 0x805F4708, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805F4708(int r3, int r4)
{
    /* lis r3, 0 */ // 0x805F4708
    r0 = *(0 + r3); // lwz @ 0x805F470C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805F4710
    /* beqlr  */ // 0x805F4714
    /* lis r3, 0 */ // 0x805F4718
    /* lis r4, 0 */ // 0x805F471C
    r0 = *(0 + r3); // lwz @ 0x805F4720
    /* li r3, 2 */ // 0x805F4724
    *(0 + r4) = r0; // stw @ 0x805F4728
    /* b 0x805e3430 */ // 0x805F472C
}