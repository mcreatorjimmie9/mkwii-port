/* Function at 0x8090B470, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_8090B470(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x8090B478
    /* stfd f31, 0xb0(r1) */ // 0x8090B47C
}