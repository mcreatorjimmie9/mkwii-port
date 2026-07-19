/* Function at 0x8060219C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8060219C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x806021A4
    /* stfd f31, 0x30(r1) */ // 0x806021A8
}