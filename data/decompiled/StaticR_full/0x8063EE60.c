/* Function at 0x8063EE60, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_8063EE60(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x8063EE68
    /* stfd f31, 0x50(r1) */ // 0x8063EE6C
}