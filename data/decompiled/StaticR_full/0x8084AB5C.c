/* Function at 0x8084AB5C, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8084AB5C(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x8084AB64
    /* stfd f31, 0x70(r1) */ // 0x8084AB68
}