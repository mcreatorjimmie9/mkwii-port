/* Function at 0x80659444, size=156 bytes */
/* Stack frame: 0 bytes */

int FUN_80659444(int r3, int r4, int r5, int r6)
{
    /* li r0, 5 */ // 0x80659444
    /* li r5, 0 */ // 0x80659448
    /* li r6, 0 */ // 0x8065944C
    /* mtctr r0 */ // 0x80659450
    r0 = *(0 + r3); // lwz @ 0x80659454
    r4 = *(4 + r3); // lwz @ 0x80659458
    /* or. r0, r4, r0 */ // 0x8065945C
    if (==) goto 0x0x80659468;
    r5 = r5 + 1; // 0x80659464
    r0 = *(0x1d8 + r3); // lwz @ 0x80659468
    r4 = *(0x1dc + r3); // lwz @ 0x8065946C
    /* or. r0, r4, r0 */ // 0x80659470
    if (==) goto 0x0x8065947c;
    r5 = r5 + 1; // 0x80659478
    r0 = *(0x3b0 + r3); // lwz @ 0x8065947C
    r4 = *(0x3b4 + r3); // lwz @ 0x80659480
    /* or. r0, r4, r0 */ // 0x80659484
    if (==) goto 0x0x80659490;
    r5 = r5 + 1; // 0x8065948C
    r0 = *(0x588 + r3); // lwz @ 0x80659490
    r4 = *(0x58c + r3); // lwz @ 0x80659494
    /* or. r0, r4, r0 */ // 0x80659498
    if (==) goto 0x0x806594a4;
    r5 = r5 + 1; // 0x806594A0
    r0 = *(0x760 + r3); // lwz @ 0x806594A4
    r4 = *(0x764 + r3); // lwz @ 0x806594A8
    /* or. r0, r4, r0 */ // 0x806594AC
    if (==) goto 0x0x806594b8;
    r5 = r5 + 1; // 0x806594B4
    r0 = *(0x938 + r3); // lwz @ 0x806594B8
    r4 = *(0x93c + r3); // lwz @ 0x806594BC
    /* or. r0, r4, r0 */ // 0x806594C0
    if (==) goto 0x0x806594cc;
    r5 = r5 + 1; // 0x806594C8
    r3 = r3 + 0xb10; // 0x806594CC
    r6 = r6 + 5; // 0x806594D0
    if (counter-- != 0) goto 0x0x80659454;
    r3 = r5;
    return;
}