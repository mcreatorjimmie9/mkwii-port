/* Function at 0x8076C0E0, size=16 bytes */
/* Stack frame: 432 bytes */

void FUN_8076C0E0(void)
{
    /* Stack frame: -432(r1) */
    *(0x1b4 + r1) = r0; // stw @ 0x8076C0E8
    /* stfd f31, 0x1a0(r1) */ // 0x8076C0EC
}