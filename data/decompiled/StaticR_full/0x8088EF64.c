/* Function at 0x8088EF64, size=16 bytes */
/* Stack frame: 320 bytes */

void FUN_8088EF64(void)
{
    /* Stack frame: -320(r1) */
    *(0x144 + r1) = r0; // stw @ 0x8088EF6C
    /* stfd f31, 0x130(r1) */ // 0x8088EF70
}