/* Function at 0x8080D97C, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_8080D97C(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x8080D984
    /* stfd f31, 0xb0(r1) */ // 0x8080D988
}