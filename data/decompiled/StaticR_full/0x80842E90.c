/* Function at 0x80842E90, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80842E90(int r3)
{
    r3 = *(4 + r3); // lwz @ 0x80842E90
    r12 = *(0 + r3); // lwz @ 0x80842E94
    r12 = *(0x104 + r12); // lwz @ 0x80842E98
    /* mtctr r12 */ // 0x80842E9C
    /* bctr  */ // 0x80842EA0
}