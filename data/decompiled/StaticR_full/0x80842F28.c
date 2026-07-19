/* Function at 0x80842F28, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_80842F28(int r3, int r4, int r5)
{
    r0 = r3;
    r3 = *(4 + r3); // lwz @ 0x80842F2C
    r5 = r4;
    r12 = *(0 + r3); // lwz @ 0x80842F34
    r4 = r0;
    r12 = *(0x114 + r12); // lwz @ 0x80842F3C
    /* mtctr r12 */ // 0x80842F40
    /* bctr  */ // 0x80842F44
}