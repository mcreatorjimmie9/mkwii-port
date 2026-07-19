/* Function at 0x80754554, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_80754554(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x8075455C
    /* stfd f31, 0x50(r1) */ // 0x80754560
}