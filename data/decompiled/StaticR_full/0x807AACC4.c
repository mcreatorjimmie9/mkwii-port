/* Function at 0x807AACC4, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_807AACC4(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r6, 0 */ // 0x807AACC4
    /* lis r5, 0 */ // 0x807AACC8
    /* li r0, 0xb */ // 0x807AACCC
    /* li r7, 0 */ // 0x807AACD0
    r6 = r6 + 0; // 0x807AACD4
    r5 = r5 + 0; // 0x807AACD8
    /* li r3, 0 */ // 0x807AACDC
    /* mtctr r0 */ // 0x807AACE0
    if (==) goto 0x0x807aacf8;
    r4 = r5 + r3; // 0x807AACEC
    /* lfs f0, 0(r6) */ // 0x807AACF0
    /* stfs f0, 0x14(r4) */ // 0x807AACF4
    r6 = r6 + 4; // 0x807AACF8
    r7 = r7 + 1; // 0x807AACFC
    r3 = r3 + 0x1c; // 0x807AAD00
    if (counter-- != 0) goto 0x0x807aace4;
    return;
}