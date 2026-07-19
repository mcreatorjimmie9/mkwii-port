/* Function at 0x80755938, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80755938(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80755940
    /* stfd f31, 0x40(r1) */ // 0x80755944
}