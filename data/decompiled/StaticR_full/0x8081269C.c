/* Function at 0x8081269C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8081269C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808126A4
    /* stfd f31, 0x30(r1) */ // 0x808126A8
}