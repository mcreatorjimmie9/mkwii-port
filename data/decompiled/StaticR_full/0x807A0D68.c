/* Function at 0x807A0D68, size=96 bytes */
/* Stack frame: 0 bytes */

int FUN_807A0D68(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r6, 0 */ // 0x807A0D68
    r7 = r3;
    r3 = *(0 + r6); // lwz @ 0x807A0D70
    r6 = r4;
    /* beqlr  */ // 0x807A0D7C
    r0 = *(8 + r3); // lwz @ 0x807A0D80
    if (<) goto 0x0x807a0d94;
    /* blelr  */ // 0x807A0D90
    /* beqlr  */ // 0x807A0D98
    r0 = *(8 + r5); // lwz @ 0x807A0D9C
    /* bltlr  */ // 0x807A0DA4
    /* bgtlr  */ // 0x807A0DAC
    r12 = *(0 + r3); // lwz @ 0x807A0DB0
    r4 = r7;
    r5 = r6;
    r12 = *(0x24 + r12); // lwz @ 0x807A0DBC
    /* mtctr r12 */ // 0x807A0DC0
    /* bctr  */ // 0x807A0DC4
}