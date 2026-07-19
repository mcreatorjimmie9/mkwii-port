/* Function at 0x806596FC, size=252 bytes */
/* Stack frame: 0 bytes */

int FUN_806596FC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* li r0, 5 */ // 0x806596FC
    /* li r8, 0 */ // 0x80659700
    /* mtctr r0 */ // 0x80659704
    r6 = *(0 + r4); // lwz @ 0x80659708
    r0 = *(0 + r3); // lwz @ 0x8065970C
    r7 = *(4 + r4); // lwz @ 0x80659710
    r5 = *(4 + r3); // lwz @ 0x80659714
    r0 = r6 ^ r0; // 0x80659718
    r5 = r7 ^ r5; // 0x8065971C
    /* or. r0, r5, r0 */ // 0x80659720
    if (!=) goto 0x0x80659730;
    r3 = r8;
    return;
    r0 = *(0x1d8 + r3); // lwz @ 0x80659730
    r8 = r8 + 1; // 0x80659734
    r5 = *(0x1dc + r3); // lwz @ 0x80659738
    r0 = r6 ^ r0; // 0x8065973C
    r5 = r7 ^ r5; // 0x80659740
    /* or. r0, r5, r0 */ // 0x80659744
    if (!=) goto 0x0x80659754;
    r3 = r8;
    return;
    r0 = *(0x3b0 + r3); // lwz @ 0x80659754
    r8 = r8 + 1; // 0x80659758
    r5 = *(0x3b4 + r3); // lwz @ 0x8065975C
    r0 = r6 ^ r0; // 0x80659760
    r5 = r7 ^ r5; // 0x80659764
    /* or. r0, r5, r0 */ // 0x80659768
    if (!=) goto 0x0x80659778;
    r3 = r8;
    return;
    r0 = *(0x588 + r3); // lwz @ 0x80659778
    r8 = r8 + 1; // 0x8065977C
    r5 = *(0x58c + r3); // lwz @ 0x80659780
    r0 = r6 ^ r0; // 0x80659784
    r5 = r7 ^ r5; // 0x80659788
    /* or. r0, r5, r0 */ // 0x8065978C
    if (!=) goto 0x0x8065979c;
    r3 = r8;
    return;
    r0 = *(0x760 + r3); // lwz @ 0x8065979C
    r8 = r8 + 1; // 0x806597A0
    r5 = *(0x764 + r3); // lwz @ 0x806597A4
    r0 = r6 ^ r0; // 0x806597A8
    r5 = r7 ^ r5; // 0x806597AC
    /* or. r0, r5, r0 */ // 0x806597B0
    if (!=) goto 0x0x806597c0;
    r3 = r8;
    return;
    r0 = *(0x938 + r3); // lwz @ 0x806597C0
    r8 = r8 + 1; // 0x806597C4
    r5 = *(0x93c + r3); // lwz @ 0x806597C8
    r0 = r6 ^ r0; // 0x806597CC
    r5 = r7 ^ r5; // 0x806597D0
    /* or. r0, r5, r0 */ // 0x806597D4
    if (!=) goto 0x0x806597e4;
    r3 = r8;
    return;
    r3 = r3 + 0xb10; // 0x806597E4
    r8 = r8 + 1; // 0x806597E8
    if (counter-- != 0) goto 0x0x80659708;
    /* li r3, -1 */ // 0x806597F0
    return;
}