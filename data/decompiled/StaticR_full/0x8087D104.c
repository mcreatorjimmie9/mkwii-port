/* Function at 0x8087D104, size=16 bytes */
/* Stack frame: 304 bytes */

void FUN_8087D104(void)
{
    /* Stack frame: -304(r1) */
    *(0x134 + r1) = r0; // stw @ 0x8087D10C
    /* stfd f31, 0x120(r1) */ // 0x8087D110
}