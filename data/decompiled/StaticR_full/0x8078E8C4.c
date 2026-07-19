/* Function at 0x8078E8C4, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_8078E8C4(int r3, int r5, int r6)
{
    r12 = *(0 + r3); // lwz @ 0x8078E8C4
    r6 = r5;
    r5 = r3 + 0xf8; // 0x8078E8CC
    r12 = *(0xf4 + r12); // lwz @ 0x8078E8D0
    /* mtctr r12 */ // 0x8078E8D4
    /* bctr  */ // 0x8078E8D8
}