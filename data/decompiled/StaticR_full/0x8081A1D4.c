/* Function at 0x8081A1D4, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8081A1D4(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8081A1DC
    /* stfd f31, 0x30(r1) */ // 0x8081A1E0
}