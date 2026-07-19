/* Function at 0x806320D4, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_806320D4(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x806320DC
    /* stfd f31, 0x90(r1) */ // 0x806320E0
}