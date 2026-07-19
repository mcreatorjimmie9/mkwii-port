/* Function at 0x8071D6F0, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8071D6F0(int r3, int r4)
{
    r3 = *(0x10 + r3); // lwz @ 0x8071D6F0
    /* slwi r0, r4, 2 */ // 0x8071D6F4
    /* lwzx r3, r3, r0 */ // 0x8071D6F8
    r12 = *(0 + r3); // lwz @ 0x8071D6FC
    r12 = *(0x18 + r12); // lwz @ 0x8071D700
    /* mtctr r12 */ // 0x8071D704
    /* bctr  */ // 0x8071D708
}