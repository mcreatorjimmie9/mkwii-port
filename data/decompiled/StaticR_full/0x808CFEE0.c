/* Function at 0x808CFEE0, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_808CFEE0(int r3, int r4)
{
    /* lis r4, 0 */ // 0x808CFEE0
    /* li r3, 1 */ // 0x808CFEE4
    r4 = *(0 + r4); // lwz @ 0x808CFEE8
    /* li r0, 1 */ // 0x808CFEEC
    r4 = *(0x1760 + r4); // lwz @ 0x808CFEF0
    if (==) goto 0x0x808cff08;
    if (==) goto 0x0x808cff08;
    /* li r0, 0 */ // 0x808CFF04
    /* bnelr  */ // 0x808CFF0C
    /* beqlr  */ // 0x808CFF14
    /* li r3, 0 */ // 0x808CFF18
    return;
}