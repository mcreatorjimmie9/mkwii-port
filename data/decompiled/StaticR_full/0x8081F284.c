/* Function at 0x8081F284, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_8081F284(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x8081F28C
    /* stfd f31, 0xb0(r1) */ // 0x8081F290
}