/* Function at 0x807DED98, size=188 bytes */
/* Stack frame: 0 bytes */

void FUN_807DED98(int r3, int r4, int r5)
{
    if (==) goto 0x0x807dedd4;
    if (==) goto 0x0x807dede4;
    if (==) goto 0x0x807dedf4;
    if (==) goto 0x0x807dee04;
    if (==) goto 0x0x807dee14;
    if (==) goto 0x0x807dee24;
    if (==) goto 0x0x807dee34;
    /* b 0x807dee40 */ // 0x807DEDD0
    r5 = *(0x14 + r3); // lwz @ 0x807DEDD4
    /* li r0, 3 */ // 0x807DEDD8
    *(8 + r5) = r0; // stw @ 0x807DEDDC
    /* b 0x807dee40 */ // 0x807DEDE0
    r5 = *(0x14 + r3); // lwz @ 0x807DEDE4
    /* li r0, 4 */ // 0x807DEDE8
    *(8 + r5) = r0; // stw @ 0x807DEDEC
    /* b 0x807dee40 */ // 0x807DEDF0
    r5 = *(0x14 + r3); // lwz @ 0x807DEDF4
    /* li r0, 7 */ // 0x807DEDF8
    *(8 + r5) = r0; // stw @ 0x807DEDFC
    /* b 0x807dee40 */ // 0x807DEE00
    r5 = *(0x14 + r3); // lwz @ 0x807DEE04
    /* li r0, 0xa */ // 0x807DEE08
    *(8 + r5) = r0; // stw @ 0x807DEE0C
    /* b 0x807dee40 */ // 0x807DEE10
    r5 = *(0x14 + r3); // lwz @ 0x807DEE14
    /* li r0, 0xd */ // 0x807DEE18
    *(8 + r5) = r0; // stw @ 0x807DEE1C
    /* b 0x807dee40 */ // 0x807DEE20
    r5 = *(0x14 + r3); // lwz @ 0x807DEE24
    /* li r0, 0x10 */ // 0x807DEE28
    *(8 + r5) = r0; // stw @ 0x807DEE2C
    /* b 0x807dee40 */ // 0x807DEE30
    r5 = *(0x14 + r3); // lwz @ 0x807DEE34
    /* li r0, 0x13 */ // 0x807DEE38
    *(8 + r5) = r0; // stw @ 0x807DEE3C
    *(0x3c + r3) = r4; // stw @ 0x807DEE40
    /* li r0, 0 */ // 0x807DEE44
    r3 = *(0x14 + r3); // lwz @ 0x807DEE48
    *(0xf9 + r3) = r0; // stb @ 0x807DEE4C
    return;
}