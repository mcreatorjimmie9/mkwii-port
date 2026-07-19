/* Function at 0x807C0144, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807C0144(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807C0144
    /* li r3, 0 */ // 0x807C0148
    r4 = *(0 + r4); // lwz @ 0x807C014C
    r0 = *(0xb70 + r4); // lwz @ 0x807C0150
    /* bnelr  */ // 0x807C0158
    /* li r3, 1 */ // 0x807C015C
    return;
}