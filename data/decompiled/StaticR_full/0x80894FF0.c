/* Function at 0x80894FF0, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_80894FF0(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x80894FF8
    /* stfd f31, 0xe0(r1) */ // 0x80894FFC
}