/* Function at 0x8084DD98, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8084DD98(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8084DDA0
    /* stfd f31, 0x70(r1) */ // 0x8084DDA4
}