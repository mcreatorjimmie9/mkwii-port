/* Function at 0x80671B38, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80671B38(int r3)
{
    r3 = *(0x38 + r3); // lwz @ 0x80671B38
    r12 = *(0 + r3); // lwz @ 0x80671B3C
    r12 = *(0x24 + r12); // lwz @ 0x80671B40
    /* mtctr r12 */ // 0x80671B44
    /* bctr  */ // 0x80671B48
}