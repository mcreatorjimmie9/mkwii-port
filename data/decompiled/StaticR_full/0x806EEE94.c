/* Function at 0x806EEE94, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_806EEE94(int r3)
{
    r0 = *(0x3e4 + r3); // lwz @ 0x806EEE94
    /* cntlzw r0, r0 */ // 0x806EEE98
    /* srwi r3, r0, 5 */ // 0x806EEE9C
    return;
}