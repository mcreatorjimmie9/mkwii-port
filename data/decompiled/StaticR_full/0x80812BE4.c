/* Function at 0x80812BE4, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_80812BE4(int r3)
{
    /* lis r3, 0 */ // 0x80812BE4
    r3 = *(0 + r3); // lwz @ 0x80812BE8
    r0 = *(0x54 + r3); // lbz @ 0x80812BEC
    if (==) goto 0x0x80812c08;
    /* lis r3, 0 */ // 0x80812BF8
    r3 = *(0 + r3); // lwz @ 0x80812BFC
    r3 = *(8 + r3); // lwz @ 0x80812C00
    return;
    /* lis r3, 0 */ // 0x80812C08
    r3 = *(0 + r3); // lwz @ 0x80812C0C
    r3 = *(4 + r3); // lwz @ 0x80812C10
    return;
}