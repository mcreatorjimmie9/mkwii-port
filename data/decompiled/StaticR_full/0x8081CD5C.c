/* Function at 0x8081CD5C, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_8081CD5C(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8081CD64
    /* stfd f31, 0x20(r1) */ // 0x8081CD68
}