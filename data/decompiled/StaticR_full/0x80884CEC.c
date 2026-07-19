/* Function at 0x80884CEC, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_80884CEC(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x80884CF4
    /* stfd f31, 0x10(r1) */ // 0x80884CF8
}