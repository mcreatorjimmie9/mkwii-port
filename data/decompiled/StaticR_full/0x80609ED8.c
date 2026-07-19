/* Function at 0x80609ED8, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_80609ED8(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80609EE0
    /* stfd f31, 0xb0(r1) */ // 0x80609EE4
}