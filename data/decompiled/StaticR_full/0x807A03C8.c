/* Function at 0x807A03C8, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_807A03C8(int r3)
{
    /* lis r3, 0 */ // 0x807A03C8
    r3 = *(0 + r3); // lwz @ 0x807A03CC
    r3 = *(0x10 + r3); // lwz @ 0x807A03D0
    r0 = r3 + -0x44; // 0x807A03D4
    /* cntlzw r0, r0 */ // 0x807A03D8
    /* srwi r3, r0, 5 */ // 0x807A03DC
    return;
}