/* Function at 0x806EAA88, size=244 bytes */
/* Stack frame: 0 bytes */

int FUN_806EAA88(int r3, int r5, int r6, int r7)
{
    /* li r0, 2 */ // 0x806EAA88
    /* li r7, 0 */ // 0x806EAA8C
    /* lis r6, 0 */ // 0x806EAA90
    /* mtctr r0 */ // 0x806EAA94
    r5 = *(0 + r6); // lwz @ 0x806EAA98
    r0 = *(0x291c + r5); // lwz @ 0x806EAA9C
    /* mulli r0, r0, 0x58 */ // 0x806EAAA0
    r5 = r5 + r0; // 0x806EAAA4
    r0 = *(0x59 + r5); // lbz @ 0x806EAAA8
    if (==) goto 0x0x806eaab8;
    *(8 + r3) = r4; // stw @ 0x806EAAB4
    r5 = *(0 + r6); // lwz @ 0x806EAAB8
    r7 = r7 + 1; // 0x806EAABC
    r0 = *(0x291c + r5); // lwz @ 0x806EAAC0
    /* mulli r0, r0, 0x58 */ // 0x806EAAC4
    r5 = r5 + r0; // 0x806EAAC8
    r0 = *(0x59 + r5); // lbz @ 0x806EAACC
    if (==) goto 0x0x806eaadc;
    *(0xc + r3) = r4; // stw @ 0x806EAAD8
    r5 = *(0 + r6); // lwz @ 0x806EAADC
    r7 = r7 + 1; // 0x806EAAE0
    r0 = *(0x291c + r5); // lwz @ 0x806EAAE4
    /* mulli r0, r0, 0x58 */ // 0x806EAAE8
    r5 = r5 + r0; // 0x806EAAEC
    r0 = *(0x59 + r5); // lbz @ 0x806EAAF0
    if (==) goto 0x0x806eab00;
    *(0x10 + r3) = r4; // stw @ 0x806EAAFC
    r5 = *(0 + r6); // lwz @ 0x806EAB00
    r7 = r7 + 1; // 0x806EAB04
    r0 = *(0x291c + r5); // lwz @ 0x806EAB08
    /* mulli r0, r0, 0x58 */ // 0x806EAB0C
    r5 = r5 + r0; // 0x806EAB10
    r0 = *(0x59 + r5); // lbz @ 0x806EAB14
    if (==) goto 0x0x806eab24;
    *(0x14 + r3) = r4; // stw @ 0x806EAB20
    r5 = *(0 + r6); // lwz @ 0x806EAB24
    r7 = r7 + 1; // 0x806EAB28
    r0 = *(0x291c + r5); // lwz @ 0x806EAB2C
    /* mulli r0, r0, 0x58 */ // 0x806EAB30
    r5 = r5 + r0; // 0x806EAB34
    r0 = *(0x59 + r5); // lbz @ 0x806EAB38
    if (==) goto 0x0x806eab48;
    *(0x18 + r3) = r4; // stw @ 0x806EAB44
    r5 = *(0 + r6); // lwz @ 0x806EAB48
    r7 = r7 + 1; // 0x806EAB4C
    r0 = *(0x291c + r5); // lwz @ 0x806EAB50
    /* mulli r0, r0, 0x58 */ // 0x806EAB54
    r5 = r5 + r0; // 0x806EAB58
    r0 = *(0x59 + r5); // lbz @ 0x806EAB5C
    if (==) goto 0x0x806eab6c;
    *(0x1c + r3) = r4; // stw @ 0x806EAB68
    r3 = r3 + 0x18; // 0x806EAB6C
    r7 = r7 + 1; // 0x806EAB70
    if (counter-- != 0) goto 0x0x806eaa98;
    return;
}