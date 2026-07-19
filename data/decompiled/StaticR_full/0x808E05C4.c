/* Function at 0x808E05C4, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_808E05C4(int r3)
{
    r3 = *(4 + r3); // lwz @ 0x808E05C4
    r12 = *(0 + r3); // lwz @ 0x808E05C8
    r12 = *(0xc + r12); // lwz @ 0x808E05CC
    /* mtctr r12 */ // 0x808E05D0
    /* bctr  */ // 0x808E05D4
}