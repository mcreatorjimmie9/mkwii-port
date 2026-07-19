/* Function at 0x805AF80C, size=164 bytes */
/* Stack frame: 0 bytes */

void FUN_805AF80C(int r3, int r5, int r6)
{
    r3 = *(6 + r5); // lhz @ 0x805AF80C
    /* li r6, 0 */ // 0x805AF810
    /* andi. r0, r3, 0x900 */ // 0x805AF814
    if (==) goto 0x0x805af820;
    r6 = r6 | 1; // 0x805AF81C
    /* rlwinm. r0, r3, 0, 0x15, 0x16 */ // 0x805AF820
    if (==) goto 0x0x805af830;
    r0 = r6 | 2; // 0x805AF828
    /* clrlwi r6, r0, 0x10 */ // 0x805AF82C
    /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x805AF830
    if (==) goto 0x0x805af840;
    r0 = r6 | 4; // 0x805AF838
    /* clrlwi r6, r0, 0x10 */ // 0x805AF83C
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x805AF840
    if (==) goto 0x0x805af850;
    r0 = r6 | 8; // 0x805AF848
    /* clrlwi r6, r0, 0x10 */ // 0x805AF84C
    /* clrlwi. r0, r3, 0x1f */ // 0x805AF850
    if (==) goto 0x0x805af860;
    r0 = r6 | 0x10; // 0x805AF858
    /* clrlwi r6, r0, 0x10 */ // 0x805AF85C
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x805AF860
    if (==) goto 0x0x805af870;
    r0 = r6 | 0x20; // 0x805AF868
    /* clrlwi r6, r0, 0x10 */ // 0x805AF86C
    /* rlwinm. r0, r3, 0, 0x1d, 0x1d */ // 0x805AF870
    if (==) goto 0x0x805af880;
    r0 = r6 | 0x40; // 0x805AF878
    /* clrlwi r6, r0, 0x10 */ // 0x805AF87C
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x805AF880
    if (==) goto 0x0x805af890;
    r0 = r6 | 0x80; // 0x805AF888
    /* clrlwi r6, r0, 0x10 */ // 0x805AF88C
    /* rlwinm. r0, r3, 0, 0x13, 0x13 */ // 0x805AF890
    if (==) goto 0x0x805af8a0;
    r0 = r6 | 0x100; // 0x805AF898
    /* clrlwi r6, r0, 0x10 */ // 0x805AF89C
    *(4 + r4) = r6; // sth @ 0x805AF8A0
    r0 = *(6 + r5); // lhz @ 0x805AF8A4
    *(6 + r4) = r0; // sth @ 0x805AF8A8
    return;
}