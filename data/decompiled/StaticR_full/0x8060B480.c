/* Function at 0x8060B480, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_8060B480(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8060B488
    /* stfd f31, 0x60(r1) */ // 0x8060B48C
}