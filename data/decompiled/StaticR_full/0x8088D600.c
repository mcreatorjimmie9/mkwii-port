/* Function at 0x8088D600, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8088D600(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8088D608
    /* stfd f31, 0x70(r1) */ // 0x8088D60C
}