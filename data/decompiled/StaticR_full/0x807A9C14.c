/* Function at 0x807A9C14, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_807A9C14(int r3, int r4, int r5)
{
    /* lis r3, 0 */ // 0x807A9C14
    r3 = *(0 + r3); // lwz @ 0x807A9C18
    if (==) goto 0x0x807a9c30;
    r0 = *(0x10 + r3); // lwz @ 0x807A9C24
    /* beqlr  */ // 0x807A9C2C
    /* addis r0, r4, 1 */ // 0x807A9C30
    /* beqlr  */ // 0x807A9C38
    r3 = r4;
    r4 = r5;
    /* b 0x807a9208 */ // 0x807A9C44
}