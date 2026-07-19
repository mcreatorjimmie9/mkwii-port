/* Function at 0x80760C10, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_80760C10(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80760C18
    /* stfd f31, 0x20(r1) */ // 0x80760C1C
}