/* Function at 0x8061ED48, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8061ED48(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061ED48
    r3 = *(0x28 + r3); // lwz @ 0x8061ED4C
    r12 = *(0xc + r3); // lwz @ 0x8061ED50
    r12 = *(0x3c + r12); // lwz @ 0x8061ED54
    /* mtctr r12 */ // 0x8061ED58
    /* bctr  */ // 0x8061ED5C
}