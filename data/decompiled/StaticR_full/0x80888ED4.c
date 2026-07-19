/* Function at 0x80888ED4, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_80888ED4(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x80888EDC
    /* stfd f31, 0x60(r1) */ // 0x80888EE0
}