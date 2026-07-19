/* Function at 0x80853238, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_80853238(int r3)
{
    r0 = *(0x74 + r3); // lwz @ 0x80853238
    if (==) goto 0x0x8085324c;
    r3 = r0;
    /* b 0x805eae48 */ // 0x80853248
    r3 = *(0x6c + r3); // lwz @ 0x8085324C
    r12 = *(0 + r3); // lwz @ 0x80853250
    r12 = *(0xc + r12); // lwz @ 0x80853254
    /* mtctr r12 */ // 0x80853258
    /* bctr  */ // 0x8085325C
}