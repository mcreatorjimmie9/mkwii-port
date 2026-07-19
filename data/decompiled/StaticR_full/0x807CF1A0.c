/* Function at 0x807CF1A0, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807CF1A0(int r3, int r4)
{
    r0 = *(0 + r3); // lwz @ 0x807CF1A0
    /* subf r0, r0, r4 */ // 0x807CF1A4
    /* cntlzw r0, r0 */ // 0x807CF1A8
    /* srwi r3, r0, 5 */ // 0x807CF1AC
    return;
}