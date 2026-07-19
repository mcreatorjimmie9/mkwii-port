/* Function at 0x8084B0A8, size=16 bytes */
/* Stack frame: 176 bytes */

void FUN_8084B0A8(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x8084B0B0
    /* stfd f31, 0xa0(r1) */ // 0x8084B0B4
}