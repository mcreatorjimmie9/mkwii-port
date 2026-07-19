/* Function at 0x807CB4C8, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_807CB4C8(int r3)
{
    r12 = *(0xe4 + r3); // lwz @ 0x807CB4C8
    r12 = *(0xc + r12); // lwz @ 0x807CB4CC
    /* mtctr r12 */ // 0x807CB4D0
    r3 = r3 + 0xb0; // 0x807CB4D4
    /* bctr  */ // 0x807CB4D8
}