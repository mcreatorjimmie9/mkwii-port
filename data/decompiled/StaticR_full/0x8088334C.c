/* Function at 0x8088334C, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8088334C(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x80883354
    /* stfd f31, 0x70(r1) */ // 0x80883358
}