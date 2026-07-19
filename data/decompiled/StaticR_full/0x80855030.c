/* Function at 0x80855030, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_80855030(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80855038
    /* stfd f31, 0x20(r1) */ // 0x8085503C
}