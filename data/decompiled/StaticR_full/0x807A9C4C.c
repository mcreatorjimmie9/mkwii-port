/* Function at 0x807A9C4C, size=116 bytes */
/* Stack frame: 0 bytes */

int FUN_807A9C4C(int r3, int r4, int r5, int r6)
{
    /* lis r3, 0 */ // 0x807A9C4C
    /* li r0, 0x3a */ // 0x807A9C50
    r3 = r3 + 0; // 0x807A9C54
    /* li r6, 0 */ // 0x807A9C58
    /* mtctr r0 */ // 0x807A9C5C
    r0 = *(0 + r3); // lhz @ 0x807A9C60
    if (!=) goto 0x0x807a9cb4;
    /* lis r3, 0 */ // 0x807A9C6C
    /* lis r4, 0 */ // 0x807A9C70
    r5 = *(0 + r3); // lwz @ 0x807A9C74
    r4 = r4 + 0; // 0x807A9C78
    /* slwi r0, r6, 3 */ // 0x807A9C7C
    r3 = r4 + r0; // 0x807A9C80
    r3 = *(4 + r3); // lwz @ 0x807A9C88
    if (==) goto 0x0x807a9c9c;
    r0 = *(0x10 + r5); // lwz @ 0x807A9C90
    /* beqlr  */ // 0x807A9C98
    /* addis r0, r3, 1 */ // 0x807A9C9C
    /* beqlr  */ // 0x807A9CA4
    /* li r4, 1 */ // 0x807A9CA8
    /* b 0x807a9208 */ // 0x807A9CAC
    return;
    r3 = r3 + 8; // 0x807A9CB4
    r6 = r6 + 1; // 0x807A9CB8
    if (counter-- != 0) goto 0x0x807a9c60;
}