/* Function at 0x807C7FF4, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_807C7FF4(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x807C7FFC
    /* stfd f31, 0x10(r1) */ // 0x807C8000
}