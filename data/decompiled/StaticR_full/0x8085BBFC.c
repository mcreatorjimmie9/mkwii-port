/* Function at 0x8085BBFC, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_8085BBFC(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x8085BC04
    /* stfd f31, 0xb0(r1) */ // 0x8085BC08
}