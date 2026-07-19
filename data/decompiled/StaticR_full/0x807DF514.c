/* Function at 0x807DF514, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_807DF514(int r3, int r4)
{
    r4 = r3;
    r3 = *(0x34 + r3); // lwz @ 0x807DF518
    r4 = *(0x3c + r4); // lwz @ 0x807DF51C
    r12 = *(0 + r3); // lwz @ 0x807DF520
    r12 = *(0x14 + r12); // lwz @ 0x807DF524
    /* mtctr r12 */ // 0x807DF528
    /* bctr  */ // 0x807DF52C
}