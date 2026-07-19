/* Function at 0x8078E83C, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_8078E83C(int r3, int r5)
{
    r12 = *(0 + r3); // lwz @ 0x8078E83C
    r5 = r3 + 0xf8; // 0x8078E840
    r12 = *(0xf0 + r12); // lwz @ 0x8078E844
    /* mtctr r12 */ // 0x8078E848
    /* bctr  */ // 0x8078E84C
}