/* Function at 0x806DB20C, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_806DB20C(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x806DB214
    /* stfd f31, 0x70(r1) */ // 0x806DB218
}