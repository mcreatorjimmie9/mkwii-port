/* Function at 0x80816CEC, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80816CEC(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80816CF4
    /* stfd f31, 0x90(r1) */ // 0x80816CF8
}