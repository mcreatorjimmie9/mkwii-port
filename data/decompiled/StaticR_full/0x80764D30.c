/* Function at 0x80764D30, size=16 bytes */
/* Stack frame: 320 bytes */

void FUN_80764D30(void)
{
    /* Stack frame: -320(r1) */
    *(0x144 + r1) = r0; // stw @ 0x80764D38
    /* stfd f31, 0x130(r1) */ // 0x80764D3C
}