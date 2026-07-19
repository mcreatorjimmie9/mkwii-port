/* Function at 0x8081188C, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_8081188C(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x80811894
    /* stfd f31, 0x10(r1) */ // 0x80811898
}