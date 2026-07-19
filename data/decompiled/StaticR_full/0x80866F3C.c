/* Function at 0x80866F3C, size=16 bytes */
/* Stack frame: 176 bytes */

void FUN_80866F3C(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x80866F44
    /* stfd f31, 0xa0(r1) */ // 0x80866F48
}