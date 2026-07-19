/* Function at 0x8080013C, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_8080013C(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80800144
    /* stfd f31, 0xb0(r1) */ // 0x80800148
}