/* Function at 0x8084BB00, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8084BB00(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8084BB08
    /* stfd f31, 0x70(r1) */ // 0x8084BB0C
}