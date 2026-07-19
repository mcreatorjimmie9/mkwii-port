/* Function at 0x807A9CC4, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807A9CC4(int r3, int r4)
{
    /* lis r3, 0 */ // 0x807A9CC4
    /* lis r4, 0 */ // 0x807A9CC8
    r3 = *(0 + r3); // lwz @ 0x807A9CCC
    r4 = *(0 + r4); // lwz @ 0x807A9CD0
    r12 = *(0 + r3); // lwz @ 0x807A9CD4
    r12 = *(0xac + r12); // lwz @ 0x807A9CD8
    /* mtctr r12 */ // 0x807A9CDC
    /* bctr  */ // 0x807A9CE0
}