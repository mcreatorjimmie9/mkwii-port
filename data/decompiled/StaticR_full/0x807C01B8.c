/* Function at 0x807C01B8, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807C01B8(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807C01B8
    /* li r3, 0 */ // 0x807C01BC
    r4 = *(0 + r4); // lwz @ 0x807C01C0
    r0 = *(0xb70 + r4); // lwz @ 0x807C01C4
    /* bnelr  */ // 0x807C01CC
    /* li r3, 1 */ // 0x807C01D0
    return;
}