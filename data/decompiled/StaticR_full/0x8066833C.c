/* Function at 0x8066833C, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8066833C(int r3, int r4)
{
    r12 = *(0 + r3); // lwz @ 0x8066833C
    r4 = *(0xd + r3); // lbz @ 0x80668340
    r12 = *(0x20 + r12); // lwz @ 0x80668344
    /* mtctr r12 */ // 0x80668348
    /* bctr  */ // 0x8066834C
}