/* Function at 0x807C01D8, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_807C01D8(int r3)
{
    /* lis r3, 0 */ // 0x807C01D8
    r3 = *(0 + r3); // lwz @ 0x807C01DC
    r0 = *(0xb78 + r3); // lwz @ 0x807C01E0
    /* cntlzw r0, r0 */ // 0x807C01E4
    /* srwi r3, r0, 5 */ // 0x807C01E8
    return;
}