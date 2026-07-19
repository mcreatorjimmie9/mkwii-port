/* Function at 0x8067129C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8067129C(int r3)
{
    r12 = *(0 + r3); // lwz @ 0x8067129C
    r12 = *(0x2c + r12); // lwz @ 0x806712A0
    /* mtctr r12 */ // 0x806712A4
    /* bctr  */ // 0x806712A8
}