/* Function at 0x80783A48, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_80783A48(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x80783A50
    /* stfd f31, 0xe0(r1) */ // 0x80783A54
}