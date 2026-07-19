/* Function at 0x80823BBC, size=96 bytes */
/* Stack frame: 0 bytes */

int FUN_80823BBC(int r3, int r4, int r5, int r6)
{
    r0 = *(0x1a + r3); // lbz @ 0x80823BBC
    /* bnelr  */ // 0x80823BC4
    r0 = *(0xc8 + r3); // lwz @ 0x80823BC8
    /* li r6, 0 */ // 0x80823BCC
    if (==) goto 0x0x80823bf4;
    r0 = *(0x108 + r3); // lwz @ 0x80823BD8
    if (!=) goto 0x0x80823bf4;
    r0 = *(0x208 + r3); // lbz @ 0x80823BE4
    if (!=) goto 0x0x80823bf4;
    /* li r6, 1 */ // 0x80823BF0
    /* beqlr  */ // 0x80823BF8
    if (==) goto 0x0x80823c10;
    r0 = *(0xd0 + r3); // lwz @ 0x80823C04
    /* bnelr  */ // 0x80823C0C
    r4 = r5;
    r3 = r3 + 0xb4; // 0x80823C14
    /* b 0x808203e4 */ // 0x80823C18
}