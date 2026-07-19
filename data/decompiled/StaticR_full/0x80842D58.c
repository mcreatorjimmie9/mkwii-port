/* Function at 0x80842D58, size=80 bytes */
/* Stack frame: 0 bytes */

void FUN_80842D58(int r3, int r4)
{
    /* lis r3, 0 */ // 0x80842D58
    /* li r4, 0 */ // 0x80842D5C
    r0 = *(0 + r3); // lbz @ 0x80842D60
    if (!=) goto 0x0x80842d7c;
    /* lis r3, 0 */ // 0x80842D6C
    r0 = *(0 + r3); // lbz @ 0x80842D70
    if (==) goto 0x0x80842d80;
    /* li r4, 1 */ // 0x80842D7C
    if (==) goto 0x0x80842d98;
    /* lis r3, 0 */ // 0x80842D88
    r3 = *(0 + r3); // lwz @ 0x80842D8C
    r3 = *(8 + r3); // lwz @ 0x80842D90
    return;
    /* lis r3, 0 */ // 0x80842D98
    r3 = *(0 + r3); // lwz @ 0x80842D9C
    r3 = *(4 + r3); // lwz @ 0x80842DA0
    return;
}