/* Function at 0x8085E470, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_8085E470(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x8085E478
    /* stfd f31, 0x50(r1) */ // 0x8085E47C
}