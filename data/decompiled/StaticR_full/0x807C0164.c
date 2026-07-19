/* Function at 0x807C0164, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_807C0164(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807C0164
    /* li r3, 0 */ // 0x807C0168
    r4 = *(0 + r4); // lwz @ 0x807C016C
    r0 = *(0xb70 + r4); // lwz @ 0x807C0170
    /* bltlr  */ // 0x807C0178
    /* bgtlr  */ // 0x807C0180
    /* li r3, 1 */ // 0x807C0184
    return;
}