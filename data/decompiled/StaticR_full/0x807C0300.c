/* Function at 0x807C0300, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_807C0300(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807C0300
    /* li r3, 0 */ // 0x807C0304
    r4 = *(0 + r4); // lwz @ 0x807C0308
    r4 = *(0xb70 + r4); // lwz @ 0x807C030C
    r0 = r4 + -0xb; // 0x807C0310
    /* bgtlr  */ // 0x807C0318
    /* li r3, 1 */ // 0x807C031C
    return;
}