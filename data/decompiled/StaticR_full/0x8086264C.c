/* Function at 0x8086264C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8086264C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80862654
    /* stfd f31, 0x30(r1) */ // 0x80862658
}