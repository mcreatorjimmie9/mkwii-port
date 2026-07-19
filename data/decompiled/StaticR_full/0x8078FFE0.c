/* Function at 0x8078FFE0, size=136 bytes */
/* Stack frame: 0 bytes */

void FUN_8078FFE0(int r3)
{
    /* lis r3, 0 */ // 0x8078FFE0
    r3 = *(0 + r3); // lwz @ 0x8078FFE4
    r0 = *(0x8a4 + r3); // lbz @ 0x8078FFE8
    if (!=) goto 0x0x8078fffc;
    /* li r3, 1 */ // 0x8078FFF4
    return;
    r0 = *(0x8a5 + r3); // lbz @ 0x8078FFFC
    if (!=) goto 0x0x80790010;
    /* li r3, 1 */ // 0x80790008
    return;
    /* lis r3, 0 */ // 0x80790010
    r3 = *(0 + r3); // lwz @ 0x80790014
    if (==) goto 0x0x80790028;
    r0 = *(0x70 + r3); // lbz @ 0x80790020
    /* b 0x8079002c */ // 0x80790024
    /* li r0, 0 */ // 0x80790028
    if (==) goto 0x0x8079003c;
    /* li r3, 1 */ // 0x80790034
    return;
    /* lis r3, 0 */ // 0x8079003C
    r3 = *(0 + r3); // lwz @ 0x80790040
    r0 = *(8 + r3); // lwz @ 0x80790044
    if (<) goto 0x0x80790060;
    if (>) goto 0x0x80790060;
    /* li r3, 1 */ // 0x80790058
    return;
    /* li r3, 0 */ // 0x80790060
    return;
}