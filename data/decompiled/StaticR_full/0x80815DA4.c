/* Function at 0x80815DA4, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80815DA4(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80815DAC
    /* stfd f31, 0x30(r1) */ // 0x80815DB0
}