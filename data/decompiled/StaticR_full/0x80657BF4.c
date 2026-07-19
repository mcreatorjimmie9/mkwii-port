/* Function at 0x80657BF4, size=16 bytes */
/* Stack frame: 320 bytes */

void FUN_80657BF4(void)
{
    /* Stack frame: -320(r1) */
    *(0x144 + r1) = r0; // stw @ 0x80657BFC
    /* stfd f31, 0x130(r1) */ // 0x80657C00
}