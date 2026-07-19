/* Function at 0x807C011C, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_807C011C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807C011C
    /* li r3, 0 */ // 0x807C0120
    r4 = *(0 + r4); // lwz @ 0x807C0124
    r0 = *(0xb70 + r4); // lwz @ 0x807C0128
    if (==) goto 0x0x807c013c;
    /* bnelr  */ // 0x807C0138
    /* li r3, 1 */ // 0x807C013C
    return;
}