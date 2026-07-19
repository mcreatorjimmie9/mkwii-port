/* Function at 0x8088486C, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_8088486C(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80884874
    /* stfd f31, 0x40(r1) */ // 0x80884878
}