/* Function at 0x8084BCF4, size=16 bytes */
/* Stack frame: 176 bytes */

void FUN_8084BCF4(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x8084BCFC
    /* stfd f31, 0xa0(r1) */ // 0x8084BD00
}