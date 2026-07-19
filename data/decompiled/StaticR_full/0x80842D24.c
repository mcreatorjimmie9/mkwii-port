/* Function at 0x80842D24, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_80842D24(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80842D24
    /* li r3, 0 */ // 0x80842D28
    r4 = *(0 + r4); // lwz @ 0x80842D2C
    r0 = *(0xb90 + r4); // lwz @ 0x80842D30
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80842D34
    /* beqlr  */ // 0x80842D38
    /* lis r4, 0 */ // 0x80842D3C
    r4 = *(0 + r4); // lwz @ 0x80842D40
    r0 = *(0x24 + r4); // lbz @ 0x80842D44
    /* bgtlr  */ // 0x80842D4C
    /* li r3, 1 */ // 0x80842D50
    return;
}