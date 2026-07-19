/* Function at 0x807C018C, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_807C018C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807C018C
    /* li r3, 0 */ // 0x807C0190
    r4 = *(0 + r4); // lwz @ 0x807C0194
    r4 = *(0xb70 + r4); // lwz @ 0x807C0198
    r0 = r4 + -9; // 0x807C019C
    if (<=) goto 0x0x807c01b0;
    /* bnelr  */ // 0x807C01AC
    /* li r3, 1 */ // 0x807C01B0
    return;
}