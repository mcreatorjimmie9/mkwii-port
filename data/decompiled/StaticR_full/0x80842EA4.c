/* Function at 0x80842EA4, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_80842EA4(int r3, int r4)
{
    r0 = *(0 + r3); // lwz @ 0x80842EA4
    r4 = r3;
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 0x100; // 0x80842EB0
    *(0 + r3) = r0; // stw @ 0x80842EB4
    r3 = *(4 + r3); // lwz @ 0x80842EB8
    r12 = *(0 + r3); // lwz @ 0x80842EBC
    r12 = *(0x10c + r12); // lwz @ 0x80842EC0
    /* mtctr r12 */ // 0x80842EC4
    /* bctr  */ // 0x80842EC8
}