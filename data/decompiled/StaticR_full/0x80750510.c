/* Function at 0x80750510, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80750510(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80750518
    /* stfd f31, 0x40(r1) */ // 0x8075051C
}