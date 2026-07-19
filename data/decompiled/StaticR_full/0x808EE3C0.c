/* Function at 0x808EE3C0, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_808EE3C0(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808EE3C8
    /* stfd f31, 0x30(r1) */ // 0x808EE3CC
}