/* Function at 0x808F4334, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_808F4334(int r3)
{
    r0 = *(0x6ff + r3); // lbz @ 0x808F4334
    /* beqlr  */ // 0x808F433C
    r3 = *(0x138 + r3); // lwz @ 0x808F4340
    /* beqlr  */ // 0x808F4348
    r12 = *(8 + r3); // lwz @ 0x808F434C
    r12 = *(0xc + r12); // lwz @ 0x808F4350
    /* mtctr r12 */ // 0x808F4354
    /* bctr  */ // 0x808F4358
}