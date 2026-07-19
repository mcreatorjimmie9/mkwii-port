/* Function at 0x8081F008, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8081F008(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8081F010
    /* stfd f31, 0x70(r1) */ // 0x8081F014
}