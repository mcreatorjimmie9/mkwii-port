/* Function at 0x807A0CA4, size=192 bytes */
/* Stack frame: 0 bytes */

int FUN_807A0CA4(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r5, 0 */ // 0x807A0CA4
    r7 = r3;
    r6 = *(0 + r5); // lwz @ 0x807A0CAC
    r5 = r4;
    /* beqlr  */ // 0x807A0CB8
    r0 = *(8 + r6); // lwz @ 0x807A0CBC
    /* beqlr  */ // 0x807A0CC4
    r0 = r3 + -0xe7; // 0x807A0CC8
    if (<=) goto 0x0x807a0d28;
    r0 = r3 + -0xde; // 0x807A0CD4
    if (<=) goto 0x0x807a0d28;
    r0 = r3 + -0xe5; // 0x807A0CE0
    if (>) goto 0x0x807a0d4c;
    /* lis r3, 0 */ // 0x807A0CEC
    r3 = *(0 + r3); // lwz @ 0x807A0CF0
    if (==) goto 0x0x807a0d04;
    r0 = *(0x70 + r3); // lbz @ 0x807A0CFC
    /* b 0x807a0d08 */ // 0x807A0D00
    /* li r0, 0 */ // 0x807A0D04
    /* beqlr  */ // 0x807A0D0C
    /* lis r3, 0 */ // 0x807A0D10
    r3 = *(0 + r3); // lwz @ 0x807A0D14
    r0 = *(0x4c + r3); // lbz @ 0x807A0D18
    if (<=) goto 0x0x807a0d4c;
    return;
    /* lis r3, 0 */ // 0x807A0D28
    r3 = *(0 + r3); // lwz @ 0x807A0D2C
    if (==) goto 0x0x807a0d40;
    r0 = *(0x70 + r3); // lbz @ 0x807A0D38
    /* b 0x807a0d44 */ // 0x807A0D3C
    /* li r0, 0 */ // 0x807A0D40
    /* beqlr  */ // 0x807A0D48
    r12 = *(0 + r6); // lwz @ 0x807A0D4C
    r3 = r6;
    r4 = r7;
    r12 = *(0x20 + r12); // lwz @ 0x807A0D58
    /* mtctr r12 */ // 0x807A0D5C
    /* bctr  */ // 0x807A0D60
}