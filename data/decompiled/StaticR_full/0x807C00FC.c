/* Function at 0x807C00FC, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807C00FC(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807C00FC
    /* li r3, 0 */ // 0x807C0100
    r4 = *(0 + r4); // lwz @ 0x807C0104
    r0 = *(0xb70 + r4); // lwz @ 0x807C0108
    /* bnelr  */ // 0x807C0110
    /* li r3, 1 */ // 0x807C0114
    return;
}