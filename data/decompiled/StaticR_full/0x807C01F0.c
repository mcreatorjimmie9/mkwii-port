/* Function at 0x807C01F0, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_807C01F0(int r3)
{
    /* lis r3, 0 */ // 0x807C01F0
    r3 = *(0 + r3); // lwz @ 0x807C01F4
    r3 = *(0xb78 + r3); // lwz @ 0x807C01F8
    r0 = r3 + -1; // 0x807C01FC
    /* cntlzw r0, r0 */ // 0x807C0200
    /* srwi r3, r0, 5 */ // 0x807C0204
    return;
}