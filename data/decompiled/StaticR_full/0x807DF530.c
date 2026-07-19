/* Function at 0x807DF530, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807DF530(int r3)
{
    r3 = *(0x34 + r3); // lwz @ 0x807DF530
    r12 = *(0 + r3); // lwz @ 0x807DF534
    r12 = *(0x18 + r12); // lwz @ 0x807DF538
    /* mtctr r12 */ // 0x807DF53C
    /* bctr  */ // 0x807DF540
}