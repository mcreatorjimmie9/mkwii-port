/* Function at 0x80863110, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80863110(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80863118
    /* stfd f31, 0x30(r1) */ // 0x8086311C
}