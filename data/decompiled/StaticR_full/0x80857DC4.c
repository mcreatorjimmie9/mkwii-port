/* Function at 0x80857DC4, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80857DC4(int r3)
{
    r3 = *(0xc + r3); // lwz @ 0x80857DC4
    r12 = *(0 + r3); // lwz @ 0x80857DC8
    r12 = *(0x13c + r12); // lwz @ 0x80857DCC
    /* mtctr r12 */ // 0x80857DD0
    /* bctr  */ // 0x80857DD4
}