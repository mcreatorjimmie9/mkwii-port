/* Function at 0x806451A0, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_806451A0(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x806451A8
    /* stfd f31, 0x30(r1) */ // 0x806451AC
}