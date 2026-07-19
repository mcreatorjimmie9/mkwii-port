/* Function at 0x805BA42C, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_805BA42C(int r3, int r4, int r5, int r6, int r7)
{
    r6 = *(8 + r3); // lhz @ 0x805BA42C
    /* li r7, 0 */ // 0x805BA430
    /* b 0x805ba47c */ // 0x805BA434
    /* clrlwi r0, r7, 0x10 */ // 0x805BA438
    r5 = *(4 + r3); // lwz @ 0x805BA43C
    /* mulli r0, r0, 0x24 */ // 0x805BA440
    /* li r4, 0 */ // 0x805BA444
    r5 = r5 + r0; // 0x805BA448
    r0 = *(0x20 + r5); // lwz @ 0x805BA44C
    if (==) goto 0x0x805ba464;
    r0 = *(0x20 + r5); // lwz @ 0x805BA458
    if (!=) goto 0x0x805ba468;
    /* li r4, 1 */ // 0x805BA464
    if (==) goto 0x0x805ba478;
    /* li r3, 1 */ // 0x805BA470
    return;
    r7 = r7 + 1; // 0x805BA478
    /* clrlwi r0, r7, 0x10 */ // 0x805BA47C
    if (<) goto 0x0x805ba438;
    /* li r3, 0 */ // 0x805BA488
    return;
}