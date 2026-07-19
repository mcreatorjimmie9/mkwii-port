/* Function at 0x80856D5C, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_80856D5C(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x80856D64
    /* stfd f31, 0x50(r1) */ // 0x80856D68
}