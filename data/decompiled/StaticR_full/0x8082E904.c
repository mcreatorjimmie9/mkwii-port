/* Function at 0x8082E904, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_8082E904(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8082E90C
    /* stfd f31, 0x10(r1) */ // 0x8082E910
}