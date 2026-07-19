/* Function at 0x808D63FC, size=160 bytes */
/* Stack frame: 0 bytes */

void FUN_808D63FC(int r4, int r5, int r6, int r7, int r8, int r9)
{
    r6 = *(8 + r4); // lhz @ 0x808D63FC
    /* li r7, 0 */ // 0x808D6400
    r0 = *(8 + r5); // lhz @ 0x808D6404
    /* li r8, 0 */ // 0x808D6408
    r0 = r6 + r0; // 0x808D640C
    /* clrlwi r9, r0, 0x10 */ // 0x808D6410
    if (<=) goto 0x0x808d6428;
    r0 = r9 + -0x3e8; // 0x808D641C
    /* li r8, 1 */ // 0x808D6420
    /* clrlwi r9, r0, 0x10 */ // 0x808D6424
    r0 = *(6 + r4); // lbz @ 0x808D6428
    r6 = *(6 + r5); // lbz @ 0x808D642C
    r0 = r8 + r0; // 0x808D6430
    r0 = r6 + r0; // 0x808D6434
    /* clrlwi r8, r0, 0x18 */ // 0x808D6438
    if (<=) goto 0x0x808d6450;
    r0 = r8 + -0x3c; // 0x808D6444
    /* li r7, 1 */ // 0x808D6448
    /* clrlwi r8, r0, 0x18 */ // 0x808D644C
    r0 = *(4 + r4); // lhz @ 0x808D6450
    r4 = *(4 + r5); // lhz @ 0x808D6454
    r0 = r7 + r0; // 0x808D6458
    r0 = r4 + r0; // 0x808D645C
    /* clrlwi r7, r0, 0x10 */ // 0x808D6460
    if (<=) goto 0x0x808d6478;
    /* li r7, 0x3e7 */ // 0x808D646C
    /* li r8, 0x3b */ // 0x808D6470
    /* li r9, 0x3e7 */ // 0x808D6474
    /* lis r4, 0 */ // 0x808D6478
    /* li r0, 1 */ // 0x808D647C
    r4 = r4 + 0; // 0x808D6480
    *(0 + r3) = r4; // stw @ 0x808D6484
    *(0xa + r3) = r0; // stb @ 0x808D6488
    *(4 + r3) = r7; // sth @ 0x808D648C
    *(6 + r3) = r8; // stb @ 0x808D6490
    *(8 + r3) = r9; // sth @ 0x808D6494
    return;
}