/* Function at 0x808FAA7C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_808FAA7C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808FAA84
    /* stfd f31, 0x30(r1) */ // 0x808FAA88
}