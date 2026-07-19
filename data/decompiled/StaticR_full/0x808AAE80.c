/* Function at 0x808AAE80, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_808AAE80(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x808AAE88
    /* stfd f31, 0x70(r1) */ // 0x808AAE8C
}