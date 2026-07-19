/* Function at 0x80818E48, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_80818E48(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80818E48
    /* li r3, 0 */ // 0x80818E4C
    r0 = *(0 + r4); // lbz @ 0x80818E50
    if (!=) goto 0x0x80818e70;
    /* lis r4, 0 */ // 0x80818E5C
    r4 = *(0 + r4); // lwz @ 0x80818E60
    r0 = *(0x4c + r4); // lbz @ 0x80818E64
    /* beqlr  */ // 0x80818E6C
    /* li r3, 1 */ // 0x80818E70
    return;
}