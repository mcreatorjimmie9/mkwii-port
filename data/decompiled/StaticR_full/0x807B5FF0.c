/* Function at 0x807B5FF0, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_807B5FF0(int r3, int r4)
{
    r3 = *(0x20 + r3); // lwz @ 0x807B5FF0
    if (>=) goto 0x0x807b6004;
    /* li r3, 0 */ // 0x807B5FFC
    return;
    r0 = *(0x20 + r4); // lwz @ 0x807B6004
    /* subf r0, r3, r0 */ // 0x807B6008
    /* cntlzw r0, r0 */ // 0x807B600C
    /* srwi r3, r0, 5 */ // 0x807B6010
    return;
}