/* Function at 0x8081E600, size=16 bytes */
/* Stack frame: 480 bytes */

void FUN_8081E600(void)
{
    /* Stack frame: -480(r1) */
    *(0x1e4 + r1) = r0; // stw @ 0x8081E608
    /* stfd f31, 0x1d0(r1) */ // 0x8081E60C
}