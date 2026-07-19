/* Function at 0x808CFE7C, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_808CFE7C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x808CFE7C
    /* lis r3, 0 */ // 0x808CFE80
    r4 = *(0 + r4); // lwz @ 0x808CFE84
    r3 = *(0 + r3); // lwz @ 0x808CFE88
    r4 = *(0x98 + r4); // lwz @ 0x808CFE8C
    r3 = *(0x1760 + r3); // lwz @ 0x808CFE90
    r0 = *(0x124 + r4); // lwz @ 0x808CFE94
    /* clrlwi r0, r0, 0x18 */ // 0x808CFE9C
    if (==) goto 0x0x808cfeb0;
    if (==) goto 0x0x808cfec4;
    /* b 0x808cfed8 */ // 0x808CFEAC
    /* li r3, 2 */ // 0x808CFEB4
    /* bnelr  */ // 0x808CFEB8
    /* li r3, 0 */ // 0x808CFEBC
    return;
    /* li r3, 3 */ // 0x808CFEC8
    /* bnelr  */ // 0x808CFECC
    /* li r3, 1 */ // 0x808CFED0
    return;
    /* li r3, -1 */ // 0x808CFED8
    return;
}