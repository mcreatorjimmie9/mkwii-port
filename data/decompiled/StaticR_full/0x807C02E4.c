/* Function at 0x807C02E4, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807C02E4(int r3)
{
    /* lis r3, 0 */ // 0x807C02E4
    r3 = *(0 + r3); // lwz @ 0x807C02E8
    r0 = *(0xb90 + r3); // lwz @ 0x807C02EC
    r3 = r0 rlwinm 0x1f; // rlwinm
    return;
}