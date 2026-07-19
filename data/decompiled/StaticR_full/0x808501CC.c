/* Function at 0x808501CC, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_808501CC(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808501D4
    /* stfd f31, 0x30(r1) */ // 0x808501D8
}