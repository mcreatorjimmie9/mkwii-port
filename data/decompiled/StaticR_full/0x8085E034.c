/* Function at 0x8085E034, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8085E034(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8085E03C
    /* stfd f31, 0x70(r1) */ // 0x8085E040
}