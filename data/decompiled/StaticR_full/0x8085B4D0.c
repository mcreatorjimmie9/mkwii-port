/* Function at 0x8085B4D0, size=16 bytes */
/* Stack frame: 320 bytes */

void FUN_8085B4D0(void)
{
    /* Stack frame: -320(r1) */
    *(0x144 + r1) = r0; // stw @ 0x8085B4D8
    /* stfd f31, 0x130(r1) */ // 0x8085B4DC
}