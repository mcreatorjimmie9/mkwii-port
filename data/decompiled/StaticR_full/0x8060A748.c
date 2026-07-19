/* Function at 0x8060A748, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8060A748(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8060A750
    /* stfd f31, 0x70(r1) */ // 0x8060A754
}