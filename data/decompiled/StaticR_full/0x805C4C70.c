/* Function at 0x805C4C70, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_805C4C70(int r3)
{
    r3 = *(0x48 + r3); // lwz @ 0x805C4C70
    r12 = *(0 + r3); // lwz @ 0x805C4C74
    r12 = *(0x14 + r12); // lwz @ 0x805C4C78
    /* mtctr r12 */ // 0x805C4C7C
    /* bctr  */ // 0x805C4C80
}